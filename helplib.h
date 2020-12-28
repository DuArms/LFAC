#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char Data_Type[50];

int noOfIdentifiers = 0;

struct IdentifierStructure
{
    char nume[200];
    char valoare[200];
    char data_type[200];
} identifiers[2000];

struct StructFunctii
{

    char nume[200];
    char parametrii[200][200];
    int nr_parametrii;
    char data_type[200];
    struct IdentifierStructure varlocale[2000];
};

extern int yylineno;

void storeDataType(char *);
int isDuplicate(char *);
void storeIdentifier(char *, char *, char *);
void DuplicateIdentifierError(char *);
char *retrieveDataType();
void clearBuffers();
int isValidAssignment(char *);
void AssignmentError(char *);
char *extractIdentifier(char[]);

int isDuplicate(char *identifier)
{
    int i;
    for (i = 0; i < noOfIdentifiers; i++)
    {
        if (strcmp(identifier, identifiers[i].nume) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void storeIdentifier(char *identifier, char *identifier_data_type, char *valoare)
{
    strcpy(identifiers[noOfIdentifiers].nume, identifier);
    strcpy(identifiers[noOfIdentifiers].valoare, valoare);
    strcpy(identifiers[noOfIdentifiers].data_type, identifier_data_type);

    noOfIdentifiers++;
}

void handelAsignare(char *nume, char *tip, char *valoare)
{
    if (!isDuplicate(nume))
    {
        storeIdentifier(nume, tip, valoare);
    }
    else
    {
        DuplicateIdentifierError(nume);
    }
}

void updateIdentifier(char *vr, char *nume, char *valoare)
{
    for (int i = 0; i < noOfIdentifiers; i++)
    {
        if (strcmp(identifiers[i].nume, nume) == 0)
        {
            if (strcmp(identifiers[i].data_type, "string") == 0)
            {
                printf("\nERROR ON LINE %d : Wrong  data type !'%s' found.\n", yylineno, nume);
                exit(1);
            }
            strcpy(identifiers[i].valoare, valoare);

            return;
        }
    }
}

void updateStringsCat(char *nume, char *nume2)
{
    for (int i = 0; i < noOfIdentifiers; i++)
    {
        if (strcmp(identifiers[i].nume, nume) == 0)
        {
            int j = i;
            for (int i = 0; i < noOfIdentifiers; i++)
            {
                if (strcmp(identifiers[i].nume, nume2) == 0)
                {
                    strcat(identifiers[j].valoare, identifiers[i].valoare);
                    return;
                }
            }
        }
    }
    printf("\nERROR ON LINE %d : Wrong  data type !'%s' found.\n", yylineno, nume);
    exit(1);
}

void updateStringsCpy(char *nume, char *nume2)
{
    for (int i = 0; i < noOfIdentifiers; i++)
    {
        if (strcmp(identifiers[i].nume, nume) == 0)
        {
            int j = i;
            for (int i = 0; i < noOfIdentifiers; i++)
            {
                if (strcmp(identifiers[i].nume, nume2) == 0)
                {
                    strcpy(identifiers[j].valoare, identifiers[i].valoare);
                    return;
                }
            }
        }
    }
    printf("\nERROR ON LINE %d : Wrong  data type !'%s' found.\n", yylineno, nume);
    exit(1);
}

int getIdentifierVal(char *ras, char *nume)
{

    for (int i = 0; i < noOfIdentifiers; i++)
    {
        if (strcmp(nume, identifiers[i].nume) == 0 && strcmp(identifiers[i].valoare, "NULL") != 0)
        {

            strcpy(ras, identifiers[i].valoare);
            return atoi(ras);
        }
    }
    printf("\nERROR ON LINE %d : Unitilize identifier '%s' found.\n", yylineno, nume);
    exit(1);
}

void getIdentifierType(char *nume)
{
    int i;
    for (i = 0; i < noOfIdentifiers; i++)
    {
        if (strcmp(nume, identifiers[i].nume) == 0)
        {
            if (strcmp(identifiers[i].data_type, "string") == 0)
            {
                printf("\n ERROR ON LINE %d : Wrong data type! '%s' found.\n", yylineno, nume);
                exit(1);
            }
        }
    }
}

void showIdentifiers()
{
    int i;

    struct FILE *s;
    s = fopen("table.txt", "w");
    for (i = 0; i < noOfIdentifiers; i++)
    {
        fprintf(s, "tip :%s -> %s cu valoarea : %s \n", identifiers[i].data_type, identifiers[i].nume, identifiers[i].valoare);
    }
    fclose(s);
}

void clearBuffers()
{
    int i = 0;
    while (Data_Type[i] != '\0')
    {
        Data_Type[i] = '\0';
        i++;
    }
}

void storeDataType(char *data_type)
{
    int i = 0;
    while (data_type[i] != '\0')
    {
        Data_Type[i] = data_type[i];
        i++;
    }
}

char *retrieveDataType()
{
    return Data_Type;
}

char *extractIdentifier(char *arrayIdentifier)
{
    char extractedIdentifier[50];
    static char copied[50];

    int i = 0;

    while (arrayIdentifier[i] != '[')
    {
        extractedIdentifier[i] = arrayIdentifier[i];
        i++;
    }
    extractedIdentifier[i] = '\0';

    i = 0;
    while (extractedIdentifier[i] != '\0')
    {
        copied[i] = extractedIdentifier[i];
        i++;
    }
    copied[i] = '\0';
    return copied;
}

void AssignmentError(char *data_type)
{
    printf("\nERROR ON LINE %d : \nInvalid assignment! Expected '%s', but found %s \n", yylineno, Data_Type, data_type);
    exit(0);
}

void DuplicateIdentifierError(char *identifier)
{
    printf("\nERROR ON LINE %d : \nDuplicate identifier '%s' found.\n", yylineno, identifier);
    exit(0);
}

char *itoa(int number)
{
    static char buffer[33];
    snprintf(buffer, sizeof(buffer), "%d", number);
    return buffer;
}

void evalueaza(char *ras, char *s, char op, char *d)
{
    int a, b, r = 0;
    a = atoi(s);
    b = atoi(d);

    switch (op)
    {
    case '+':
        r = a + b;
        break;
    case '-':
        r = a - b;
        break;
    case '/':
        r = a / b;
        break;
    case '*':
        r = a * b;
        break;
    }
    ras = strcpy(ras, itoa(r));
}
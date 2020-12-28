rm a.out

lex proiect.l
	yacc -d -v proiect.y
	gcc lex.yy.c y.tab.c -ll -ly
	./a.out  exemplu
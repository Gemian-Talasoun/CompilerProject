%{
	#include<stdio.h>
	#include <stdlib.h>
	void yyerror(char *);
	#include "y.tab.h"
%}

%%
		/* variables */
[a-z]		{yylval.indextype = *yytext - 'a'; return VARIABLE;}

		/* Numbers */
[0-9]+(\.[0-9]+)? {yylval.floattype = atof(yytext); return Num;}

	/* Character */
\'.\' {yylval.chartype=yytext[0]; return SinQ;}

	/* String */
\".*\" {yylval.stringtype=yytext[0]; return DoubQ;}

	/* operators */
[-+()=/*\n;{},:] { return *yytext; }

	/* skip whitespace */
[ \t]	{;}


	/*  */
"<" {return L;}
">" {return G;}
">=" {return GT;}
"<=" {return LT;}
"==" {return EQ;}
"!=" {return NE;}
"||" {return OR;}
"&&" {return AND;}
"!" {return NOT;}


	/* Reserved Words */
"exit"|"EXIT" {return Exit;}
"print"|"PRINT" {return Print;}
"if"|"IF" {return If;}
"else"|"ELSE" {return Else;}
"for"|"FOR" {return For;}
"do"|"DO" {return Do;}
"while"|"WHILE" {return While;}
"switch"|"SWITCH" {return Switch;}
"case"|"CASE" {return Case;}
"default"|"DEFAULT" {return Default;}
"break"|"BREAK" { return Break; }
"return"|"RETURN" { return Return; }
"int"|"INT" {return IntVar;}
"float"|"FLOAT" {return FloatVar;}
"char"|"CHAR" {return CharVar;}
"string"|"STRING" {return StringVar;}
"void"|"VOID" { return VoidVar; }



	/* anything else is an error */
. {yyerror("invalid character");}




%%
int yywrap(void) 
{
	return 1;
}
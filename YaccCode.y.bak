%{
	#include<stdio.h>
	#include<stdlib.h>
	void yyerror(char *);
	int yylex(void);


	int intarray[26];
	float floatarray[26];
	char chararray[26];
	char *stringarray[26];
	int functionarray[26];

	char symbolsarray[26];
	int numofpar = 0;
	int numofcallpar = 0;
	


%}


%union
{
	int inttype;
	float floattype;
	char chartype;
	char *stringtype;
	int indextype;
}

%right '='

%left AND OR
%left G L LE GE EQ NE
%left '+' '-'
%left '*' '/'
%left NOT

%token Num
%token VARIABLE 
%token G L GT LT EQ NE
%token OR AND NOT
%token Exit Print
%token If Else Switch Case Default Break
%token For Do While
%token IntVar FloatVar CharVar StringVar VoidVar
%token SinQ DoubQ
%token Return


%type <indextype> statement
%type <floattype> expr incement decrement decorinc
%type <floattype> cond 
%type <indextype> VARIABLE
%type <floattype> Num
%type <stringtype> DoubQ
%type <chartype> SinQ
%type <chartype> condsymbols G L GT LT EQ NE
%type <inttype> fun 




%start program

%nonassoc Minus


%%
program:
	program statement '\n'
	|
	;

liststatements:
	statement
	|
	statement liststatements
	;

statement:
	expr { printf("%g\n", $1); }
	|
	declare { printf("\nDeclare Accepted.\n"); }
	|
	assvar { printf("\nAssigne Accepted.\n"); }
	|
	Exit {exit(0);}
	|
	print {printf("\nPrint Accepted.\n");}
	|
	if { printf("\nIf Accepted.\n"); }
	|
	switch { printf("\nSwitch Accepted.\n"); }
	|
	cond { printf("%g\n", $1); }
	|
	for { printf("\nFor Accepted.\n"); }
	|
	while { printf("\nWhile Accepted.\n"); }
	|
	dowhile { printf("\nDo While Accepted.\n"); }
	|
	fun { printf("\nFunction Accepted.\n"); }
	|
	callfun { printf("\nCall Function Accepted.\n"); }
	;

expr:
	Num
	|
	VARIABLE { $$ = floatarray[$1]; }
	|
	expr '+' expr { $$ = $1 + $3; }
	|
	expr '-' expr { $$ = $1 - $3; }
	|
	expr '*' expr { $$ = $1 * $3; }
	|
	expr '/' expr { $$ = $1 / $3; }
	|
	'(' expr ')' { $$ = $2; }
	|
	'-' expr %prec Minus { $$ = -$2; }
	;

cond:
	expr
	|
	'(' cond ')' { $$ = $2; }
	|
	'!' cond { $$ = !$2; }
	|
	cond G cond { $$ = $1 > $3; }
	|
	cond L cond { $$ = $1 < $3; }
	|
	cond GT cond { $$ = $1 >= $3; }
	|
	cond LT cond { $$ = $1 <= $3; }
	|
	cond NE cond { $$ = $1 != $3; }
	|
	cond EQ cond { $$ = $1 == $3; }
	;




assvar:
	VARIABLE '=' cond ';' 
	{
		
		if(intarray[$1] != 0)
		{
			intarray[$1] = $3;
		}
		else if(floatarray[$1] != 0)
		{
			floatarray[$1] = $3;
		}
		else
		{
			printf("assignement not accepted.\n");
		}
	}
	|
	VARIABLE '=' SinQ ';' 
	{
		if(chararray[$1] != 0)
		{
			chararray[$1] = $3;
		}
		else
		{
			printf("assignement not accepted.\n");
		}
	}
	|
	VARIABLE '=' DoubQ ';' 
	{
		if(stringarray[$1] != 0)
		{
			stringarray[$1] = $3;
		}
		else
		{
			printf("assignement not accepted.\n");
		}
	}
	;


	

if:
	If '(' cond ')' '{' liststatements '}'
	{
		if($3 == 1)
		{
			printf("if is excuted\n");
		}
		else
		{
			printf("if is not excuted\n");
		}
	}
	|
	If '(' cond ')' '{' liststatements '}' Else '{' liststatements '}'
	{
		if($3 == 1)
		{
			printf("if is excuted\n");
		}
		else
		{
			printf("else is excuted\n");
		}
	}
	;

switch:
	Switch '(' VARIABLE ')' '{' switchblock '}' 
	;

switchblock:
	caselist
	|
	caselist   defaultstm
	;

caselist:
	casestm 
	|
	casestm caselist 
	;

casestm:   
	Case Num ':' liststatements  Break ';' 
	;

defaultstm :
	Default  ':' liststatements ';' Break ';'
	;

condsymbols:
	L { symbolsarray[$1] = 'l'; }
	|
	G { symbolsarray[$1] = 'g'; }
	|
	GT { symbolsarray[$1] = 'G'; }
	|
	LT { symbolsarray[$1] = 'L'; }
	|
	EQ { symbolsarray[$1] = 'E'; }
	|
	NE { symbolsarray[$1] = 'N'; }
	;

decorinc:
	incement
	|
	decrement
	;
	

for:
	For '(' VARIABLE ';' VARIABLE condsymbols expr ';' decorinc ')' '{' liststatements '}'
	{
		int x = 1;

		switch(symbolsarray[$6])
		{
			case 'l':
				while(intarray[$5] < $7)
				{
					printf("loop excuted=%d\n",x);
					x++;
					intarray[$5] = intarray[$5] + $9;
				}
				break;
			case 'g':
				while(intarray[$5] > $7)
				{
					printf("loop excuted=%d\n",x);
					x++;
					intarray[$5] = intarray[$5] + $9;
				}
				break;
			case 'G':
				while(intarray[$5] >= $7)
				{
					printf("loop excuted=%d\n",x);
					x++;
					intarray[$5] = intarray[$5] + $9;
				}
				break;
			case 'L':
				while(intarray[$5] <= $7)
				{
					printf("loop excuted=%d\n",x);
					x++;
					intarray[$5] = intarray[$5] + $9;
				}
				break;
			case 'E':
				while(intarray[$5] == $7)
				{
					printf("loop excuted=%d\n",x);
					x++;
					intarray[$5] = intarray[$5] + $9;
				}
				break;
			case 'N':
				while(intarray[$5] != $7)
				{
					printf("loop excuted=%d\n",x);
					x++;
					intarray[$5] = intarray[$5] + $9;
				}
				break;
			default: 
				printf("default case cond not true.\n");
				break;
		}
	}
	;

while:
	While '(' VARIABLE condsymbols expr ')' '{' decorinc ';' liststatements  '}'
	{

		int x = 1;

		switch(symbolsarray[$4])
		{
			case 'l':
				while(intarray[$3] < $5)
				{
					printf("loop excuted=%d\n",x);
					x++;
					intarray[$3] = intarray[$3] + $8;
				}
				break;
			case 'g':
				while(intarray[$3] > $5)
				{
					printf("loop excuted=%d\n",x);
					x++;
					intarray[$3] = intarray[$3] + $8;
				}
				break;
			case 'G':
				while(intarray[$3] >= $5)
				{
					printf("loop excuted=%d\n",x);
					x++;
					intarray[$3] = intarray[$3] + $8;
				}
				break;
			case 'L':
				while(intarray[$3] <= $5)
				{
					printf("loop excuted=%d\n",x);
					x++;
					intarray[$3] = intarray[$3] + $8;
				}
				break;
			case 'E':
				while(intarray[$3] == $5)
				{
					printf("loop excuted=%d\n",x);
					x++;
					intarray[$3] = intarray[$3] + $8;
				}
				break;
			case 'N':
				while(intarray[$3] != $5)
				{
					printf("loop excuted=%d\n",x);
					x++;
					intarray[$3] = intarray[$3] + $8;
				}
				break;
			default: 
				printf("default case cond not true.\n");
				break;
		}
	}
	;

dowhile:
	Do '{' decorinc ';' liststatements '}' While '(' VARIABLE condsymbols expr ')' ';'
	{
		
		int x = 1;
		printf("loop excuted=%d\n",x);
		x++;

		switch(symbolsarray[$10])
		{
			case 'l':
				while(intarray[$9] < $11)
				{
					printf("loop excuted=%d\n",x);
					x++;
					intarray[$9] = intarray[$9] + $3;
				}
				break;
			case 'g':
				while(intarray[$9] > $11)
				{
					printf("loop excuted=%d\n",x);
					x++;
					intarray[$9] = intarray[$9] + $3;
				}
				break;
			case 'G':
				while(intarray[$9] >= $11)
				{
					printf("loop excuted=%d\n",x);
					x++;
					intarray[$9] = intarray[$9] + $3;
				}
				break;
			case 'L':
				while(intarray[$9] <= $11)
				{
					printf("loop excuted=%d\n",x);
					x++;
					intarray[$9] = intarray[$9] + $3;
				}
				break;
			case 'E':
				while(intarray[$9] == $11)
				{
					printf("loop excuted=%d\n",x);
					x++;
					intarray[$9] = intarray[$9] + $3;
				}
				break;
			case 'N':
				while(intarray[$9] != $11)
				{
					printf("loop excuted=%d\n",x);
					x++;
					intarray[$9] = intarray[$9] + $3;
				}
				break;
			default: 
				printf("default case cond not true.\n");
				break;
		}
	}
	;

declare:
	int ';'
	|
	float ';'
	|
	char ';'
	|
	string ';'
	;


int:
	IntVar VARIABLE
	{
		if(floatarray[$2] == 0 && intarray[$2] == 0 && chararray[$2] == 0 && stringarray[$2] == 0 && functionarray[$2] == 0)
		{
			/*printf("accept dec\n");*/
			intarray[$2] = -1;
		}
		else
		{
			printf("This variable name is declered before\n");
		}
	}
	|
	IntVar VARIABLE '=' cond 
	{
		if(floatarray[$2] == 0 && intarray[$2] == 0 && chararray[$2] == 0 && stringarray[$2] == 0 && functionarray[$2] == 0)
		{
			intarray[$2] = $4;
			/*printf("accept dec\n");*/
		}
		else
		{
			printf("This variable name is declered before\n");
		}
	}
	;

float:
	FloatVar VARIABLE
	{
		if(floatarray[$2] == 0 && intarray[$2] == 0 && chararray[$2] == 0 && stringarray[$2] == 0 && functionarray[$2] == 0)
		{
			/*printf("accept dec\n");*/
			floatarray[$2] = -1;
		}
		else
		{
			printf("This variable name is declered before\n");
		}
	}
	|
	FloatVar VARIABLE '=' cond 
	{
		if(floatarray[$2] == 0 && intarray[$2] == 0 && chararray[$2] == 0 && stringarray[$2] == 0 && functionarray[$2] == 0)
		{
			floatarray[$2] = $4;
			/*printf("accept dec\n");*/
		}
		else
		{
			printf("This variable name is declered before\n");
		}
	}
	;

char:
	CharVar VARIABLE
	{
		if(floatarray[$2] == 0 && intarray[$2] == 0 && chararray[$2] == 0 && stringarray[$2] == 0 && functionarray[$2] == 0)
		{
			/*printf("accept dec\n");*/
			chararray[$2] = 'a';
		}
		else
		{
			printf("This variable name is declered before\n");
		}
	}
	|
	CharVar VARIABLE '=' SinQ 
	{
		if(floatarray[$2] == 0 && intarray[$2] == 0 && chararray[$2] == 0 && stringarray[$2] == 0 && functionarray[$2] == 0)
		{
			chararray[$2] = $4;
			/*printf("accept dec\n");*/

		}
		else
		{
			printf("This variable name is declered before\n");
		}
	}
	;

string:
	StringVar VARIABLE
	{
		if(floatarray[$2] == 0 && intarray[$2] == 0 && chararray[$2] == 0 && stringarray[$2] == 0 && functionarray[$2] == 0)
		{
			/*printf("accept dec\n");*/
			stringarray[$2] = "-1";
		}
		else
		{
			printf("This variable name is declered before\n");
		}	   
	}
	|
	StringVar VARIABLE '=' DoubQ
	{
		if(floatarray[$2] == 0 && intarray[$2] == 0 && chararray[$2] == 0 && stringarray[$2] == 0 && functionarray[$2] == 0)
		{
			stringarray[$2] = $4;
			/*printf("accept dec\n");*/
		}
		else
		{
			printf("This variable name is declered before\n");
		}
	}
	;




incement:
	VARIABLE '+' '+' {floatarray[$1] = floatarray[$1] + 1; $$ = 1; }
	;

decrement:
	VARIABLE '-' '-' {floatarray[$1] = floatarray[$1] - 1; $$ = -1;}
	;

print:
	Print '(' DoubQ ')' ';' { printf($3); }
	|
	Print '(' VARIABLE ')' ';'
	{
		if(intarray[$3] == 0 && floatarray[$3] == 0 && chararray[$3] == 0 && stringarray[$3] == 0)
		{
			printf("the variable is no declared\n");
		}
		else
		{
			if(intarray[$3] !=0)
			{
				printf("%d\n",intarray[$3], "\n");
			}
			else if(floatarray[$3] !=0)
			{
				printf("%f\n",floatarray[$3], "\n");
			}
			else if(chararray[$3] !=0)
			{
				printf("%c\n",chararray[$3], "\n");
			}
			else if(stringarray[$3] !=0)
			{
				printf("%s\n",stringarray[$3], "\n");
			}
		}
	}
	;

fun: 
	IntVar VARIABLE '(' par ')' '{' liststatements Return VARIABLE ';' '}' 
	{
		if(floatarray[$2] == 0 && intarray[$2] == 0 && chararray[$2] == 0 && stringarray[$2] == 0 && functionarray[$2] == 0)
		{
			functionarray[$2] = 1;
			printf("number of parmeter: %d\n",numofpar);
			numofpar = 0;
		}
		else
		{
			printf("Name of function is used before\n");
		}
		if(intarray[$9] == 0)
		{
			printf("return variable is not correct\n");
		}
		else  
		{
			$$ = intarray[$9];
			functionarray[$2] = intarray[$9];
			intarray[$2] = intarray[$9];
		}
	}
	|
	FloatVar VARIABLE '(' par ')' '{' liststatements Return VARIABLE ';' '}' 
	{
		if(floatarray[$2] == 0 && intarray[$2] == 0 && chararray[$2] == 0 && stringarray[$2] == 0 && functionarray[$2] == 0)
		{
			functionarray[$2] = 1;
			printf("number of parmeter: %d\n",numofpar);
			numofpar = 0;
		}
		else 
		{
			printf("This variable name is used before\n");
		}
		if(floatarray[$9] == 0)
		{
			printf("return variable is not correct\n");
		}
		else  
		{
			$$ = floatarray[$9];
			functionarray[$2] = floatarray[$9];
			floatarray[$2] = floatarray[$9];
		}
	}
	|
	CharVar VARIABLE '(' par ')' '{' liststatements Return VARIABLE ';' '}' 
	{
		if(floatarray[$2] == 0 && intarray[$2] == 0 && chararray[$2] == 0 && stringarray[$2] == 0 && functionarray[$2] == 0)
		{
			functionarray[$2] = 1;
			printf("number of parmeter: %d\n",numofpar);
			numofpar = 0;
		}
		else
		{
			printf("This variable name is used before\n");
		}
		if(chararray[$9] == 0)
		{
			printf("return variable is not correct\n");
		}
		else  
		{
			$$ = chararray[$9];
			functionarray[$2] = chararray[$9];
			chararray[$2] = chararray[$9];
		}
	}
	|
	StringVar VARIABLE '(' par ')' '{' liststatements Return VARIABLE ';' '}' 
	{
		
		if(floatarray[$2] == 0 && intarray[$2] == 0 && chararray[$2] == 0 && stringarray[$2] == 0 && functionarray[$2] == 0)
		{
			functionarray[$2] = 1;
			printf("number of parmeter: %d\n",numofpar);
			numofpar = 0;
		}
		else
		{
			printf("This variable name is used before\n");
		}
		if(stringarray[$9] == 0)
		{
			printf("return variable is not correct\n");
		}
		else  
		{
			$$ = stringarray[$9];
			functionarray[$2] = stringarray[$9];
			stringarray[$2] = stringarray[$9];
		}
	}
	|
	VoidVar VARIABLE '(' par ')' '{' liststatements '}'  
	{   
	
		if(floatarray[$2] == 0 && intarray[$2] == 0 && chararray[$2] == 0 && stringarray[$2] == 0 && functionarray[$2] == 0)
		{
			functionarray[$2] = -1;
			printf("number of parmeter: %d\n",numofpar);
			numofpar = 0;
		}
		else
		{
			printf("This variable name is used before\n");
		}
	
	}
	;

callfun: 
	VARIABLE '(' callpar ')' ';'
	{
	
		if(floatarray[$1] == 0 && intarray[$1] == 0 && chararray[$1] == 0 && stringarray[$1] == 0 && functionarray[$1] == 0)
		{
			printf("function not defined");
		}
		else
		{
			if(functionarray[$1] == -1)
			{
				int r = numofpar, R = numofcallpar;
				printf("function is excuted and void type");
				if( r == R)
				{
					printf("number of parmeter: %d\n",numofcallpar);
					numofcallpar = 0;
				}
				else
				{
					printf("number of parmeter: %d\n",numofcallpar);
					numofcallpar = 0;
				}
			}
			else
			{
				int r = numofpar, R = numofcallpar;
				printf("function is excuted and has return type and value=%d" ,functionarray[$1]);
				if( r == R)
				{
					printf("number of parmeter: %d\n",numofcallpar);
					numofcallpar = 0;
				}
				else
				{
					printf("number of parmeter: %d\n",numofcallpar);
					numofcallpar = 0;
				}

			}
		}
	
	}
	;

par: 
	int {numofpar++;}
	|
	float {numofpar++;}
	|
	char {numofpar++;}
	|
	string {numofpar++;}
	|
	int ',' par {numofpar++;}
	|
	float ',' par {numofpar++;}
	|
	char ',' par {numofpar++;}
	|
	string ',' par {numofpar++;}
	;

callpar:
	expr {numofcallpar++;}
	|
	SinQ {numofcallpar++;}
	|
	DoubQ {numofcallpar++;}
	|
	expr ',' callpar {numofcallpar++;}
	|
	SinQ ',' callpar {numofcallpar++;}
	|
	DoubQ ',' callpar {numofcallpar++;}
	;


%%
void yyerror(char *s)
{
	fprintf(stderr, "%s\n", s);
	
}

int main(void) 
{
	yyparse();
	yyparse();
	yyparse();

	return 0;
}
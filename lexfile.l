
%{
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"y.tab.h"
int yyparse(void);
extern YYSTYPE yylval;
int count;
char *temp;

%}


HEADER		<iostream.h>|<string.h>
ST		main
NUM		[0-9][0-9]*(.[0-9]+)?
ID		[a-zA-Z][a-zA-Z0-9]*


%% 
[ \t\n]		{}
"#"		{
			temp=(char *)calloc(strlen(yytext)+1,sizeof(char));
		        strcpy(temp,yytext);
		        yylval.str_val=temp; 
			return HASH;
		}	
"include"	{
			temp=(char *)calloc(strlen(yytext)+1,sizeof(char));
		        strcpy(temp,yytext);
		        yylval.str_val=temp; 
			return INC;}
{HEADER}	{
			temp=(char *)calloc(strlen(yytext)+1,sizeof(char));
		        strcpy(temp,yytext);
		        yylval.str_val=temp; 
			return HEADER;
		}	
{ST}		{
			temp=(char *)calloc(strlen(yytext)+1,sizeof(char));
		        strcpy(temp,yytext);
		        yylval.str_val=temp; 
			return ST;
		}
";"		{
			temp=(char *)calloc(strlen(yytext)+1,sizeof(char));
		        strcpy(temp,yytext);
		        yylval.str_val=temp; 
			return SC;
		}
cout	{	temp=(char *)calloc(strlen(yytext)+1,sizeof(char));
		        strcpy(temp,yytext);
		        yylval.str_val=temp; 
			return COUT;


		} 
"<<"	{	temp=(char *)calloc(strlen(yytext)+1,sizeof(char));
		        strcpy(temp,yytext);
		        yylval.str_val=temp; 
			return LSHIFT;


		} 
cin	{	temp=(char *)calloc(strlen(yytext)+1,sizeof(char));
		        strcpy(temp,yytext);
		        yylval.str_val=temp; 
			return CIN;


		} 
">>"	{	temp=(char *)calloc(strlen(yytext)+1,sizeof(char));
		        strcpy(temp,yytext);
		        yylval.str_val=temp; 
			return RSHIFT;


		} 
int		{
			temp=(char *)calloc(strlen(yytext)+1,sizeof(char));
		        strcpy(temp,yytext);
		        yylval.str_val=temp; 
			return INT;}
double		{
			temp=(char *)calloc(strlen(yytext)+1,sizeof(char));
		        strcpy(temp,yytext);
		        yylval.str_val=temp; 
			return DOUBLE;
		}

if		{
			temp=(char *)calloc(strlen(yytext)+1,sizeof(char));
		        strcpy(temp,yytext);
		        yylval.str_val=temp;
			return IF;
		}
else		{
			temp=(char *)calloc(strlen(yytext)+1,sizeof(char));
		        strcpy(temp,yytext);
		        yylval.str_val=temp; 
			return ELSE;}
while		{
			temp=(char *)calloc(strlen(yytext)+1,sizeof(char));
		        strcpy(temp,yytext);
		        yylval.str_val=temp; 
			return WHILE;
		}
do		{
			temp=(char *)calloc(strlen(yytext)+1,sizeof(char));
		        strcpy(temp,yytext);
		        yylval.str_val=temp; 
			return DO;
		}
for		{
			temp=(char *)calloc(strlen(yytext)+1,sizeof(char));
		        strcpy(temp,yytext);
		        yylval.str_val=temp; 
			return FOR;
		}
return 		{
			temp=(char *)calloc(strlen(yytext)+1,sizeof(char));
		        strcpy(temp,yytext);
		        yylval.str_val=temp; 
			return RETURN;
		}
continue	{
			temp=(char *)calloc(strlen(yytext)+1,sizeof(char));
		        strcpy(temp,yytext);
		        yylval.str_val=temp; 
			return CONT;
		}
break		{
			temp=(char *)calloc(strlen(yytext)+1,sizeof(char));
		        strcpy(temp,yytext);
		        yylval.str_val=temp; 
			return BREAK;
		}
"{"		{
			count=count+1;
			temp=(char *)calloc(strlen(yytext)+1,sizeof(char));
                 	strcpy(temp,yytext);
                 	yylval.str_val=temp; 
			return OPAREN;
		}
"}"		{
			count=count-1;
			temp=(char *)calloc(strlen(yytext)+1,sizeof(char));
                 	strcpy(temp,yytext);
                 	yylval.str_val=temp; 
			return CPAREN;
		}
"["		{
			temp=(char *)calloc(strlen(yytext)+1,sizeof(char));
		        strcpy(temp,yytext);
		        yylval.str_val=temp; 
			return OSQB;}
"]"		{
			temp=(char *)calloc(strlen(yytext)+1,sizeof(char));
		        strcpy(temp,yytext);
		        yylval.str_val=temp; 
			return CSQB;}
"("		{
			temp=(char *)calloc(strlen(yytext)+1,sizeof(char));
		        strcpy(temp,yytext);
		        yylval.str_val=temp; 
			return OBR;
		}		
")"		{
			temp=(char *)calloc(strlen(yytext)+1,sizeof(char));
		        strcpy(temp,yytext);
		        yylval.str_val=temp; 
			return CBR;
		}
"*"		{
			temp=(char *)calloc(strlen(yytext)+1,sizeof(char));
		        strcpy(temp,yytext);
		        yylval.str_val=temp; 
			return STAR;
		}
"=="		{
			temp=(char *)calloc(strlen(yytext)+1,sizeof(char));
		        strcpy(temp,yytext);
		        yylval.str_val=temp; 
			return EQ;
		}
"!="		{
			temp=(char *)calloc(strlen(yytext)+1,sizeof(char));
		        strcpy(temp,yytext);
		        yylval.str_val=temp; 
			return NE;
		}
">"		{
			temp=(char *)calloc(strlen(yytext)+1,sizeof(char));
		        strcpy(temp,yytext);
		        yylval.str_val=temp; 
			return GT;
		}
">="		{
			temp=(char *)calloc(strlen(yytext)+1,sizeof(char));
		        strcpy(temp,yytext);
		        yylval.str_val=temp; 
			return GE;
		}
"<"		{
			temp=(char *)calloc(strlen(yytext)+1,sizeof(char));
		        strcpy(temp,yytext);
		        yylval.str_val=temp; 
			return LT;
		}
"<="		{
			temp=(char *)calloc(strlen(yytext)+1,sizeof(char));
		        strcpy(temp,yytext);
		        yylval.str_val=temp; 
			return LE;
		}
"+"		{
			temp=(char *)calloc(strlen(yytext)+1,sizeof(char));
		        strcpy(temp,yytext);
		        yylval.str_val=temp; 
			return PLUS;
		}
"-"		{
			temp=(char *)calloc(strlen(yytext)+1,sizeof(char));
		        strcpy(temp,yytext);
		        yylval.str_val=temp; 
			return MINUS;
		}
"/"		{
			temp=(char *)calloc(strlen(yytext)+1,sizeof(char));
		        strcpy(temp,yytext);
		        yylval.str_val=temp; 
			return SLASH;
		}
"="		{
			temp=(char *)calloc(strlen(yytext)+1,sizeof(char));
		        strcpy(temp,yytext);
		        yylval.str_val=temp; 
			return EQUAL;
		}
","		{
			temp=(char *)calloc(strlen(yytext)+1,sizeof(char));
		        strcpy(temp,yytext);
		        yylval.str_val=temp; 
			return COM;
		}
"&&"		{
			temp=(char *)calloc(strlen(yytext)+1,sizeof(char));
		        strcpy(temp,yytext);
		        yylval.str_val=temp; 
			return AND;
		}
"||"		{
			temp=(char *)calloc(strlen(yytext)+1,sizeof(char));
		        strcpy(temp,yytext);
		        yylval.str_val=temp; 
			return OR;
		}
{NUM}	{
			temp=(char *)calloc(strlen(yytext)+1,sizeof(char));
		        strcpy(temp,yytext);
		        yylval.str_val=temp; 
			return NUM;
		}  

{ID} 		{
			temp=(char *)calloc(strlen(yytext)+1,sizeof(char));
		        strcpy(temp,yytext);
		        yylval.str_val=temp; 
			return ID;
		}




%%


/*
void yyerror(char *str)
{
	printf("Parse Error: %s\n",str);
}
*/
int yywrap(void) {
count = 0;
    return 1;
}



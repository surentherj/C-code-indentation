%{
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
extern int yylex();
extern void yyerror(char *);
extern int yyparse(void);
extern FILE *yyin,*yyout;
void Indentation();
char *Space;
char *Newline;
char *tab;
extern int count;

%}

%union
{
	int	int_val;
	double 	double_val;
	char* str_val;
}

%token <str_val>INT ID OSQB OPAREN CPAREN  CSQB OBR CBR EQ NE GT GE LT LE  PLUS MINUS STAR SLASH EQUAL COM AND OR SC IF DOUBLE NUM ELSE WHILE DO RETURN BREAK CONT HASH INC HEADER ST FOR COUT LSHIFT CIN RSHIFT


%type <str_val> block_st sts st assign if_st condition_op comparison_op addop mulop id program func  type_name parameter_list data_decls id_list condition_exp condition exp term factor func_decl single_st while_st return_st break_st continue_st headers function main do_st for_st assig out_st in_st
%start program

%%
	
	program:	headers main function		
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+strlen($2)+strlen($3)+strlen(Newline)+1));
                               
				strcpy(temp,$1); strcat(temp, $2);strcat (temp,$3); strcat(temp,Newline);
                                $$=temp; 
				printf("\n\nProgram \n%s", $$);
				fprintf(yyout, "%s", $$);
			}
			|headers main 		
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+strlen($2)+strlen(Newline)+1));
                               
				strcpy(temp,$1); strcat(temp, $2);strcat(temp,Newline);
                                $$=temp; 
				printf("\n\nProgram \n%s", $$);
				fprintf(yyout, "%s", temp);
			};
	main:		INT ST OBR CBR OPAREN sts return_st CPAREN
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6)+strlen($7)+strlen($8)+strlen(Newline)+strlen(Newline)+strlen(tab)+strlen(Newline)+strlen(tab)+strlen(Space)+1));
                                strcpy(temp,Newline);Indentation();strcat(temp,$1); strcat(temp,Space); strcat(temp, $2); strcat(temp, $3);strcat(temp, $4);strcat(temp,Newline);Indentation();strcat(temp, $5);strcat(temp, $6);strcat(temp, $7); strcat(temp,Newline);strcat(temp, $8); 
                                $$=temp;
			}
			|INT ST OBR CBR OPAREN return_st CPAREN
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6)+strlen($7)+strlen(Newline)+strlen(Newline)+strlen(tab)+strlen(Newline)+strlen(tab)+strlen(Space)+1));
                                strcpy(temp,Newline);Indentation();strcat(temp,$1); strcat(temp,Space); strcat(temp, $2); strcat(temp, $3);strcat(temp, $4);strcat(temp,Newline);Indentation();strcat(temp, $5);strcat(temp, $6); strcat(temp,Newline);strcat(temp, $7); 
                                $$=temp;
			};
	headers: 	HASH INC HEADER 
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+strlen($2)+strlen($3)+strlen(Newline)+1));
                                strcpy(temp,Newline);Indentation(); strcat(temp,$1); strcat(temp, $2); strcat(temp, $3); 
                                $$=temp;
			}
			| HASH INC  HEADER headers
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen(Newline)+1));
                               	strcpy(temp,Newline);Indentation(); strcat(temp,tab);  strcat(temp,$1); strcat(temp, $2); strcat(temp, $3); strcat(temp, $4); 
                                $$=temp; 
				
			};

			
	function : 	func 
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+strlen(Newline)+strlen(tab)+1));
                               	strcpy(temp,Newline);Indentation(); strcat(temp,tab);strcat(temp,$1);
                                $$=temp; 
				
			}
			|func function 
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+strlen($2)+strlen(Newline)+strlen(tab)+1));
                             	strcpy(temp,Newline);Indentation(); strcat(temp,tab);strcat(temp,$1); strcat(temp,$2);
                                $$=temp;
			};
	
	func :	   	func_decl SC  
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+strlen($2)+1));
                                strcpy(temp,$1); strcat(temp,$2);
                                $$=temp;
			}	
			| func_decl OPAREN sts return_st CPAREN 
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen(Newline)+strlen(tab)+strlen(Newline)+strlen(tab)+1));
                                strcpy(temp,$1); strcat(temp,Newline);Indentation(); strcat(temp,tab);strcat(temp,$2); strcat (temp,$3);strcat (temp,$4);strcat(temp,Newline);Indentation(); strcat(temp,tab);strcat (temp,$5);
                                $$=temp;
			}
			|func_decl OPAREN return_st CPAREN 
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen(Newline)+strlen(tab)+strlen(Newline)+strlen(tab)+1));
                                strcpy(temp,$1); strcat(temp,Newline);Indentation(); strcat(temp,tab);strcat(temp,$2); strcat (temp,$3);strcat(temp,Newline);Indentation(); strcat(temp,tab);strcat (temp,$4);
                                $$=temp;
			};
	func_decl:	type_name ID OBR parameter_list CBR 
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+1));
                                strcpy(temp,$1); strcat(temp,$2); strcat (temp,$3); strcat (temp,$4); 
				strcat (temp,$5);
                                $$=temp;
				
			}
			|type_name ID OBR CBR 
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+strlen($2)+strlen($3)+strlen($4)+1));
                                strcpy(temp,$1); strcat(temp,$2); strcat (temp,$3); strcat (temp,$4); 
                                $$=temp;
				
			};
	type_name : 	INT 
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+strlen(Space)+1));
                                strcpy(temp,$1);strcat(temp,Space);
                                $$=temp;
			} 
			| DOUBLE 
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+strlen(Space)+1));
                                strcpy(temp,$1); strcat(temp,Space);
                                $$=temp;
			};

	parameter_list: type_name ID 
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+strlen($2)+1));
                                strcpy(temp,$1); strcat(temp,$2);
                                $$=temp;
			}
			| parameter_list COM type_name ID 
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+strlen($2)+strlen($3)+strlen($4)+1));
                                strcpy(temp,$1); strcat(temp,$2); strcat (temp,$3); strcat (temp,$4);
                                $$=temp;
			};
			
	sts :		st 
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+1));
                                strcpy(temp,$1); 
                                $$=temp;
				
			}
			| st sts 
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+strlen($2)+1));
                                strcpy(temp,$1); strcat(temp,$2);
                                $$=temp;
				
			};
	st : 		data_decls 
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+strlen(Newline)+strlen(tab)+1));
                                strcpy(temp,Newline);Indentation(); strcat(temp,tab);strcat(temp,$1);
                                $$=temp; 

			}
			| assign 
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+strlen(Newline)+strlen(tab)+1));
                                strcpy(temp,Newline);Indentation(); strcat(temp,tab);strcat(temp,$1);
                                $$=temp; 

			}
			|if_st 
			{ 
				char* temp=malloc(sizeof(char)*(strlen($1)+strlen(Newline)+strlen(tab)+1));
                                strcpy(temp,Newline);Indentation(); strcat(temp,tab);strcat(temp,$1);
                                $$=temp;
			}
			| while_st 
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+strlen(Newline)+strlen(tab)+1));
                                strcpy(temp,Newline);Indentation(); strcat(temp,tab);strcat(temp,$1);
                                $$=temp;
			}
			|do_st 
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+strlen(Newline)+strlen(tab)+1));
                                strcpy(temp,Newline);Indentation(); strcat(temp,tab);strcat(temp,$1);
                                $$=temp; 
			}
			
			| break_st 
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+strlen(Newline)+strlen(tab)+1));
                                strcpy(temp,Newline);Indentation(); strcat(temp,tab);strcat(temp,$1);
                                $$=temp; 
			}
			| continue_st 
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+strlen(Newline)+strlen(tab)+1));
                                strcpy(temp,Newline);Indentation(); strcat(temp,tab);strcat(temp,$1);
                                $$=temp; 
			}
			|for_st 
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+strlen(Newline)+strlen(tab)+1));
                                strcpy(temp,Newline);Indentation(); strcat(temp,tab);strcat(temp,$1);
                                $$=temp; 
			}
			|out_st 
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+strlen(Newline)+strlen(tab)+1));
                                strcpy(temp,Newline);Indentation(); strcat(temp,tab);strcat(temp,$1);
                                $$=temp; 
			}
			|in_st 
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+strlen(Newline)+strlen(tab)+1));
                                strcpy(temp,Newline);Indentation(); strcat(temp,tab);strcat(temp,$1);
                                $$=temp; 
			};

			
	data_decls :	type_name id_list SC 
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+strlen($2)+strlen($3)+1));
                                strcpy(temp,$1); strcat(temp,$2);strcat (temp,$3);
                                $$=temp; 
			}

			| type_name id_list SC data_decls 
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen(tab)+strlen(Newline)+1));
                                strcpy(temp,$1); strcat(temp,$2);strcat (temp,$3);strcat(temp,Newline);Indentation(); strcat(temp,tab);strcat (temp,$4);
                                $$=temp;
			};
	id_list:	id 
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+1));
                                strcpy(temp,$1);
                                $$=temp; 
			}
			| id_list COM id 
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+strlen($2)+strlen($3)+1));
                                strcpy(temp,$1); strcat(temp,$2); strcat(temp,$3);
                                $$=temp; 
			};
	id : 		ID 
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+1));
                                strcpy(temp,$1);
                                $$=temp; 
			} 
			| ID OSQB exp CSQB 
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+strlen($2)+strlen($3)+1));
                                strcpy(temp,$1); strcat(temp,$2); strcat(temp,$3);
                                $$=temp;
			};
	assig :	id EQUAL exp 
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+strlen($2)+strlen($3)+strlen(Space)+strlen(Space)+1));
                                strcpy(temp,$1); strcat(temp,Space); strcat(temp,$2);strcat(temp, Space);strcat (temp,$3);
                                $$=temp;
			};			
	assign :	id EQUAL exp SC 
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen(Space)+strlen(Space)+1));
                                strcpy(temp,$1); strcat(temp,Space); strcat(temp,$2);strcat(temp, Space);strcat (temp,$3); strcat (temp,$4);
                                $$=temp;
			};
out_st :	COUT LSHIFT id SC 
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen(Space)+strlen(Space)+1));
                                strcpy(temp,$1); strcat(temp,Space); strcat(temp,$2);strcat(temp, Space);strcat (temp,$3); strcat (temp,$4);
                                $$=temp;
			};
in_st :	CIN RSHIFT id SC 
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen(Space)+strlen(Space)+1));
                                strcpy(temp,$1); strcat(temp,Space); strcat(temp,$2);strcat(temp, Space);strcat (temp,$3); strcat (temp,$4);
                                $$=temp;
			};
	exp :		term
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+1));
                                strcpy(temp,$1); 
                                $$=temp;
			} 
			| exp addop term 
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+strlen($2)+strlen($3)+1));
                                strcpy(temp,$1); strcat(temp,$2); strcat(temp, $3);
                                $$=temp;
			} ;
	term : 		factor
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+1));
                                strcpy(temp,$1);
                                $$=temp;
			} 
			| term mulop factor 
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+strlen($2)+strlen($3)+1));
                                strcpy(temp,$1); strcat(temp,$2); strcat(temp, $3);
                                $$=temp; 
			};
	factor : 	id
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+1));
                                strcpy(temp,$1); 
                                $$=temp;
			}
			| NUM 
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+1));
                                strcpy(temp,$1);
                                $$=temp; 
				
			} ; 
	addop : 	PLUS 
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+1));
                                strcpy(temp,$1);
                                $$=temp;
			} 
			| MINUS	
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+1));
                                strcpy(temp,$1);
                                $$=temp;
			};
	mulop :		STAR 	
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+1));
                                strcpy(temp,$1);
                                $$=temp;
			}
			| SLASH 
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+1));
                                strcpy(temp,$1);
                                $$=temp;
			};

	block_st : 	 OPAREN sts CPAREN 
			{
				
				char* temp=malloc(sizeof(char)*(strlen($1)+strlen($2)+strlen($3)+strlen(Newline)+strlen(tab)+1));
                                strcpy(temp,Newline);Indentation(); strcat(temp,tab); strcat(temp,$1); strcat(temp,$2); strcat(temp,Newline);Indentation(); strcat(temp,tab); strcat (temp,$3); 
                                $$=temp; 
				
			}
			| OPAREN CPAREN 
			{
				
				char* temp=malloc(sizeof(char)*(strlen($1)+strlen($2)+strlen(Newline)+strlen(tab)+1));
                                strcpy(temp,Newline);Indentation(); strcat(temp,tab); strcat(temp,$1); strcat(temp,Newline);Indentation(); strcat(temp,tab); strcat (temp,$2); 
                                $$=temp; 
				
			}
			| single_st 
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+1));
                                strcpy(temp,$1); 
                                $$=temp; 
			};

	single_st :   assign 
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+strlen(Newline)+strlen(tab)+1));
                                strcpy(temp,Newline);Indentation(); strcat(temp,tab);strcat(temp,$1);
                                $$=temp; 			}
			| if_st 
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+strlen(Newline)+strlen(tab)+1));
                                strcpy(temp,Newline);Indentation(); strcat(temp,tab);strcat(temp,$1);
                                $$=temp; 
			}
			| while_st 
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+strlen(Newline)+strlen(tab)+1));
                                strcpy(temp,Newline);Indentation(); strcat(temp,tab);strcat(temp,$1);
                                $$=temp; 
			}
			|do_st 
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+strlen(Newline)+strlen(tab)+1));
                                strcpy(temp,Newline);Indentation(); strcat(temp,tab);strcat(temp,$1);
                                $$=temp; 
			}
			| break_st 
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+strlen(Newline)+strlen(tab)+1));
                                strcpy(temp,Newline);Indentation(); strcat(temp,tab);strcat(temp,$1);
                                $$=temp; 
			}
			| continue_st 
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+strlen(Newline)+strlen(tab)+1));
                                strcpy(temp,Newline);Indentation(); strcat(temp,tab);strcat(temp,$1);
                                $$=temp; 
			}			
			|for_st 
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+strlen(Newline)+strlen(tab)+1));
                                strcpy(temp,Newline);Indentation(); strcat(temp,tab);strcat(temp,$1);
                                $$=temp; 
			};



	if_st : 	IF OBR condition_exp CBR block_st 
			{
				
				char* temp=malloc(sizeof(char)*(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+1));
                                strcpy(temp,$1); strcat(temp,$2); strcat(temp,$3); strcat(temp,$4); strcat(temp,$5);
                                $$=temp;
				
			}
			| IF OBR condition_exp CBR block_st ELSE block_st
			{
				
				char* temp=malloc(sizeof(char)*(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6)+strlen($7)+strlen(Newline)+strlen(tab)+1));
                                strcpy(temp,$1); strcat(temp,$2); strcat(temp,$3); strcat(temp,$4); strcat(temp,$5);strcat(temp,Newline);Indentation(); strcat(temp,tab);strcat(temp,$6);strcat(temp,$7);
                                $$=temp;
				
			};
	for_st	:	FOR OBR assig SC condition_exp SC assig CBR block_st 
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6)+strlen($7)+strlen($8)+strlen($9)+strlen(Space)+strlen(Space)+1));
                                strcpy(temp,$1); strcat(temp,$2); strcat(temp,$3); strcat(temp,$4);strcat(temp,Space); strcat(temp,$5);strcat(temp,$6);strcat(temp,Space);strcat(temp,$7);strcat(temp,$8);strcat(temp,$9);
                                $$=temp; 
				
			} ;
	while_st : 	WHILE OBR condition_exp CBR block_st 
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+1));
                                strcpy(temp,$1); strcat(temp,$2); strcat(temp,$3); strcat(temp,$4); strcat(temp,$5);
                                $$=temp; 
				
			} ;
	do_st : 	DO block_st WHILE OBR condition_exp CBR SC
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6)+strlen($7)+1));
                                strcpy(temp,$1); strcat(temp,$2); strcat(temp,$3); strcat(temp,$4); strcat(temp,$5); strcat(temp,$6);strcat(temp,$7);
                                $$=temp; 
				
			} ;
	
	condition_exp :	condition 
			{	
				char* temp=malloc(sizeof(char)*(strlen($1)+1));
                                strcpy(temp,$1);
                                $$=temp; 
			}
			| condition condition_op condition_exp 
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+strlen($2)+strlen($3)+strlen(Space)+strlen(Space)+1));
                                strcpy(temp,$1); strcat(temp,Space);strcat(temp,$2);strcat(temp,Space); strcat(temp,$3);
                                $$=temp;
			};
	condition : 	exp comparison_op exp 
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+strlen($2)+strlen($3)+strlen(Space)+strlen(Space)+1));
                                strcpy(temp,$1); strcat(temp,Space);strcat(temp,$2);strcat(temp,Space); strcat(temp,$3);
                                $$=temp;
			}; 
	condition_op : 	AND 
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+strlen(Space)+strlen(Space)+1));
                                strcpy(temp,$1);
                                $$=temp;
			}
		       	| OR
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+1));
                                strcpy(temp,$1);
                                $$=temp; 
			};

	comparison_op:	EQ 
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+1));
                                strcpy(temp,$1); 
                                $$=temp; 
			}
			| NE
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+1));
                                strcpy(temp,$1);
                                $$=temp; 
			} 
			| GT 
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+1));
                                strcpy(temp,$1); 
                                $$=temp; 
			}
			| GE
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+1));
                                strcpy(temp,$1); 
                                $$=temp; 
			} 
			| LT
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+1));
                                strcpy(temp,$1); 
                                $$=temp; 
			} 
			| LE 
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+1));
                                strcpy(temp,$1); 
                                $$=temp; 
			};

	

	return_st :	RETURN exp SC 
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+strlen($2)+strlen($3)+strlen(Space)+strlen(Newline)+strlen(tab)+1));
                                strcpy(temp,Newline);Indentation();strcat(temp,tab);strcat(temp,$1);strcat(temp,Space); strcat(temp,$2); strcat(temp,$3);
                                $$=temp; 
			}
			| RETURN SC 
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+strlen($2)+strlen(Newline)+strlen(tab)+1));
                                strcpy(temp,Newline);Indentation();strcat(temp,tab);strcat(temp,$1);strcat(temp,$2);
                                $$=temp; 
				
			} ;
	break_st : 	BREAK SC 
			{
				char* temp=malloc(sizeof(char)*(strlen($1)+strlen($2)+1));
                                strcpy(temp,$1);strcat(temp,$2);
                                $$=temp; 
				
			} ;
	continue_st :	CONT SC 
		{
				char* temp=malloc(sizeof(char)*(strlen($1)+strlen($2)+1));
                                strcpy(temp,$1); strcat(temp,$2);
                                $$=temp; 
				
		} ;
%%
void Indentation()
{
	int i;
	tab=malloc(10000);
	for(i=0;i<count;i++)
	strcat(tab,"\t");
}

int main(int argc , char * argv[])
{
	Space=" ";
	Newline="\n";
	
	if(argc !=2)
	{
		printf("usage: Please enter input file name while running\n");
		exit(0);
	}

	FILE *file=fopen(argv[1],"r");
	FILE *fileo=fopen("output.cpp","w");
	if(file==NULL)
	{
		printf("cannot open file %s\n",argv[1]);
		exit(0);
	}
	yyin=file;
	yyout=fileo;
	yyparse();

	fclose(file);
	fclose(fileo);
}
void yyerror(char *msg)
{
	printf("YACC : %s\n",msg);
}

DIGIT		[0-9]
LETTER		[a-zA-Z_]
HEX			[a-fA-F0-9]
EXP			[Ee][+-]?{DIGIT}+

%{
#include "y.tab.h"

int symbol_index = 0;
FILE *fd;

struct symbolTable {
	int id;
	char name[100];
	char type[100];
}symbols[100];

void symbolTable_insert(char name[],char type[])
{
	symbols[symbol_index].id = (symbol_index + 1);
	strcpy(symbols[symbol_index].name,name);
	strcpy(symbols[symbol_index].type,type);
	symbol_index++;
}

int symbolTable_lookup(char name[])
{
	int j;
	for(j=0;j<symbol_index;j++)
	{
		if(strcmp(symbols[j].name,name)==0)
			return 0;
	}
	return 1;
}
void printTable()
{
	int k;
	fd = fopen("symbol.txt","w");
	fprintf(fd,"ID\tNAME\tTYPE\n");
	fprintf(fd,"-------------------------\n");
	for(k=0;k<symbol_index;k++)
	{
		fprintf(fd,"%d\t%s\t%s\n",symbols[k].id,symbols[k].name,symbols[k].type);
	}
	fclose(fd);
}
%}

%option noyywrap

%%
"/*"((.)*\n)*(.)*"*/"  {printf("Multiline comment\n");}
"//"(.)*       {printf("Singleline comment\n");}
[#]["include"| "define"](.)* {printf("Preprocessor\n");}
"auto"			{ return(AUTO); }
"break"			{ return(BREAK); }
"case"			{ return(CASE); }
"char"			{ return(CHAR); }
"const"			{ return(CONST); }
"continue"		{ return(CONTINUE); }
"default"		{ return(DEFAULT); }
"do"			{ return(DO); }
"double"		{ return(DOUBLE); }
"else"			{ return(ELSE); }
"enum"			{ return(ENUM); }
"extern"		{ return(EXTERN); }
"float"			{ return(FLOAT); }
"for"			{ return(FOR); }
"goto"			{ return(GOTO); }
"if"			{ return(IF); }
"int"			{ return(INT); }
"long"			{ return(LONG); }
"register"		{ return(REGISTER); }
"return"		{ return(RETURN); }
"short"			{ return(SHORT); }
"signed"		{ return(SIGNED); }
"sizeof"		{ return(SIZEOF); }
"static"		{ return(STATIC); }
"struct"		{ return(STRUCT); }
"switch"		{ return(SWITCH); }
"typedef"		{ return(TYPEDEF); }
"union"			{ return(UNION); }
"unsigned"		{ return(UNSIGNED); }
"void"			{ return(VOID); }
"volatile"		{ return(VOLATILE); }
"while"			{ return(WHILE); }

{LETTER}({LETTER}|{DIGIT})*		{

if(symbolTable_lookup(yytext)!=0)
{
	printf("%s\n",yytext);
	symbolTable_insert(yytext,"Identifier");
}

return(IDENTIFIER); }

0[xX]{HEX}+		{ return(CONSTANT); }
{DIGIT}+	{ return(CONSTANT); }
{LETTER}?'(\\.|[^\\'])+'	{ return(CONSTANT); }

{DIGIT}+{EXP}		{ return(CONSTANT); }
{DIGIT}*"."{DIGIT}+({EXP})?	{ return(CONSTANT); }
{DIGIT}+"."{DIGIT}*({EXP})?	{ return(CONSTANT); }

{LETTER}?\"(\\.|[^\\"])*\"	{ return(STRING_LITERAL); }

">>="	{ return(RIGHT_ASSIGNMENT); }
"<<="	{ return(LEFT_ASSIGNMENT); }
"+="	{ return(ADD_ASSIGNMENT); }
"-="	{ return(SUB_ASSIGNMENT); }
"*="	{ return(MUL_ASSIGNMENT); }
"/="	{ return(DIV_ASSIGNMENT); }
"%="	{ return(MOD_ASSIGNMENT); }
"&="	{ return(AND_ASSIGNMENT); }
"^="	{ return(XOR_ASSIGNMENT); }
"|="	{ return(OR_ASSIGNMENT); }
">>"	{ return(RIGHT_OPERAND); }
"<<"	{ return(LEFT_OPERAND); }
"++"	{ return(INC_OPERAND); }
"--"	{ return(DEC_OPERAND); }
"->"	{ return(PTR_OPERAND); }
"&&"	{ return(AND_OPERAND); }
"||"	{ return(OR_OPERAND); }
"<="	{ return(LE_OPERAND); }
">="	{ return(GE_OPERAND); }
"=="	{ return(EQ_OPERAND); }
"!="	{ return(NE_OPERAND); }
";"		{ return(';'); }
("{")	{ return('{'); }
("}")	{ return('}'); }
","		{ return(','); }
":"		{ return(':'); }
"="		{ return('='); }
"("		{ return('('); }
")"		{ return(')'); }
"["		   { return('['); }
"]"		   { return(']'); }
"."		{ return('.'); }
"&"		{ return('&'); }
"!"		{ return('!'); }
"~"		{ return('~'); }
"-"		{ return('-'); }
"+"		{ return('+'); }
"*"		{ return('*'); }
"/"		{ return('/'); }
"%"		{ return('%'); }
"<"		{ return('<'); }
">"		{ return('>'); }
"^"		{ return('^'); }
"|"		{ return('|'); }
"?"		{ return('?'); }
[ \t\v\n\f]		{ }
<<EOF>> {printf("EOF Reached\n");printTable();exit(0);}
.			;

%%




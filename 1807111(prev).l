%{
	#include<stdio.h>
	#include<string.h>
	#include<stdlib.h>
	#include<math.h>
%}

ALPHA [a-zA-Z]+
DIGIT [0-9]
IMPORT			"<import>"[ ]*[a-zA-Z.<>]+[ ]*"<\/import>"
SCOMMENT		"<comment>"[a-zA-Z0-9,.\\?!@#$%^&*()-{}+_=<>\|'";\t ]*"\n"
MCOMMENT		"<comment>"[a-zA-Z0-9,.\\?!@#$%^&*()-{}+_=<>\|'";\t\n ]*"</comment>"

%%



;         		{printf("\n");}
"<for>" 		{printf("for ");}
"</for>"		{printf("end for\n");}
"<count>"	    {printf("count_cond. start ");}
"</count>"		{printf("count_cond. end\n");}

"<print> "		{printf("print ");}
" </print>"		{printf("end tag of print\n");}
"<root>"		{printf("root number ");}
"</root>"		{printf("end root\n");}


{SCOMMENT}		{}
{MCOMMENT}		{}
{IMPORT}  		{}



"<condition> "	{printf("condition ");}
" </condition>"	{printf("end condition \n");}
"<true>"		{printf("if ");}
"</true>"		{printf("if end\n");}
"<false>"		{printf("else ");}
"</false>"		{printf("else end\n");}
" <add> "			{printf("+ ");}
" <sub> "			{printf("- ");}
" <multi> "		{printf("* ");}
" <div> "			{printf("/ ");}
" <pow> "			{printf("^ ");}
" <less> "		{printf("less ");}
"<greater>"		{printf("greater");}
" <equal> "		{printf("= ");}
"<int>"  		{printf("integer declared ");}
"</int>"  		{printf("integer end \n");}
"<char>"        {printf("char ");}
"</char>"        {printf("end char ");}
"<float>" 	    {printf("float start");}
"</float>" 	    {printf("end float");}
"<double>"		{printf("double");}
"</double>"		{printf("end double");}
"SCOMMENT"		{printf("\nSingle line comment found: "); ECHO;printf("\n");}
"MCOMMENT"		{printf("\nMulti line comment found: "); ECHO;printf("\n");}
"IMPORT"		{printf("\nSingle line comment found: "); ECHO;printf("\n");}
[a-zA-Z0-9]+			{printf("");ECHO;printf(" ");}

"<main>"	    { printf("main\n"); }
"</main>"		{printf("\nend main");}
[ ]*	    	{}
[\n]*			{}
[\t]*			{}
.				{printf("%s is invalid input\n",yytext);}

%%

int yywrap()
{
	return 1;
}

int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	yylex();
    
	return 0;
}
#include <stdio.h>
# include <stdlib.h>
# include <string.h>
#include <ctype.h>
#include <iostream>
#include <tstream>
using namespace std;
 struct symbol
 {
     char * str;
     int coding;

 };
 char *keyword_list[34] = {"void","char","int","float","double","short","long","singed"
                           ,"unsinged","struct","union","enum","typedef","sizeof","auto","goto",
                           "if","else","switch","case","default","for","do","while","scanf","printf",
                           "static","register","extern","const","voliate","return","continue","break"};
  char *operator_list[44] = {"{","}",".",",","[","]","(",")","*","&","%","$","#","@","|"
                             ,"\",">","<",">>","<<","<=",">=","+","-","!=","^",":",";","'","/","~","`","&&","||","&="};
// 读入的字符
char ch;  
char strToken[20] = "";
int eof_flag = 0;
int num = 1;
int row = 1;
struct symbol = keywords[34];
struct symbol =   identifiers[44];
FILE *fp = NULL;
FILE *fw = NULL;
ofstream out;

// 给单词符号设定种别编码
void initialization()
{
    for (int i=0;i<34;i++)
    {
        keywords[i].str = ketword_list[i];
        keywords[i].coding = num;
        num++;
    }
    for(i=0;i<44;i++)
    {
        identifiers[i].str = operator_list[i];
        identifiers[i].coding = num;
        num++;
    }
}    
void getNextChar(FILE *ffp)
{
    if(ch = get (ffp)) == EOF)
    {
        eof_flag =1;
    }
    if (ch =='\n')
    {
        row++;
    }

}
void getbc(FILE *ffp)
{
    while (ch == ' ' ||  ch == '\n' || ch =='\t')
    {
        getNextChar(ffp);
    }
}
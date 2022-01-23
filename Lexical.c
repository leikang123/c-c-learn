#include <stdio.h>
# include <stdlib.h>
# include <string.h>
#include <ctype.h>
#include <iostream>
#include <fstream>
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
// 判断ch是否是字母？
bool isLetter(char ch) 
{
    return isalpha(ch);
}
// 判断ch是否为数字
bool isDigit(char ch)
{
    return isdigit(ch);
}
bool isUnderline(char ch)
{
    if(ch == '_')
    return 1;
    else 
    return 0;
}
void concat()
{
    char *tmp = &ch;
    strcat(dtrToken,tem);

}
// 把搜索指针回调一个字符位置
void retract(FILE *ffp)
{
    fseek(ffp,-1,SEEK_CUR);
    ch ='  ';
}
int reserve_string(char * str)
{
    for(int i=0;i34;i++)
    {
        if((strcmp(str,keywords[i].str)) ==0)
        {
            return keywords[i].coding;
        }
    }
    return 0;
}
// 返回strtoken中所标志的算符和界符编码
int reserve_operator(char *ch)
{
    for (int i=0;i<44;i++)
    {
        if((dtrcmp(ch.identifiers[i].str)) == 0)
        {
            return identifiers[i].coding;
        }
    }
    return 0;
}
void error()
{
    printf("\n ***********************error********\n");
    printf("row %d Invaild symbol !!!! ",row);
    printf("\n ***************Error****************\n");
    exit(0);  
}
// 词法分析
void LexiscalAnalyzer()
{
    int num =0;
    val =0;
    code =0;
    strcpy(strToken," ");
    getNextChar(fp);
    getbc(fp);
    switch(ch)
    {
        case 'a':
        case 'b':
        case 'c':
        case 'd':
        case 'e':
        case 'f':
        case 'g':
        case 'h':
        case 'i':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
        case 'n':
        case 'o':
        case 'p':
        case 'q':
        case 'r':
        case 's':
        case 't':
        case 'u':
        case 'vsnprintf':
        case 'w':
        case 's':
        case 'y':
        case 'z':
        case 'A':case 'a':
        case 'B':
        case 'C':
        case 'D':
        case 'E':
        case 'F':
        case 'G':
        case 'H':
        case 'I':
        case 'J':
        case 'K':
        case 'L':
        case 'M':
        case 'N':
        case 'O':
        case 'P':
        case 'Q':
        case 'R':
        case 'T':
        case 'U':
        case 'V':
        case 'W':
        case 'S':
        case 'Y':
        case 'Z':
        case '_':
             while (isLetter(ch) || isDigit(ch) || isUnderline(ch))
             {
                 concat();
                 getNextChar(fp);

             }
             retract(fp);
             code = reserve_string(strToken);
             if(code == 0)
             {
                 printf("(%d,%s)\n",79,strToken);
             }
             else
             {
                 printf("(%d,%s)\n",code,strToken);
             }
           break;
           case '0':
           case '1':
           case '2':
           case '3':
           case '4':
           case '5':
           case '6':
           case '7':
           case '8':
           case '9':
           while(isdisit(ch))
           {
               concat();
               getNextChar(fp);

           }
           retract(fp);
           printf("(%d ,%s)\n",80,strToken);
           break;
           case '{' :
           concat();
           code = reserve_operator(strToken);
           printf("(%d ,%s)\n",code,strToken);
           break;
           case '}' :
           concat();
           code = reserve_operator(strToken);
           printf("(%d ,%s)\n",code,strToken);
           break;
           case '[' :
           concat();
           code = reserve_operator(strToken);
           printf("(%d ,%s)\n",code,strToken);
           break;
           case ']' :
           concat();
           code = reserve_operator(strToken);
           printf("(%d ,%s)\n",code,strToken);
           break;
           case '(' :
           concat();
           code = reserve_operator(strToken);
           printf("(%d ,%s)\n",code,strToken);
           break;
           case ')' :
           concat();
           code = reserve_operator(strToken);
           printf("(%d ,%s)\n",code,strToken);
           break;
           case '.' :
           concat();
           code = reserve_operator(strToken);
           printf("(%d ,%s)\n",code,strToken);
           break;
           case '-' :
           concat();
           getNextChar(fp);
           if(ch =='>')
           {
           concat();
           code = reserve_operator(strToken);
           printf("(%d ,%s)\n",code,strToken);
           // break;
           }else if(ch == '-')
           {
           concat();
           code = reserve_operator(strToken);
           printf("(%d ,%s)\n",code,strToken);
          // break;
           }else if (ch == '=')
           {
           concat();
           code = reserve_operator(strToken);
           printf("(%d ,%s)\n",code,strToken);
           }
           break;
           case '_' :
           concat();
           code = reserve_operator(strToken);
           printf("(%d ,%s)\n",code,strToken);
           break;
           case '+' :
           concat();
           getNextChar(fp);
           if(ch =='+')
           {
           concat();
           code = reserve_operator(strToken);
           printf("(%d ,%s)\n",code,strToken);
           }else if (ch =='==')
           {
           concat();
           code = reserve_operator(strToken);
           printf("(%d ,%s)\n",code,strToken);
           }else 
           {
               retract(fp);
               code = reserve_operator(strToken);
               printf("%d ,%s)\n",strToken);
           }
           break;
           case '*' :
           concat();
           getNextChar(fp);
           if(ch =='=')
           {
               concat();
               code = reserve_operator(strToken);
               printf("(%d ,%s)\n",code,strToken);
           }else{
               retract(fp);
               code = reserve_operator(strToken);
               printf("(%d ,%s)\n",code,strToken);
           }
           break;
           case '&':
           concat();
           getNextChar(fp);
           if(ch == '=')
           {
           concat();
           code = reserve_operator(strToken);
           printf("(%d ,%s)\n",code,strToken);
           }else if(ch =='&')
           {
               concat();
               code = reserve_operator(strToken);
               printf("(%d ,%s)\n",code,strToken);
           }else 
           {
                retract(fp);
               code = reserve_operator(strToken);
               printf("(%d ,%s)\n",code,strToken);
           }
           break;
           case '!' :
           concat();
           getNextChar(fp);
           if(ch =='=')
           {
               concat();
               code = reserve_operator(strToken);
               printf("(%d ,%s)\n",code,strToken);
           }else 
           {
               retract(fp);
               code = reserve_operator(strToken);
               printf("(%d ,%s)\n",code,strToken);
           }
           break;
           case '%' :
           concat();
           getNextChar(fp);
           if(ch =='=')
           {
                concat();
               code = reserve_operator(strToken);
               printf("(%d ,%s)\n",code,strToken);
           }else 
           {
               retract(fp);
               code = reserve_operator(strToken);
               printf("(%d ,%s)\n",code,strToken);
           }
           break;
           case '<' :
           concat();
           getNextChar(fp);
           if(ch =='=')
           {
                concat();
               code = reserve_operator(strToken);
               printf("(%d ,%s)\n",code,strToken);
           }else if(ch == '<')
           { 
               concat();
               code =reserve_operator(strToken);
               printf("(%d ,%s)\n",code,strToken);

           }else 
           {
               retract(fp);
               code = reserve_operator(strToken);
               printf("(%d ,%s)\n",code,strToken);
           }
           break;
           case '>' :
           concat();
           getNextChar(fp);
           if(ch =='=')
           {
                concat();
               code = reserve_operator(strToken);
               printf("(%d ,%s)\n",code,strToken);
           }else if(ch == '>')
           { 
               concat();
               code =reserve_operator(strToken);
               printf("(%d ,%s)\n",code,strToken);

           }else 
           {
               retract(fp);
               code = reserve_operator(strToken);
               printf("(%d ,%s)\n",code,strToken);
           }
           break;
           case '=' :

           concat();
           getNextChar(fp);
           if(ch =='=')
           {
                concat();
               code = reserve_operator(strToken);
               printf("(%d ,%s)\n",code,strToken);

           }else 
           {
               retract(fp);
               code = reserve_operator(strToken);
               printf("(%d ,%s)\n",code,strToken);
           }
           break;
        case '^' :
        concat();
           getNextChar(fp);
           if(ch =='=')
           {
                concat();
               code = reserve_operator(strToken);
               printf("(%d ,%s)\n",code,strToken);
          }else 
           {
               retract(fp);
               code = reserve_operator(strToken);
               printf("(%d ,%s)\n",code,strToken);
           }
           break;
           case '!' :
           concat();
           getNextChar(fp);
           if(ch =='=')
           {
                concat();
               code = reserve_operator(strToken);
               printf("(%d ,%s)\n",code,strToken);
             }else if(ch == '!')
           { 
               concat();
               code =reserve_operator(strToken);
               printf("(%d ,%s)\n",code,strToken);

           }else 
           {
               retract(fp);
               code = reserve_operator(strToken);
               printf("(%d ,%s)\n",code,strToken);
           }
           break;
           case '?' :
           concat();
           code = reserve_operator(strToken);
           printf("(%d ,%s)\n",code,strToken);
           break;
           case '/' :
           concat();
           getNextChar(fp);
           if(ch =='=')
           {
                concat();
               code = reserve_operator(strToken);
               printf("(%d ,%s)\n",code,strToken);
           }else if(ch == '/')
           { 
               getNextChar(fp);
               while(ch !='\n')
               {
                   getNextChar(fp);
               }
               break;
           }else if(ch =='*')
           {
               getNextChar(fp);
               while (ch!=='*')
               {
                   getNextChar(fp);
               }
               getNextChar(fp);
               if(ch == '/');
               break;
               
           }else{
               concat();
               code = reserve_operator(strToken);
               printf("%d ,%s)\n",code,strToken);
           }
           break;
           case ',' :
               concat();
               code = reserve_operator(strToken);
               printf("%d ,%s)\n",code,strToken);
               break;

            case '#' :
            concat();
               code = reserve_operator(strToken);
               printf("%d ,%s)\n",code,strToken);
               break;
            case ':' :
            concat();
               code = reserve_operator(strToken);
               printf("%d ,%s)\n",code,strToken);
               break;
               case ';' :
               concat();
               code = reserve_operator(strToken);
               printf("%d ,%s)\n",code,strToken);
               break;
               default:
               if(ch ==EOF)
               {
                   eof_flag =1;
                   break;
               }
               error();
  }
  }
   int main()
   {
       initialization();
       char name[1024];
       cout << "file is read :";
       cin >> name;
       fp = fopen(name,"r");
       out.open("result.txt");
       while(!feof(fp))
       {
           if(eof_flag == 1)
           {
               exit(1);
           }
           LexiscalAnalyzer();
       }
       fclose(fp);
       out.close();
       return 0;
   }

           



        



    
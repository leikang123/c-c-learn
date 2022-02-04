#include <stdio.h>
# include <stdlib.h>
# include <string.h>
#include <ctype.h>
#include <iostream>
#include <fstream>
using namespace std;
// 结构体符号
 struct symbol
 {   
     // 定义指针变量str;
     char * str;
     // 定义变量coding
     int coding;

 };
 // 字符指针以及编码列表34个
 char *keyword_list[34] = {"void","char","int","float","double","short","long","singed"
                           ,"unsinged","struct","union","enum","typedef","sizeof","auto","goto",
                           "if","else","switch","case","default","for","do","while","scanf","printf",
                           "static","register","extern","const","voliate","return","continue","break"};
  char *operator_list[44] = {"{","}",".",",","[","]","(",")","*","&","%","$","#","@","|"
                             ,"\",">","<",">>","<<","<=",">=","+","-","!=","^",":",";","'","/","~","`","&&","||","&="};
// 读入的字符，ch字符变量，存放最新读入的源程序字符
char ch;  
// strToken 字符数组，存放构成单词符号的字符串
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

    // 关键字设定种别编码
    for (int i=0;i<34;i++)
    {
        keywords[i].str = keyword_list[i];
        keywords[i].coding = num;
        num++;
    }
    // 给算符和界符设定种别编码
    for(i=0;i<44;i++)
    {
        identifiers[i].str = operator_list[i];
        identifiers[i].coding = num;
        num++;
    }
    // 数字79，标志符号80
}  
// 子程序过程，把下一个字符读入ch中  
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
// 子程序过程，每次调用时，检查ch的字符串是否为空白字符，回车或者制表符号，惹是反复调用getNextChar(),直到ch中读入非上述符号
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
// 布尔函数，判断是否为下划线
bool isUnderline(char ch)
{
    if(ch == '_')
    return 1;
    else 
    return 0;
}
// 子程序过程，把ch中的字符链接到strToken
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
// 整型函数，对于strToken中字符串判断它是否为保留字，如果是保留字给出编码，否则返回零。
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
// 出现非法字符，显示错误信息
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
       // 关闭fp
       fclose(fp);
       out.close();
       // 返回0
       return 0;
   }

           



        



    
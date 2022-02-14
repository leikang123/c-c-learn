//
// Created by 雷康 on 30/9/2021.
//
#include "student.h"
#include <iostream>
#include <string>
void student::display(vector<student> &c){
    cout << "学号" << setw(20)<<"成绩"<< endl;
    for(int i=0;i<c.size();i++)
     cout <<c[i].GetNum() <<setw(12)<<c[i].GetScore()<<endl;
}
//*************
void student::set(vector<student> &c){
    student a;
    string s;
    double b;
    while(1)
    {
        cout <<"学号:";
        cin >>s;
        if( s=="0")
        {
            ofstream wst ("stud.txt");
            if(!wst)
            {
                cout <<"没有正确建立文件！"<< endl;
                return ;
            }
            for( int i=0;i<c.size();i++)
            wst <<c[i].number<<" "<<c[i].score<<"";
            wst.close();
            cout <<"一共写入"<<c.size()<<"个学生的信息。\n";
            return ;
        }
        a.SetNum(s);
        cout <<"成绩:";
        cin >> b;
        a.Setscore(b);
        c.push_back(a);
    }
}
//**************************
void student::read()
{
    string number;
    double score;
    ifstream rst("stud.txt");
    if(!rst)
    {
        cout << "文件打不开\n"<< endl;
        return ;
    }
    cout << "学号"<<setw(20)<<"成绩"<<endl;
    while(1)
    {
        rst >> number >> score;
        if(rst.eof()){
        rst.close();
        return;
        }
    cout << number << setw(12)<<score<< endl; //显示一条信息
}
}
//**********************
// main函数
int main(){
vector<student> st;
student stud;
stud.set(st);
cout << "显示向量数量信息如下：\n";
stud.display(st);
cout << "存入文件内的信息如下:" <<endl;
stud.read();
}













































































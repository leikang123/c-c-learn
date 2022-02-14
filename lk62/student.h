//
// Created by 雷康 on 30/9/2021.
//
#if !defined(STUDENT_H)
#define  STUDENT_H
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include  <fstream>
#ifndef LK62_STUDENT_H
#define LK62_STUDENT_H

#endif //LK62_STUDENT_H
using namespace std;
class student{
    string number;
    double score;
    public :
        void SetNum(string s){
            number=s;
        }
        void Setscore( double s){
            score =s;
        }
        double GetScore(){
            return score;
        }
        string GetNum(){
            return number;
        }
        void set(vector <student> &);
        void display(vector <student> &);
        void read();
};
#endif


#include<string>
#include<iostream>
#include<conio.h>
using namespace std;

class std_rec
{
      char sr_no[15];
      char name[30];
      float icp;
      float scd;
      float edc;
      float maths;
      float dml;
      float csl;
      string semgrade;
      
      public:
             void input();
             void output();
             void calc();
};

void std_rec :: input()
{
     cout<<"\n\n ENTER MARKS OF ICP : "; 
     cin>>icp;
     cout<<"\n\n ENTER MARKS OF SCD : ";
     cin>>scd;
     cout<<"\n\n ENTER MARKS OF EDC : ";
     cin>>edc;
     cout<<"\n\n ENTER MARKS OF MATHS : "; 
     cin>>maths;
     cout<<"\n\n ENTER MARKS OF DML : ";
     cin>>dml;
     cout<<"\n\n ENTER MARKS OF CSL : ";
     cin>>csl;           
}

void std_rec :: output()
{
     cout<<"\n\n THE SEMESTER GRADE IS : "<<semgrade;
}

void std_rec :: calc()
{
     float p;
     p=(icp+edc+scd+maths+dml+csl)/60;
     if(p>9)
      semgrade="A+";
     else if(p>8)
      semgrade="A";
     else if(p>7)
      semgrade="B+";
     else if(p>6)
      semgrade="B";
     else if(p>5)
      semgrade="C";
     else if(p>4)
      semgrade="D";
     else semgrade="F";
     
}                            
            
            
int main()
{
    std_rec s;
    s.input();
    s.calc();
    s.output();
    getch();
    return 0;
}  

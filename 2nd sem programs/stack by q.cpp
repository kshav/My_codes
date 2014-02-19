#include<iostream>
#include<conio.h>
using namespace std;
int q1[100], q2[100];
int f1=0,r1=0,f2=0,r2=0;
void insert()
{
             cout<<"enter the value\n";
             cin>>q1[r1];
             r1++;
}
void print()
{
     int p;
     p = r1-1;
     while(p != f1-1)
     {
             cout<<q1[p];
             p--;
     }
}
void del()
{
     f1=f2=r2=0;
     while(f1 != r1-1)
     {
              q2[r2]=q1[f1];
              r2++;
              f1++;
     }
     q1[f1]=q2[r2]=0;
     r1--;
     f1=0;
}
int main()
{
    int i;
    for(i=0;i<5;i++)
    insert();
    cout<<endl<<"the stack is:\n";
    print();
    cout<<endl;
    cout<<"1 number is deleted\n";
    del();
    cout<<"the stack is\n";
    print();
getch();
return 0;
}
             
    

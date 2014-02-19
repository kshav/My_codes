#include<iostream>
#include<conio.h>
using namespace std; 
struct stud
{
       int info;
       stud *ptr;
};
int main()
{
    stud a;
    cout<<&a;
    cout<<"\n"<<&a.info;
    cout<<"\n"<<&a.ptr;
    cout<<"\n"<<a.ptr;
    getch();
    return 0;
}
       

#include<iostream>
#include<conio.h>
using namespace std;
class human
{
     float age,salary;
      public:
             human(float x, float y);
            void display();
            void get();
};
human::human(float x,float y)
{
     age=x;
     salary=y;
}
void human::display()
{
     cout<<"\nAge: "<<age;
     cout<<"\nSalary: "<<salary;
}
void human::get()
{
     cout<<"\nEnter new Age: ";
     cin>>age;
     cout<<"\nEnter new Salary: ";
     cin>>salary;
}
  
int main()
{
    char c;
    human father(40,20000);
    human mother(36,16000);
    cout<<"Intially:\n\n";
    cout<<"Father:-\t";
    father.display();
    cout<<"\n\nMother:-\t";
    mother.display();
    cout<<"\n\nDo You Want to manipulate the data?(y/n): ";
    cin>>c;
    while(c=='y')
    {
               cout<<"\nFather:-\n";
               father.get();
               cout<<"\n\nMother:-\n";
               mother.get();
               cout<<"\nThe new data is:\n";
               cout<<"\nFather:-\t";
               father.display();
               cout<<"\n\nMother:-\t";
               mother.display();
               cout<<"\n\nDo you want to do any more manipultion?(y/n): ";
               cin>>c;
    }
    return 0;
}
     
             

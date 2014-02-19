#include<string> 
#include<iostream>
#include<conio.h>
using namespace std;

class student
{            
     float marks[3];
     string srno;
     public:
            void input()
            {
                 cout<<"\n\n ENTER SR. NO. OF STUDENT : ";
                 cin>>srno;
                 cout<<"\n\n ENTER MARKS OF STUDENT : ";
                 for(int j=0;j<3;j++)
                  cin>>marks[j];
            }
            void match(string n)
            {
                 if (srno==n)
                 {
                    cout<<"\n\n DETAILS OF THE STUDENT WITH THE ABOVE SR. NO. IS : "<<srno;
                    for(int j=0;j<3;j++)
                    cout<<"\t"<<marks[j];
                 }
            }          
};


int main()
{ 
    student s[3];
    string n;
    int i;
    for(i=0;i<3;i++)
       s[i].input();
    cout<<"\n\n ENTER SR. NO. OF THE STUDENT WHOSE DETAILS YOU WANT TO KNOW : ";
    cin>>n;
    for(i=0;i<3;i++)
       s[i].match(n);    
    getch();
    return 0;
}  

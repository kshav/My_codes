#include<string> 
#include<iostream>
#include<conio.h>
using namespace std;

int s=0;
class poll
{
   string Q;
   int yes, no,p;
   public:
          poll()
          {
                Q="\n\n DO YOU THINK HOMEWORK SHOULD BE GIVEN IN SCHOOLS ? ";
                yes=0;
                no=0;
          }
               
          void vote()
          { 
               if(p!=1)
               { char ans;
                 cout<<Q;
                 cout<<"\n\n ENTER YOUR ANSWER : ";
                 cin>>ans;  
                 if(ans=='y')
                  yes++;
                 else
                  no++;
               }
               else
                  {
                       cout<<"\n\n THE RESULT IS ALREADY OUT \n THE POLLING IS OVER!!";
                       :: s=1;
                  }     
          }   
          
          void result()
          {   
               cout<<"\n\n ON THE BASIS OF THE POLLING THE RESULT IS: \n YES : "<<yes<<" \n NO : "<<no;
               p=1;
          }     
               
               
};


int main()
{
    poll pol;
    char ch='y',r;
    while(ch=='y' && s!=1)
    {
     pol.vote();
     cout<<"\n\n DO YOU WANT TO SEE THE RESULT ? ";
     cin>>r;
     if(r=='y')
      pol.result();
     cout<<"\n\n FOR VOTING PRESS y : " ;
     cin>>ch;
    }
    getch();
    return 0;
}  

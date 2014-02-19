#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    srand(0);
    int a,b,c,guess,t=0;
    cin>>a>>b;
    do{
    c= rand()%b;
    }while(c<a);
    while(t==0)
    {
         do{      
         guess=rand()%b;
         }while(guess<a);
         cout<<"You: "<<guess<<"\n";
         fflush(stdout);
         if(guess<c)
         {
              cout<<"Bob: LOW\n";
              fflush(stdout);
              a=guess;
         }
         else if(guess>c)      
         {
                   cout<<"Bob: HIGH\n";
                   fflush(stdout);
                   b=guess;
         }
         else
         {
             cout<<"Bob: WIN\n";
             fflush(stdout);
             break;
         }
    }          
   
    return 0;
}

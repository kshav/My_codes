#include<iostream>
#include<conio.h>
using namespace std;
int stack[10];
int top=-1;

void push(int a)
{
     if(top>9)
     cout<<"\n STACK IS FULL!!! " ;
     else
     {
         top++;
         stack[top]=a;
     }
}

void pop()
{
     if(top<0)
      cout<<"\n STACK IS EMPTY!! ";
     else
     {
         cout<<endl<<stack[top]<<" HAS BEEN POPPED.. ";
         top--;
     }        
}

void display()
{
     if(top<0)
      cout<<"\n STACK IS EMPTY!! ";
     else
     {
         cout<<"\n STACK ELEMENTS ARE : \n";
         for(int i=0;i<=top;i++)
         {
                 cout<<stack[i]<< " " ;
         }
     }
}

int main()
{
    char ch='y';
    int a;
    cout<<"\n ENTER ELEMENTS FOR THE STACK : ";
    while(ch=='y')
    {
                cout<<"\n ENTER ELEMENT : ";
                cin>>a;
                push(a);
                cout<<"\n DO YOU WANT TO ENTER MORE ELEMENTS ? : ";
                cin>>ch;
    }
    
    cout<<"\n DO YOU WANT TO POP ELEMENTS OUT OF STACK ? ";
    cin>>ch;
    while(ch=='y')
    {
                  pop();
                  cout<<"\n DO YOU WANT TO POP ANOTHER ELEMENT OUT OF STACK ? ";
                  cin>>ch;
    }
    display();
    getch();
    return 0;
}
                

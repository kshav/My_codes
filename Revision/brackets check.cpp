#include<iostream>
#include<conio.h>
using namespace std;

int a[10];
int top;
 
void push(char p)
{
     top=top+1;
     a[top]=p;
}

void pop()
{
   if(top==-1)
   cout<<"Stack is empty";
   else
   top--;
}  

int main()
{
    int p;
    top=-1;
    int k;
    char a[20];
    cout<<"Enter any expression\n";
    cin>>a;
    k=strlen(a);
    for(int i=0;i<k;i++)
    {
        if(a[i]=='{'||a[i]=='['||a[i]=='(')
        push(a[i]);
        else if(a[i]=='}'||a[i]==']'||a[i]==')')
        pop();
    }
    p=top;
    if(p=0)
    cout<<"Expression is correct\n";
    else if(p>0)
    cout<<"Expression has less no of ending brackets\n";
    getch();
    return 0;
}
    



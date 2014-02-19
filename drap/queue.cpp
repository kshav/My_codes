#include<iostream>
#include<conio.h>
#include<process.h>
using namespace std;
int front=-1,rear=-1,res;
const int size=30;
int push(int a[],int item)
{ if(rear==size-1)
   return -1;
  else if(rear==-1)
  { front=rear=0;
    a[front]=item;
    return 0;
  }
  else
  {  rear++;
     a[rear]=item;
     return 0;
  }
}
void print(int a[])
{   for(int i=front;i<rear;i++)
     cout<<a[i]<<"<-";
    cout<<a[rear];
}
int pop(int a[])
{    int temp=a[front];
     front++;
     return temp;
}
void pop_n_push(int a[],int b[],int c[])
{   int i=0,save;
    while(front!=rear)
    { save=pop(queue1);
      b[i]=save;
      i++;
    }
}
    
int main()
{ int queue1[size],queue2[size],stack[size],info;
  char ch='y';
  while(ch=='y'||ch=='Y')
  {  cout<<"enter info";
     cin>>info;
     res=push(queue1,info);
     if(res==-1)
      exit(1);
     else
      print(queue1);
     cout<<endl<<"do u want to enter more?";
     cin>>ch;
  }
  getch();
  return 0;
} 
        
  
     
     

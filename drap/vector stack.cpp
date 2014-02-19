#include<iostream>
#include<conio.h>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    vector<int>::iterator pos;
    char ch;
    do
    {
         int n,a;
    cout<<"1.enter the element\n2.delete the record\n3.display\n";
    cout<<"enter your choice\n";
    cin>>n;
    switch(n)
    {
    case 1:
         {
          cout<<"\n enter the element you want to enter ";
          cin>>a;
          v.push_back(a);
          break;
         }
    case 2:
         {
         if(v.size()==0)
         cout<<"\n no popping is allowed";
         else
          v.pop_back();
          break;
         }
    case 3:
         {
         if(v.size()==0)
         cout<<"\n no element is there";
         else
         {
          for(pos=v.end()-1;pos!=v.begin()-1;pos--)
          cout<<"\n"<<*pos;
         }
          break;
         }
         
    }
    cout<<"\ndo you want to continue again";
    cin>>ch;
    }while(ch=='y');
    getch();
    return 0;
}

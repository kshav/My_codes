#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
    char ch[100];
    for(int i=-1;ch[i]!='endl';i=i)
    {
    i++;
    cin>>ch[i];
    cout<<ch[i];
   }
    getch();
    return 0;
}
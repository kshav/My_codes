#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char a;
    cout<<"Enter the Character:\t";
    cin>>a;
    if(a>='a'&&a<='z')
    cout<<"\nThe entered Character is in Lower Case";
    else if(a>='A'&&a<='Z')
    cout<<"\nThe entered Character is in Upper Case";
    else
    cout<<"\nThe entered Character is  a Special Symbol";
    getch();
    return 0;
}

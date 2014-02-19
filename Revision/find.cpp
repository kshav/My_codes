#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    size_t i=a.find_last_of("an",0);
    cout<<i;
    getch();
    return 0;
}
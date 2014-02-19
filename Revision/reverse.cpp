#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

int main()
{
    int n;
    char a[20];
    cout<<"Enter any word\n";
    cin.getline(a,20);
    n=strlen(a);
    char b[n];
    for(int i=0;i<n;i++)
    {
        b[i]=a[n-1-i];
        cout<<b[i];
    }
    getch();
    return 0;
}            
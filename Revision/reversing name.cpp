#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

int main()
{
    int b;
    char a[40];
    cout<<"Enter any word\n";
    cin.getline(a,40);
    b=strlen(a);
    char c[b];
    for (int i=0;i<b;i++)
    {
        c[i]=a[b-1-i];
        cout<<c[i];
    }      
    getch();
    return 0;
}
    

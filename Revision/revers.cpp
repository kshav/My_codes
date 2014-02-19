#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;


int main()
{

    int k;    

    cout<<"How many words do you want to enter\n";
    cin>>k; 
        char a[k][20];
    cout<<"Enter any word\n";
    for( int i=0;i<k;i++)
    {
         int h;
    cin>>a[i];
    h=strlen(a[i]);
    char b[h];
    for (int j=0;j<h;j++)
    {
    b[j]=a[i][h-1-j];
    cout<<b[j];
    }
    cout<<" ";
}
   /* int g;
    g=strlen(b);
    char *q;
    for (int i=g-1;i>=0;i--)
    {
    q=&b[i];
    cout<<*q;
    }*/

    getch();
    return 0;
}




















    




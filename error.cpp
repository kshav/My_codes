#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
   
   // freopen("Err.txt","w",stdout);
    double  c =189;
    int t=1000;
    double a,b;
    while(t--)
    {
        a=log (c);
        b=exp(a);
        c=b;
    }
    cout<<c<<"\n";
    getch();
    return 0;
}

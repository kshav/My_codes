#include<iostream>
#include<conio.h>
using namespace std;

//#pragma pack(push,1)
struct details
{
       char ch;
       int a;
       char s;
};
//#pragma pack(pop)


int main()
{
    details d;
    cout<<sizeof (d);
    
    /*cin>>d.ch;
    cin>>d.a;
    cin>>d.s;
    cout<<sizeof(d.ch);
    cout<<sizeof(d.a);
    cout<<sizeof(d.s);*/
    getch();
    return 0;
}

#include<iostream>
#include<conio.h>
#include<cmath>
#include<string.h>
#include<iomanip.h>
using namespace std;
ostream&show(ostream&output)
{
        output.setf(ios::right);
        output.setf(ios::showpos);
        output.setf(ios::internal,ios::adjustfield);
        output.setf(ios::scientific,ios::floatfield);
        output.width(10);
        return output;
        }
int main()
{
    cout<<show<<324.34<<"\n";
    cout<<setw(20)<<1323;
    cout<<"\n"<<show<<2332.4343<<"\n"<<show<<"adderewee";
    getch();
    return 0;
}

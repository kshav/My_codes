#include<iostream>
using namespace std;

int main()
{
    int d,m;
    cout<<"                 This program gives the day of any date for year 2011                        \n\n";
    cout<<"Enter the date (in two digits)\n";
    cin>>d;
    cout<<"Enter the month (in two digits)\n";
    cin>>m;
    switch(m)
    {
    case 01:
    {m=5;
     break;}
    case 02:
   { m=1;
  break;}
    case 03:
    {
    m=1;
    break;}
    case 04:{
    m=6;
    break;}
    case 05:{
    m=4;
    break;}
    case 06:{
    m=2;
    break;}
    case 07:{
    m=4;
    break;}
    case 8:{
         
    m=0;
    break;}
    case 9:{
    m=3;
    break;}
    case 10:{
    m=5;
    break;}
    case 11:{
         
    m=1;
    break;}
    case 12:{
    m=3;
   break;}
    }
    d=d+m;
    d=d%7;
    switch(d)
    {
    case 0:{
    cout<<"Day is sunday\n";
    break;}
    case 1:{
    cout<<"Day is monday\n";
    break;}
    case 2:{
    cout<<"Day is tuesday\n";
    break;}
    case 3:{
    cout<<"Day is wednesday\n";
    break;}
    case 4:{
    cout<<"Day is thursday\n";
    break;}
    case 5:{
    cout<<"Day is friday\n";
    
    break;}case 6:{
    cout<<"Day is saturday\n";
   break;}
    }
    system("pause");
    return 0;
}               

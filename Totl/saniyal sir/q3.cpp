#include<iostream>
#include<conio.h>
#include<fstream>
#include<math.h>
using namespace std;
int main()
{
  int c,i,d=0,e=0,count=0,j,k;
  long double x[50],mean,sum=0,n=0;
  srand(time(0));
  ofstream fout[50];
  char s[]="fil.txt";
  for(i=0;i<50;i++)
   {
    s[1]=i/10+48;
    s[2]=i%10+48;
    fout[i].open(s,ios::app); //open file in append mode
   }
 for(i=0;i<=100;i++)
  {
   c=rand()%1000;    //random generation
   d=(c/20)/10;
   e=(c/20)%10;
   s[1]=d+48;
   s[2]=e+48;
   fout[10*d+e]<<c<<"\n";
  }
  for(i=0;i<50;i++)
  fout[i].close();
  ifstream fin[i];
  e=0;             //histogram formation
  for(i=0;i<50;i++)
  {  
    e+=20;
    count=0;
    s[1]=i/10+48;
    s[2]=i%10+48;
    fin[i].open(s,ios::out);
    fin[i].seekg(0,ios::beg);
  while(fin[i])
   {
    fin[i]>>c;
    count++;
   }
   x[i]=count-1;
   sum+=(e-10)*count;
   cout<<"\t"<<e;
   if(e<100)
   cout<<"     ";
   else if(e==1000)
   cout<<"   ";
   else
   cout<<"    ";
   cout<<char(179);
   for(j=0;j<count-1;j++)
   cout<<"*";
   cout<<"\n";
   for(k=0;k<2;k++)
   {
    cout<<"\t       "<<char(179);
    for(j=0;j<count-1;j++)
    cout<<"*";
    cout<<"\n";
   }
  cout<<"\t       "<<char(179)<<"\n";
  cout<<"\t       "<<char(179)<<"\n";
 }  
  mean=sum/100;                 //finding mean
  sum=0;
  e=10;
  for(i=0;i<50;i++)
   {
   sum=sum+pow((e-mean),2)*x[i];
   e+=20;
   }
 sum=sqrt(sum/100);
 cout<<"\n\nstandard deviation is "<<sum;
 getch();                                
 return 0;
}
 

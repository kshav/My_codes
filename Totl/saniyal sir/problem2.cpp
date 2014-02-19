#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
 ifstream fin;
 fin.open("random.txt",ios::out);//open file in output mode
 fin.seekg(0,ios::beg);     //set the cursor at first position
 int count=0,flag=1,c,a[20]={0},median=0,mode;
 float n=0;
 float sum;
 while(fin)      //read number from file
 {
   fin>>c;
   sum+=c;
   a[c]++;
   n++;
 }
 sum=sum-c;            
 n--;
 a[c]--;
 float mean=0;
 if(n==0)
 cout<<"no data is there";
 else
 {
 mean=(sum/n);    //mean 
 int small=a[0],pos=0;
 for(int i=0;i<=19;i++)     //loop to fond median and mode
  {
   count+=a[i];
   if(count>=float(n/2)&&flag==1)
   {
     median=i;           //median
     flag=0;
   }
  if(small<a[i])
   {
     pos=i;
     small=a[i];
   }
  }
 mode=pos;
 cout<<"mean : "<<mean<<"\nmedian : "<<median<<"\nmode : "<<mode;
 }
 getch();
 return 0;
}

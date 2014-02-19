#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
 int s,n,j=0,count=0;
 srand(time(0));
 cout<<"enter how many no.s you want ";
 cin>>n;
 cout<<"enter the sequence you want to select ";
 cin>>s;
 int a[s+1],sd=n-s+1;
 a[j]=0;
 for(int i=0;i<n;i++)
 {
  int c=rand()%100;    //random no. generator
  cout<<c<<"\n";
  if(c>a[j])         //check if number is in incresing order
   {
    a[++j]=c;
    if(j==s)
    {
     count++;
     for(int k=1;k<s;k++)
      a[k]=a[k+1];    //transferring elements from k to k-1 in array a
     j--;
    }
   }
   else            
   {
    j=0;
    a[++j]=c;
   }
 }
 cout<<count<<" "<<sd;;
 cout<<"\ngraph deviates from it's actual increasing graph is "<<100-((count*100)/sd)<<"%";   //tell how much it resembles to actual graph
 getch();
 return 0;
}
 

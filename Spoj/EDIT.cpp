#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char a[1001];
    int l,check,count=0,count1;
    while(scanf("%s",&a)!=EOF)
    {
       l=strlen(a);
       count=0;
       count1=0;
       for(int i=0;i<l;i++)
       {       if(i%2==0){
               if(a[i]>=65 && a[i]<=90);
               else 
               count++; }
               else{
                   if(a[i]>=97 && a[i]<=122);
                   else 
                   count++;
                   }
                   
                if(i%2==0){ 
                   if(a[i]>=97 && a[i]<=122);
                   else 
                   count1++;  } 
               else{if(a[i]>=65 && a[i]<=90);
               else 
               count1++;}                       
       }                  
      if(count<count1)
       cout<<count<<"\n";
       else
       cout<<count1<<"\n";
                         
    }
    //system("pause");
    return 0;
}

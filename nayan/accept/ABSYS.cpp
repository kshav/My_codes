#include<iostream>
#include<string.h>
using namespace std;
int fun(char a[])
{
 int i,sum=0;
 for(i=0;i<strlen(a);i++)
 sum=sum*10+(a[i]-48);
 return sum;
}    
int main()
{
    int test,pos1,pos2,pos3,c,e;
   scanf("%d",&test);
   cout<<"\n";
    char n1[50],n2,n3[50],n4,n5[50],d[10]="machula";
    while(test--)
    {
       cin>>n1>>n2>>n3>>n4>>n5;
       if(strstr(n1,d))
       {
        c=fun(n3);
        e=fun(n5);
        cout<<e-c<<" "<<n2<<" "<<n3<<" "<<n4<<" "<<n5<<"\n\n";
       }
       else if(strstr(n3,d))
       {
        c=fun(n1);
        e=fun(n5);
        cout<<n1<<" "<<n2<<" "<<e-c<<" "<<n4<<" "<<n5<<"\n\n";
        }
        else
        {
        c=fun(n1);
        e=fun(n3);
        cout<<n1<<" "<<n2<<" "<<n3<<" "<<n4<<" "<<c+e<<"\n\n";
        } 
    }  
    system("pause");
} 
         
        

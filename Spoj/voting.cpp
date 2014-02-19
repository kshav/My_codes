#include<iostream>
using namespace std;

int main()
{
    int a,b,c,count=0,d,l;
    scanf("%d%d%d",&a,&b,&c);
    int s[a+b+c],p[a+b+c];
    l=a+b+c;
    for(int i=0;i<l;i++)
    scanf("%d",&s[i]);
     cout<<"\n\n";
    sort(s,s+l);
  
    d=s[0];
    int j=0,e=s[1];
    if(d==e)
    {count++;
     p[j]=d;
     j++;
    }
    for(int i=2;i<(a+b+c);i++)
    {
            if(s[i]==e && e!=d)
            {count++;
             p[j]=s[i];
             j++;
            }
            d=e;
            e=s[i];
    }
    cout<<"\n\n";
    cout<<count<<"\n";
    for(int i=0;i<count;i++)
    cout<<p[i]<<"\n"; 
    //system("pause");
    return 0;
}

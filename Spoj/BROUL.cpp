#include<iostream>
using namespace std;

int main()
{
    int t=0;
    long long int a,b,c,d;
    while(t==0)
    {
        cin>>a>>b>>c;
        if(a==0 && b==0 && c==0)
        break;
        if(c>a)
        c=c-a;
        else
        c=a-c;
        if(c%b!=0)
        cout<<"No accounting tablet\n";
        else 
        {
             c=c/b;
             d=c%3;
             c=c/3;
             if(d==0)
             cout<<c<<"\n";
             else
             cout<<c+1<<"\n";
        }
    }
    //system("pause");
    return 0;
}
                   

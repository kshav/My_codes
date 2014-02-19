#include<iostream>
using namespace std;

int main()
{
    int a,b,c,t=0;
    while(t==0)
    {
        scanf("%d",&a);
        scanf("%d",&b);
        scanf("%d",&c);
        if(a==b && b==c && c==0)
        break;
        if(b-a == c-b)
        cout<<"AP "<<c+(c-b)<<"\n";
        else if(b/a ==c/b)
        cout<<"GP "<<c*(c/b)<<"\n";
    
    }
     system("pause");
     return 0;
}       

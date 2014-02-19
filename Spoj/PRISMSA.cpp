#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n,t=0;
    long long int v;
    double s,a,b,c;
    scanf("%d",&n);
    while(t!=n)
    {
         cin>>v;
         a=2.0/3;
         b= sqrt(3.0);
         c= pow(4*v,a);
         s=(3*b*c)/2;
         printf("%.10f\n",s); 
         t++;
    }
    system("pause");
    return 0;
}     

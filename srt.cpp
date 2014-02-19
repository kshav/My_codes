#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int test,flag=0;
    scanf("%d",&test);
    long long int d,b,i,g;
    float f;
    while(test--)
    {
                 flag=0;
                 scanf("%lld",&d);
                 if(d%4==1)
                 printf("YES\n");
                 else if(d==2)
                  printf("YES\n");
                  else
                 printf("NO\n");
                
    }
    return 0;
}
                                 
                                 
                 

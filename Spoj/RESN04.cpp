#include<iostream>
using namespace std;

int main()
{
    int n,m,j,a,b;
    scanf("%d",&n);
    int i=0;
    while(i<n)
    {      b=0;
           scanf("%d",&m);
           
            j=0;
            while(j<m)
            {
                  scanf("%d",&a);
                  a=a/(j+1);
                  b=b+a;
                  j++;           
            }
            if(b%2==0)
            printf("BOB\n");
            else
            printf("ALICE\n");
      i++;   
    }
    
    return 0;
}
                   

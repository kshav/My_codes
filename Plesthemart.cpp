#include<iostream>
using namespace std;

int main()
{
    int n,k,sum=0,c;
    scanf("%d%d",&n,&k);
    for(int i=0;i<n-k;i++)
    {scanf("%d",&c);
     sum+=(-1)*c;
    }
    for(int i=n-k;i<n;i++)
    {scanf("%d",&c);
     sum+=c;
    }
    printf("%d",sum);
    //system("pause");
    return 0;
}
    
    

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    char a;
    float k,s;
    while(scanf("%d",&n)!=EOF)
    {
        k=(sqrt(1+8*n)-1)/2;
        s=int(k);
        if(k>s)
        s=s+1;
        s=int (s)%26;
        a=s+64;
        cout<<"TERM "<<n<<" IS "<<a<<"\n"; 
        
    }    
    system("pause");
    return 0;
}                  

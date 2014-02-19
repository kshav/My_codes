#include<iostream>
using namespace std;

int main()
{
        int n,t=0;
        long long int k;
        scanf("%d",&n);
        while(t<n)
        {
           cin>>k;
           if(k%2==0)
           k= k/2 +1;
           else
           k= (k+1)/2 +1;
           cout<<k<<"\n";
           t++;
        }
        //system("pause");
        return 0;
}
                 

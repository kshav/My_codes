#include<iostream>
using namespace std;

int main()
{
    int t,k=0;
    long long int n,l;
    scanf("%d",&t);
    while(k<t)
    {
      scanf("%lld",&n);
      long long int a[n];
      for(int i=0;i<n;i++)
      scanf("%lld",&a[i]);
    
     int maj_index = 0, count = 1;
     int i;
     for(i = 1; i <n; i++)
     {
        if(a[maj_index] == a[i])
            count++;
        else
            count--;
        if(count == 0)
        {
            maj_index = i;
            count = 1;
        }
     }
     l=a[maj_index];
     count=0;
     for(i=0;i<n;i++)
     {
          if(a[i]==l)
          count++;
     }
     if(count>n/2)
     printf("YES %lld\n",l);
     else
     printf("NO\n");
     k++;
    }
   // system("pause");
    return 0;
}           

         



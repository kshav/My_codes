#include<vector>
#include<algorithm>
#include<iostream>
using namespace std ;
main()
{
 	    long long int t,n,k1,k2,c,ans,k,i;
 	    vector<long long int>a,b;
		k1=k2=c=ans=0;
		int test;
		scanf("%d",&test);
		while(test--)
		{
        scanf("%lld",&n);	
		for(i=0;i<n;i++)
        {
        scanf("%lld",&k1);
        a.push_back(k1);
        scanf("%lld",&k1);
        b.push_back(k1);
        }
		sort(a.begin(),a.end());
  		sort(b.begin(),b.end());
  		k1=k2=c=ans=0,k=0;
  		while(k1<n&&k2<n)
  		{
         if(a[k2]<b[k1])
         {
         c++;
         if(c>ans)
         ans=c;
         k2++;
         }
         else{
         k1++;c--;}
         }
         printf("%lld\n",ans);
 	}
	return 0;
}

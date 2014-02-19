#include<stdio.h>
main()
{
      long long int a[6],sum=0;
      int count=1,cn=0;
      while(scanf("%llu%llu%llu%llu%llu%llu",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5])!=EOF)
      {
      sum=0;cn=0;
      if(a[0]!=0){
      sum+=(a[3]-1)*1200+a[0];cn++;}
      if(a[1]!=0){
      sum+=(a[4]-1)*1200+a[1];cn++;}
      if(a[2]!=0){
      sum+=(a[5]-1)*1200+a[2];cn++;}
      printf("team %d: %d, %llu\n",count,cn,sum);
      count++;
      }
}
      

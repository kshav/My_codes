#include<iostream>
using namespace std;

int main()
{
    int n,i=0,sa=0,sb=0,sc=0,sum=0,temp;
    cin>>n;
    while(i<n)
    {
      string a;
      cin>>a;
      if(a=="1/4")
      sa++;
      else if(a=="1/2")
      sb++;
      else if(a=="3/4")
      sc++;
      i++;
    }
    if(sc>=sa)
    {
        if(sb%2==0)
        sum=sc+sb/2+1;
        else
        sum=sc+(sb-1)/2+2;
    }
    else
    {
      sa=sa-sc;
      if(sa<=sb)
      {
         if(sa%2==0)
         temp=sa/2;
         else
         temp=(sa-1)/2+1;
         sb=sb-temp;
         if(sb%2==0)
         sum=sc+temp+sb/2+1;
         else
         sum=sc+temp+(sb-1)/2+2;
      }
      else
      {
          if(sa>=2*sb)
         {  sa=sa-2*sb;
            if(sa>1 && sa%4!=0)
            sa=sa/4+1;
            if(sa>1 && sa%4==0)
            sa=sa/4;
            sum=sc+sb+sa+1;
         }
         else
         {
             if(sa%2==0)
             temp=sb-sa/2;
             else
             temp=sb-(sa-1)/2-1;
             if((sb-temp)%2==0)
             sb=(sb-temp)/2;
             else
             sb=(sb-temp-1)/2;
             sum=sc+temp+sb+1;
         }
      }
    }
    cout<<sum<<"\n";
                  

    return 0;
}    

#include<iostream>
using namespace std;

int main()
{
    int n,t,k=0;
    cin>>n;
    long long int number[n],value[n];
    for(int i=0;i<n;i++)
    cin>>number[i]>>value[i];
    for(int i=0;i<n-1;i++)
    {
        for(int j=i;j<n;j++)
        {
                if(value[j]<value[i])
                {
                 swap(value[j],value[i]);
                 swap(number[j],number[i]);
                }
                else if(value[j]==value[i] && number[j]<number[i])
                swap(number[j],number[i]);
        }
    }
    cin>>t;
    long long arr[t],sum=0,factor=1;
    for(int i=0;i<t;i++)
    cin>>arr[i];
    int i=0,diff=arr[0];
    k=0;
    while( k<t && i<n)
    {
      if(number[i]<diff)
      {sum+=number[i]*value[i]*factor;
        diff=diff-number[i];
        i++;
      }
      else if(number[i]==diff)
      {sum+=number[i]*value[i]*factor;
       i++;
       diff=(arr[k+1]-arr[k]);
       k++;
       factor++;
       
      }
      else if(number[i]>diff)
      {
          sum+=diff*value[i]*factor;
          number[i]=number[i]-diff;
          diff=(arr[k+1]-arr[k]);
          factor++;
          k++;
          
      }
    }
    cout<<sum;
    //system("pause");
    return 0;
} 
            
                    
              

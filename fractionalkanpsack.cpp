#include<iostream>
using namespace std;

int main()
{
    int n,capacity,sum=0,t=0;
    cout<<"No. of items: ";
    cin>>n;
    cout<<"Enter capacity: ";
    cin>>capacity;
    int weight[n],value[n];
    float wbyv[n],a;
    for(int i=0;i<n;i++)
    {
      cout<<"Enter "<<i+1<<"item weight: ";
      cin>>weight[i];
      cout<<"Enter "<<i+1<<" item value: ";
      cin>>value[i];
      a=weight[i]/1.0;
      wbyv[i]=value[i]/a;
    }
    for(int i=0;i<n-1;i++)
    {
            for(int j=i+1;j<n;j++)
            {
                    if(wbyv[i]<wbyv[j])
                    {swap(wbyv[i],wbyv[j]);
                    swap(weight[i],weight[j]);
                    swap(value[i],value[j]);
                    }
                     
            }
    } 
    int i=0;  
    while(t==0)
    {  // cout<<"HI";
         if(weight[i]<capacity)
         {sum+=value[i];
          capacity-=weight[i];}
         else
         {
             sum+=(value[i]*capacity)/weight[i];
             break;
         }
         i++;
        // cout<<sum<<" ";
    }
    cout<<"Max value is: "<<sum;
     
               
    // for(int i=0;i<n;i++)
   // cout<<wbyv[i]<<" "<<weight[i]<<" "<<value[i]<<" \n";
    system("pause");
    return 0;
}  

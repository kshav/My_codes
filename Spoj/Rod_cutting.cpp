// Rod cutting dp from Cormen

#include<iostream>
using namespace std;

int bottom_up_cut_rod(int price[11],int num,int revenue[11],int s[11])
{   int q;
    for(int i=0;i<=num;i++)
    {
        q=-100;    
        for(int j=0;j<=i;j++)
        if(q<price[j]+revenue[i-j])
        {q=price[j]+revenue[i-j];
         s[i]=j;}
        revenue[i]=q;
    }
    return revenue[num];
}

int main()
{
   // int length[10]={1,2,3,4,5,6,7,8,9,10};
    int price[11]={0,1,5,8,9,10,17,17,20,24,30};
    int revenue[11],s[11];
    for(int i=0;i<10;i++)
    revenue[i]=0;
    int num;
    cout<<"Enter the length for which you want optimum value : ";
    cin>>num;
    cout<<"\n";
    //num=num-1;
    int k=bottom_up_cut_rod(price,num,revenue,s);
    cout<<"Revenue is: "<<k;
    cout<<"\n";
    cout<<"Pieces : ";
    while(num>0)
    {
       cout<<s[num]<<" ";
       num=num-s[num];
    }
    system("Pause");
    return 0;
}

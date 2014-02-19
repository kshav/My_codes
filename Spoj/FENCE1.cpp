#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int t=0,l,k;
    float r=0,s;
    while(t==0)
    {
        cin>>l;
        if(l==0)
        break;
        else{
        r=l/1.0;
        r=(r*l*7)/(2*22);
        }
        //cout<<r<<"\n";
        //printf("%.4f\n",r);
        s=r*1000;
        //cout<<s<<"\n";
        k= int(s);
        k=k%10;
        //cout<<k<<"\n";
         if(k>=5){
        // r=setprecision(2);
        printf("%.2f\n",r);
   }      else
        printf("%.2f\n",r); 
    }
    //system("pause");
    return 0;
}



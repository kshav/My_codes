#include<iostream>
using namespace std;
int main()
{
    int t=0,n;
    cin>>n;
    while(t<n)
    {
    string a;
    float m;
    cin>>m;
    cin>>a;
    cout<<t+1<<" ";
    if(a=="kg")
    printf("%.4f lb",m*2.2046);
    else if(a=="l")
    printf("%.4f g",m*0.2642);
    else if(a=="lb")
    printf("%.4f kg",m*0.4536);
    else
    printf("%.4f l",m*3.7854);
    cout<<"\n";
    t++;
    }
    system("pause");
    return 0;
}

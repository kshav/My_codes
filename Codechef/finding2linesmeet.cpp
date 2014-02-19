#include<iostream>
using namespace std;
int main()
{
    int test;
    cin>>test;
    double a[4][2];
    int i,j,flagx=0,flagy=0,flagx1=0,flagy1=0;
    double m1,m2,c1,c2,x,y;
    while(test--)
    {
    flagx=0;flagy=0;flagx1=0;flagy1=0;
    for(i=0;i<4;i++)
    for(j=0;j<2;j++)
    cin>>a[i][j];
    if((a[1][0]==a[0][0])&&(a[2][0]==a[3][0]))
    cout<<"no";
    else if((a[1][1]==a[0][1])&&a[2][1]==a[3][1])
    cout<<"no";
    else
    {
        if((a[1][0]==a[0][0])&&(a[3][1]==a[2][1]))
        {
        x=a[1][0];
        y=a[3][1];
       }
       else if((a[1][1]==a[0][1])&&a[3][0]==a[2][0])
       {
        x=a[2][0];
        y=a[1][1];
        }
            
       
        else if(a[1][0]==a[0][0])
    {
         m2=(a[3][1]-a[2][1])/(a[3][0]-a[2][0]);
         c2=a[2][1]-m2*(a[2][0]);
         x=a[1][0];
         y=m2*x+c2;
    }
    else if(a[2][0]==a[3][0])
    {
        m1=(a[1][1]-a[0][1])/(a[1][0]-a[0][0]);
        c1=a[0][1]-m1*(a[0][0]);
         x=a[3][0];
         y=m1*x+c1;
    }
    else if(a[0][1]==a[1][1])
    {
       m2=(a[3][1]-a[2][1])/(a[3][0]-a[2][0]);
         c2=a[2][1]-m2*(a[2][0]);
         y=a[1][1];
         x=(y-c2)/m2;
    }
    else if(a[2][1]==a[3][1])
    {
       m1=(a[1][1]-a[0][1])/(a[1][0]-a[0][0]);
        c1=a[0][1]-m1*(a[0][0]);
         y=a[2][1];
         x=(y-c1)/m1;
    }
    else
    {
    m1=(a[1][1]-a[0][1])/(a[1][0]-a[0][0]);
    m2=(a[3][1]-a[2][1])/(a[3][0]-a[2][0]);
    c1=a[0][1]-m1*(a[0][0]);
    c2=a[2][1]-m2*(a[2][0]);x=(c2-c1)/(m1-m2);
    y=m1*x+c1;}
    {
   if(a[0][0]>=a[1][0]){
   if(a[0][0]<=x&&a[1][0]>=x)flagx=1;}
   
   else if(a[0][0]<a[1][0]){
   if(a[0][0]<=x&&a[1][0]>=x)flagx=1;}
   
   if(a[0][1]<a[1][1]){
   if(a[0][1]<=y&&a[1][1]>=y)flagy=1;}
   
   else if(a[0][1]>=a[1][1]){
   if(a[0][1]<=y&&a[1][1]>=y)flagy=1;}
   
    if(a[2][0]>=a[3][0]){
    if(a[2][0]<=x&&a[2][0]>=x)flagx1=1;}
    
    else if(a[2][0]<a[3][0]){
    if(a[2][0]<=x&&a[3][0]>=x)flagx1=1;}
    
   if(a[2][1]<a[3][1]){
   if(a[2][1]<=y&&a[3][1]>=y)flagy1=1;}
   
   else if(a[2][1]>=a[3][1]){
   if(a[2][1]>=y&&a[3][1]<=y)flagy1=1;}}
   if(flagx==1&&flagy==1&&flagx1==1&&flagy1==1)
   cout<<"yes";
   else cout<<"no";
   }
   cout<<"\n";
   }
   return 0;
}
    
    
    
    
    
    
    

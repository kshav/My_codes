#include<iostream>
using namespace std;
#include<math.h>
 
int main()
{
int t;
double a,b,c,d,e,f;
double V,S,r,s1,s2,s3,s4;
scanf("%d",&t);
while (t--)
{
scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f);
V = sqrt(4.0*a*a*b*b*c*c - a*a*(b*b+c*c-f*f)*(b*b+c*c-f*f) - b*b*(c*c+a*a-e*e)*(c*c+a*a-e*e) - c*c*(a*a+b*b-d*d)*(a*a+b*b-d*d) + (b*b+c*c-f*f)*(c*c+a*a-e*e)*(a*a+b*b-d*d))/12.0 ;
s1=(a+b+d)/2.0;
s2=(b+c+f)/2.0;
s3=(e+f+d)/2.0;
s4=(a+c+e)/2.0;
S=sqrt(s1*(s1-a)*(s1-b)*(s1-d));
S+=sqrt(s2*(s2-b)*(s2-c)*(s2-f));
S+=sqrt(s3*(s3-e)*(s3-f)*(s3-d));
S+=sqrt(s4*(s4-a)*(s4-c)*(s4-e));
r=(3.0*V)/S;
printf("%.4lf\n",r);
}
} 

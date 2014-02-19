#include<stdio.h>
void multiply(long long int F[2][2], long long int M[2][2]);

void power(long long int F[2][2], long long int n);
long long int mod=1000000007;

/* function that returns nth Fibonacci number */
long long int fib(long long int n)
{
long long int F[2][2] = {{2,3},{1,0}};
if(n == 0)
return 0;
power(F, n-3);
return F[0][0];
}

/* Optimized version of power() in method 4 */
void power(long long int F[2][2],long long int n)
{
if( n == 0 || n == 1)
return;
long long int M[2][2] = {{2,3},{1,0}};

power(F, n/2);
multiply(F, F);

if( n%2 != 0 )
multiply(F, M);
}

void multiply(long long int F[2][2],long long int M[2][2])
{

long long int x = ((F[0][0]%mod)*(M[0][0]%mod) + (F[0][1]%mod)*(M[1][0]%mod))%mod;
long long int y = ((F[0][0]%mod)*(M[0][1]%mod) + (F[0][1]%mod)*(M[1][1]%mod))%mod;
long long int z = ((F[1][0]%mod)*(M[0][0]%mod) + (F[1][1]%mod)*(M[1][0]%mod))%mod;
long long int w = ((F[1][0]%mod)*(M[0][1]%mod) + (F[1][1]%mod)*(M[1][1]%mod))%mod;

F[0][0] = x;
F[0][1] = y;
F[1][0] = z;
F[1][1] = w;
}
int main()
{
int t,i,j,k;
long long int n,a1,a2,a3;
scanf("%d",&t);
while(t--)
{
a1=a2=a3=0;
scanf("%lld",&n);
if(n==2)
printf("12\n");
else if(n==3)
printf("24\n");
else
{
printf("%lld\n",(fib(n+1)%mod)*12);
}
}
return 0;
}

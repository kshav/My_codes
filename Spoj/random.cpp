#include<iostream>
using namespace std;
void f(int n){
   printf("%d\n",n);
   if(n<101)
   f(n+1);
}

int main(){
   f(1);
   system("pause");
}

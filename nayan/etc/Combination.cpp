#include <stdio.h>
#include<iostream>
unsigned long long choose(unsigned long long int n, unsigned long long int k) {
    if (k > n) {
        return 0;
    }
    unsigned long long int r = 1, d;
    for ( d = 1; d <= k; ++d) {
        r *= n --;
        r /= d;
    }
    return r;
}
main(){
unsigned long long int n, m, ans;
	scanf("%llu%llu",&n,&m);
	ans = choose(n,m);
	printf("%llu\n",ans);
	system("pause");
	return 0;
	} 

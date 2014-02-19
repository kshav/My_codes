#include <stdio.h>

const int mod = 1000000007;
int n;
long long D[4][2];
int cur;
int i;

int main() {

  scanf("%d", &n);
  
  if (n == 1) {
    printf("0\n");
    return 0;
  }
  
  D[0][0] = 1;
  D[1][0] = 1;
  D[2][0] = 1;
  D[3][0] = 0;
  
  cur = 0;
  for (i = 2; i <= n; i++) {
    D[0][1-cur] = (D[1][cur] + D[2][cur] + D[3][cur]) % mod;
    D[1][1-cur] = (D[0][cur] + D[2][cur] + D[3][cur]) % mod;
    D[2][1-cur] = (D[0][cur] + D[1][cur] + D[3][cur]) % mod;
    D[3][1-cur] = (D[0][cur] + D[1][cur] + D[2][cur]) % mod;
    cur = 1 - cur;
  }
  
  printf("%I64d\n", D[3][cur]);
  return 0;

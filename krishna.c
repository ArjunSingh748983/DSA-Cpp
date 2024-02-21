#include <stdio.h>
#include <stdbool.h>
bool isPrime(int n){
for(int i=2;i<n;i++) if(n%i==0) return false;
    return true;
}
int main() {
    int n,i;
    scanf("%d",&n);
    for(i=2;i<=n;i++) if(isPrime(i)) printf("%d ",i);
    return 0;
}
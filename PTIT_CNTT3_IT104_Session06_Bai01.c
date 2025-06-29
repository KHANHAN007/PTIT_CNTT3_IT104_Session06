#include <stdio.h>

void intToBinary(int n) {
    if (n==0)
        return;
    intToBinary(n/2);
    printf("%d", n%2);
}
int main(){
    int n;
    scanf("%d",&n);
    intToBinary(n);
}
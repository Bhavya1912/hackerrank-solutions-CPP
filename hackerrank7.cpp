#include <stdio.h>
#include <cstdio>
#include <cstdlib>
#include <math.h>

void update(int *a,int *b) {
    int sum = *a + *b;
    *a=*a+*b;
    *b=abs(*a-(2**b));
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);


    return 0;
}

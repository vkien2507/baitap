#include <stdio.h>

int sum; main() {
    int a, b, c, sum;
    printf(" diem toan") ;
    scanf("%d", &a);
    printf(" diem van");
    scanf("%d", &b);
    printf(" diem anh");
    scanf("%d", &c);
    sum = a * b + c;
    printf("Diem : %d", sum);
    printf("Diem >42 la do");
    printf("Diem <42 la truot");

    return 0;
}
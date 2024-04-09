#include <stdio.h>
int k()
//int main()
{
    int r, d, s, c, pi;
    pi = 3.14;
    printf("Nhap ban kinh: ");
    scanf("%d", &r);
    printf("Nhap duong kinh: ");
    scanf("%d", &d);
    c = d*pi;
    s = r*r*pi;
    printf("chu vi hinh tron la: %d\n", c);
    printf("Dien tich hinh tron la: %d\n", s);
    return 0;

}
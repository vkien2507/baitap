#include <stdio.h>

//int sum_main() {
int main() {
    int a, b, c , m;
    printf("Enter the point math: ");
    scanf("%d", &a);
    printf("Enter the point literature: ");
    scanf("%d", &b);
    printf("Enter the point english: ");
    scanf("%d", &c);
    m = a * 2 + b * 2 + c ;
    printf("The sum is:\n %d" , m);
    if (m >=42){
        printf("Do");
    }
    else{
        printf("Truot");
    }
    return 0;
}


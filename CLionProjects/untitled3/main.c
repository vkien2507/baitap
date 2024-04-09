#include <stdio.h>
//int h()
int main(){
    int a, b, c, sum;
    printf(" diem toan") ;
    scanf("%d", &a);
    printf(" diem van");
    scanf("%d", &b);
    printf(" diem anh");
    scanf("%d", &c);
    sum = a * b + c ;
    printf("the sum is: %d\n", sum);
    if (sum >=42){
        printf("DO");
    }
    else{
           printf("TRUOT");
    };

    return 0;
}


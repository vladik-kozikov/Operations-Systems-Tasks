#include <stdio.h>

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
};

int main(int argc, char *argv[]){
    int a;
    int b;
    int temp;

    printf("Print two numbers: \n");
    scanf("%d",&a);
    scanf("%d",&b);

    swap(&a,&b);

    printf("%d %d", a, b);
}

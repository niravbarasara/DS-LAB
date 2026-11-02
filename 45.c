// WAP to allocate and de-allocate memory for int, char and float variable at runtime. 

#include<stdio.h>
#include<stdlib.h>

void main(){
    int *a;
    char *b;
    float *c;

    a = (int *) malloc(sizeof(int));
    b = (char *) malloc(sizeof(char));
    c = (float *) malloc(sizeof(float));

    printf("Enter int:");
    scanf("%d",a);

    printf("Enter char:");
    scanf(" %c",b);

    printf("Enter float:");
    scanf("%f",c);

    printf("\n int:%d , char:%c , float:%f",*a,*b,*c);

    free(a);
    free(b);
    free(c);
}

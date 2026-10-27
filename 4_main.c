//202610422125
//林轩宇
#include<stdio.h>
int main(void)
{
    double a;
    scanf("%lf", &a);
    if(90<=a && a<=100)
    {
        printf("A\n");
    }
    else if(80<=a && a<=89.99)
    {
        printf("B\n");
    }
    else if(70<=a && a<=79.99)
    {
        printf("C\n");
    }
    else if(60<=a && a<=69.99)
    {
        printf("D\n");
    }
    else if(0<=a && a<=59.99)
    {
        printf("E\n");
    }
    else
    {
        printf("输入无效\n");
    }
    return 0;
}

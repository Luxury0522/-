//202610422125
//林轩宇
#include<stdio.h>
int main(void)
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if(a+b>c, a+c>b, b+c>a)
    {
        printf("可以构成三角形\n");
    }
    else
    {
        printf("不能构成三角形\n");
    }
    
    return 0;
}

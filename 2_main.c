//202610422125
//林轩宇
#include <stdio.h>

int main(void)
{
    float a;

    if (scanf("%f", &a) != 1)
    {
        printf("输入格式错误\n");
        return 1;
    }

    if (a > 0)
    {
        printf("正数\n");
    }
    else if (a < 0)
    {
        printf("负数\n");
    }
    else
    {
        printf("零\n");
    }

    return 0;
}

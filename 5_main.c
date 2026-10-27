//202610422125
//林轩宇
#include<stdio.h>
int main(void)
{
    double a,b;
    char op;
    if(scanf("%lf %c %lf",&a,&op,&b)!=3)
    {
        printf("输入错误\n");
        return 1;
    }
    if (op=='+')
    {
        printf("%.2lf\n",a+b);
    }
    else if(op=='-')
    {
        printf("%.2lf\n",a-b);
    }
    else if(op=='*')
    {
        printf("%.2lf\n",a*b);
    }
    else if(op=='/')
    {
        if(b==0)
        {
            printf("错误：除数不能为 0\n");
            return 1;
        }
        printf("%.2lf\n",a/b);
    }
    else
    {
        printf("错误：不支持运算符\n");
        return 1;
    }
    return 0;
}

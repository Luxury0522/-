//202610422125
//林轩宇
#include <stdio.h>

int main(void)
{
    float celsius, fahrenheit;
    scanf("%f", &celsius);
    fahrenheit = celsius * 9.0 / 5.0 + 32.0;
    printf("华氏温度 = %.1f\n", fahrenheit);
    return 0;
}

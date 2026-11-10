/*вариант 10*/
#include <stdio.h>
#include <math.h>

double calc(double a, double b)
{
    return exp(a) + log(b); 
}

int main(void)
{
    double a, b;

    printf("Введите пары чисел a b (для выхода введите не число):\n");
    while (scanf("%lf %lf", &a, &b) == 2) {
        if (b <= 0.0) {
            printf("Ошибка: ln(b) определен только при b > 0\n");
            continue;
        }
        printf("Результат: %.4f\n", calc(a, b));
    }

    /*
     * Пояснение: тип double выбран вместо float, потому что стандартные
     * функции exp() и log() возвращают double, а double дает около 15-16
     * значащих цифр против 6-7 у float. Для e^a значения быстро растут, и
     * float терял бы точность или переполнялся. Оператор return завершает
     * выполнение функции, передает управление обратно в точку вызова и
     * подставляет вычисленное значение вместо выражения calc(a, b).
     */
    return 0;
}

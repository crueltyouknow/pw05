/*вариант 18*/
#include <stdio.h>
#include <math.h>

int main(void)
{
    const double A = 0.0;
    const double B = 5.0;
    const double H = 0.5;
    const double EPS = 1e-9;
    int n = 1;
    double x;

    printf("%-10s %-12s %-12s\n", "Iter", "X", "Y");
    for (x = A; x <= B + EPS; x += H) {
        printf("%-10d %-12.4f %-12.4f\n", n, x, exp(-x));
        n++;
    }
    return 0;
}

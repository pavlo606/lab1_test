#include <stdio.h>
#include <math.h>

#define degToRad(angleInRadians) ((angleInRadians) * M_PI / 180.0)

int main() {
    double x = 0.0; //12.394
    double y = 0.0; // 7.139
    double result = 0.0;

    printf("Enter x, y:");
    scanf("%lf %lf", &x, &y);

    result = sqrt(tan(degToRad(x))) + pow(x + y, log(x));

    printf("result = %lf", result);

    return 0;
}
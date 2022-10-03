#include<stdio.h>
#include<math.h>


float task_11(float x, float y, float z) {
    float result; 
    result = pow(y, cbrt(fabs(x))) + pow(cos(y), 3) * (fabs(x - y) * (1 + (pow(sin(z), 2)) / (sqrt(x + y)))) / (exp(fabs(x - y)) + x / 2);
    if (result <= 0 || result >= 0) {
        printf("Result: %.4lf\n", result);
    } else {
        printf("Result: <function is undefined>");
    }
}


int main() {
    float x;
    float y;
    float z;
    printf("Enter x: ");
    scanf("%f", &x);
    printf("Enter y: ");
    scanf("%f", &y);
    printf("Enter z: ");
    scanf("%f", &z);
    task_11(x, y ,z);
}
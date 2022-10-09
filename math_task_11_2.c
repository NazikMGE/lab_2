#include<stdio.h>
#include<math.h>






int main() {
    float z, result, x;
    scanf("%f", &z);
    if (z > 0) {
        x = (1) / (pow(z, 2) + 2 * z);
        result = (2.5 * exp(-3 * x) - 4 * pow(x, 2)) / (log(fabs(x)) + x);
        if (result >= 0 || result <= 0) {
            printf("%f", result);
        } else {
            printf("Result: <function is undefined>\n");
        }
    } else if (z < 0) {
        x = 1 - pow(z, 3); 
        result = (2.5 * exp(-3 * x) - 4 * pow(x, 2)) / (log(fabs(x)) + x);
        if (result >= 0 || result <= 0) {
            printf("%f", result);
        } else {
            printf("Result: <function is undefined>\n");
        }
    }
}
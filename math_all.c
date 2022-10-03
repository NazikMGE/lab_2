#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<fenv.h>
#include <float.h>


float task_1(float x, float y, float z) {
    float t;
    t = (2 * cos(x - M_PI / 6)) / (0.5 + pow(sin(y), 2)) * (1 + (pow(z,2))/(3 - pow(z,2)/5));
    printf("task_1 = %.6lf\n", t);
}

float task_2(float x, float y, float z) {
    float t;
    t = ((cbrt(8 + pow(fabs(x - y), 2) + 1)) / (pow(x, 2) + pow(y, 2) + 2)) - exp(fabs(x - y)) * (pow(pow(tan(z), 2) + 1 , x));
    printf("task_2 = %.6lf\n", t);
}

float task_3(float x, float y, float z) {
    float t;
    t = (1 + pow(sin(x + y), 2)) / fabs(x - (2 * y) / (1 + pow(x, 2) * pow(y,2))) * pow(x, fabs(y)) + pow(cos(atan(1/z)), 2);
    printf("task_3 = %.6lf\n", t);
}

float task_4(float x, float y, float z) {
    float t;
    t = pow((fabs(cos(x) - cos(y))), ((1 + 2 * pow(sin(y), 2)) / x)) * (1 + z + (pow(z,2) / 2) + (pow(z,3) / 3) + (pow(z,4) / 4));
    printf("task_4 = %.6lf\n", t);
}

float task_5(float x, float y, float z) {
    float t;
    t = log(pow(y, -(sqrt(fabs(x))))) * (x - y / 2) + pow(sin(atan(z)), 2);
    printf("task_5 = %.6lf\n", t);
}

float task_6(float x, float y, float z) {
    float t; 
    t = sqrt(10 * (cbrt(x) + pow(x, y + 2))) * (pow(asin(z), 2) - fabs(x - y));
    printf("task_6 = %.6lf\n", t);
}

float task_7(float x, float y, float z) {
    float t; 
    t = 5 * atan(x) - (0.25) * acos(x) * (x + 3 * fabs(x - y) + pow(x,2)) / (fabs(x - y) * z + pow(x,2)) ;
    printf("task_7 = %.6lf\n", t);
}

float task_8(float x, float y, float z) {
    float t;
    t = (exp(fabs(x - y))* pow(fabs(x - y), x + y)) / (atan(x) + atan(z)) + cbrt(pow(x,6) + pow(log(y), 2)); 
    printf("task_8 = %.6lf\n", t);
}

float task_9(float x, float y, float z) {
    float t;
    t = fabs(pow(x, y/x) - cbrt(y/x)) + (y - x) * (cos(y) - z / (y - x)) / (1 + pow(y - x, 2));
    printf("task_9 = %.4lf\n", t); 
}

float task_10(float x, float y, float z) {
    float t; 
    t = pow(2, -x) * sqrt(x + pow(fabs(y), 0.25)) * cbrt(exp(x - 1 / sin(z)));
    printf("task_10 = %.4lf\n", t);
}

float task_11(float x, float y, float z) {
    float t; 
    t = pow(y, cbrt(fabs(x))) + pow(cos(y), 3) * (fabs(x - y) * (1 + (pow(sin(z), 2)) / (sqrt(x + y)))) / (exp(fabs(x - y)) + x / 2); 
    printf("task_11 = %.4lf\n", t);
}

float task_12(float x, float y, float z) {
    float t;
    t = pow(2, pow(y, x)) + pow(pow(3,x), y) - (y  * (atan(z) - M_PI / 6)) / (fabs(x) + (1) / (pow(y,2) + 1) );
    printf("task_12 = %.4lf\n", t);
}

float task_13(float x, float y, float z) {
    float t; 
    t = (pow(y + cbrt(x - 1), 0.25)) / (fabs(x - y) * (pow(sin(z), 2) + tan(z))); 
    printf("task_13 = %.4lf\n", t);
}

float task_14(float x, float y, float z) {
    float t;
    t = (pow(y, x + 1 )) / (cbrt(fabs(y - 2)) + 3) + (x + y / 2 ) / (2 * fabs(x + y)) * (pow(x+1, -1/sin(z))); 
    printf("task_ 14 = %.4lf\n", t);
}

float task_15(float x, float y, float z) {
    float t;
    t = (pow(x, y + 1) + exp(y - 1)) / (1 + x * fabs(y - tan(z))) * (1 + fabs(y - x)) + (pow(fabs(y - x), 2)) / (2) - (pow(fabs(x - y), 3)) / (3);
    printf("task_15 = %.4lf\n", t);
}

float task_16(float x, float y, float z) {
    float t;
    t = cbrt(pow(x, 6) + pow(log(y), 2)) + (exp(fabs(x - y)) * pow(fabs(x - y), x + y)) / (atan(x) + atan(z));
    printf("task_16 = %.4lf\n", t);
}

int main() {
    printf("---------------------------\n");
    task_1(14.26, -1.22, 3.5 * pow(10,-2));
    printf("---------------------------\n");
    task_2(-4.5, 0.75 * pow(10,-4), 0.845 * pow(10, 2));
    printf("---------------------------\n");
    task_3(3.74 * pow(10, -2), -0.825, 0.16 * pow(10,2));
    printf("---------------------------\n");
    task_4(0.4 * pow(10, 4), -0.875, -0.475 * pow(10, -3));
    printf("---------------------------\n");
    task_5(-15.246, 4.642 * pow(10, -2), 20.001 * pow(10, 2));
    printf("---------------------------\n");
    task_6(16.55 * pow(10, -3), -2.75, 0.15);
    printf("---------------------------\n");
    task_7(0.1722, 6.33, 3.25 * pow(10, -4));
    printf("---------------------------\n");
    task_8(-2.235 * pow(10,-2), 2.23, 15.221);
    printf("---------------------------\n");
    task_9(1.825 * pow(10,2), 18.225, -3.298 * pow(10,-2));
    printf("---------------------------\n");
    task_10(3.981 * pow(10, -2), -1.625 * pow(10, 3), 0.512);
    printf("---------------------------\n");
    task_11(6.251, 0.827, 25.001);
    printf("---------------------------\n");
    task_12(3.251, 0.325, 0.466 * pow(10, -4)); 
    printf("---------------------------\n");
    task_13(17.421, 10.365 * pow(10, -3), 0.828 * pow(10, 5));
    printf("---------------------------\n");
    task_14(12.3 * pow(10, -1), 15.4, 0.252 * pow(10, 3));
    printf("---------------------------\n");
    task_15(2.444, 0.869 * pow(10, -2), -0.13 * pow(10, 3));
    printf("---------------------------\n");
    task_16(-2.235 * pow(10, -2), 2.23, 15.221);
    printf("---------------------------\n");
}

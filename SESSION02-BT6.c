#include<stdio.h>
#include<math.h>
const float pi = 3.14;
int main(){
    float radius = 5, CV, S;
    CV = 2* pi* radius;
    S = pi*pow(radius,2);
    printf ("chu vi cua hinh tron la: %.2f\n" , CV);
    printf ("dien tich cua hinh tron la: %.2f\n" , S);
}
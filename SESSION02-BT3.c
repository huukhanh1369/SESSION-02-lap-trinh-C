#include<stdio.h>
int main(){
    int  a= 8, b=4;
    int tong = a + b; 
    int hieu = a - b;
    int tich = a * b;
    int thuong = a / b;
    printf("%d + %d = %d\n",a,b, tong);
    printf("%d - %d = %d\n",a,b, hieu);
    printf("%d * %d = %d\n",a,b, tich);
    printf("%d / %d = %d\n",a,b, thuong);
}
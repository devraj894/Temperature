#include<stdio.h>

float celsiusF(float celsius);

int main(){
  float far=celsiusF(0);

    printf("Fahrenheit is : %f",far);

    return 0;
}

float celsiusF(float celsius){
    int far=(celsius*9/5)+32;
    return far;
}
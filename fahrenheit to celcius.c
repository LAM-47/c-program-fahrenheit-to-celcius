#include<stdio.h>
int main (){
    float celcius, fahrenheit;
    printf("Enter fahrenheit temperature: ");
    scanf("%f",&fahrenheit);
    celcius=(fahrenheit-32)*5/9;
    printf("Celcius temperature %.2f",celcius);
    return 0;

}

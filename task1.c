#include <stdio.h>
int main(){
    float temp;

    printf("Enter Temprature in Celcuis: ");
    scanf("%f",&temp);

    if (temp<15)
    {
        printf("Cold");
    }
    else if (temp>=15 && temp<=30)
    {
        printf("Normal");
    }
    else
    {
        printf("Hot");
    }
    
    return 0;
}

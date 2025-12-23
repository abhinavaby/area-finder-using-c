#include <stdio.h>
void temp(int c);
int main(){
    float c;
    printf("enter the temp in celcius: ");
    scanf("%f",&c);
    temp(c);
    return 0;


}
void temp(int c){
    float f=(c*(9/5))+32;
    printf("temp in farhenheat: %f",f);

}

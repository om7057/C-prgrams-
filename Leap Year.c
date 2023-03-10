#include<stdio.h>
int main(){
    int year;
    printf("Enter a year to be checked:");
    scanf("%d",&year);
    if(year%400==0){
        printf("LEAP");
    }
    else if(year%100==0){
        printf("NOT LEAP");
    }
    else if(year%4==0){
        printf("LEAP");
    }
    else{
        printf("NOT LEAP");
    }
    return 0;

}
#include<stdio.h>

int main(){
    int marks;
    printf("Enter marks:");
    scanf("%d",&marks);

    // if(marks >= 0 && marks <= 30){
    //     printf("fail");
    // }else if(marks > 30 && marks <= 100){
    //     printf("pass");
    // } else {
    //     printf("invalid marks");
    // }

    marks <= 30 ? printf("fail\n"): printf("pass\n");

    return 0;
}
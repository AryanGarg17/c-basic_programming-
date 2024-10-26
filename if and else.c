#include<stdio.h>

int main() {
    int age;
    printf("Enter age:");
    scanf("%d",&age);

    if(age > 18){
        printf("adult\n");
        printf("can vote\n");
    }
    else{
        printf("not adult");
    }

return 0;

}
// *,/,% they have high priority
// +,- they have 2 priority
// = is the assignment operater]

#include<stdio.h>
int main(){
    int a = 4 + 9 * 10;
    printf("%d\n",a);
    int b = 4 * 3 / 6 * 9;
    printf("%d\n",b);
    return 0;
}

// ! > "*,/,% " > " +,- " >"<,<=,>,>=" > "==,!= "> " &&" > "||" > "=" this id order of precedence in c
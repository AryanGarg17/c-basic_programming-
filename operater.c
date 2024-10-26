// relational operater
// we use "==" to check wether the value of and b is equal or not
// the other operater are >,>=,<,<=, !=
// meaning of "!=" is not equal to 

// logical operater
// "&&" it is AND which mean to prove both statement true
// for "||" it is OR which means if one of the statement is true then it is true 
// for "!" it reverse the output if statementis true it convert that to false and if statementis false it reverse it to true 
#include<stdio.h>

int main(){
    printf("%d\n", 4>3 && 7>4);
    printf("%d\n", 4>3 || 2>4);
    printf("%d\n",!(5>4) );
    return 0;
}

// assignment operater
// "=" it assign the rigt side value to left side value
// "=+" means a=a+b and we can do it for "-=,*=,/=,%="
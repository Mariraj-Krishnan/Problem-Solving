/*
Form a number system with only 3 and 4. Find the nth number of the number system.
Eg.) The numbers are: 3, 4, 33, 34, 43, 44, 333, 334, 343, 344, 433, 434, 443, 444, 3333, 3334, 
3343, 3344, 3433, 3434, 3443, 3444 ….
*/
#include <stdio.h>
int main(){
    int num,
        digits=0,
        numArray[] ={3,4},
        base=1,
        result=0,
        resultBase=1,
        remaining=0;
    printf("Enter the position: ");
    scanf("%d",&num);
    int temp=num;
    while(num-base>=0){
            digits++;
            num-=base;
            base*=2;
    }
    for(int i=0; i<digits; i++){
        remaining = num%2;
        num/=2;
        result+=numArray[remaining]*resultBase;
        resultBase*=10; 
    }
    printf("The %d number in the sequence is %d",temp,result);
}
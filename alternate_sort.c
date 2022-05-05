/*
Alternate sorting: Given an array of integers, rearrange the array in such a way that the first 
element is first maximum and second element is first minimum. 
 Eg. Input : {1, 2, 3, 4, 5, 6, 7}
 Output : {7, 1, 6, 2, 5, 3, 4} 
 */

#include <stdio.h>
int main(){
int number[] = {1,5,62,4,7,9};
int count = sizeof(number)/sizeof(number[0]);
for(int i=0; i<count; i++){
    for(int j=i+1; j<count; j++){
        int temp;
        if(number[j]>number[i]){
            temp = number[i];
            number[i] = number[j];
            number[j] = temp;
        }
    }
}
for(int i=1; i<count; i=i+2){
        int temp = number[count-1];
        for(int j=count-1; j>i; j--){
            number[j]=number[j-1];
        }
        number[i]=temp;
}

for(int i=0; i<count; i++){
    printf("%d,",number[i]);
}



}

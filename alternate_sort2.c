/*
Alternate sort in unsorted array
( no extra space)
Sample Input 1
9
23 7 8 30 18 12 6 28 16
Sample Output 1
23 7 18 12 16 28 8 30 6
*/
#include<stdio.h>

int main(){

int array[] = {23,7,8,30,18,12,6,28,16};

int size = sizeof(array)/sizeof(int);

for(int i=0; i<size; i=i+2){
    for(int j=i+2; j<size; j=j+2){
            int temp;
            if(array[i]<array[j]){
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }if(array[j+1]&&array[i+1]>array[j+1]){
                temp=array[i+1];
                array[i+1]=array[j+1];
                array[j+1]=temp;
            }
    }
}
for(int i=0; i<size; i++){
    printf("%d,",array[i]);
}

}

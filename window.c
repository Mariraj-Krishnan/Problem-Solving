/*Given an array of numbers and a window of size k. Print the maximum of numbers inside the 
window for each step as the window moves from the beginning of the array.
Input Format
Input contains the array size , no of elements and the window size
Output Format
print the maximum of numbers
Constraints
1 <= size <= 1000
Sample Input 1
8
1 3 5 2 1 8 6 9
3
Sample Output 1
5 5 5 8 8 9*/

#include <stdio.h>
int main(){
 int n, numArray[100],windowSize;
 printf("Enter the count of numbers: ");
 scanf("%d",&n);
 for(int i=0; i<n; i++){
    printf("Enter the number %d: ",i+1);
    scanf("%d",&numArray[i]);
 }
 printf("Enter the window size: ");
 scanf("%d",&windowSize);
 for(int i=0; i<n-windowSize+1; i++){
     int max=numArray[i];
     for(int j=1; j<windowSize; j++){
        if(max < numArray[i+j]) max = numArray[i+j];
     }
    printf("%d ",max);
 }
}

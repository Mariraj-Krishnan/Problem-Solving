/*
Given a set of numbers like <10, 36, 54,89,12> we want to find sum of weights based on the 
following conditions
1. 5 if a perfect square
2. 4 if multiple of 4 and divisible by 6
3. 3 if even number
And sort the numbers based on the weight and print it as follows
<10,its_weight>,<36,its weight><89,its weight>
*/
#include<stdio.h>
int main(){
 int n, a[100],weightArray[100];
 int temp1,temp2;
 printf("Enter the count of numbers : ");
 scanf("%d",&n);

 for(int i=0; i<n; i++){
    int weight=0;
    scanf("%d",&a[i]);
    for(int j=1; j<a[i]; j++){
        if(a[i]==j*j)weight+=5;
    }
    if(a[i]%4==0&&a[i]%6==0){
        weight+=4;
    }
    if(a[i]%2==0){
        weight+=3;
    }
    weightArray[i]=weight;
}

for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
    if(weightArray[i]>weightArray[j]){
        temp2 = a[i];
        temp1 = weightArray[i];
        a[i]=a[j];
        weightArray[i]=weightArray[j];
        a[j]=temp2;
        weightArray[j]=temp1;
    }
    }
}

printf("\n");
for(int i=0; i<n; i++){
    printf("%d Weight is %d\n",a[i],weightArray[i]);
}

}

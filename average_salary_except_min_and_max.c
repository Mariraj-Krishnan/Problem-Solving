#include <stdio.h>
double average(double *salary, int salarySize){
    double minSalary = salary[0];
    double maxSalary=minSalary;
    double sum=0;
    for(int i=0; i<salarySize; i++){
        sum=sum+salary[i];
        if(minSalary>salary[i]) minSalary=salary[i];
        if(maxSalary<salary[i]) maxSalary= salary[i];
    }
    return (sum-minSalary-maxSalary)/(salarySize-2);
}
int main(){
    int n;
    double salary[100];
    printf("Enter the count of the salaries: ");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        printf("Enter the salary %d: ",i+1);
        scanf("%lf",&salary[i]);
    }
    printf("The average salary excluding maximum and minimum salary is %lf",average(salary,n));;
}
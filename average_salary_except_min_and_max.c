double average(int* salary, int salarySize){
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
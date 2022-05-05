#include <stdio.h>
#include <string.h>
int main(){
    //program to print a string with odd number of letters in a specific pattern given below
    //P     M
    // R   A
    //  O R
    //   G
    //  O R
    // R   A
    //P     M
char str[100];
printf("enter the string : ");
scanf("%s",&str);
for(int i=0; i<strlen(str); i++){
    for(int j=0; j<strlen(str); j++){
        if(i==j||j==strlen(str)-1-i){
            printf("%c",str[j]);
        }
        else printf(" ");
    }
    printf("\n");
}
return 0;
}

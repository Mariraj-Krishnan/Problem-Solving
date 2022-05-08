/*Given a two dimensional array we have to print array elements in spiral order
first start from left to right
then top to bottom
then right to left
again left to right
untill are elements are printed
*/
#include <stdio.h>
int main(){
    int arr[5][5]={{1,2,3,4,5},
                   {6,7,8,9,10},
                   {11,12,13,14,15},
                   {16,17,18,19,20},
                   {21,22,23,24,25}};
    int t=0,b=4,l=0,r=4,d=0;
    while(t<=b&&l<=r){
        if(d==0){
            for(int i=l; i<=r; i++){
                printf("%d ",arr[t][i]);
            }
            d=1;
            t++;
        }

        if(d==1){
            for(int i=t; i<=b; i++){
                printf("%d ",arr[i][r]);
            }
            d=2;
            r--;
        }

        if(d==2){
            for(int i=r; i>=l; i--){
                printf("%d ",arr[b][i]);
            }
            d=3;
            b--;
        }
        
        if(d==3){
            for(int i=b; i>=t; i--){
                printf("%d ",arr[i][l]);
            }
            d=0;
            l++;
        }
    }

}
/* Save the string “WELCOMETOZOHOCORPORATION” in a two dimensional array and search 
for substring like “too” in the two dimensional string both from left to right and from top to bottom.
W E L C O
M E T O Z
O H O C O
R P O R A
T I O N
And print the start and ending index as
Start index : <1,2>
End index: <3, 2> */
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    int n, count = 0;
    char string[100], stringArray[20][5], word[5];

    printf("Enter the length of the string: ");
    scanf("%d",&n);

    printf("Enter the string: ");
    scanf("%s",string);

    printf("Enter the word to find the index: ");
    scanf("%s",word);

    for(int i=0; i<n; i++){
      if(word[i]&&word[i]>=97) word[i]-=32;
      if(string[i]>=97) string[i]-=32;
        stringArray[i/5][i%5] = string[i];
    }

    for (int i = 0; i < n; i++) {
    if (word[0] == stringArray[i/5][(i%5)]) {
      for (int k = 0; k < strlen(word); k++) {
        if (
          stringArray[i/5][(i%5) + k] &&
          word[count] == stringArray[i/5][(i%5) + k]
        ) {
          count++;
          if (count == strlen(word)) {
            printf("<%d,%d>\n<%d,%d>\n",i/5,(i%5),i/5,(i%5)+count-1);
            count = 0;
          }
        } else {
          count = 0;
          break;
        }
      }
    }

    //for top to bottom
    if (count == 0 && word[0] == stringArray[(i%5)][i/5]) {
      for (int k = 0; k < strlen(word); k++) {
        if (
          stringArray[(i%5) + k] &&
          word[count] == stringArray[(i%5) + k][i/5]
        ) {
          count++;
          if (count == strlen(word)) {
            printf("<%d,%d>\n<%d,%d>\n",(i%5),i/5,(i%5)+count-1,i/5);
            count = 0;
          }
        } else {
          count = 0;
          break;
        }
      }
    }
}
}
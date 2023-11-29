#include <stdio.h>
#include <string.h>
int main(){
	int i,j;
    char str[100];
    int count = 0;
    int max = 0;
    scanf("%s", str);
    int size = strlen(str);
    for (i = 0; i < size; i++){
        count = 1;
        for (j = i + 1; j < size; j++){
            if (str[i] != str[j]){
                count++;
            }
            else{
                if (count >= max){
                    max = count;
                    count = 0;
                }
             } 
         }  
    }
    printf("%d", max);
}

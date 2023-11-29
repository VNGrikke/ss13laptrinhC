#include <stdio.h>
#include <string.h>

int check(char s1, char s2[100]){
    int i;
	for (i = 0; i < strlen(s2); i++){
        if (s2[i] == s1){
            return 0;
        }
    }
}
int main(){
	int i,j;
    char str[100];
    gets(str);
    char strn[100];
    int len = strlen(str);
    int i1 = 0;
    int arr[100];
    for (i = 0; i < len; i++){
            if (check(str[i], strn) == 1){
                strn[i1] = str[i];
                i1++;
            }
    }
    for (i = 0; i < strlen(strn); i++){
        arr[i] = 0;
    }
    for (i = 0; i < strlen(strn); i++){
        for (j = 0; j < len; j++){
            if (strn[i] == str[j]){
                arr[i]++;
            }
        }
    }
    printf("%s\n", str);
    printf("%d", strlen(strn));
    //for (i = 0; i < strlen(strn) - 1; i++){
    //    printf("%c: %d\n", strn[i], arr[i]);
    // }
}

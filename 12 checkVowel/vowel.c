#include <stdio.h>

int main() {
    printf("enter a num:");
    char letter;
    scanf("%c",&letter);

    int check;
    check = (letter == "a" || letter == "e");
    if(check){
        printf("%c is vowel", letter);
    }else{
        printf("%c isn't vowel", letter);
    }



   return 0;
}
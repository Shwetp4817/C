#include<stdio.h>
#include<string.h>

int main() {

    char str[] = "racecar";

    int i = 0;
    int j = strlen(str) - 1;

    int palindorme = 1;

    while(i < j) {

        if(str[i] != str[j]) {
            palindorme = 0;
            break;
        }

        i++;
        j--;
    }

    if(palindorme) {
        printf("Palindrome");   
    }
    else {
        printf("Not Palindrome");
    }

    return 0;
}

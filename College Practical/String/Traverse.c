#include<stdio.h> 

int main() {

    char str[] = "Shwet Patel Verma";

    for(int i = 0; str[i] != '\0'; i++) { // \0 means null character
        printf("%c", str[i]);
    }

    return 0;
}

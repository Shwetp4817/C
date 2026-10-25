#include<stdio.h>
#include<ctype.h>

int main() {

    char s[] = "shwet";

    for (int i = 0; s[i] != '\0'; i++) {
        s[i] = toupper(s[i]);
    }

    printf("%s", s);

    return 0;
}
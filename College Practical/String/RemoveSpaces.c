#include<stdio.h>

int main() {

    char s[] = "Shwet Patel V";

    int j = 0;

    for (int i = 0; s[i] != '\0'; i++) {

        if(s[i] != ' ') {
            s[j] = s[i];
            j++;
        }
    }

    s[j] = '\0';

    printf("%s", s);

    return 0;
}

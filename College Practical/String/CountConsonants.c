#include<stdio.h>
#include<ctype.h>

int main() {
    char str[] = "engineering";

    int count = 0;

    for (int i = 0; str[i] !='\0'; i++) {

        char ch = tolower(str[i]);

        if (ch >= 'a' && ch <= 'z') {

            if(ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
                count++;
            }
            
        }
    }

    printf("Consonants = %d" ,count);

    return 0;
}

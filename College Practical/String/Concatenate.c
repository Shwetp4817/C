#include<stdio.h>
#include<string.h>

int main() {

    char str1[100] = "Shwet Patel Verma";
    char str2[100] = " is a student.";

    strcat(str1, str2);

    printf("%s", str1);

    return 0;
}
#include<stdio.h>
#include<string.h>  

int main() {

    char str1[] = "Shwet"; // compare means both stirng are same. It does nat matter string len are same 
    char str2[] = "Patel";

    if (strcmp(str1, str2) == 0) {
        printf("String are equal");
    }
    else {
        printf("String are different");
    }

    return 0;
}

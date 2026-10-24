#include<stdio.h>
#include<string.h>

void display (char s[]) {
    printf("String: %s\n", s);
}

void length (char s[]) {
    printf("Length: %lu\n", strlen(s));
}

void concat (char s[]) {
    char t[100];
    printf("Enter another string: ");
    scanf("%s", t);
    strcat(s, t);
    printf("Concatenated string: %s\n", s);
}

void compare (char s[]) {
    char t[100];
    printf("Enter another string: ");
    scanf("%s", t);

    if (strcmp(s, t) == 0)
        printf("Equal\n");

    else
        printf("Not equal\n");
}


void reverse(char s[]) {
    int i,j;
    char t;

    for (int i = 0, j = strlen(s) -1; i < j; i++, j--) {
        t = s[i];
        s[i] = s[j];
        s[j] = t;
    }
    printf("Reversed string: %s\n", s);
}

int main() {
    char s[100];
    int ch;

    printf("Enter a string: ");
    scanf("%s", s);

    do {
        printf("\n1.Display\n2.Length\n3.Concatenate\n4.Compare\n5.Reverse\n6.Exit\n");
        scanf("%d", &ch);

        switch (ch) {
            case 1: display(s); break;
            case 2: length(s); break;
            case 3: concat(s); break;
            case 4: compare(s); break;
            case 5: reverse(s); break;
            case 6: printf("Exiting...\n"); break;
            default: printf("Invalid choice\n");
        }

    } while (ch != 6);

    return 0;
}

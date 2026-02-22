#include <stdio.h>

int main() {
    char str[100], *p;
    int v=0;

    gets(str);
    p=str;

    while(*p!='\0') {
        if(*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u')
            v++;
        p++;
    }

    printf("Vowels = %d", v);
    return 0;
}

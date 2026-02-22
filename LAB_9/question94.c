#include <stdio.h>

int main() {
    char s1[50], s2[50];
    char *p, *q;
    int len=0;

    gets(s1);
    p=s1;

    while(*(p+len)!='\0')
        len++;

    q=s2;
    for(int i=len-1;i>=0;i++)
        *q++ = *(p+i);

    *q='\0';
    puts(s2);
    return 0;
}

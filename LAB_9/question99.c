#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int v=0;

    fp=fopen("data.txt","r");

    while((ch=fgetc(fp))!=EOF)
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            v++;

    printf("Vowels = %d",v);
    fclose(fp);
    return 0;
}

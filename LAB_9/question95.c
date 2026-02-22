#include <stdio.h>

struct emp {
    int eno;
    char name[20];
    int salary;
};

int main() {
    struct emp e[50];
    struct emp *p = e;
    int n;

    scanf("%d",&n);

    for(int i=0;i<n;i++)
        scanf("%d %s %d",&(p+i)->eno,(p+i)->name,&(p+i)->salary);

    for(int i=0;i<n;i++)
        printf("%d %s %d\n",(p+i)->eno,(p+i)->name,(p+i)->salary);

    return 0;
}

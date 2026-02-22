#include <stdio.h>
#include <stdlib.h>

int main() {
    int r,c;
    scanf("%d%d",&r,&c);

    int *a = malloc(r*c*sizeof(int));
    int *b = malloc(r*c*sizeof(int));
    int *m = malloc(r*c*sizeof(int));

    for(int i=0;i<r*c;i++)
        scanf("%d",a+i);

    for(int i=0;i<r*c;i++)
        scanf("%d",b+i);

    for(int i=0;i<r*c;i++)
        *(m+i) = *(a+i) * *(b+i);

    for(int i=0;i<r*c;i++)
        printf("%d ",*(m+i));

    return 0;
}

#include <stdio.h>

void update(int *a,int *b) {
    int x, y;
   
    if(*a > *b)
    {
        y=*a-*b;
       
    }
    else if (*b>*a)
    {
        y=*b-*a;

    }
       x = *a + *b;
       *a= x;
       *b= y;
     
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

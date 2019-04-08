#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b, yourketqua;
    int myketqua;
    printf("Nhap 2 so nguyen a va b bat ki\n");
    scanf("%d",&a);
    scanf("%d", &b);
    printf("Du doan ket qua so xo chieu nay\n a+b=?\n ");
    scanf("%d", &yourketqua);
    myketqua=a+b;
    if(yourketqua==myketqua)
        printf("Correct!\n");
    else
        printf("Correct cc");
    printf("YourAnswer=%d ,MyAnswer=%d", yourketqua, myketqua);
    return 0;

}

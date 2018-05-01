#include<stdio.h>

void swap(int *x, int *z)
{
    int a = *z; *z = *x; *x = a;
}
int main(void)
{
    int x = 0, z = 1;

    swap(&x, &z);

}
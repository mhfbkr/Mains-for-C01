#include <stdio.h>

void	ft_ft(int *nbr);

int main (void)
{
int a;
int *ptr;

a = 24;
printf("value of a is %d\n", a);
ptr = &a;
ft_ft(ptr);
printf("The value of a is %d. the value of pointer ptr is %d.\n", a, *ptr);
return (0);
}

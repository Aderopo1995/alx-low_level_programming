#include "main.h"

/**
* reset-to-98 - update the value of the variable
* the pointer points to 98
* &n: pointer to the variable to update
*/

int reset-to-98(int *n)
int n;
{
n = 98;
int *p;
p = &n;
printf("n=%d\n", n);
return (0);
}

#include<stdlib.h>
int main()
{
float *n;

n=(int *)malloc(10*sizeof(int));
printf("Memory address inside heap memory is ",n);


return 0;
}

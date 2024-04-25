#include<stdio.h>

int main()
{
   int a=10;
   int*ptr= &a;

   printf("add of a:%p\n",&a);
   printf("add of ptr:%p\n",&ptr);
   printf("value of a:%d\n",*ptr);
   printf("value of a:%d\n",a);
   printf("ptr of ptr:%p\n",ptr);

   return 0;
   


}

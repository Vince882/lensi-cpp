#include<stdio.h>
#include<string.h>

int main()
{
   FILE *ptr;
   char string [50];

   ptr=fopen("mytext.txt","r");
   while(fscanf(ptr,"%s",string)!=EOF)
   {
      printf("%s",string);
   }


  ptr=fopen("mytext.txt","a");
   gets(string);
   fprintf(ptr,"%s",string);

}
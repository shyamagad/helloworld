#include<stdio.h>
#include<inttypes.h>
typedef struct{
 int a;
 int b;
 int c;
 uint8_t *ptr;
}strct;
uint8_t array[10];
void main()
{
   uint8_t i=0;
   uint32_t var,addr,temp;
   strct str;
   temp = 3600;
   str.ptr = array;
   for(i=0;i<10;i++){
       if(i==3){
           memcpy(&array[i],&temp,4);
           i+=4;
       }
       else
           array[i] = i;
   }
   printf("temp %d\n",temp);
   printf("address of structure %u\n",&str); 
   printf("address of str.a %u %u\n",&str.a,&(str.a)); 
   printf("address of str.b %u %u\n",&str.b,&(str.b)); 
   printf("address of str.c %u %u\n",&str.c,&(str.c)); 
   memcpy(&var,&str.ptr[3],4);
   printf("var %d\n",var);
   printf("s %d\n",*(&str.ptr[3]));
}

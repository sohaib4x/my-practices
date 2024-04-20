// pointers practice

# include <stdio.h> 
int main( ) 
{ 
 int i = 10, *ptr1 = &i;
 int *ptr2 = ptr1;
 *ptr2 = 30;
 *ptr1 = 50;
 i = 100;
 


 printf("result = %d\n", i);
  
 printf("result = %d\n", *ptr1);
  
 printf("result = %d\n", *ptr2);

 //printf("result = %d\n", *i); error
  
 printf("result = %x\n", ptr1);
  
 printf("result = %x\n", ptr2);

 
  
 //printf("result = %x\n", ptr);
}

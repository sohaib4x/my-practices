int sum(int*,int*);
int main()
{
  int a,b,*ptr1,*ptr2;
  ptr1 = &a;
  ptr2 = &b;
  

  printf("enter var 1 : ");
  scanf("%d",ptr1);   // as ptr1 = &a.

  printf("enter var 2 : ");
  scanf("%d", ptr2);

  if(*ptr1>*ptr2){
    printf("maximum number is %d ", *ptr1);
  }

  else{
    printf("maximum number is %d", *ptr2);
  }
    
}

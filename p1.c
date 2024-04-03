# include <stdio.h> 
int main( ) 
{ 

int  num;

printf("Enter which number you what to calculate factorial of : ");
scanf("%d",&num);

int fact = num;

while(num>1){
    fact = fact*(num-1);
    num--;
}

printf("fact = %d",fact);

} 
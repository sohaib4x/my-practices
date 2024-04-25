// to pass factorial and power of a number without return using pointer
#include <stdio.h>
void pow_fact(int,int,int,int*,int*);
int main(){

    int base,power,num;
    int powr,fact;
    printf("enter base and power : ");
    scanf("%d %d", &base, &power);

    printf("enter number to calculate factorial of : ");
    scanf("%d", &num);

    pow_fact(base,power,num,&powr,&fact);
    printf("%d to the power %d is %d and factorial of %d is %d ", base,power,powr, num,fact);
    
}

void pow_fact(int x, int y, int z, int *pow, int *fact){
    int i, res = 1;

    for(i = 1; i<=y; i++){
        res*=x;
        *pow = res;
    }

    res = 1;

    for( i = 1; i<=z; i++ ){
        res *=i;
        *fact = res;
    }

}

/*Write a program to generate all combinations of 1, 2 and 3 
using for loop. */

# include <stdio.h> 
int main( ) 
{ 
int  i = 1, j = 1, k = 1 ; 
for ( i = 1 ; i <= 3 ; i++ )  /* 1st digit */ 
{ 
for ( j = 1 ; j <= 3 ; j++ )  /* 2nd digit */ 
{ 
for ( k = 1 ; k <= 3 ; k++ )  /* 3rd digit */ 
printf ( "%d%d%d\n" , i , j , k ) ; 
} 
} 
return 0 ; 
} 

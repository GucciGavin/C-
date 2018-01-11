// ******* squarefunction.c *******

#include <stdio.h>
int square ( int v );

int main( )
{
	int x, n ;
	printf ( "\nEnter some number for finding square \n");
	scanf ( "%d", &n) ;
	x = square ( n ) ;
	printf ( "\nSquare of the given number %d is %d" ,n,x );
	return 0;
}

int square ( int v )  // function defenition
{
	int p ;
	p = v * v;
	return ( p ) ;
}


#include<stdio.h>


int rec ( int x ){
	int f ;
	if ( x == 1 ){
	return ( 1 ) ;
	}
	else{
	f = x * rec ( x - 1 ) ;
	return ( f ) ;

	}
}

void main(){
	int a, fact ;
	printf ( "\nEnter any number " ) ;
	scanf ( "%d", &a ) ;
	fact = rec ( a ) ;
	printf ( "Factorial value = %d", fact ) ;
}

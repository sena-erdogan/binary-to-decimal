#include<stdio.h>

int bintodec(int binary);

int countdigits(int number);

int powerfunction(int base, int power);

int is_positive(int n);

int getnum();

int bintodec(int binary){

	if( countdigits(binary) == 0 )	return 0;

	else{

		if( binary % 2 == 0){

			return bintodec(binary / 10);

		}else{

			return ( powerfunction( 2, countdigits( binary ) - 1) + bintodec( binary / 10 ));

		}
	
	}

}

int countdigits(int number){

	if( number == 0 )	return 0;

	else	return (1 + countdigits(number/10));

}

int powerfunction(int base, int power){

	if(power == 0)	return 1;

	else	return ( base * powerfunction( base, power - 1));

}

int is_positive(int n){

	if( n > 0 )	return 1;

	else if( n < 0 )	return 0;

}

int getnum(){

	int num;

	printf("Enter a binary number: ");
	scanf("%d", &num);

	if( is_positive(num) == 0 ){

		printf("Terminating...\n");

		return -1;
	}else{

		return bintodec(num);

	}

}

int main(){

	while( getnum() != -1 ){

		printf("Decimal: %d\n", getnum());

		getnum();

	}

}




















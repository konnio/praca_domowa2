#include <stdio.h>

void wczytaj (long int *n)
{
	printf("Podaj ktory wyraz ciagu Fibonacciego chcesz obliczyc: ");
	scanf("%ld", n);
}

long int fibo (long int n)
{
	if (n == 0)
	{
		return 0;
	}else if (n > 0 && n <= 2)
	{
		return 1;
	}else {
		return fibo(n-1)+fibo(n-2);
	}
}


int main()
{
	long int n, wynik;
	wczytaj(&n);
	wynik =  fibo(n);
	printf(" %ld wyraz ciagu Fibonacciego wynosi: %ld \n", n, wynik);
	return 0;
}

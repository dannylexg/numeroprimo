#include <stdio.h>
#include <conio.h>
int main()
{
	int i, n, a, contador;
	contador = 0;
	clrscr();
	printf("Ingrese un número: ");
	scanf("%i", &n);
	for(i=1; i<=n; i++)
	{
		a = n % i;
		if(a == 0)
		{
			contador = contador + 1;
		}
	}		
		if(contador == 2)
		{
			printf("Sí es primo");
		}
		else
		{
			printf("No es primo");
		}	
	
}

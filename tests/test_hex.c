#include "../inc/ft_printf.h"
#include "htest.h"

void playground()
{
	int a = 0;
	printf("puntero: %p\nhex: %X\n", &a, 10);
}

void p_basichex()
{
	char *prueba = "basic hex number";
	int n, np;

	int stdout_backup = dup(1);
	close(1); //para que ft_printf no vomite nada
   	n = ft_printf("%x\n", 10);
	np = printf("%x\n", 10);
    	dup(stdout_backup);
    	close(stdout_backup); //restauro salida estandar

	if (n == np)
		correct(prueba);
	else
	{
		incorrect(prueba);
		printf("expected: %x\n", 10);
		ft_printf("%x\n", 10);
	}
}

int main(void)
{
	//playground();
	p_basichex();
}

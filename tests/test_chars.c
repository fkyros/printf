#include "../inc/ft_printf.h"

#include "htest.h"

void playground()
{
	printf("hola %c", 422);
}

void p_simple()
{
	char *prueba = "char normal";
	int n;

	int stdout_backup = dup(1);
	close(1); //para que ft_printf no vomite nada
	n = ft_printf("a %c\n", 'b');
	dup(stdout_backup);
	close(stdout_backup); //restauro salida estandar
	if (n == 4)
		correct(prueba);
	else
	{
		incorrect(prueba);
		printf("n = %d\n", n);
		printf("expected: a %c\n", 'b');
		ft_printf("a %c\n", 'b');
	}
}

int main(void)
{
	p_simple();
}

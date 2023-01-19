#include "../inc/ft_printf.h"

#include <stdio.h>
#include <stdlib.h>

void correct(char *msg)
{
        printf("✅: %s\n", msg);
}


void incorrect(char *msg)
{
        printf("❌: %s\n", msg);
}

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
	n = ft_printf("hola %c\n", 'a');
	dup(stdout_backup);
	close(stdout_backup); //restauro salida estandar
	if (n == 7)
		correct(prueba);
	else
	{
		incorrect(prueba);
		printf("n = %d\n", n);
		printf("expected: hola %c\n", 'a');
		ft_printf("hola %c\n", 'a');
	}
}

int main(void)
{
	p_simple();
}

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
	printf("%u\n", -10);
}

void p_simple()
{
	char *prueba = "cuenta caracteres sin %";
	int n;

	int stdout_backup = dup(1);
	close(1); //para que ft_printf no vomite nada
	n = ft_printf("hola\n");
	dup(stdout_backup);
	close(stdout_backup); //restauro salida estandar
	if (n == 5)
		correct(prueba);
	else
	{
		incorrect(prueba);
		printf("expected: hola\n");
		ft_printf("hola\n");
	}
}

void p_arg_num()
{
	char *prueba = "1 numero por argumento";
	int n;
	
	int stdout_backup = dup(1);
	close(1); //para que ft_printf no vomite nada

	n = ft_printf("si %d\n", 13);
	
	dup(stdout_backup);
	close(stdout_backup); //restauro salida estandar
	if (n == 6)
		correct(prueba);
	else
	{
		incorrect(prueba);
		printf("expected: si 13\n");
		ft_printf("si %d\n", 13);
	}

	//-------------

	char *prueba2 = "2 numeros por argumentos";
	char *res = "el 20 es divisible entre 2\n";
	stdout_backup = dup(1);
	close(1); //para que ft_printf no vomite nada

	n = ft_printf("el %d es divisible entre %d\n", 20, 2);
	
	dup(stdout_backup);
	close(stdout_backup); //restauro salida estandar
	if (n == ft_strlen(res))
		correct(prueba2);
	else
	{
		incorrect(prueba2);
		printf("expected: %s", res);
		ft_printf("el %d es divisible entre %d\n", 20, 2);
	}
}

void p_vacio()
{
	char *prueba = "printf vacio";
	int n;
	
	int stdout_backup = dup(1);
	close(1); //para que ft_printf no vomite nada

	n = ft_printf("");
	
	dup(stdout_backup);
	close(stdout_backup); //restauro salida estandar
	if (n == 0)
		correct(prueba);
	else
	{
		incorrect(prueba);
		printf("expected: \n");
		ft_printf("");
	}
}

void p_unsigned()
{
	char *prueba = "unsigned basico";
	int n;

	int stdout_backup = dup(1);
	close(1); //para que ft_printf no vomite nada

	n = ft_printf("%u", -10);
	
	dup(stdout_backup);
	close(stdout_backup); //restauro salida estandar
	unsigned int a = -10;
	printf("%u\n", a);
	ft_printf("%u\n", a);
	/*if (n == 0)
		correct(prueba);
	else
	{
		incorrect(prueba);
		printf("expected: \n");
		ft_printf("");
	}*/
}

int main(void)
{
	//playground();
	//p_simple();
	//p_arg_num();
	//p_vacio();
	p_unsigned();
}

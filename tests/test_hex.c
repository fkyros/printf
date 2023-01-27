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
	FILE *devnull = fopen("/dev/null", "w");
	np = fprintf(devnull, "%x\n", 10);
	fclose(devnull);
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

void p_negative_hex()
{
	char *prueba = "negative hex number";
	int n, np;

	int stdout_backup = dup(1);
	close(1); //para que ft_printf no vomite nada
   	n = ft_printf(" %x ", -1);
	FILE *devnull = fopen("/dev/null", "w");
	np = fprintf(devnull, " %x ", -1);
	fclose(devnull);
    dup(stdout_backup);
    close(stdout_backup); //restauro salida estandar

	if (n == np)
		correct(prueba);
	else
	{
		incorrect(prueba);
		printf("expected: %x ", -1);
		ft_printf(" %x ", -1);
	}
}

void p_pointer()
{	
	char *prueba = "negative hex number";
	int n, np, a;

	int stdout_backup = dup(1);
	close(1); //para que ft_printf no vomite nada
   	n = ft_printf(" %p ", &a);
	FILE *devnull = fopen("/dev/null", "w");
	np = fprintf(devnull, " %p ", &a);
	fclose(devnull);
    dup(stdout_backup);
    close(stdout_backup); //restauro salida estandar

	if (n == np)
		correct(prueba);
	else
	{
		incorrect(prueba);
		printf("expected: %p \n", &a);
		ft_printf("%p", &a);
	}
}

void p_limits()
{
	char *prueba = "negative hex number";
	int n, np;

	int stdout_backup = dup(1);
	close(1); //para que ft_printf no vomite nada
	n = ft_printf("0x%p-", (void *)ULONG_MAX);
	FILE *devnull = fopen("/dev/null", "w");
	np = fprintf(devnull, "0x%p-", (void *)ULONG_MAX);
	fclose(devnull);
    dup(stdout_backup);
    close(stdout_backup); //restauro salida estandar

	if (n == np)
		correct(prueba);
	else
	{
		incorrect(prueba);
		printf("expected: 0x%p-\n", (void *)ULONG_MAX);
		ft_printf("0x%p-\n", (void *)ULONG_MAX);
	}
}

int main(void)
{
	//playground();
	//p_basichex();
	//p_negative_hex();
	//p_pointer();
	p_limits();
}

#include "../inc/ft_printf.h"

#include "htest.h"

void p_str1()
{
	char *prueba = "string simple";
	int n;

    int stdout_backup = dup(1);
    close(1); //para que ft_printf no vomite nada
    n = ft_printf("mi nombre es %s\n", "illojuan");
    dup(stdout_backup);
    close(stdout_backup); //restauro salida estandar

	if (n == ft_strlen("mi nombre es illojuan\n"))
		correct(prueba);
	else
	{
		incorrect(prueba);
		printf("expected: mi nombre es %s\n", "illojuan");
		ft_printf("mi nombre es %s\n", "illojuan");
	}
}

int main(void)
{
	p_str1();
}

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
}

void p_FEATURE1()
{
	char *prueba = "";

	if ()
		correct(prueba);
	else
	{
		incorrect(prueba);
		printf("expected: \n");
	}
}

int main(void)
{
	p_FEATURE1();
}

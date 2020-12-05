int ft_strncmp(char *s1, char *s2, unsigned int n);
#include <stdio.h>
#include <string.h> 

int main(void)
{
	char s1[]="A";
	char s2[]="A";
	unsigned int n = 3;

	printf("Comp Strings:\n");
	printf("s1 => %s\n", s1);
	printf("s2 => %s\n", s2);
	printf("n => %d\n", n);
	printf("Resultado da comparação entre strings => %d\n", ft_strncmp(s1, s2, n));
	printf("Resultado da função importada entre strings => %d\n", strncmp(s1, s2, n));

	return (0);
}

#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
	char dest[] = "Hello";
	char src[] = "Doria";
	unsigned int nb = 2;

	printf("dest => %s\n", dest);
	printf("src => %s\n", src);
	printf("nb => %d\n", nb);
	printf("Resultado funcao => %s\n", ft_strncat(dest, src, nb));
	// printf("Resultado correto => %s\n", strncat(dest, src, nb));
	
	return (0);
}

#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);

int main(void)
{
	char dest[] = "Hello";
	char src[] = "Basecamp";

	printf("dest => %s\n", dest);
	printf("src => %s\n", src);
	printf("Resultado funcao => %s\n", ft_strcat(dest, src));
	// printf("Resultado correto => %s\n", strcat(dest, src));
	
	return (0);
}

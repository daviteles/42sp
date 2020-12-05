int		ft_strcmp(char *s1, char *s2);
#include <stdio.h>
#include <string.h> 

int main(void)
{
	char s1[]="ABC";
	char s2[]="ABCD";
	

	printf("Comp Strings:\n");
	printf("s1 => %s\n", s1);
	printf("s2 => %s\n", s2);
	printf("Resultado da comparação entre strings => %d\n", ft_strcmp(s1, s2));
	printf("Resultado da função importada entre strings => %d\n", strcmp(s1, s2));

	return (0);
}

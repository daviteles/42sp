#include <stdio.h>
int ft_strlen(char *str); 


int main(void)
{
	char *str;
	int tamanho;
	
	str = "Texto";
	
	tamanho = ft_strlen(str);
	printf("%d\n", tamanho);
}

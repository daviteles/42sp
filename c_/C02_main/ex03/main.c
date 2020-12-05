#include <stdio.h>
#include <string.h>

int		ft_str_is_numeric(char *str);

int		main(void)
{
	char str1[]	= "198728746765";
	char str2[]	= "B4se273468274 camp8375!";
	char str3[]	= "";

	printf("Str1 deve ser 1 = %d\n", ft_str_is_numeric(str1));
	printf("Str2 deve ser 0 = %d\n", ft_str_is_numeric(str2));
	printf("Str3 deve ser 1 = %d\n", ft_str_is_numeric(str3));
	return (0);
}

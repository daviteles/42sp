
#include <stdio.h>
#include <string.h>

char	*ft_strlowcase(char *str);

int		main(void)
{
	char str1[]	= "HELLO";
	char str2[]	= "Hello";
	char str3[]	= "12 34!";

	printf("%s\n", ft_strlowcase(str1));
	printf("%s\n", ft_strlowcase(str2));
	printf("%s\n", ft_strlowcase(str3));	
	return (0);
}
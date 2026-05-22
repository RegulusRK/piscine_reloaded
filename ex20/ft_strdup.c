#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return(i);
}

char *ft_strdup(char *src)
{
	int	i;
	int	length;
	char	*src_copy;
	

	i = 0;
	length = ft_strlen(src);
	src_copy = malloc(length + 1);
	if(src_copy == NULL)
		return (NULL);

	while(src[i])
	{
		src_copy[i] = src[i];
		i++;
	}
	src_copy[i] = '\0';

	return(src_copy);
}

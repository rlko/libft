#include "libft.h"
#include <stdlib.h>

char	*ft_strrev(const char *str)
{
	char	*rev;
	int		i;
	int		j;
	int len;

	len = ft_strlen(str);
	if (!(rev = malloc(sizeof(rev) * (len + 1))))
		return (NULL);
	rev[len] = '\0';
	j = len - 1;
	i = 0;
	while (i < len)
	{
		rev[i] = str[j];
		--j;
		++i;
	}
	return (rev);
}

#include "libft.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*new_str;
	int		len;

	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(s1) || !(s2))
		return (NULL);
	if (!(new_str = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	ft_strcpy(new_str, s1);
	ft_strcat(new_str, s2);
	free(s2);
	return (new_str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 15:32:13 by elsoares          #+#    #+#             */
/*   Updated: 2025/06/23 16:45:26 by elsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "ft_strlen.c"
#include "ft_substr.c"
#include "ft_strdup.c"

static int	check_char(char str, const  char *set)
{
	int	i;

	i = 0;
	while(set[i])
	{
		if (set[i] == str)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*ptr;

	if (!s1 || !set)
		 return (NULL);
	ptr = NULL;
	start = 0;
	end = 0;
	while (s1[start] && check_char(s1[start], set))
		++start;
	end = ft_strlen(s1) - 1;
	while (s1[start] && check_char(s1[end], set))
		--end;
	ptr = ft_substr(s1, start, (end - start) + 1);
	return (ptr);
 }

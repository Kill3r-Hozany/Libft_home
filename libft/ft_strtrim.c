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
/*#include "ft_strdup.c"
#include "ft_strchr.c"
#include "ft_substr.c"
#include "ft_strlen.c"*/

static int	hz_len(const char *string)
{
	int	i;

	i = 0;
	while (string[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*cortado;
	int		inicio;
	int		fim;

	if (!s1)
		return (NULL);
	if (*s1 == '\0')
		return (ft_strdup(""));
	if (!set)
		return (ft_strdup(s1));
	fim = hz_len(s1) - 1;
	inicio = 0x0;
	cortado = NULL;
	while (s1[inicio] && ft_strchr(set, s1[inicio]))
		++inicio;
	while (fim >= inicio && ft_strchr(set, s1[fim]))
		--fim;
	if (fim < inicio)
		return (ft_strdup(""));
	return (ft_substr(s1, inicio, fim - inicio + 1));
}
/*
int main(void)
{
	char  v[] = "aBanana";
	char  b[] = " a";

		printf("%s",ft_strtrim(v, b));
}*/

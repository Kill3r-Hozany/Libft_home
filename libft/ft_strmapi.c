/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 14:35:15 by elsoares          #+#    #+#             */
/*   Updated: 2025/06/24 15:15:12 by elsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*#include "ft_strdup.c"
*/
static int	hoz_len(const char *string)
{
	int	indice;

	indice = 0;
	while (*string)
	{
		indice++;
		string++;
	}
	return (indice);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*novo;
	size_t	tamanho;
	size_t	indice;

	indice = 0;
	novo = NULL;
	if (!s)
		return (ft_strdup(""));
	tamanho = hoz_len(s);
	novo = (char *)malloc(sizeof(char) * (tamanho + 1));
	if (!novo)
		return (NULL);
	while (indice < tamanho)
	{
		novo[indice] = (*f)(indice, s[indice]);
		++indice;
	}
	novo[indice] = 0;
	return (novo);
}
/*
static char	ft_test(unsigned int i, char s)
{
	s += i;
}

int	main(void)
{
	char	v[] = "Eliseu";

	printf("%s",ft_strmapi(v, ft_test));
}*/

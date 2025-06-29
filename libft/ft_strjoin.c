/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 11:06:11 by elsoares          #+#    #+#             */
/*   Updated: 2025/06/20 13:14:46 by elsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*#include "ft_strdup.c"
#include "ft_strlen.c"
*/

static char	*protecao(const char *entrada1, const char *entrada2)
{
	if (entrada1 == NULL || entrada2 == NULL)
		return (NULL);
	return ("");
}

static char	*concatenar(char const *prefixo, char const *sufixo, size_t tamanho)
{
	char	*ponteiro;
	size_t	indice1;
	size_t	indice2;

	ponteiro = (char *)malloc(sizeof (char) * (tamanho + 1));
	if (!ponteiro)
		return (NULL);
	indice1 = 0x0;
	indice2 = 0x0;
	while (prefixo[indice1])
	{
		ponteiro[indice1] = prefixo[indice1];
		indice1++;
	}
	while (sufixo[indice2])
	{
		ponteiro[indice1] = sufixo[indice2];
		indice2++;
		indice1++;
	}
	ponteiro[indice1] = '\0';
	return (ponteiro);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	comprimento_total;

	if (protecao(s1, s2) == NULL)
		return (NULL);
	if (!s1 && !s2)
		return (ft_strdup(""));
	if (s1 && !s2)
		return (ft_strdup(s1));
	if (!s1 && s2)
		return (ft_strdup(s2));
	comprimento_total = (ft_strlen(s1) + ft_strlen(s2));
	return (concatenar(s1, s2, comprimento_total));
}
/*
int	main(void)
{
	char	v[] = "Eliseu,";
	char	b[] = "Soares";

	printf("%s",ft_strjoin(v, b));
}*/

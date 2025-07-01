/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 12:05:35 by elsoares          #+#    #+#             */
/*   Updated: 2025/06/16 18:59:19 by elsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		p;
	int		i;
	char	*novo_vetor;

	i = 0;
	p = 0;
	while (s[i])
		i++;
	novo_vetor = (char *)malloc(sizeof(char) * (i + 1));
	if (!novo_vetor)
		return (NULL);
	while (s[p] && p < i)
	{
		novo_vetor[p] = s[p];
		p++;
	}
	novo_vetor[p] = '\0';
	return (novo_vetor);
}
/*
int	main(void)
{
	char	b[] = "Eliseui";
	printf("%s",ft_strdup(b));
}*/

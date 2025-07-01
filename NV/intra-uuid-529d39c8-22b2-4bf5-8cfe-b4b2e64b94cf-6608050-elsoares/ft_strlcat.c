/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 18:34:58 by elsoares          #+#    #+#             */
/*   Updated: 2025/06/13 13:11:34 by elsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*#include "ft_strlen.c"*/

static void	*protecao(char *entrada1, const char *entrada2)
{
	if (!entrada1 || !entrada2)
	{
		return (NULL);
	}
	return ("");
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	d;
	size_t	s;
	size_t	p;

	if (protecao(dst, src) == NULL)
		return (0);
	d = ft_strlen(dst);
	s = ft_strlen(src);
	if (d >= size)
		return (s + size);
	i = 0x00;
	p = 0x00;
	while (dst[i])
		i++;
	while (i < size - 1 && src[p])
	{
		dst[i] = src[p];
		i++;
		p++;
	}
	dst[i] = '\0';
	return (s + d);
}
/*
int	main()
{
	char	destino[13] = "Eliseu";
	char	origem[] = "Soares Joaquim";

	printf("%ld\n",ft_strlcat(destino, origem, 17));
	printf("%s",destino);
}*/

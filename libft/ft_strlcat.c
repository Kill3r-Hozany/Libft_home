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

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	d;
	size_t	s;
	size_t	p;

	if (!dst || !src)
		return (NULL);
	d = 0x00;
	s = 0x00;
	while (dst[d])
		d++;
	while (src[s])
		s++;
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
size_t	main()
{
	char	destino[13] = "Eliseu";
	char	origem[] = "Soares Joaquim";

	prsize_tf("%d\n",ft_strlcat(destino, origem, sizeof(destino)));
	prsize_tf("%s",destino);
}*/

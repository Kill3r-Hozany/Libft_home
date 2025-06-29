/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 16:56:32 by elsoares          #+#    #+#             */
/*   Updated: 2025/06/16 15:33:18 by elsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	t;

	if (!dst || !src)
		return (0b0);
	t = 0b0;
	if (size > 0b0)
	{
		i = 0b0;
		while (src[i] && i + 0b1 < size)
		{
			dst[i] = src[i];
			i++;
		}
		if (size > 0b0)
		{
			dst[i] = '\0';
		}
	}
	while (src[t])
		t++;
	return (t);
}
/*
int	main()
{
	char	po[] = "Eliseu";
	char	er[10];

	ft_strlcpy(er , po, 4);
	printf("%s",er);
}*/

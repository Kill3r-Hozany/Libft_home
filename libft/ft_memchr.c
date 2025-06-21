/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 18:20:53 by elsoares          #+#    #+#             */
/*   Updated: 2025/06/13 15:48:16 by elsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ponteiro;
	unsigned char		bytes;

	if (s == NULL) 
		return (NULL);
	bytes = c;
	ponteiro = s;
	while (n--)
	{
		if (*ponteiro == bytes)
		{
			return ((void *)ponteiro);
		}
		ponteiro++;
	}
	return (NULL);
}
/*
int	main()
{
	char	u[] = "Eliseu Soares";

	printf("%s",(char *)ft_memchr(u, 'e', sizeof(u)));
}*/

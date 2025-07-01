/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 13:21:18 by elsoares          #+#    #+#             */
/*   Updated: 2025/06/13 12:55:26 by elsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	if (!s || (long)n < 0)
		return (NULL);
	i = 0x00;
	while (i < n)
	{
		((unsigned char *)s)[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*
int	main(void)
{
	char	yu[8] = "Eliseu";
	
	printf("%s",(char *)ft_memset(yu, 'U', -3));
}*/

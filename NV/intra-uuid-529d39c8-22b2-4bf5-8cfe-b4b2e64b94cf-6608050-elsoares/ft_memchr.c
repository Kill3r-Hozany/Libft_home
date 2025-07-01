/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 18:20:53 by elsoares          #+#    #+#             */
/*   Updated: 2025/06/23 13:11:05 by elsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;

	if (!s || (long)n < 0)
		return (NULL);
	str = s;
	while (n--)
	{
		if (*str == c)
		{
			return ((void *)str);
		}
		str++;
	}
	return (NULL);
}

int	main()
{
	char	u[] = "Eliseu soares";

	printf("%s",(char *)ft_memchr(u, 'e', 5));
}

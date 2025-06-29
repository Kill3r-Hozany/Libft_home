/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 15:53:09 by elsoares          #+#    #+#             */
/*   Updated: 2025/06/23 13:06:49 by elsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ponteiro1;
	const unsigned char	*ponteiro2;

	if ((!s1 && !s2) || n == 0)
		return (0);
	if (!s1)
		return (-1);
	if (!s2)
		return (1);
	ponteiro1 = (const unsigned char *)s1;
	ponteiro2 = (const unsigned char *)s2;
	while (n--)
	{
		if (*ponteiro1 != *ponteiro2)
		{
			return (*ponteiro1 - *ponteiro2);
		}
		ponteiro1++;
		ponteiro2++;
	}
	return (0);
}
/*
int	main()
{
	char a[] = {0x01, 0xFF, 0x7F};
	char b[] = {0x01, 0x00, 0x7F};

	printf("%d\n", ft_memcmp(a, b, 1));
}*/

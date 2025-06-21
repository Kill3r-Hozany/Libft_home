/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 15:53:09 by elsoares          #+#    #+#             */
/*   Updated: 2025/06/14 17:14:50 by elsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (!s1 || !s2)
		return (0);
	const unsigned char	*ponteiro1;
	const unsigned char	*ponteiro2;

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

	printf("%d\n", memcmp(a, NULL, 3));
	printf("%d\n", ft_memcmp(NULL, b, 3));



}*/

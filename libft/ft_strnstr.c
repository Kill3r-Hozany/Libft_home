/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 19:15:28 by elsoares          #+#    #+#             */
/*   Updated: 2025/06/23 13:16:07 by elsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "stdio.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!big || !little)
		return (NULL);
	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (little[j] && big[j + i] == little[j] && (j + i) < len)
		{
			j++;
		}
		if (little[j] == '\0')
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	v[] = "mador da 4 42 gyikyk";
	char	y[] = "42";

	printf("%s",ft_strnstr(v, y,61));
}
*/

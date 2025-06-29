/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 14:32:13 by elsoares          #+#    #+#             */
/*   Updated: 2025/06/12 15:29:22 by elsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*ponteiro_auxilar;

	if (!s)
		return (NULL);
	ponteiro_auxilar = NULL;
	while (*s)
	{
		if (*s == (char)c)
			ponteiro_auxilar = s;
		s++;
	}
	if (c == '\0')
	{
		return ((char *)s);
	}
	return ((char *)ponteiro_auxilar);
}
/*
int	main(void)
{
	char	y[] = "Zeza Maria Soares juvanal";

	printf("%s",ft_strrchr(y, 'u'));
}*/

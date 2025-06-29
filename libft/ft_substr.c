/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 18:40:05 by elsoares          #+#    #+#             */
/*   Updated: 2025/06/19 16:28:24 by elsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ponteiro;
	size_t	i;
	size_t	y;

	if (!s || (long)len < 0)
		return (NULL);
	y = ft_strlen(s);
	if (start >= y)
		return (ft_strdup(""));
	if (len > y - start)
		len = y - start;
	ponteiro = (char *)malloc(sizeof(char) * (len + 1));
	if (!ponteiro)
		return (NULL);
	i = 0;
	while (s[start] && i < len)
	{
		ponteiro[i] = s[start];
		start++;
		i++;
	}
	ponteiro[i] = '\0';
	return (ponteiro);
}
/*
int     main(void)
{
        char    v[] = "Eliseu";

        printf("%s",ft_substr(v, 3, -3));
        return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 19:37:13 by elsoares          #+#    #+#             */
/*   Updated: 2025/06/25 11:06:24 by elsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ponteiro;
	size_t	i;

	if (nmemb && size && size > SIZE_MAX / nmemb)
		return (NULL);
	i = 0;
	ponteiro = malloc(nmemb * size);
	if (!ponteiro)
		return (NULL);
	while (i < nmemb * size)
	{
		((unsigned char *)ponteiro)[i] = 0;
		i++;
	}
	return ((void *) ponteiro);
}
/*
int	main(void)
{
	char	*var;

	var = ft_calloc(sizeof(char), 20);
	printf("main: %s",var);
}*/

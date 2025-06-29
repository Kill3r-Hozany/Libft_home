/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 15:55:44 by elsoares          #+#    #+#             */
/*   Updated: 2025/06/25 11:05:15 by elsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ponteiro_auxiliar;

	if (!s || (long)n < 0)
		return ;
	ponteiro_auxiliar = (unsigned char *)s;
	while (n--)
	{
		*ponteiro_auxiliar++ = 0;
	}
}
/*
int	main()
{
	char	y[] = "Eliseu";
	int	i;

	ft_bzero(y, -3);
	i = 0;
	while (i < 6)
	{
		printf("%c",(unsigned char)y[i]);
		i++;
	}

}*/

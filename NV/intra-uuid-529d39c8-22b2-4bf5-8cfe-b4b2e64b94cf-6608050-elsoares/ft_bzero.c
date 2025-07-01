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
#include "ft_memset.c"

void	ft_bzero(void *s, size_t n)
{
	if (!s || (long)n < 0)
		return ;
	ft_memset(s, 0, n);
}

int	main()
{
	char	y[] = "Eliseu";
	int	i;
 
	ft_bzero(y, -4);
	i = 0;
	while (i < 6)
	{
		printf("%c",(unsigned char)y[i]);
		i++;
	}

}

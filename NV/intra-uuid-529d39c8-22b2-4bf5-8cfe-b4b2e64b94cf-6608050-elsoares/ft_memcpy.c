/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 16:50:47 by elsoares          #+#    #+#             */
/*   Updated: 2025/06/23 13:12:19 by elsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (src == NULL || dest == NULL || (long)n < 0)
		return (dest);
	i = 0x00;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

int	main()
{
	char	y[] = "Tyyseur";
	char	z[] = "Eliseu";
	
	printf("%s",(char *)ft_memcpy(y, z, -1));
}

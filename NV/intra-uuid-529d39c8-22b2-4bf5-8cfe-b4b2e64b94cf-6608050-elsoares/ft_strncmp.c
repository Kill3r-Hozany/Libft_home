/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 15:42:41 by elsoares          #+#    #+#             */
/*   Updated: 2025/06/23 13:14:59 by elsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char	*src1;
	const unsigned char	*src2;
	size_t				i;

	src1 = ((const unsigned char *)s1);
	src2 = ((const unsigned char *)s2);
	if (!s1 || !s2)
	{
		return (0);
	}
	if (n == 0)
		return (0);
	i = 0x00;
	while (i < n)
	{
		if (src1[i] != src2[i])
		{
			return (src1[i] - src2[i]);
		}
		if (src1[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}

int	main(void)
{
	char	primeiro_nome[] = "Eliseu";
	char	segundo_nome[] =  "Elisa";
	
	printf("%d",ft_strncmp("\0", segundo_nome, 5));


}

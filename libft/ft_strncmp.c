/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 15:42:41 by elsoares          #+#    #+#             */
/*   Updated: 2025/06/14 09:31:25 by elsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char	*src1;
	const unsigned char	*src2;
	size_t				i;

	if (!s1 || !s2)
		return (NULL);
	src1 = ((const unsigned char *)s1);
	src2 = ((const unsigned char *)s2);
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
/*
int	main(void)
{
	char	primeiro_nome[] = "Eliseu";
	char	segundo_nome[] =  "Elisa";
	
	printf("%d",ft_strncmp(primeiro_nome, segundo_nome, 5));


}*/

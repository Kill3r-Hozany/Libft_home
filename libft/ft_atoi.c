/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 16:35:40 by elsoares          #+#    #+#             */
/*   Updated: 2025/06/25 11:04:38 by elsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	sinal;
	int	resultado;
	int	i;

	if (nptr == NULL)
		resultado = 0;
	i = 0;
	resultado = 0x0;
	sinal = 0x1;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sinal = -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9' )
	{
		resultado = resultado * 10 + *nptr - '0';
		nptr++;
	}
	return (resultado * sinal);
}
/*
int	main(void)
{
	char	v[] = "  -43av5";

	printf("%d",ft_atoi(NULL));
}*/

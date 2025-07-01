/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsoares <marvin@42.fr>                     +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 13:47:51 by elsoares          #+#    #+#             */
/*   Updated: 2025/06/23 16:52:58 by elsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include "ft_substr.c"
#include "ft_strdup.c"
#include "ft_strlen.c"*/

static void	liberar(char **vetor)
{
	int	i;

	if (!vetor)
		return ;
	i = 0;
	while (vetor[i])
	{
		free (vetor[i]);
		i++;
	}
	free(vetor);
}

int	alocador_auxiliar(char const *string, char delimitador, char **ponteiro)
{
	char		**novo_ponteiro;
	char const	*auxiliar;

	novo_ponteiro = ponteiro;
	auxiliar = string;
	while (*string)
	{
		while (*string == delimitador)
			++string;
		auxiliar = string;
		while (*auxiliar && *auxiliar != delimitador)
			++auxiliar;
		if (auxiliar > string)
		{
			*novo_ponteiro = ft_substr(string, 0, auxiliar - string);
			if (!*novo_ponteiro)
				return (0);
			string = auxiliar;
			++novo_ponteiro;
		}
	}
	*novo_ponteiro = (NULL);
	return (1);
}

static int	alocador(char **ponteiro, char const *string, char delimitador)
{
	if (alocador_auxiliar(string, delimitador, ponteiro) == 0)
		return (0);
	return (1);
}

static int	contador_de_palavras(const char *string, char delimitador)
{
	size_t	palavra;

	palavra = 0;
	while (*string)
	{
		while (*string == delimitador)
			++string;
		if (*string)
			++palavra;
		while (*string && *string != delimitador)
			++string;
	}
	return (palavra);
}

char	**ft_split(char const *s, char c)
{
	char	**novo;
	int		quantidades_de_palavras;

	novo = NULL;
	if (!s)
		return ((char **)ft_strdup(""));
	quantidades_de_palavras = contador_de_palavras(s, c);
	novo = (char **)malloc(sizeof(char *) * (quantidades_de_palavras + 1));
	if (!novo)
		return (NULL);
	if (alocador(novo, s, c) == 0)
	{
		liberar(novo);
		return (NULL);
	}
	return (novo);
}
/*
int main(void)
{
	char	b[] = ";;;;;;;;;gf;;;;hfdj;Eliseu5;Soares;Joaquim;jf;;;;;;;;;;;;;gomes";
	char	delimitador = ';';
	char	**ptr = ft_split(b, delimitador);
	int	n;
	
	

	n = 0;
	while (ptr[n])
	{
		printf("%s",ptr[n]);
		printf("\n");
		n++;
	}
	liberar(ptr);
}*/

#include <stdio.h>
#include "libft.h"
#include "ft_substr.c"
#include "ft_strdup.c"
#include "ft_strlen.c"
static void	liberar(char **matrix)
{
	int	i;
	
	i = 0;
	while (matrix[i])
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
}

static int	alocador(const char *string, char separador, char **ponteiro)
{
	char	**novo_ponteiro;
	char const	*auxiliar;

	novo_ponteiro = ponteiro;
	auxiliar = string;
	while (*auxiliar)
	{
		while (*auxiliar == separador)
			++auxiliar;
		string = auxiliar;
		while (*string && *string != separador)
			++string;
		if (string > auxiliar)
		{
			*ponteiro = ft_substr(auxiliar, 0, string - auxiliar);
			if (!ponteiro)
			{
				liberar(ponteiro);
				return (0);
			}
			++ponteiro;
			auxiliar = string;
		}
	}
	*ponteiro = NULL;
	return (1);
}
static int	contador(const char *str, char separador)
{
	int	count_palavras;

	count_palavras = 0;
	while (*str)
	{
		while (*str == separador)
			++str;
		if (*str && *str != separador)
			++count_palavras;
		while (*str && *str != separador)
			++str;
	}
	return (count_palavras);
}

char	**ft_split(char const *s, char c)
{
	char	palavras;
	char	**ponteiro;

	palavras = contador(s, c);
	ponteiro = (char **)malloc(sizeof(char *) * (palavras + 1));
		if (!ponteiro)
			return (NULL);
	if (alocador(s, c, ponteiro) == 0)
	{
		liberar(ponteiro);
		return (NULL);
	}
	return (ponteiro);

}

int	main(void)
{
	char	v[] = "Eliseu;Soares;Joaquim";
	char	b = ';';
	char	**ptr;
	int	i;

	ptr	= ft_split(v, b);
	i = 0;
	while(ptr[i])
	{
		printf("%s",ptr[i]);
		printf("\n");
		i++;
	}
}

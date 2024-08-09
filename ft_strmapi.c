/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-ped <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:18:37 by made-ped          #+#    #+#             */
/*   Updated: 2023/11/18 18:20:11 by made-ped         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*sptr;
	int		index;

	if (!s || !f)
		return (NULL);
	sptr = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!(sptr))
		return (NULL);
	index = 0;
	while (s[index])
	{
		sptr[index] = f(index, s[index]);
		++index;
	}
	sptr[index] = '\0';
	return (sptr);
}
/*
char f(unsigned int index, char c)
{
    if (index % 2 == 0)
    {
        // Transformar los caracteres en posiciones pares
        return c - ('a' - 'A');
    }
    else
    {
        // Mantener los caracteres en posiciones impares sin cambios
        return c;
    }
}

int main()
{
    char str1[] = "abcdefghijklm";
    char *str2 = ft_strmapi(str1, *f);
    printf("%s\n", str2);
    return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-ped <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 21:35:04 by made-ped          #+#    #+#             */
/*   Updated: 2023/11/12 12:09:06 by made-ped         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen (s + start))
		len = ft_strlen(s + start);
	p = (char *)malloc(sizeof(char) * len + 1);
	if (!p)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		p[i] = s[start + i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
/*
int	main(void)
{
	char	*a1;
	int		ia1 = 5;
	size_t	lena1 = 5;

	printf("%s\n", ft_substr(a1, ia1, lena1));
	return (0);
}
*/
/*
Reserva (con malloc(3)) y devuelve una substring de la string ’s’.
La substring empieza desde el índice ’start’ y tiene una longitud máxima ’len’.
Devuelve La substring resultante, NULL si falla la reserva de memoria.
*/

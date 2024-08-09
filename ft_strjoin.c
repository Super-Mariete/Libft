/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-ped <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 23:21:09 by made-ped          #+#    #+#             */
/*   Updated: 2023/11/18 18:11:12 by made-ped         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*p;
	size_t	len_s1;
	size_t	len_s2;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	p = (char *) malloc (sizeof(char) * (len_s1 + len_s2) + 1);
	if (!p)
		return (NULL);
	ft_memcpy(p, s1, len_s1);
	ft_memcpy(p + len_s1, s2, len_s2);
	p[len_s1 + len_s2] = '\0';
	return (p);
}
/*
int	main()
{
	char s[40] = "Hola mundo a ver si saludas";
	printf("%s\n",ft_strjoin(s, s + 10));
	return (0);
}
*/
/*
Reserva (con malloc(3)) y devuelve una nueva string, formada por la
concatenación de ’s1’ y ’s2’.
Devuelve La nueva string, NULL si falla la reserva de memoria.
*/

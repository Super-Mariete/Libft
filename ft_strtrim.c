/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-ped <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 00:35:29 by made-ped          #+#    #+#             */
/*   Updated: 2023/11/18 18:18:46 by made-ped         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*p;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	if (!set || !s1)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1);
	if (i == j)
		return (ft_strdup(""));
	while (j > i && ft_strchr(set, s1[j]))
		j--;
	p = (char *)malloc (sizeof(char) * (j - i + 2));
	if (!p)
		return (NULL);
	while (i <= j)
		p[k++] = s1[i++];
	p[k] = '\0';
	return (p);
}
/*
int	main()
{
	char	s[40] = "dato Hola mundo dato";
	char	set[40] = "dato";
	printf ("%s\n", ft_strtrim(s, set));
	return (0);
}
*/
/*
Elimina todos los caracteres de la string ’set’ desde el principio y desde 
el final de ’s1’, hasta encontrar un caracter no perteneciente a ’set’.
La string resultante se devuelve con una reserva de malloc(3)
La string recortada, .NULL si falla la reserva de memoria
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-ped <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 12:52:22 by made-ped          #+#    #+#             */
/*   Updated: 2023/11/12 11:59:18 by made-ped         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char		*p;
	size_t		i;

	i = 0;
	p = malloc (sizeof(char) * (ft_strlen (s1)) + 1);
	if (!p)
		return (NULL);
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
/*
int	main()
{
	char str[20] = "Hola mundo";
	printf("%s\n", ft_strdup(str));
	free(str);
	return (0);
}
*/
/*   La función strdup() asigna memoria suficiente para una copia de la cadena 
 *   s1,realiza la copia y devuelve un puntero a la misma.  
     Si no hay suficiente memoria disponible, devuelve NULL .
     La función strndup() copia como máximo n caracteres de la cadena s1 
	 siempre NUL terminando la cadena copiada.
*/

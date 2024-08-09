/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-ped <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:57:17 by made-ped          #+#    #+#             */
/*   Updated: 2023/11/11 17:02:58 by made-ped         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_array(char *str, unsigned int number, long int len)
{
	while (number > 0)
	{
		str[len--] = 48 + (number % 10);
		number = number / 10;
	}
	return (str);
}

static long int	ft_len(int n)
{
	int					len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char				*str;
	long int			len;
	unsigned int		number;

	len = ft_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!(str))
		return (NULL);
	str[len--] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		number = n * -1;
		str[0] = '-';
	}
	else
		number = n;
	str = ft_array(str, number, len);
	return (str);
}
/*La funcion ft_itoa recibe un número entero como parámetro 
 * Devuelve ese número en una  cadena de caracteres.
 * La función ft_len calcula la cantidad de dígitos de número n y se los 
 * devuelve como len a ft_itoa para definir el tamaño que debe usar malloc
 * si n es negativo es decir menor que 0, considera su longitud en  como 1,
 * ya que necesita un char para el signo '-'
 * Lo primero que hace después de reservar memoria es allmacenar \0 en la 
 * última posición.
 * Despues comprueba si el numero es igual a cero , en ese caso almacena 0
 * en caso de que sea mayor llama a la función ft_array
 * esta función suma 48 al módulo del número lo que lo convierte un entero
 * en un char, lo hace desde la derecha hasta la izquierda, esto es poco 
 * intuitivo pero es la forma, despues divide el númerro por 10 y vuelve a 
 * realizar el proceso hasta que el número es igual a 0.
 * En ese momento finaliiza y devuelve el puntero a la cadena de char
 */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-ped <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:53:20 by made-ped          #+#    #+#             */
/*   Updated: 2023/11/18 18:09:39 by made-ped         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s)
	{
		while (*s)
			write(fd, s++, 1);
	}
}
/*
int	main()
{
	char str[] = "Hola mundo";
	int	file = open("Texto.txt", O_WRONLY | O_CREAT, 0644);
	if (file == -1)
	{
		perror("Error al crear el archivo");
		return (1);
	}
	ft_putstr_fd(str, file);
	close (file);
	return (0);
}
*/
/* La función ft_putstr_fd recibe dos caracteres
 * 1.- Un string de caracteres
 * 2.- El file descriptor donde imprimirá esa cadena asegurando que termina
 * en '\0'
 * 			Tres ejemlplos del file descriptor
 * 			1.-ft_putstr_fd(str, 1)
 * 				Escribe la cadena str en la salida estandard (1 = stdout)
 * 			2.-ft_putstr_fd(str, 2)
 * 				Escribe la cadena str en la salida estandard (2 = stderr)
 * 			3.-ft_putstr_fd(str, 0)
 * 				Escribe la cadena  str en la salida estandard (0 = stdin)
 * 				Esta no será visible en la terminal
 */

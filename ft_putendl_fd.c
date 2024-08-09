/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-ped <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:56:54 by made-ped          #+#    #+#             */
/*   Updated: 2023/11/11 17:24:33 by made-ped         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
	{
		while (*s)
			write(fd, s++, 1);
		write(fd, "\n", 1);
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
	ft_putendl_fd(str, file);
	close (file);
	return (0);
}
*/
/*La funcion ft_putendl_fd recibe dos parametros
 * 1.- Un string de caracteres 
 * 2.- El file descriptor donde imprimirá esa cadena asegurand que termina 
 * en '\0'
 * 			Tres ejemlplos del file descriptor
 * 			1.-ft_putendl_fd(str, 1)
 * 				Escribe la cadena str en la salida estandard (1 = stdout)
 * 			2.-ft_putendl_fd(str, 2)
 * 				Escribe la cadena str en la salida estandard (2 = stderr)
 * 			3.-ft_putendl_fd(str, 0)
 * 				Escribe la cadena  str en la salida estandard (0 = stdin)
 * 				Esta no sera visible en la terminal
 */

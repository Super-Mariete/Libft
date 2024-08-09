/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-ped <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:46:11 by made-ped          #+#    #+#             */
/*   Updated: 2023/11/11 17:07:30 by made-ped         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
/*
int	main()
{
	char c = 'q';
	int	file = open("Texto.txt", O_WRONLY | O_CREAT, 0644);
	if (file == -1)
	{
		perror("Error al crear el archivo");
		return (1);
	}
	ft_putchar_fd(c, file);
	close (file);
	return (0);
}
*/
/*La funcion ft_putchar_fd recibe dos parámetros
* 1.- El char que será impreso
* 2.- El file descriptor donde lo hará
*		El file descriptor es u  uso avanzado del sistema aqui hay tres ejempos
*		1.- ft_puchar_fd('A', 1)
*			Escribe 'A' en la salida estandard (1 = stdout)
*		2.- ft_putchar_fd('B', 2)
*			Escribe 'B' en la salida estandard (2 = stderr)
*		3.- ft_purchar_fd('C', 0)
*			Escribe 'C' en la entrada estandard (0 = stdin)
*			En este caso no será visible en la terminal.
*/	

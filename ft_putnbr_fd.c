/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-ped <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:01:51 by made-ped          #+#    #+#             */
/*   Updated: 2023/11/18 18:09:14 by made-ped         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
	else
		ft_putchar_fd(nb + '0', fd);
}
/*
int	main()
{
	int num = 1234;
	int	file = open("Texto.txt", O_WRONLY | O_CREAT, 0644);
	if (file == -1)
	{
		perror("Error al crear el archivo");
		return (1);
	}
	ft_putnbr_fd(num, file);
	close (file);
	return (0);
}
*/
/*La función ft_putnbr_fd recibe dos parámetros
*1.-El entero que va a imprimir
*2.-El file descriptor donde lo hará
*		Los file descriptor mas comunes son 1 stdout, 2 stderr, 3 stdin
*La funcion hace un casting del entero para poder imprimirlo con write ya 
*que llama a la función ft_putchar_fd
*/

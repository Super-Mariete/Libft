/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-ped <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:25:18 by made-ped          #+#    #+#             */
/*   Updated: 2023/11/11 18:03:48 by made-ped         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/*
void	f(unsigned int index, char *c)
{
    if (index % 2 == 0)
    {
        *c = *c - ('a' - 'A');
    }
}

int main()
{
    char str1[] = "abcdefghijklm";
    ft_striteri(str1, *f);
    printf("%s\n", str1);
    return (0);
}
*/

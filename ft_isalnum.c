/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:49:40 by andjenna          #+#    #+#             */
/*   Updated: 2023/11/09 11:49:46 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'));
}

/*
int	main(void)
{
	char	c;

	c = 'a';
	printf("Result when lowercase alpha is passed : %d", ft_isalnum(c));
	c = 'A';
	printf("\nResult when uppercase alpha is passed : %d", ft_isalnum(c));
	c = '0';
	printf("\nResult when digit is passed : %d", ft_isalnum(c));
	c = '+';
	printf("\nResult when non-alpha is passed : %d", ft_isalnum(c));
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:50:02 by andjenna          #+#    #+#             */
/*   Updated: 2023/11/09 11:50:11 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

/*
int	main(void)
{
	char	c;

	c = 'A';
	printf("Result when uppercase alpha is passed : %d", ft_isalpha(c));
	c = 'a';
	printf("\nResult when lowercase alpha is passed : %d", ft_isalpha(c));
	c = 'a';
	printf("\nResult when reel function is passed : %d\n", isalpha(c));
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 22:19:11 by jean-phil         #+#    #+#             */
/*   Updated: 2021/06/08 10:45:11 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"  
#include "stdlib.h"  
void	*ft_memchr(const void *src, int value, size_t num)
{
	unsigned char	*heler_return;
	unsigned char	*interator;

	interator = (unsigned char *)src;
	heler_return = NULL;
	while ((interator != NULL) && (num--))
	{
		if (*interator != (unsigned char)value)
			interator++;
		else
		{
			heler_return = interator;
		}
	}
	return (heler_return);
}

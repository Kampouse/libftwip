/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 17:20:26 by jean-phil         #+#    #+#             */
/*   Updated: 2021/05/23 17:51:52 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

char	*ft_strchr(const char *str, int compared)
{
	unsigned int	value;

	value = 0;
	while (str[value])
	{
		if (str[value] == (char)compared)
		{
			return ((char *)&str[value]);
		}
		value++;
	}	
	if ((char)compared == str[value])
		return ((char *)&str[value]);
	return (NULL);
}
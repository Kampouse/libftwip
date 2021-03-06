/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 17:17:28 by jean-phil         #+#    #+#             */
/*   Updated: 2021/06/08 10:44:47 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t		len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

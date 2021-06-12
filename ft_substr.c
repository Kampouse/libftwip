/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 16:37:15 by jean-phil         #+#    #+#             */
/*   Updated: 2021/06/08 10:36:56 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

char	*ft_substr(char const *src, size_t start, size_t ln)
{
	char	*output;
	size_t	lenght;
	size_t	inc;

	 inc = 0;
	 if (!src)
		 return (NULL);
	lenght = ft_strlen(src + start);
	if (ft_strlen(src) < start)
		return (ft_strdup(""));
	if (lenght < ln)
		ln = lenght;
	 output = malloc(sizeof(char) * ln + 1);
	 if (!output)
		 return (NULL);
	 while (inc < ln)
	{
		output[inc] = src[start + inc];
		inc++;
	}
	 output[inc] = '\0';
	 return (output);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 08:46:30 by laumoral          #+#    #+#             */
/*   Updated: 2022/11/15 11:11:15 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int		len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	x;

	x = ft_strlen(src);
	count = 0;
	if (size)
	{
		while (src[count] && count < size -1)
		{
			dest[count] = src[count];
			count++;
		}
		dest[count] = src[count];
	}
	return (x);
}

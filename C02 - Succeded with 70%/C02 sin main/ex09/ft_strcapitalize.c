/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:17:20 by laumoral          #+#    #+#             */
/*   Updated: 2022/11/15 11:10:45 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*start;

	start = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		str++;
	}
	return (start);
}

char	*ft_strcapitalize(char *str)
{
	int		firstletter;
	char	*start;

	start = str;
	firstletter = 1;
	ft_strlowcase(str);
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			if (firstletter == 1)
			{
				*str -= 32;
				firstletter = 0;
			}
		}
		else if (*str >= '0' && *str <= '9')
			firstletter = 0;
		else
			firstletter = 1;
		str++;
	}
	return (start);
}

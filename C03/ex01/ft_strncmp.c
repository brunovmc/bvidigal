/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvidigal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 17:31:48 by bvidigal          #+#    #+#             */
/*   Updated: 2019/10/20 11:50:11 by bvidigal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

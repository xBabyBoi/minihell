/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_dollar_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhafidi <rhafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 17:56:29 by rhafidi           #+#    #+#             */
/*   Updated: 2025/08/02 19:18:32 by rhafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char	*ret_handle_dollar(char *result, int *i)
{
	char	*tmp;

	tmp = ft_strjoin(result, "$");
	free(result);
	(*i)++;
	return (tmp);
}

char	*ret_braces(char *result, char *var_value)
{
	char	*tmp;

	tmp = ft_strjoin(result, var_value);
	free(result);
	free(var_value);
	return (tmp);
}

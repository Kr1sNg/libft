/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 09:22:49 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/11/08 11:17:12 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	LIBRARY: N/A
**	SYNOPSIS: remove and free all the linked list
**  
**	DESCRIPTION:
** 	Deletes and frees the given node and every successor of that node, using
**  the function ’del’ and free(3). Finally, the pointer to the list must be
**  set to NULL.
**    
**	RETURN VALUE: N/A
*/

#include "libft.h"

void    ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list  *tmp;

    while (lst != NULL)
    {
        tmp = lst;
        lst = tmp->next;
        if (del != NULL)
            del(tmp->content);            
        free(tmp);
    }
}

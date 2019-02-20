/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_mate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 09:50:38 by exam              #+#    #+#             */
/*   Updated: 2019/02/19 10:39:00 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		main(int argc, char **argv)
{
	char	**board;
	int		size;
	int		i;
	int		j;
	int		king_i;
	int		king_j;

	if (argc > 1)
	{
		size = argc - 1;
		board = (char **)malloc(sizeof(char *) * size);
		i = 0;
		while (i < size)
		{
			board[i] = (char *)malloc(sizeof(char) * size);
			board[i] = argv[i + 1];
			i++;
		}
		i = 0;
		while (i < size)
		{
			j = 0;
			while(j < size)
			{
				if (board[i][j] == 'K')
				{
					king_i = i;
					king_j = j;
					break;
				}
				j++;
			}
			i++;
		}
		i = king_i;
		j = king_j;
		while (i < size)
		{
			if (board[i][j] == 'P' || board[i][j] == 'B')
				break;
			else if (board[i][j] == 'R' || board[i][j] == 'Q')
			{
				write(1, "Success\n", 8);
				return (0);
			}
			i++;
		}
		i = king_i;
		j = king_j;
		while (i >= 0)
		{
			if (board[i][j] == 'P' || board[i][j] == 'B')
				break;
			else if (board[i][j] == 'R' || board[i][j] == 'Q')
			{
				write(1, "Success\n", 8);
				return (0);
			}
			i--;
		}
		i = king_i;
		j = king_j;
		while (j < size)
		{
			if (board[i][j] == 'P' || board[i][j] == 'B')
				break;
			else if (board[i][j] == 'R' || board[i][j] == 'Q')
			{
				write(1, "Success\n", 8);
				return (0);
			}
			j++;
		}
		i = king_i;
		j = king_j;
		while (j >= 0)
		{
			if (board[i][j] == 'P' || board[i][j] == 'B')
				break;
			else if (board[i][j] == 'R' || board[i][j] == 'Q')
			{
				write(1, "Success\n", 8);
				return (0);
			}
			j--;
		}


///////////////////diagonal pawns:

		i = king_i;
		j = king_j;
		if ((i < (size - 1) && j > 0 && board[i + 1][j - 1] == 'P') || (i < (size - 1) && j < (size - 1) && board[i + 1][j + 1] == 'P'))
		{
			write(1, "Success\n", 8);
			return (0);
		}







//////////////////diagonal

		i = king_i;
		j = king_j;
		while (i < size && j < size)
		{
			if (board[i][j] == 'P' || board[i][j] == 'R')
				break;
			else if (board[i][j] == 'B' || board[i][j] == 'Q')
			{
				write(1, "Success\n", 8);
				return (0);
			}
			i++;
			j++;
		}
		i = king_i;
		j = king_j;
		while (i < size && j >= 0)
		{
			if (board[i][j] == 'P' || board[i][j] == 'R')
				break;
			else if (board[i][j] == 'B' || board[i][j] == 'Q')
			{
				write(1, "Success\n", 8);
				return (0);
			}
			i++;
			j--;
		}
		i = king_i;
		j = king_j;
		while (i >= 0 && j < size)
		{
			if (board[i][j] == 'P' || board[i][j] == 'R')
				break;
			else if (board[i][j] == 'B' || board[i][j] == 'Q')
			{
				write(1, "Success\n", 8);
				return (0);
			}
			i--;
			j++;
		}
		i = king_i;
		j = king_j;
		while (i >= 0 && j >= 0)
		{
			if (board[i][j] == 'P' || board[i][j] == 'R')
				break;
			else if (board[i][j] == 'B' || board[i][j] == 'Q')
			{
				write(1, "Success\n", 8);
				return (0);
			}
			i--;
			j--;
		}
		write(1, "Fail\n", 5);
	}
	else
	{
		write(1, "\n", 1);
	}
	return (0);
}

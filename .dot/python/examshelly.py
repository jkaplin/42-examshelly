# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    examshelly.py                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkaplin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/25 15:49:06 by jkaplin           #+#    #+#              #
#    Updated: 2019/03/01 12:43:38 by jkaplin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash/python3

from py_modules.modules import *

rainbow_set('=', 80, end='\n', bold=1)
rainbow_set('-', 80, end='\n')
rainbow_set('-', 19)
rainbow_str('> ', bold=1)
print("Hello there human.", end='')
rainbow_str("||", bold=1)
rainbow_set('-', 39, end='\n')
rainbow_set('-', 19)
rainbow_str('> ', bold=1)
print("My name is Shelly,", end='')
rainbow_str("||", bold=1)
rainbow_set('-', 9)
print("  CHOOSE YOUR MODE  ", end='')
rainbow_set('-', 10, end='\n')
rainbow_set('-', 19)
rainbow_str('> ', bold=1)
print("some call me Jane.", end='')
rainbow_str("||", bold=1)
rainbow_set('-', 39, end='\n')
rainbow_set('-', 19)
rainbow_str('> ', bold=1)
print("I am here to help,", end='')
rainbow_str("||", bold=1)
rainbow_set('-', 9, bold=1)
rainbow_str(">------------------<", bold=1)
rainbow_set('-', 10, bold=1, end='\n')
rainbow_set('-', 19)
rainbow_str('> ', bold=1)
print("and ease the pain.", end='')
rainbow_str("||", bold=1)
rainbow_set('-', 9, bold=1)
print(" 1)   Practice   (1 ", end='')
rainbow_set('-', 10, end='\n', bold = 1)
rainbow_set('-', 19)
rainbow_str('> ', bold=1)
print("My mom is calling,", end='')
rainbow_str("||", bold=1)
rainbow_set('-', 9, bold=1)
print(" 2)     Free     (2 ", end='')
rainbow_set('-', 10, end='\n', bold = 1)
rainbow_set('-', 19)
rainbow_str('> ', bold=1)
print("so I've got to go.", end='')
rainbow_str("||", bold=1)
rainbow_set('-', 9, bold=1)
print(" 3)   Hardcode   (3 ", end='')
rainbow_set('-', 10, end='\n', bold = 1)
rainbow_set('-', 19)
rainbow_str('> ', bold=1)
print("But you stay here!", end='')
rainbow_str("||", bold=1)
rainbow_set('-', 9, bold=1)
rainbow_str(">------------------<", bold=1)
rainbow_set('-', 10, bold=1, end='\n')
rainbow_set('-', 80, end='\n')
mode_num = -1
rainbow_str(">> ", bold=1)
mode = input()
while (1):
    if (mode == "0"):
        mode = "secretmode.py"
        break
    elif (mode == "1" or mode == "practice" or mode == "Practice" or mode == "p" or mode == "P"):
        mode = "practice.py"
        break
    elif (mode == "2" or mode == "freeroam" or mode == "Freeroam" or mode == "free" or mode == "Free" or mode == "f" or mode == "F"):
        mode = "freeroam.py"
        break
    elif (mode == "3" or mode == "hardcore" or mode == "hard" or mode == "Hardcore" or mode == "h" or mode == "H"):
        mode = "hardcore.py"
        break
    elif (mode == "jkaplin"):
        break
    elif (mode == "chford"):
        break
    elif (mode == "awoodod"):
        break
    else:
        rainbow_str("?? ", bold=1)
        mode = input()

rainbow_set('=', 80, end='\n')
cprint("\nShellyMode Chosen:", 'yellow', end=" ")
if (mode == "practice.py"):
    cprint("Practice Mode\n", 'yellow',  attrs=['underline'])
elif (mode == "free.py"):
    cprint("Free Mode\n", 'green',  attrs=['underline'])
elif (mode == "hardcore.py"):
    cprint("Hardcode Mode\n", 'red',  attrs=['underline'])
else:
    cprint("Secret Mode\n", 'magenta',  attrs=['underline'])

mode_path = ".dot/python/modes/" + mode
exec(open(mode_path).read())

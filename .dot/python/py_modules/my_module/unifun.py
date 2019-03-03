# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    unifun.py                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkaplin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/28 07:41:05 by jkaplin           #+#    #+#              #
#    Updated: 2019/03/01 15:02:32 by jkaplin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!bin/bash/python3

HOUR = 60 * 60
MIN = 60



from py_modules.modules import *

def press_key(press_str, to_str, c):
    print("(Press", press_str, "to", to_str + "...) ", end = '\n')
    while (getkey() != c):
        continue
    return

def press_enter_to_continue():
    press_key("Enter", "continue", '\n')
    return

def rainbow_set(c, length, end ='', bold=0, dark=0):
    colors = ['grey', 'red', 'green', 'yellow', 'blue', 'magenta']
    attr = ['bold', 'dark', ]
    if (bold):
        attr.pop(1)
    elif (dark):
        attr.pop(0)
    i = 0
    while (i < length):
        cprint(c, colors[random.randint(0, len(colors) - 1)], attrs=[attr[random.randint(0, len(attr) - 1)], attr[random.randint(0, len(attr) - 1)]], end='')
        i+= 1
    print("", end=end)
    return

def rainbow_str(s, bold=0, dark=0, end=''):
    i = 0
    while (i < len(s)):
        rainbow_set(s[i], 1, bold=bold, dark=dark)
        i += 1
    return

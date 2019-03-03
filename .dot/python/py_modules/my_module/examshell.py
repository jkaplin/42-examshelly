# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    examshell.py                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkaplin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/27 13:47:01 by jkaplin           #+#    #+#              #
#    Updated: 2019/03/01 14:06:16 by jkaplin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash/python3

from py_modules.modules import *

def examshell(mode, projects):
    exam = main_menu(mode, projects)
    tmp = exam
    while (tmp):
        exam = tmp
        print_time(tmp.t)
        tmp = confermation(main_menu, tmp.mode, projects)
    create_main_dir(exam)
    print_available_commands()
    #for assignment in exam:
    return

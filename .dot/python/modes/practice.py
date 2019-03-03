# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    practice.py                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkaplin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/27 13:39:48 by jkaplin           #+#    #+#              #
#    Updated: 2019/03/01 20:03:52 by jkaplin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash/python3

from py_modules.modules import *

"""
Ask the questions just like the beginning of the exam...!... / examshell...?
To chose a certain project from the available ones - to make them all available:
0 : Exam00
1 : Exam01
2 : Exam02
3 : Exam Final
4 : C Exam Alone In The Dark - Beginner
5 : Beginner Rush
5 : Beginner Rush
5 : C Exam Alone In The Dark - Intermediate
6 : C Exam Alone In The Dark - Advanced
7 : Prepare to Die
and if they press on the numbers anything higher than 7 then to mention it and give them some secret, also some different secret if the number they give is specificly 42...
"""
    
#setting specific variables to make it exactly like the practice exams:

mode = "practice"

projects = [
    Project(name = "Exam00", best_grade = 95),
    Project(name = "Exam01", best_grade = 95),
    Project(name = "Exam02", best_grade = 95),
    Project(name = "Exam Final", best_grade = 95),
    Project(name = "C Exam Alone In The Dark - Beginner", best_grade = 0),
]

#calling the examshell function with all of the specific variables set above
examshell(mode, projects)


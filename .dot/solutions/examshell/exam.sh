# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    exam00                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkaplin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/15 16:20:30 by jkaplin           #+#    #+#              #
#    Updated: 2018/11/15 18:24:36 by jkaplin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

L=0
Q=1

mkdir ~/Examshell/Exam00_Questions
cp .Examshell/Questions/only_a.txt ~/Examshell/Exam00_Questions
while :
do
	INPUT=read
	if [ $INPUT == "grademe" ]
	then
		echo "GRADE\n"
		L++ Q++ //to increment level only if grade is correct and to assign zero to Q and to increment only Q if they got it wrong and reduce the points and be exactly like the exam
	fi
	if [ $L == 6 ]
	then
		exit 0
	fi
done

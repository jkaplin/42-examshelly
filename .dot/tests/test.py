# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    test.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkaplin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/20 19:20:11 by jkaplin           #+#    #+#              #
#    Updated: 2019/02/24 21:07:44 by jkaplin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

import subprocess
import os
import filecmp

test_1 = "abc"
test_2 = "RaInB0w d4Sh!"
test_3 = "ThE Ck3 Is L|3"
test_4 = "\"\""
test_5 = ""

os.mkdir("/nfs/2018/j/jkaplin/examshell/traces/0/aff_a")

"""
os.system(["~/examshell/traces/0/aff_a/your_aff_a", test_1, "> ~/examshell/traces/0/aff_a/your_test_1.out"])
os.system("gcc -Wall -Werror -Wextra ~/examshell/.solutions/0/aff_a/aff_a.c -o ~/examshell/traces/0/aff_a/expected_aff_a")
os.system("~/examshell/traces/0/aff_a/expected_aff_a", test_1, "> ~/examshell/traces/0/aff_a/expected_test_1.out")
if filecmp.cmp("~/examshell/traces/0/aff_a/your_test_1.out", "~/examshell/traces/0/aff_a/expected_test_1.out"):
    print("SUCCESS")
else:
    print("FAILURE")
    import subprocess
"""

tests = ["abc", "RaInB0w d4Sh!", "ThE Ck3 Is Ll3", "\"\"", ""] 

for test in tests:
    os.system("gcc -Wall -Werror -Wextra ~/examshell/rendu/aff_a/aff_a.c -o ~/examshell/traces/0/aff_a/your_aff_a")
    p = subprocess.Popen(["/nfs/2018/j/jkaplin/examshell/traces/0/aff_a/your_aff_a", test], stdout=subprocess.PIPE)
    your_output = p.communicate()[0]
    os.system("gcc -Wall -Werror -Wextra ~/examshell/.solutions/0/aff_a/aff_a.c -o ~/examshell/traces/0/aff_a/expected_aff_a")
    p = subprocess.Popen(["/nfs/2018/j/jkaplin/examshell/traces/0/aff_a/expected_aff_a", test], stdout=subprocess.PIPE)
    true_output = p.communicate()[0]
    print("test: " + test);
    if your_output == true_output:
        print("SUCCESS")
    else:
        print("FAILURE")

"""
# Open a file
fo = open("foo.txt", "wb")
fo.write( "Python is a great language.\nYeah its great!!\n");
# Close opend file
fo.close()

# Open a file
fo = open("foo.txt", "r+")
str = fo.read(10);
print "Read String is : ", str
# Close opend file
fo.close()
"""

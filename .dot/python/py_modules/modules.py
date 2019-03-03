# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    modules.py                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkaplin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/27 15:39:59 by jkaplin           #+#    #+#              #
#    Updated: 2019/03/01 13:12:28 by jkaplin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash/python3

import os
import subprocess
import time
import sys
import random
from pathlib import Path
from shutil import rmtree

#online_modules
from py_modules.getkey_module.getkey import *
from py_modules.termcolor_module.termcolor import *

#my_modules
from py_modules.my_module.unifun import *
from py_modules.my_module.examfun import *
from py_modules.my_module.examshell import *

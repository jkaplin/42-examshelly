# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    examfun.py                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkaplin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/27 14:16:00 by jkaplin           #+#    #+#              #
#    Updated: 2019/03/01 15:02:23 by jkaplin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash/python3

from py_modules.modules import *

class Project:
    def __init__(self, name, best_grade):
        self.name = name
        self.best_grade = best_grade

class Time:
    def __init__(self, hours, minutes, seconds):
        self.hours = hours
        self.minutes = minutes
        self.seconds = seconds

class Exam:
    def __init__(self, mode, project, main_path, assignments, t):
        self.mode = mode
        self.project = project
        self.main_path = main_path
        self.assignments = assignments
        self.t = t

class Assign:
    def __init__(self, level, subject, num, points, status):
        self.level = level
        self.subject = subject
        self.num = num
        self.points = points
        self.status = status

def get_projects():
    # from the memory file to create here a list of all possible exams (with
    return

def get_project_num(projects):
    project = input(colored("examshelly", 'yellow') + "> ")
    num = -1
    while (1):
        if (project == "0" or project == "00" or project == "Exam00" or project == "exam00" or project == "Exam0" or project == "exam0"):
            num = 0
        elif (project == "1" or project == "01" or project == "Exam01" or project == "exam01" or project == "Exam1" or project == "exam1"):
            num = 1
        elif (project == "2" or project == "02" or project == "Exam02" or project == "exam02" or project == "Exam2" or project == "exam2"):
            num = 2
        elif (project == "3" or project == "03" or project == "Exam Final" or project == "exam final" or project == "ExamFinal" or project == "Examfinal" or project == "examfinal"):
            num = 3
        elif (project == "4" or project == "04" or project == "C Exam Alone In The Dark - Beginner" or project == "C Beginner" or project == "C beginner" or project == "c beginner"):
            num = 4
        elif (project == "5" or project == "05" or project == "Beginner Rush" or project == "Beginner rush" or project == "beginner rush"):
            num = 5
        elif (project == "6" or project == "06" or project == "C Exam Alone In The Dark - Intermediate" or project == "C Intermediate" or project == "C intermediate" or project == "c intermediate"):
            num = 6
        elif (project == "7" or project == "07" or project == "Intermediate Rush" or project == "Intermediate rush" or project == "intermediate rush"):
            num = 7
        elif (project == "8" or project == "08" or project == "C Exam Alone In The Dark - Advanced" or project == "C Advanced" or project == "C advanced" or project == "c advanced"):
            num = 8
        elif (project == "9" or project == "09" or project == "Advanced Rush" or project == "Advanced rush" or project == "advanced rush"):
            num = 9
        elif (project == "10" or project == "10" or project == "Prepare to Die" or project == "Prepare To Die" or project == "Prepare to die" or project == "prepare to die" or project == "kkozlov" or project == "Kirill" or project == "kirill"):
            num = 10
        if (num >= 0 and (projects[num].best_grade != -1 or project == "kkozlov" or project == "Kirill" or project == "kirill")):
            break
        rainbow_str("????")
        project = print(colored("shelly", 'yellow') + "> ", end='')
        project = input()
    return (num)


def main_menu(mode, projects):
    # here to go to the memory file and see what he finished and what is available to him - a file with his finished projects and the grade he got in each project
    # projects = get_projects
    
    print("The following projects are available to you at the moment:\n")
    i = 0
    while (i < len(projects)):
        print("  " + str(i) + " : " + colored(projects[i].name, attrs=['bold']) + " (Best grade you got is " + colored(str(projects[i].best_grade), 'green') + ")\n")
        i += 1
    print("Which project would you like to practice?")
    num = get_project_num(projects)
    project = projects[num]

    main_path = create_dir_template(mode)
    main_path += str('/' + project.name) 

    assignments = arrange_assignments(mode)

    if (project.name == "Exam00"):
        t = Time(hours = 4, minutes = 0, seconds = 0)
    else:
        return

    exam = Exam(mode, project, main_path, assignments, t)

    rainbow_set('=', 80, end='\n')
    cprint("\nProject Chosen:", 'yellow', attrs=['bold'], end=" ")
    if (project.name[0] == "E"):
        color = 'yellow'
    elif (project.name[0] == "C"):
        color == 'green'
    elif (project.name[0] == "B" or project.name[0] == "I" or project.name[0] == "A"):
        color == 'magenta'
    elif (project.name == "Prepare to Die"):
        color = 'red'
    else:
        color = 'grey'
    cprint(project.name, color,  attrs=['bold', 'underline'])
    return exam

#printing the amount of time of the project - warning before starting...
def print_time(t):
    if (t.hours <= 0 and t.minutes <= 0 and t.seconds <= 0):
        print("You would have " + colored("no ", 'red') + "time to complete this project")
        #go to the correct place when the time has ended...?
    elif (t.hours <= 0 and t.minutes <= 0):
        print("You would have only " + colored(str(seconds) + "sec ", 'green') + "to complete this project")
    else:
        printed = 0
        print("You would have ", end='')
        if (t.hours > 0):
            print(colored(str(t.hours) + "hrs ", 'green'), end='')
            printed = 1
        if (t.minutes > 0):
            if (printed):
                if (t.seconds > 0):
                    print(colored(", ", 'green'), end='')
                else:
                    print(colored("and ", 'green'), end='')
            print(colored(str(t.minutes) + "min ", 'green'), end='')
        if (t.seconds > 0):
            print(colored("and " + str(t.seconds) + "sec ", 'green'), end='')
        print("to complete this project")
        return

def arrange_assignments_randomly_by_level(mode):
    assignments = []

        Assign(level = 0, subject = "only_a", num = 0, points = 0, status = "Current"),
        Assign(level = 0, subject = "only_z", num = 0, points = 0, status = "ToDo"),



def make_dir(path):
    try:
        os.mkdir(path)
    except OSError:
        return path
    return path

def remove_and_make_dir(path):
    try:
        os.mkdir(path)
    except OSError:
        print_warning(path)
        rmtree(path)
        os.mkdir(path)
    return

def create_dir_template(mode):
    main_path = str(Path.home()) + "/examshelly"
    main_path = make_dir(main_path) + "/" + mode
    main_path = make_dir(main_path)
    return (main_path)

def print_files_location(path):
    main_dir = "~"
    i = len(str(Path.home()))
    while (i < len(path)):
        main_dir += path[i]
        i += 1
    print("Your exam files will be stored in " + colored(main_dir, 'green'))

def print_warning(path):
    cprint("\nWARNING", 'red')
    print_files_location(path)
    cprint("THIS DIRECTORY WILL BE ENTIRELY EMPTIED BEFORE YOU START", 'red')
    print("So, if you do have important things there, Ctrl-C NOW and back them up before running this.\n")
    press_enter_to_continue()
    return


def create_main_dir(exam):
    remove_and_make_dir(exam.main_path)
    os.mkdir(exam.main_path + "/rendu")
    os.mkdir(exam.main_path + "/subjects")
    ass = exam.assignments[0]
    subject = ".dot/subjects/" + str(ass.level) + "/" + ass.subject
    path = exam.main_path + "/subjects"
    subprocess.Popen(["cp", "-R", subject, path])
    return


def confermation(function, *args):
    while (1):
        answer = input("Confirm ? [y/n] ")
        if (answer and answer[0] == 'y'):
            return
        elif (answer and answer[0] == 'n'):
            print("OK, I'll ask again...\n")
            time.sleep(2)
            ret = function(*args)
            break
        else:
            print("Please respond with 'yes' or 'no'")
    return ret


#create git reposotory using bash command with subproccess... make it look exactly like the exam
def print_available_commands():
    print("\nYour git repository was successfully cloned to ~/examshelly/rendu\n")
    print("The following commands are available to you:")
    print(colored("  status", 'green'), ": Displays the status of your session, including information about\n    your current assignment, and the exam history.", sep="")
    print(colored("  grademe", 'green'), ": Asks the server to grade your current assignment. If you\n    have done it right, you will gain the points of the current assignment, go\n    up a level, and try the next one. If you fail, however, you will have\n    another assignment of the same level to do, and it will potentially bring\n    you less points on your grade ... So be sure of yourself before you launch\n    this command !", sep="")
    print(colored("  finish", 'green'), ": Tells the server you are finished with your exam.\n", sep="")
    press_enter_to_continue()
    print(end='\n')
    rainbow_set('=', 80, end='\n')
    return

def initial_message():
    print("You can now work on your assignment. When you are sure you're done with it,\npush it to vogsphere, and then use the \"" + colored("grademe", 'green') + "\" command to be graded.")

def initial_time():
    local_start = time.localtime()
    t_start = local_start.tm_hour * HOUR + local_start.tm_min * MINUTE + local_start.tm_sec
    return (t_start)
    
    end_hrs = (local_start.tm_hour + 4) % 24
    
    end_min = (local_start.tm_min)
    return

def time_passed(t_start):
    t_local = local.tm_hour * 60 * 60 + local.tm_min * 60 + local.tm_sec
    t_diff = t_local - t_start
    return (t_diff)


def status(assignment, exam, grade,  t_diff, t_end):
    if (t_diff < 0):
        print(colored("ERROR", 'red') + ": There does not appear to be any running session here. Most probably the end date was exceeded, and it's been marked as finished already.")
    print("================================================================================")
    print("You are currently at level", str(assignment.level))
    print("You are running in", colored(exam.mode, 'green'), "mode")
    print("And the project is", colored(exam.project.name, 'green', "(Best grade you got is " + colored(exam.project.best_grade, 'green') + ")"), 
    print("Your current grade is " + colored(str(grade), 'green') + "/100")
    print("Assignments:")
    i = assignment.level
    while (i >= 0):
        print("  Level " + str(i) + ":")
        j = assignment.num
        while (j >= 0):
            ass = exam.assignments.[i][j]
            print("    " + str(ass.num) + ": " + ass.subject + "for " + str(ass.points) + " potential points " + "(" + colored(ass.status, 'magenta') + ")")
            j += 1
    print("Your current assignment is", assignment.subject, "for", str(assignment.points), "potential points")
    print("It is assignment", str(assignment.num), "for level", str(assignment.level))
    print("The subject is located at: " + "~/examshelly/subjects/" + assignment.subject)
    print("You must turn in your files in a " + colored("subdirectory of your Git repository ", attrs=['bold']) + "with the\nsame name as the assignment (" + colored("~/examshelly/rendu/" + str.name, 'red', attrs=['bold']) + ").\n")
    to_end = 4 * 60 * 60 * 60 - t_diff
    hour = to_end / (60 * 60)
    minute = (to_end / 60) % 60
    second = to_end % 60
    print("The end date for this exam is:", time.strftime(" %d/%m/%Y %H:%M:%S", t_end))
    if (hour > 0):
        print("You have " + hour + "hrs, " + minute + "min and " + second + "sec remaining")
    elif (minute > 0):
        print("You have " + minute + "min and " + second + "sec remaining")
    elif (second > 0):
        print("You  only have " + second + "sec remaining")
    print("================================================================================")
    return


def finish():
    return

def grademe():
    return


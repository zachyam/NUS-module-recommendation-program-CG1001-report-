# NUS-module-recommendation-program-CG1001-report-
About

This simple program, written in C, is a fun little mathematical model our group wrote to recommend either the Hardware track or Software track to Computer Engineering students based on these 3 criteria:

1) GPA of their previous hardware-related and software-related modules

2) How well they like each module, and

3) How well past students like the modules

All 3 criteria will be given equal weightage and have a part to play in suggesting which track the student should take.

So for instance, if a student scores well for CG1001 and has a high individual preference for it, the average weighted value will decrease slightly if students from previous batches do not like the module, and vice versa.

There are 3 files that can be accessed in this repository:

1) NUS_Module_Recommendation.c is the source code in C.

2) NUS_Module_Recommendation.exe is the executable file for Windows. To download, click on the link and click on 'View raw'.

3) NUS_Module_Recommendation.out is the executable file for OSX. To download, click on the link and cick on 'View raw'.

Limitations

As more and more users input their individual preferences, the new values will be computed which will in turn change the values of the average preference of the modules. For the sake of simplicity, however, this program does not include the computation.

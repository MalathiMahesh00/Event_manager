14. Write a program to get input on number of modules and events.
Each module can be interested in any number of events.  Let say 3 modules and 4 events are there.  Module 1 can be interested in events 2 and 3 while module 2 might be interested in events 2,3 and 4.  Modules registers a callback function and events it is interested in with event manager.  Event manager should store this information and when an event occurs it should invoke the callback functions of all the modules interested in that event. 

Have separate files: init.c, module.c, event_manager.c
Directory structure: bin, include, src
Makefile to compile the code.
Upload the code to github and share the link in the assignment.

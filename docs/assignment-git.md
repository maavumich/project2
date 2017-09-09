Project Specification
================================================================================

Completing the Project
================================================================================
The git section of project 2 is split up into multiple parts, each building
on the last. Please work on the project in order. 

The last 2 parts are optional, since they are not required in order to contribute
to MAAV, however are essential for maintaining the MAAV codebase as a lead. 

Part -1 - What is git?
--------------------------------------------------------------------------------

Watch this [video](https://www.youtube.com/watch?v=_Jmkvv_nKTE) which 
explains what git is and what it does. 

Part 0 - Learning the basics
--------------------------------------------------------------------------------

Codeacademy has a great interactive tutorial for learning the basics of git, 
which you can find [here](https://www.codecademy.com/learn/learn-git). We won't
be checking if you completed it, however everything past this point will build
on that tutorial. 


Part 1 - Setting up git with EECS Gitlab
--------------------------------------------------------------------------------

From this point onward we will be moving more rapidly, and you may have to 
do some more research in order to complete the project. Here are some resources
that will help you: 

* The [Pro Git Online Book](https://git-scm.com/book/en/v2) is a complete 
overview of all things git. However it goes a bit too deep for what a beginner
has to know. 
* The [git man pages](https://git-scm.com/docs). As always, you can type 
`man [command]` to get the documentation directly in your terminal. Try
`man git commit` or `man git log`
* [Google](https://google.com). If you ask us a question that when googled, 
google answers in the first 2 results, we will assume you didn't put in much
effort into solving the problem yourself. Please google before asking MAAV
members for help.

### The project

Head over to [EECS Gitlab](https://gitlab.eecs.umich.edu/) and log in with
your umich uniqname and password. 

Gitlab is a git provider similar to Github, however they allow organizations
to run their own instance. This instance of Gitlab is run by our EECS department, 
and they allow you to create infinite private repositories. We will be using
this to practice using git. 

Of course you can also use the EECS Gitlab for personal projects or school work. 
Many MAAV members have all of their class 
work in this Gitlab, so they can view changes made to their code in their classes, 
or changes made to a paper. 

Before you can do anything, you'll have to add your ssh key to gitlab. This will
allow Gitlab to authenticate you when you either push or pull.

Lets try making a new project. Create a new project using Gitlab named 
maav-p2-1, and clone the
empty project. Create a file README.md and add the following lines:

```
#MAAV Project 2 part 1

This is pretty much just a basic test
```

Add the code to your repository, commit with some basic message, and push. 

Refresh your browser in the maav-p2-1 project on gitlab. If the push worked, 
you should now see a file README.md in the project. Cool, now we know Gitlab
works. 


Part 2 - Working with Remotes
--------------------------------------------------------------------------------

Read 
[This Document](https://git-scm.com/book/en/v2/Git-Basics-Working-with-Remotes)
for an overview of what remotes are and how to manipulate them. 

MAAV uses remotes to manage access. Our `origin` remote is where our global
`master` branch lives, where we put the latest version of our flight ready 
code. In order to develop for maav, each member develops on their own 
remote named after their uniqname. 

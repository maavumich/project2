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

Part 2 - Branches
--------------------------------------------------------------------------------
Read 
[This Document](https://git-scm.com/book/en/v2/Git-Branching-Branches-in-a-Nutshell)
for an overview about what branches are in git, and how to use them. This will
be useful for completing the exercise. 

Branches in git are primarily used to work on a feature without disturbing
or being disturbed by other people's work. Say for example you are working
on some code, and end up breaking something. You decide to push to master, 
and someone else pulls that broken code. Now they can't do work because you
broke something, which sucks. With branches, you can work on your own thing, 
and push somewhere else without disturbing anyone else. Additionally, if 
someone makes changes to `master`, you won't be affected by these changes
until you merge. Branches make it easier to stay in the development mindset
before you actually have to merge in with the other code. 

On MAAV, you should always be working on a branch which is not `master`. 
`master` is the branch where we keep all of our flight-ready code. In order
to merge your features, we need your changes to be on a different branch so
we can properly merge your features into master. 

### Exercise

In this exercise we will do some exercises involving branches. The instructions
here will be vague, so you will have to go back to the documentation we linked, 
or do some googling on your own. 

1. Create a new project using Gitlab named `maav-p2-2`, and clone the repo. 

2. Create a file README.txt, and write something in it. Push it to gitlab. 
You should see what you wrote on the gitlab page for your `maav-p2-2`. 

3. Create a new branch off of `master`
named `otherbranch`. Switch to that branch and add
a line at the end of `README.txt`. Push to that branch. 

4. Switch back to `master`, then create another branch off of `master` called
`morebranch`. Add a line to the beginning to `README.txt`. Push to that branch. 

5. Switch back to `master`, and merge `otherbranch` into `master`. This should
work without problem. This is because `otherbranch` is exactly one commit ahead
of master, so git can directly apply the commit to master. 

6. Now merge `morebranch` into `master`. This will open a text editor called
GNU nano, and show a message "Merge branch 'morebranch'". This is git telling
you that it has to perform a merge to combine the branches. Git has to move the
commit from `morebranch` and apply it after the commit created with `otherbranch`.
Accept the mere. 

7. At this point, check `README.txt`. The edits made on both branches should
appear in the file. Now we just need to clean up our branches. Delete the 
two branches we created. Running the command 
`git log --oneline --decorate --graph --all` shows us where we branched off, 
and where we merged. Note that `otherbranch` does not show up, because it 
was merged completely cleanly, while `morebranch` required an actual merge
to combine it. 

This concludes this exercise. Here you learned the basics about how branches
work. If you have any further questions, feel free to ask us. 

Part 3 - Merge Conflicts
--------------------------------------------------------------------------------

Merge conflicts are what happens when git dosen't know how to merge your changes
with the changes made on the branch you are trying to merge into. This mainly
occurs when the same line on each file was changed. 

Read [This Document](https://help.github.com/articles/resolving-a-merge-conflict-using-the-command-line/)

For information about how to resolve merge conflicts, it will be useful in the
exercise. 

### Exercise

1. Create a new project using Gitlab named `maav-p2-3`, and clone the repo. 

2. Create a file README.txt, and write something in it. Push it to gitlab. 
You should see what you wrote on the gitlab page for your `maav-p2-3`. 

3. Create a new branch off of `master`
named `otherbranch`. Switch to that branch and add
a line at the end of `README.txt`. Push to that branch. 

4. Checkout master, and add a different line to the end of `README.txt`. 

5. Now try merging your branch `otherbranch` into master. Git will complain 
that there are merge conflicts. Use information from the above link to fix 
the merge conflicts. 

Part 4 - Working with Remotes
--------------------------------------------------------------------------------

Read 
[This Document](https://git-scm.com/book/en/v2/Git-Basics-Working-with-Remotes)
for an overview of what remotes are and how to manipulate them. 

MAAV uses remotes to manage access. Our `origin` remote is where our global
`master` branch lives, where we put the latest version of our flight ready 
code. In order to develop for maav, each member develops on their own 
remote named after their uniqname. 

In short, a remote is another instance of a repository that is somewhere else, 
aka not the current repository. A remote can be somewhere else on your computer, 
or somewhere else on the cloud. When you pushed to gitlab in the previous 
exercises, the remote is located on the cloud somewhere owned by the 
university.

At MAAV we use multiple remotes to keep the origin remote clean, and allow
people to push there latest changes somewhere, and share them without cluttering
up the general workspace. Here we will explain how to use remotes on MAAV. 

First, enter the `nav` repo. Enter the `bash` directory. In there you will 
see an `add_remotes.sh` script. Make sure your uniqname is on the list of 
remotes. Now run the script. This will ensure your remote is added, so you 
can push to it. 

To push to your remote, simply run the command `git push uniqname branch`. 
Your uniqname is the name of your remote. You are the only person who may 
push code to your remote, however, everyone may look at the code. So if you 
add a feature, someone else can pull that feature from your remote, make 
changes, and push the changes to their own remote. 

Once your feature is ready to be merged, send an email to your team lead with
the `remote` and `branch`, along with a description of the feature. Your lead
will then review the code, and push it to origin if it is up to standard. 

### Exercise

We will first pracice pushing code to our remote. Simply create a branch, and
push that branch to your remote as described above. 

Now, let us practice checking out code from another remote. Your team lead 
probably has something on their remote, so run the command 
`git fetch leadUniqname`. This will fetch all of the branches on their remote
to your system. If you already know which branch you would like to look at, 
you could run `git fetch leadUniqname branch` to only get the branch you want. 

In our case, we probably don't know what branches exist, so we will go with the
former. Now lets see what we have fetched. With `git branch -a` git lists
all of the branches we can switch to in green, and other branches that are
not fetched in red. Lets checkout one of these branches. 

Now we can know all of the necessary commands to work with remotes. As a final
exercise, find someone else on MAAV to work together with, and tell them to
push something to their remote. Fetch their branch, and make sure you can
see what they pushed. Now, add your own change to what they pushed, and push
to your own remote. Have them ensure that they can see what you pushed. 

#Done

Thats it for this introductory git tutorial. At this point, git probably seems
quite complicated. However, it is one of the most useful tools a programmer can
use. Git becomes more powerful the deeper you get with it. For example, say
you don't understand some line of code. `git blame filename` will tell you 
exactly who wrote each line of the file, when, and you can even use that to 
find their email and ask them about it!

I hope you found this tutorial useful. If you have any questions, feel free to
ask us. 

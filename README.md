# myFirstRepo

What is Git?
Git is a version control system that is used for tracking changes in computer files. It makes save points (commits) and each commit has its associated commit id. It is a distributed version control system, which means that it allows multiple users to work on the same files simultaneously and keeps track of changes made to the files by each user.

What is GitHub?
GitHub is an online platform that allows developers to store and manage their code repositories in a centralized location. It also provides a variety of tools for version control, collaboration, and project management.

Setup Commands
git config --global user.name “name”
git config --global user.email “email”
git config --global color.ui auto
git config --global init.defaultBranch “branch_name”

Creating a git repository
git init -used to initialize an existing directory as git repository
git clone “url” -retrieve an entire repository from a hosted location via url

Staging and Snapshots
git status -to check changes done in repository
git add “filename” -to stage a particular modified file
git add . -to stage all modified files
git commit -m “message” -to commit staged content
git reset “commit_id” -to move back to mentioned commit
git restore --staged “filename” -remove file from staging
git log -show all commits in current branch
git show commit_id -to list changes in particular commit
git log -n  -to list last n commits in current branch
Here n = 1, 2, 3, 4…….
git log -p   -to list commits with actual changes
git log --oneline   -to list commits and message
git log --stat   -to list commits and file that are modified
git tag -a “tag_name” commit_id   -to specify version, etc.
git commit -am “message”  -to add and commit together
git tag -d “tag_name”   -to remove mentioned tag
git diff  -to list what is changed but not staged
git diff --staged  -to list what is staged but not committed


Stashing 
Stashing to used to store changes at temporary place without committing it.
Steps:->
Make changes
Stage changes (git add .)
Stash changes (git stash)
git stash -used for stashing
git stash pop -used to get back changes
git stash clear -used to delete stashed changes
git stash list  -list stack order of stashed file changes
git stash drop  -discard the changes from top of stash stack

Branches and Merging
A branch contains all parent logs details.
git branch “branch_name” -used to create a branch
git branch --list -used to list all the branches
git checkout “branch_name” -used to move head to mentioned branch
git merge “branch_name” -used to merge mentioned branch to current branch
git checkout -b “branch_name”   -used to create and checkout to  mentioned branch
During merging two branches conflicts may arise, firstly solve that conflicts and then commit changes.

Ignoring Patterns
In order to ignore some particular types of files, we have to create a .gitignore file, save file types in it, stage and commit.
Changes in ignored files aren’t tracked by git. 

Connect remote repository to local repository
git remote add origin “url”
git remote -v  -used to check connected url
git push origin “branch_name”  -used to push changes to mentioned branch of repository

Forking
It is used to keep our repository safe from unauthorized access and changes. Using forking,
entire repository gets copied to our account.
git remote add upstream “url”
Upstream - from where we have forked the repository

Pull Request
It is good practise to create a new branch for each feature update, bug solving, etc. for your project because a branch can open only a single pull request. 
Steps :->
Push changes to main/master branch from your branch
Generate pull request

Hard Reset
git reset --hard “commit_id”   -used to move back to mentioned commit

Make local repository even with remote repository
git pull
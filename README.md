echo "# helloword" >> README.md
git init
git add README.md
git commit -m "first commit"
git branch -M main
git remote add origin https://github.com/WindyFeg/helloword.git
git push -u origin main


…or push an existing repository from the command line


git remote add origin https://github.com/WindyFeg/helloword.git
git branch -M main
git push -u origin main

it only do the readme file
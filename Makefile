ADD = git add .
COMMIT = git commit -m "cpp"
PUSH = git push 

all:
	$(ADD) && $(COMMIT) && $(PUSH)
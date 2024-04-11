savedcmd_/home/ubuntu/hw12/dummy/dummy.mod := printf '%s\n'   dummy.o | awk '!x[$$0]++ { print("/home/ubuntu/hw12/dummy/"$$0) }' > /home/ubuntu/hw12/dummy/dummy.mod

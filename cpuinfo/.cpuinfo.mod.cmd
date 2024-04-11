savedcmd_/home/ubuntu/hw12/cpuinfo/cpuinfo.mod := printf '%s\n'   cpuinfo.o | awk '!x[$$0]++ { print("/home/ubuntu/hw12/cpuinfo/"$$0) }' > /home/ubuntu/hw12/cpuinfo/cpuinfo.mod

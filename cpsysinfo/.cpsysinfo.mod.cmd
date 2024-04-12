savedcmd_/home/ubuntu/hw12/cpsysinfo/cpsysinfo.mod := printf '%s\n'   cpsysinfo.o | awk '!x[$$0]++ { print("/home/ubuntu/hw12/cpsysinfo/"$$0) }' > /home/ubuntu/hw12/cpsysinfo/cpsysinfo.mod

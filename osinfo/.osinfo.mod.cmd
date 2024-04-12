savedcmd_/home/ubuntu/hw12/osinfo/osinfo.mod := printf '%s\n'   osinfo.o | awk '!x[$$0]++ { print("/home/ubuntu/hw12/osinfo/"$$0) }' > /home/ubuntu/hw12/osinfo/osinfo.mod

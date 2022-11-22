import hashlib

password = "Phitron"
encoded_pass = password.encode()
hashed_pass = hashlib.md5(encoded_pass).hexdigest()
print(hashed_pass) # expected: 7f30fe0d1c4e36a0ba473850ff5e5825

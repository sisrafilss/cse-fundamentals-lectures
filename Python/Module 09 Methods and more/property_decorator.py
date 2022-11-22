class User:
    def __init__(self, f_name, l_name):
        self.first = f_name
        self.last = l_name
        self.email = f"{f_name.lower()}.{l_name.lower()}@user.com"
    
    # Convert the full_name method to a callable property
    @property
    def full_name(self):
        return f"{self.first} {self.last}"

    # Conver the full_name property set able
    @full_name.setter
    def full_name(self, value):
        self.first, self.last = value.split(" ")
        self.email = f"{self.first.lower()}.{self.last.lower()}@user.com"
    
    # Make the full_name property deletable
    @full_name.deleter
    def full_name(self):
        del self.first
        del self.last

    def get_email(self):
        return self.email


jahid = User('Jahidul', 'Islam')

print(jahid.first) # expected: Jahidul
print(jahid.last) # expected: Islam
print(jahid.email) # expected: jahidul.islam@user.com

print(jahid.get_email()) # expected: jahidul.islam@user.com

# set the full_name property because it is set able now (using @full_name.setter)
jahid.full_name = "Rafiqul Islam"

# del jahid.full_name # expected: delete the first and last name

print(jahid.full_name) # Rafiqul Islam
print(jahid.get_email()) # rafiqul.islam@user.com
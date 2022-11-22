class User:
    def __init__(self, name, password, mobile):
        self.name = name
        # private property
        self.__passowrd = password
        self.__mobile = mobile
    
    # private method
    def __get_password(self):
        return self.__passowrd
    
    # private property can be accessed using public method
    def get_mobile(self):
        return self.__mobile


ryan = User('Ryan Dal', 'NODEABCD', '01792824922')

mobile_number = ryan.get_mobile()
print(mobile_number) # expect: 01792824922

password = ryan.__get_password() # through an AttributeError: 'User' object has no attribute '__get_password'
print(password)
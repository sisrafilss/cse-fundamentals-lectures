class Student:
    def __init__(self, name, id, mark):
        self._name = name
        self.__id = id
        self.mark = mark
    
    @property
    def name(self):
        return self._name

    @name.deleter
    def name(self):
        del self._name

chowdhury = Student("choto chowdhury", 898, 77)

print(chowdhury.name)

# delete the name attribute / property
del chowdhury.name

# this line through an error because we can't get the attribute once it is deleted
print(chowdhury.name)
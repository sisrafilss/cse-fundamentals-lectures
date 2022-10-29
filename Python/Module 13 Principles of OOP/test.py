class A:
    def one(self):
        return self.two()
    def two(self):
        return 'A'
class B:
    def two(self):
        return 'B'
obj=B()
print(obj.two())
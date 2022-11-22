class School:
    def __init__(self, name) -> None:
        self.school_name = name

    def say_hello(self):
        print("Say Hello from School")


class Teacher:
    def __init__(self, name) -> None:
        self.teacher_name = name

    def say_hello(self):
        print("Hello from Teacher")


class Student:
    def __init__(self, name, obj) -> None:
        self.student_name = name
        obj.say_hello()


school = School("Trust School")
teacher = Teacher("Abdul Karim")
student = Student("Habib Ali", school)
student2 = Student("Bodrul Islam", teacher)

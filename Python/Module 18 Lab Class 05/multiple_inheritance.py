
class School:
    def __init__(self, school_name) -> None:
        self.school_name = school_name

    def __repr__(self) -> str:
        return f"School name: {self.school_name}"


class Teacher:
    def __init__(self, teacher_name) -> None:
        self.teacher_name = teacher_name

    def __repr__(self) -> str:
        return f"Teacher name: {self.teacher_name}"


class Student(Teacher, School):
    def __init__(self, student_name, teacher_name, school_name) -> None:
        Teacher.__init__(self, teacher_name)
        School.__init__(self, school_name)
        self.student_name = student_name


    def __repr__(self) -> str:
        return f"Student name: {self.student_name}"


rakib = Student("Rakibul Islam", "Abdul Halim", "Govt. Cadet School")

print(rakib)


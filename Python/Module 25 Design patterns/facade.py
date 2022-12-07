"""Facade pattern with an example of WashingMachine"""

class Washing:
	'''Subsystem # 1'''

	def wash(self):
		print("Washing...")


class Rinsing:
	'''Subsystem # 2'''

	def rinse(self):
		print("Rinsing...")


class Spinning:
	'''Subsystem # 3'''

	def spin(self):
		print("Spinning...")

class Drying:
    '''Subsystem # 4'''

    def dry(self):
        print("Drying...")


class Ironing:
    '''Subsystem # 5'''

    def iron(self):
        print("Ironing...")


class WashingMachine:
    '''Facade'''

    def __init__(self):
        self.washing = Washing()
        self.rinsing = Rinsing()
        self.spinning = Spinning()
        self.drying = Drying()
        self.ironing = Ironing()

    def startWashing(self):
        self.washing.wash()
        self.rinsing.rinse()
        self.spinning.spin()
        self.drying.dry()
        self.ironing.iron()


washingMachine = WashingMachine()
washingMachine.startWashing()

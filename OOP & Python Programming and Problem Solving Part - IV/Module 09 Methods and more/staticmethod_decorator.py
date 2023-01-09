class Shopping:
    def __init__(self, customer_name):
        self.customer_name = customer_name
        self.items = []

    @staticmethod
    def multiply(x, y):
        return x * y

    def add_to_cart(self, item):
        self.item.append(item)

my_shop = Shopping("Abul Hasan")
# The following line is not callable without using @staticmethod decorator
result = my_shop.multiply(4, 5)
print(result) # expected: 20
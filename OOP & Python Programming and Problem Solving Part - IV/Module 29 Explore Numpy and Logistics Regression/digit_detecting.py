from sklearn.datasets import load_digits
from sklearn.linear_model import LogisticRegression
from sklearn.model_selection import train_test_split
import matplotlib.pyplot as plt


digits = load_digits()
# print(digits.data.shape)
# plt.gray()
# plt.matshow(digits.images[0])
# plt.show()

X = digits.data
Y = digits.target

X_train, X_test, Y_train, Y_test = train_test_split(X, Y, test_size=0.2)
# print(X_train.shape)
# print(X_test.shape)

model = LogisticRegression()
model.fit(X_train, Y_train)

print('Target value of the test', digits.target[1705])
result = model.predict([digits.data[1705]])
print('test result', result)
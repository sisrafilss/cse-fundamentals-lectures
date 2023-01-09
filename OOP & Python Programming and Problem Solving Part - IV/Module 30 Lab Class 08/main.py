import pandas as pd
import matplotlib.pyplot as plt
from sklearn.linear_model import LogisticRegression
from sklearn.model_selection import train_test_split

data = pd.read_csv('HR_comma_sep.csv')
# print(data)

# step 1: missing data for any row any column
# print(data.isnull().values.any())

# step 2: check data type
# print(data.dtypes)

# step 3: check unique values
# print(data.salary.unique())

clean_up_values = {
    'salary': {
        'low': 1,
        'medium': 2,
        'high': 3
    }
}

data.replace(clean_up_values, inplace=True)
# print(data)

# step 4: get dummies for the departments
dummies = pd.get_dummies(data.Department)
# print(dummies)

# step 5: merge dummies (dummy columns) with the original columns
merged = pd.concat([data, dummies], axis='columns')
# print(merged)

# step 6: drop un-necessary columns
final_data = merged.drop(['Department', 'technical'], axis='columns')
# print(final_data)
# print((final_data.columns))

# step 7: plot data set to see the data relation
# plt.scatter(x = final_data.time_spend_company, y = final_data.salary)
# plt.show()

X = final_data.drop('left', axis='columns')
y = final_data.left

X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.10)

model = LogisticRegression()
model.fit(X_train, y_train)

accuracey = model.score(X_test, y_test)

print("Accuracy = ", accuracey)

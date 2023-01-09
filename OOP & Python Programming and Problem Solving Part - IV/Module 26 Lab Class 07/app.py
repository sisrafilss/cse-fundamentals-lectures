from flask import Flask, request

app = Flask(__name__)

database = {'minhaj': '100', 'israfil': 9829}

@app.route('/home', methods=['GET'])
def home():
    return 'Welcome to my cute web API'


@app.route('/something', methods=['GET'])
def something():
    return 'This route is from /something'


@app.route('/get_data', methods=['GET'])
def get_data():
    return database

# api/add_data?name=id
@app.route('/add_data/', methods=['GET', 'PUT'])
def add_data():
    key, value = list(request.args.items())[0]
    database[key] = value # save the name and id to a dictionary named database
    return f"{key} added"


# api/delete_data?user=name
@app.route('/delete_data/', methods=['GET', 'DELETE'])
def delete_data():
    key, value = list(request.args.items())[0]
    database.pop(value)
    return f"{value} deleted"





if __name__ == '__main__':
    app.run()
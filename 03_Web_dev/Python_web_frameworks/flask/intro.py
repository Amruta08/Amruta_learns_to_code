from flask import Flask, render_template,request
import random 
import datetime

app = Flask(__name__)

@app.route('/')
def index():
    return "hello"

# decorater function which goes to a specific route
@app.route("/bye")
def ind():
    return "bye"

#adding variable section's to url
# with <variable_name>

@app.route("/name/<nam>/1")
def greet(nam):
    return f"hello {nam}"

#gets hold of the path
@app.route("/na/<path:n>")
def gree(n):
    return f"hello {n}"

@app.route("/nae/<nam>/<int:no>")
def gret(nam, no):
    return f"hello {nam} you are {no} years old"

# render html elements (templates folder)
# render css and images (static folder)
@app.route('/jake')
def inde():
    return render_template('index.html')

@app.route('/make/<name>')
def inda(name):
    random_number = random.randint(1,10)
    return render_template('ind.html', num = random_number, y = name)

@app.route('/foot')
def footer():
    current_year = datetime.datetime.now().year
    return render_template('foot.html', num = current_year)

@app.route('/h1')
def heading():
    return '<h1 style="text-align:center">hello</h1>' \
           '<p>paragraph</p>' \
            '<img src="https://media3.giphy.com/media/9skRHvHwZ9Ezu/giphy.gif?cid=ecf05e47yrl4a9sq05qoaea8krlwuzl099dsedn92c9hwwdq&rid=giphy.gif" width="480" height="360">'


@app.route('/form')
def fork():
    return render_template('htmlforms.html')

#getting hold of data submitted in form.html in login.html
@app.route('/login', methods=["post"])
def log():
    name = request.form["username"]
    password = request.form["password"]
    return f"<h1>Name: {name}, Password: {password}</h1>"

# run flask app
if __name__ == "__main__" :
    app.run(debug=True)
from flask import Flask
app = Flask(__name__)
@app.route('/')
def home():
	return render.template('test.html')

if __name__ == '__main__':
	app.run(debug=True)
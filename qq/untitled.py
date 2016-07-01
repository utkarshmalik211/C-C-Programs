from flask import Flask
app=flask(__name__)
@app.route('/')
def home():
	return "a fuckin web site"
if __name__=='__main__':
	app.run(debug=True)	

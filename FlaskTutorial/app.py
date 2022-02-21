# app.py
from flask import Flask, render_template # render_template 함수는 flask에서 제공하는 함수로 templates에 저장된 html을 불러올 때 사용하는 함수

#Flask 객체 인스턴스 생성
app = Flask(__name__)

@app.route('/') # 접속하는 url
def index():
  return render_template('index.html')

if __name__=="__main__":
  app.run(debug=True) # app 서버 가동 / 여기서 debug=True를 할 필요는 없지만 있으면 수정 사항이 있다면 자동으로 업데이트 후 재가동
  # host 등을 직접 지정하고 싶다면
  # app.run(host="127.0.0.1", port="5000", debug=True)
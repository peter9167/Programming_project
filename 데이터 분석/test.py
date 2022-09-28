from tkinter import *

# 예제 3) 버튼 클릭시 실행될 이벤트(함수) 설정
tk = Tk()

# 다른 함수 정의(버튼 누를때마다 카운트를 세는 함수)
counter = 0
def clicked():
    global counter #전역변수 counter
    counter += 1
    label1['text'] = '버튼 클릭 수: ' + str(counter)

# 리셋 함수(카운트 초기화)
def reset():
    global counter
    counter = 0
    label1['text'] = '옆에 버튼이 있습니다.'
## GUI 구성(텍스트,버튼) ##

# 창 이름 설정
tk.title('GUI예제') 

# 텍스트
label1=Label(tk, text='이미지 분석하기',fg='blue',font=20) # fg는 글자 색 지정, font로 글자 설정
label1.pack(side=LEFT, padx=10, pady=10)
# 버튼1
button3 = Button(tk,text='이미지 데이터 분석하기.',bg='green',font=30,width=60,height=30,command= clicked) #command로 버튼 클릭 시 동작할 함수 지정, bg로 색상지정, width,height로 각각 넓이 높이 지정
button3.pack(side=LEFT, padx=10, pady=10)
# 버튼2
button4 = Button(tk,text='이미지 첨부하기',bg='white',width=60,height=30,font=30,command=reset)
button4.pack(side=LEFT,padx=10, pady=10)
tk.mainloop()

from tkinter import *
class First:

	def __init__(self,root):
		self.f=Frame(root,height=500,width=500)
		self.f.pack()
		self.l1=Label(text='First Name :')
		self.l2=Label(text='Last Name :')
		self.l3=Label(text='Age')
		self.l4=Label(text='Tel No:')
		self.e1=Entry(self.f,width=18)
		self.e2=Entry(self.f,width=18)
		self.e3=Entry(self.f,width=18)
		self.e4=Entry(self.f,width=18)
		self.b1=Button(self.f,text="Submit",command=self.display)
		self.l1.place(x=50,y=30)
		self.e1.place(x=200,y=30)
		self.l2.place(x=50,y=60)
		self.e2.place(x=200,y=60)
		self.l3.place(x=50,y=90)
		self.e3.place(x=200,y=90)
		self.l4.place(x=50,y=130)
		self.e4.place(x=200,y=130)
		self.b1.place(x=200,y=150)
	def display(self):
		str1=self.e1.get()
		str2=self.e2.get()
		str3=(self.e3.get())
		str4=(self.e4.get())
		l5=Label(text='Name :'+str1+" "+str2).place(x=50,y=220)
		l6=Label(text='Age :'+str3).place(x=50,y=250)
		l7=Label(text='Tel No :'+str4).place(x=50,y=280)

root=Tk()
root.title("Welcome To Tkinter GUI Programme")
obj=First(root)
root.mainloop()




from tkinter import *

#global declaration of expression variable
ex=""

#to update expression in text box
def enter(n):
    global ex
    ex = ex + str(n)
    equation.set(ex)

def press(n):
    global ex 
    ex = ex + str(n) 
    equation.set(ex)

#on pressing equal
def equalpress():
	# Try and except statement for handling exceptions
	try:
		global ex
		total = str(eval(ex))

		equation.set(total)
		ex = ""
	except:
		equation.set(" error ")
		ex = ""

#to clear content
def clear():
	global ex
	ex = ""
	equation.set("")

if __name__ == "__main__":
	# create a GUI window
	gui = Tk()
	gui.configure(background="green")
	gui.title("Simple Calculator")
	gui.geometry("270x150")
    #creating an instance of variable class StringVar()
	equation = StringVar()
    #the text box for entering expression
	expression = Entry(gui, textvariable=equation)
    #grid method
	expression.grid(columnspan=4, ipadx=70)

	#creating buttons
	button1 = Button(gui, text=' 1 ', fg='white', bg='black',
					command=lambda: press(1), height=1, width=7)
	button1.grid(row=2, column=0)

	button2 = Button(gui, text=' 2 ', fg='white', bg='black',
					command=lambda: press(2), height=1, width=7)
	button2.grid(row=2, column=1)

	button3 = Button(gui, text=' 3 ', fg='white', bg='black',
					command=lambda: press(3), height=1, width=7)
	button3.grid(row=2, column=2)

	button4 = Button(gui, text=' 4 ', fg='white', bg='black',
					command=lambda: press(4), height=1, width=7)
	button4.grid(row=3, column=0)

	button5 = Button(gui, text=' 5 ', fg='white', bg='black',
					command=lambda: press(5), height=1, width=7)
	button5.grid(row=3, column=1)

	button6 = Button(gui, text=' 6 ', fg='white', bg='black',
					command=lambda: press(6), height=1, width=7)
	button6.grid(row=3, column=2)

	button7 = Button(gui, text=' 7 ', fg='white', bg='black',
					command=lambda: press(7), height=1, width=7)
	button7.grid(row=4, column=0)

	button8 = Button(gui, text=' 8 ', fg='white', bg='black',
					command=lambda: press(8), height=1, width=7)
	button8.grid(row=4, column=1)

	button9 = Button(gui, text=' 9 ', fg='white', bg='black',
					command=lambda: press(9), height=1, width=7)
	button9.grid(row=4, column=2)

	button0 = Button(gui, text=' 0 ', fg='white', bg='black',
					command=lambda: press(0), height=1, width=7)
	button0.grid(row=5, column=0)

	plus = Button(gui, text=' + ', fg='white', bg='black',
				command=lambda: press("+"), height=1, width=7)
	plus.grid(row=2, column=3)

	minus = Button(gui, text=' - ', fg='white', bg='black',
				command=lambda: press("-"), height=1, width=7)
	minus.grid(row=3, column=3)

	multiply = Button(gui, text=' * ', fg='white', bg='black',
					command=lambda: press("*"), height=1, width=7)
	multiply.grid(row=4, column=3)

	divide = Button(gui, text=' / ', fg='white', bg='black',
					command=lambda: press("/"), height=1, width=7)
	divide.grid(row=5, column=3)

	equal = Button(gui, text=' = ', fg='white', bg='black',
				command=equalpress, height=1, width=7)
	equal.grid(row=5, column=2)

	clear = Button(gui, text='Clear', fg='white', bg='black',
				command=clear, height=1, width=7)
	clear.grid(row=5, column='1')

	Decimal= Button(gui, text='.', fg='white', bg='black',
					command=lambda: press('.'), height=1, width=7)
	Decimal.grid(row=6, column=0)
	# start the GUI
	gui.mainloop()

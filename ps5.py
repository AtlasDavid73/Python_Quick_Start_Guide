# tkinter_clock.py
import tkinter as tk
from datetime import datetime

root = tk.Tk()
root.title("Digital Clock")

label = tk.Label(root, font=("Helvetica", 48), padx=20, pady=20)
label.pack()

def update():
    label.config(text=datetime.now().strftime("%Y-%m-%d\n%H:%M:%S"))
    # schedule next update after 500 ms for smoothness
    root.after(500, update)

update()
root.mainloop()

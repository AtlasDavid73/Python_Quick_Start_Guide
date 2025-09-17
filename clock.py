# analog_clock_turtle.py
import turtle
import time
from datetime import datetime
import math

screen = turtle.Screen()
screen.setup(400, 400)
screen.title("Analog Clock")
screen.tracer(0)

pen = turtle.Turtle()
pen.hideturtle()
pen.pensize(2)

def draw_clock_face():
    pen.up()
    pen.goto(0, -150)
    pen.down()
    pen.circle(150)
    # hour marks
    for hour in range(12):
        pen.up()
        pen.goto(0,0)
        pen.setheading(90 - hour * 30)
        pen.forward(130)
        pen.down()
        pen.forward(10)
    pen.up()

def draw_hand(angle_deg, length, width):
    pen.up()
    pen.goto(0,0)
    pen.setheading(90 - angle_deg)
    pen.pensize(width)
    pen.down()
    pen.forward(length)
    pen.up()

def update():
    pen.clear()
    draw_clock_face()
    now = datetime.now()
    sec = now.second + now.microsecond/1_000_000
    minute = now.minute + sec/60
    hour = (now.hour % 12) + minute/60

    # convert to degrees (360/60 etc.)
    sec_angle = sec * 6
    min_angle = minute * 6
    hour_angle = hour * 30

    draw_hand(hour_angle, 60, 6)
    draw_hand(min_angle, 100, 4)
    pen.color("red")
    draw_hand(sec_angle, 120, 2)
    pen.color("black")

    screen.update()
    # call again after 100 ms
    screen.ontimer(update, 100)

draw_clock_face()
update()
turtle.done()

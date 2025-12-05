#Comments are a good praxis in programming. This are my first ones, i'll get used to it quickly.

class Plant:
	def __init__(plant, name, height, age, growth):
		plant.name = name					#Plant's name
		plant.height = height				#Plant's height in CM
		plant.age = age						#Plant's age in days
		plant.growth = growth				#Days until plants height grows
		plant.total_growth = 0				#Total growth since planted, in cm
		plant.aged = 0						#Ask if days passed

def	get_info(plant):
	print(plant.name, ":", ((plant.height * 10) // 1 / 10), "cm,", plant.age, "days old")
	if plant.aged != 1:
		return																			#The exercise asks for a week, if
	if plant.total_growth >= 1:															#we want to change to x days,
		print("Growth this week: +", ((plant.total_growth * 10) // 1 / 10), "cm")		#change the print to Growth this days.
	elif plant.total_growth < 1:														#At first, I used f{plant.growth}:.0f
		print("Growth this week: less than 1cm. Need more days to grow.")				#because i didn't want to show float,
	else:																				#but this format basically turned a 3.5
		return																			#into a 4. So i am currently truncating
																						#with ((plant.total_growth * 10) // 1 / 10).
def	age(days, plant):
	plant.age += days
	if days > 0:
		plant.aged = 1		#Here we age our plant. If the days passed, we set plant.aged to 1
	grow(days, plant)		#So we dont print the new plant's growth. I guess this is kinda extra

def	grow(days, plant):
	total_growth = days / plant.growth			#The growth of each plant is variable. We stack the total growth
	plant.total_growth += total_growth			#in a variable (plant.total_growth) and then we increase the
	plant.height += total_growth				#plants height adding the total growth to the plant's growth

def	ft_plant_growth():
	p1 = Plant("Rose", 25, 30, 2)
	p2 = Plant("Sunflower", 80, 45, 3)
	p3 = Plant("Cactus", 15, 120, 6)
	print("=== Day 1 ===")
	get_info(p1)								#This is the main function. Here we set the variables, get the info
	get_info(p2)								#of each plant and age them. In this exercise I made three different
	get_info(p3)								#functions: get_info(), age() and grow(). This exercise asks for a
	age(7, p1)									#simulation of a week, so we age the plants 7 days.
	age(7, p2)
	age(7, p3)
	print("=== Day 7 ===")
	get_info(p1)
	get_info(p2)
	get_info(p3)

ft_plant_growth()

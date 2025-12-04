class Plant:
	def __init__(plant, name, height, age):
		plant.name = name
		plant.height = height
		plant.age = age

def	ft_garden_data():
	print("=== Garden Plant Registry ===")
	p1 = Plant("Rose", "25cm", "30 days old")
	p2 = Plant("Sunflower", "80cm", "45 days old")
	p3 = Plant("Cactus", "15cm", "120 days old")
	print(p1.name, ":", p1.height, ",", p1.age)
	print(p2.name, ":", p2.height, ",", p2.age)
	print(p3.name, ":", p3.height, ",", p3.age)

ft_garden_data()


class Plant:
	def __init__(self, name, height, age):
		self.name = name
		self.height = height
		self.age = age

class Flower(Plant):
	def __init__(self, name, height, age, color):
		super().__init__(name, height, age)
		self.color = color
	
	def	bloom(self):
		if self.age > 10:
			print(self.name, "is blooming beautifully!\n")
		else:
			print(self.name, "is too young to bloom. Wait a few days\n")

class Tree(Plant):
	def __init__(self, name, height, age, trunk_diameter):
		super().__init__(name, height, age)
		self.trunk_diameter = trunk_diameter

	def produce_shade(self):
		shade = (self.trunk_diameter * self.height) / 100
		print(self.name, "provides", shade, "square meters of shade\n")

class Vegetable(Plant):
	def __init__(self, name, height, age, harvest_season, nutritional_value):
		super().__init__(name, height, age)
		self.harvest_season = harvest_season
		self.nutritional_value = nutritional_value


def	ft_plant_types():
	rose = Flower("Rose", 25, 30, "red")
	oak = Tree("Oak", 500, 1825, 50)
	tomato = Vegetable("Tomato", 80, 90, "summer", "vitamin C")
	print("=== Garden Plant Types ===\n")
	print(rose.name, "(Flower):", f"{rose.height}cm, {rose.age} days, {rose.color} color")
	rose.bloom()
	print(oak.name, "(Tree):", f"{oak.height}cm, {oak.age} days, {oak.trunk_diameter}cm diameter")
	oak.produce_shade()
	print(tomato.name, "(Vegetable):", f"{tomato.height}cm, {tomato.age} days, {tomato.harvest_season} harvest\n{tomato.name} is rich in {tomato.nutritional_value}\n")

ft_plant_types()
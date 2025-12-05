class SecurePlant:
	factory = []
	errors = []
	plants_in_factory = 0
	class Plant:
		def __init__(self, name, set_height, set_age):
			self.name = name		#Plant's name
			try:
				self.set_height = set_height	#Plant's height in CM. Here we call the height validation function.
			except ValueError as e:
				SecurePlant.errors = SecurePlant.errors + [f"Invalid operation attempted: {e} [REJECTED]\nSecurity: Negative height rejected\n"]
			try:
				self.set_age = set_age			#Plant's age in days. Here we call the age validation function.
			except ValueError as e:
				SecurePlant.errors = SecurePlant.errors + [f"Invalid operation attempted: {e} [REJECTED]\nSecurity: Negative age rejected\n"]
		@property
		def	height(self):			#Property is used to pretect. We use it so height is ridden as a variable
			return self._height		#but it actually is executing code.
		
		@height.setter				 #The setter is used to make some checks before we assign a value to a
		def	set_height(self, value): #content. It works with protected data.
			if value < 0:
				raise ValueError(f"height {value}")													#Here we set the height protecting it, so
			self._height = value

		@property
		def	age(self):
			return self._age
							#It cant be a negative value.
		
		@age.setter
		def	set_age(self, value):
			if value < 0:
				raise ValueError(f"age {value}")									#Now we do the same with age.
			self._age = value
	
	@classmethod
	def create_plant(cls, name, height, age):
		plant = cls.Plant(name, height, age)
		if hasattr(plant, "_height") and hasattr(plant, "_age"):
			cls.factory = cls.factory + [plant]
			cls.plants_in_factory += 1
		return plant

def ft_plant_factory():
	SecurePlant.create_plant("Rose", 25, 30)
	SecurePlant.create_plant("Cactus", -15, 120)   # Error en altura
	SecurePlant.create_plant("Lotus", 7, -5)       # Error en edad
	SecurePlant.create_plant("Oak tree", 120, 30)

	print("=== Garden Security System ===")
	for plant in SecurePlant.factory:
		print("Plant created:", plant.name, "\nHeight updated:", plant.height, "cm [OK]", "\nAge updated:", plant.age, "days [OK]\n")
	for error in SecurePlant.errors:
		print(error)
	for plant in SecurePlant.factory:
		print("Current plant:", plant.name, f"({plant.height}cm", ",", plant.age, "days)")

ft_plant_factory()
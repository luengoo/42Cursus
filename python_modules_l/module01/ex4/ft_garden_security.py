class SecurePlant:
	factory = []
	errors = []						#In this process we will check if the values are correct. If they are not, we will index the error in here
	plants_in_factory = 0			#So we can display it later on.
	class Plant:
		def __init__(self, name, height, age):
			self.name = name		#Plant's name
			try:
				self.height = height	#Plant's height in CM. Here we call the set_height validation function and the get_height function too.
			except ValueError as e:
				SecurePlant.errors = SecurePlant.errors + [f"Invalid operation attempted: {e} [REJECTED]\nSecurity: Negative height rejected\n"]
			try:
				self.age = age			#Plant's age in days. Here we call the set_age validation function and get_age function too.
			except ValueError as e:
				SecurePlant.errors = SecurePlant.errors + [f"Invalid operation attempted: {e} [REJECTED]\nSecurity: Negative age rejected\n"]
		
		@property
		def	height(self):				#Here we define as a property for security, the setter and getter needs this.
			return self.__height
		
		@height.setter				 	#The setter is used to make some checks before we assign a value to a
		def	height(self, value): 		#content. It works with protected data.
			if value < 0:
				raise ValueError(f"height {value}")		#Here we set the height protecting it, so
			self.__height = value						#It cant be a negative value.

		@height.getter
		def	get_height(self):
			return self.__height		#Here we get the info securely.

		@property
		def	age(self):
			return self.__age			#Then we do the same with the age.

		@age.getter
		def	get_age(self):
			return self.__age
		
		@age.setter
		def	age(self, value):
			if value < 0:
				raise ValueError(f"age {value}")
			self.__age = value
	
	@classmethod
	def create_plant(cls, name, height, age):
		plant = cls.Plant(name, height, age)
		if hasattr(plant, "_Plant__height") and hasattr(plant, "_Plant__age"):	#In this method we create the plant, but only if it has in its
			cls.factory = cls.factory + [plant]									#attributes height and age.
			cls.plants_in_factory += 1
		return plant

def ft_plant_factory():
	SecurePlant.create_plant("Rose", 25, 30)
	SecurePlant.create_plant("Cactus", -15, 120)   #Height error
	SecurePlant.create_plant("Lotus", 7, 5)

	print("=== Garden Security System ===")
	for plant in SecurePlant.factory:
		print("Plant created:", plant.name, "\nHeight updated:", plant.height, "cm [OK]", "\nAge updated:", plant.age, "days [OK]\n")
	for error in SecurePlant.errors:
		print(error)
	for plant in SecurePlant.factory:
		print("Current plant:", plant.name, f"({plant.height}cm", ",", plant.age, "days)")

ft_plant_factory()
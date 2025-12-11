class SecurePlant:
	factory = []
	errors = 0						#In this process we will check if the values are correct. If they are not, we will index the error in here
	plants_in_factory = 0			#So we can display it later on.
	error_value = 0
	class Plant:
		def __init__(self, name, height, age):
			self.name = name		#Plant's name
			self.height = height
			self.age = age

		@property
		def height(self):
			return self.__height

		@height.setter
		def height(self, value):
			if value < 0:
				SecurePlant.errors = 1
				SecurePlant.error_value = value
				return
			else:
				self.__height = value

		@height.getter
		def height(self):
			return self.__height

		@property
		def age(self):
			return self.__age
		
		@age.setter
		def age(self, value):
			if value < 0:
				print(f"Invalid operation attempted: {value} [REJECTED]\n")
				SecurePlant.errors = 2
				return
			else:
				self.__age = value
		@age.getter
		def age(self):
			return self.__age
			
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
	if SecurePlant.errors == 1:
		print(f"Invalid operation attempted:", SecurePlant.error_value, "[REJECTED]")
		print("Security: Negative height rejected\n")
	if SecurePlant.errors == 2:
		print(f"Invalid operation attempted:", SecurePlant.error_value, "[REJECTED]")
		print("Security: Negative age rejected\n")
	for plant in SecurePlant.factory:
		print("Current plant:", plant.name, f"({plant.height}cm", ",", plant.age, "days)")

ft_plant_factory()
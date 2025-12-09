class PlantFactory:
	factory = []			#Plants indexer
	plants_in_factory = 0	#Number of plants indexed
	class Plant:
		def __init__(plant, name, height, age):
			plant.name = name		#Plant's name
			plant.height = height	#Plant's height in CM
			plant.age = age			#Plant's age in days
	
	@classmethod
	def create_plant(cls, name, height, age):		#Here we learn about methods and classes inside of classes.
		plant = cls.Plant(name, height, age)		#I created create_plant() so I can index every new plant
		cls.factory = cls.factory + [plant]			#inside the factory. Making an array inside the class PlantFactory
		cls.plants_in_factory += 1					#makes the indexing possible. If more documentation needed, search
		return plant								#@classmethod in google or a prefered AI.

def	ft_plant_factory():
	PlantFactory.create_plant("Rose", 25, 30)
	PlantFactory.create_plant("Sunflower", 80, 45)
	PlantFactory.create_plant("Cactus", 15, 120)
	PlantFactory.create_plant("Lotus", 7, 15)
	PlantFactory.create_plant("Oak tree", 120, 30)
	
	print("=== Plant factory Output ===")
	for plant in PlantFactory.factory:
		print("Created:", plant.name, f"({plant.height:.0f}cm", ",", plant.age, "days)")
	print("\nTotal plants created:", PlantFactory.plants_in_factory)
	#With the for condition we can create and display all the plants that had been created. This makes the
	#plant creation process much

ft_plant_factory()

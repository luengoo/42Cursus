class PlantFactory:
	factory = []
	plants_in_factory = 0
	class Plant:
		def __init__(plant, name, height, age):
			plant.name = name		#Plant's name
			plant.height = height	#Plant's height in CM
			plant.age = age			#Plant's age in days
	
	@classmethod
	def create_plant(cls, name, height, age):
		plant = cls.Plant(name, height, age)
		cls.factory = cls.factory + [plant]
		cls.plants_in_factory += 1
		return plant

def	ft_plant_factory():
	rose = PlantFactory.create_plant("Rose", 25, 30)
	sunflower = PlantFactory.create_plant("Sunflower", 80, 45)
	cactus = PlantFactory.create_plant("Cactus", 15, 120)
	lotus = PlantFactory.create_plant("Lotus", 7, 15)
	oak_tree = PlantFactory.create_plant("Oak tree", 120, 30)
	
	print("=== Plant factory Output ===")
	for plant in PlantFactory.factory:
		print("Created:", plant.name, f"({plant.height:.0f}cm", ",", plant.age, "days)")
	print("\nTotal plants created:", PlantFactory.plants_in_factory)
	

ft_plant_factory()

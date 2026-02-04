class GardenManager:
	garden = []
	class AddPlants:
		def	__init__(self, name, water_lvl, sun_lvl):
			try:
				if name == "":
					raise ValueError("Plant name cannot be empty!")
				if GardenManager.garden + [name] == 1:
					raise ValueError("This plant is already in the garden!")
				self.name = name
				self.water_lvl = water_lvl
				self.sun_lvl = sun_lvl

				print(f"Added {name} successfully")
			except ValueError as e:
				print(f"Error adding plant: {e}")
			GardenManager.garden = GardenManager.garden + [name]
			GardenManager.garden[name][0] = 1


def	main_trial():
	print("Adding plants to garden...")
	GardenManager.AddPlants("tomato", 4, 7)
	GardenManager.AddPlants("lettuce", 14, 8)
	GardenManager.AddPlants("lettuce", 14, 8)
	GardenManager.AddPlants("", 14, 8)

main_trial()
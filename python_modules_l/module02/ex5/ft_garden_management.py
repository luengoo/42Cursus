class GardenManager:
	
	class GardenError(Exception):
		pass
	class WaterError(GardenError):
		pass
	class SunError(GardenError):
		pass
	class AddPlants:
		garden = []
		water_tank = 10
		def	__init__(self, name, water_lvl, sun_lvl):
			try:
				if name == "":
					raise ValueError("Plant name cannot be empty!")
				if name in self.garden:
					raise ValueError("This plant is already in the garden!")
				self.name = name
				self.water_lvl = water_lvl
				self.sun_lvl = sun_lvl
				self.garden.append(name)
				print(f"Added {name} successfully")
			except ValueError as e:
				print(f"Error adding plant: {e}")
		
	def	water_plants(self):
		print("\nWatering plants...")
		try:
			for plant in self.AddPlants.garden:
				if self.AddPlants.water_tank < 1:
					raise WaterError(f"Can't water {name}: Water tank level too low!")
				print(f"Watering {plant} - success")
				self.AddPlants.water_tank -= 1
		except self.WaterError:
			print("Error:")
		finally:
			print("Closing watering sistem (cleanup)")

	def check_plant_health(self):
		print("Checking plant health...")
		try:
			for plant in self.AddPlants.garden:
				if plant.water_lvl < 1:
					raise WaterError(f"Water level {plant.water_lvl} is too low (min 1)")
				elif plant.water_lvl > 10:
					raise WaterError(f"Water level {plant.water_lvl} is too high (max 10)")
				elif plant.sun_lvl < 1:
					raise SunError(f"Sun level {plant.sun_lvl} is too low (min 1)")
				elif plant.sun_lvl > 10:
					raise SunError(f"Sun level {plant.sun_lvl} is too high (max 10)")
				print(f"{plant}: healthy (water: {plant.water_lvl}, sun: {plant.sun_lvl})")
		except self.WaterError or self.SunError:
			print(f"Error checking {plant}:")
			

def	main_trial():
	print("Adding plants to garden...")
	GardenManager.AddPlants("tomato", 4, 7)
	GardenManager.AddPlants("lettuce", 14, 8)
	GardenManager.AddPlants("", 14, 8)
	GardenManager.water_plants(GardenManager)
	GardenManager.check_plant_health(GardenManager)

main_trial()
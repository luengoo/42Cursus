def water_plants(plant_list):
	valid_plants = ["tomato", "lettuce", "carrots"]
	print("Opening watering system")
	try:
		for plant in plant_list:
			try:
				position = valid_plants.index(plant)
				print(f"Watering {plant}")
			except ValueError:
				print(f"Error: Cannot water {plant} - invalid plant!")
	finally:
		print("Closing watering system (cleanup)")

def test_watering_system():
	plant_list = ["tomato", "lettuce", "carrots"]
	print("Testing normal watering...")
	water_plants(plant_list)
	print("Watering completed successfully!\n")
	print("Testing with error...")
	plant_list2 = ["tomato", "None"]
	water_plants(plant_list2)
	print("\nCleanup always happens, even with errors!")

test_watering_system()
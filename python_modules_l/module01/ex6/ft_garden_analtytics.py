class GardenManager:
	
	garden = []

	def __init__(self, owner):
		self.owner = owner
		self.garden = {
			"plants": [],
			"stats": {
				"plants_added": 0,
				"total_growth": 0
			}
		}
		GardenManager.garden.append(self)

	def add_plant(self, plant):
		self.garden["plants"].append(plant)
		self.garden["stats"]["plants_added"] += 1
		print(f"Added {plant.name} to {self.owner}'s garden")

	def grow_all(self):
		print(f"{self.owner} is helping all plants grow...")
		for plant in self.garden["plants"]:
			plant.height += 1
			self.garden["stats"]["total_growth"] += 1
			print(f"{plant.name} grew 1cm")
	
	def get_info(self):
		print(f"=== {self.owner}'s Garden Report ===")
		print("Plants in garden:")
		for plant in self.garden["plants"]:
			info = f"- {plant.name}: {plant.height}cm"
			cls_name = plant.__class__.__name__
			if cls_name == "FloweringPlant" or cls_name == "PrizeFlower":
				info += " (blooming)"
			if cls_name == "PrizeFlower":
				info += f". Prize points: {plant.prize_points}"
			print(info)
	
	class GardenStats:
		
		@staticmethod
		def	calculate_points(garden):
			total_points = 0
			for plant in garden.garden["plants"]:
				if plant.__class__.__name__ == "PrizeFlower":
					total_points += plant.prize_points
			return total_points

		@staticmethod
		def	count_regular(garden):
			count = 0
			for plant in garden.garden["plants"]:
				if plant.__class__.__name__ == "Plant":
					count += 1
			return count

		@staticmethod
		def	count_flowering(garden):
			count = 0
			for plant in garden.garden["plants"]:
				if plant.__class__.__name__ == "Plant":
					count += 1
			return count

		def count_prize(garden):
			count = 0
			for plant in garden.garden["plants"]:
				if plant.__class__.__name__ == "Plant":
					count += 1
			return count
	
	@classmethod
	def create_garden_network(cls):
		height_check = True
		for garden in cls.garden:
			for plant in garden.garden["plants"]:
				if plant.height < 0:
					height_check = False
		print(f"Height validation test: {height_check}")
		total_points = 0
		info = "Garden scores - "
		for garden in cls.garden:
			if total_points != 0:
				info += ", "
			total_points = cls.GardenStats.calculate_points(garden)
			info += f"{garden.owner}: {total_points}"
		print(info)
		total_gardens = 0
		for garden in cls.garden:
			total_gardens += 1
		print(f"Total gardens managed: {total_gardens}")

class Plant:
	def __init__(self, name, height, age):
		self.name = name
		self.height = height
		self.age = age

class FloweringPlant(Plant):
	def __init__(self, name, height, age, color, bloom):
		super().__init__(name, height, age)
		self.color = color
		self.bloom = bloom

class PrizeFlower(FloweringPlant):
	def __init__(self, name, height, age, color, bloom, prize_points):
		super().__init__(name, height, age, color, bloom)
		self.prize_points = prize_points

def ft_garden_analytics():
	print("=== Garden Management System Demo ===")
	alice = GardenManager("Alice")
	bob = GardenManager("Bob")
	oak = Plant("Oak tree", 100, 500)
	rose = FloweringPlant("Rose", 25, 15, "red", True)
	sunflower = PrizeFlower("Sunflower", 50, 30, "yellow", True, 10)
	cactus = PrizeFlower("Cactus", 70, 15, "pink", True, 92)
	alice.add_plant(oak)
	alice.add_plant(rose)
	alice.add_plant(sunflower)
	bob.add_plant(cactus)
	print("\n")
	alice.grow_all()
	print("\n")
	alice.get_info()
	print(f"\nPlants added: {alice.garden["stats"]["plants_added"]}"
		f", Total growth: {alice.garden["stats"]["total_growth"]}cm")
	print(f"Plant types: {GardenManager.GardenStats.count_regular(alice)} regular, "
		f"{GardenManager.GardenStats.count_flowering(alice)} flowering, "
		f"{GardenManager.GardenStats.count_prize(alice)} prize flowers\n")
	GardenManager.create_garden_network()

ft_garden_analytics()
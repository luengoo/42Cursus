
class GardenManager:
<<<<<<< HEAD
    """Class to manage a garden, plants, and watering/sunlight errors."""

    class GardenError(Exception):
        """Base class for garden errors."""
        pass

    class WaterError(GardenError):
        """Raised when water level issues occur."""
        pass

    class SunError(GardenError):
        """Raised when sunlight issues occur."""
        pass

    class Plant:
        """Represents a plant in the garden."""

        garden: List["GardenManager.Plant"] = []
        water_tank: int = 2

        def __init__(self, name: str, water_lvl: int, sun_lvl: int) -> None:
            if not name:
                raise ValueError("Plant name cannot be empty!")
            if any(p.name == name for p in self.garden):
                raise ValueError("This plant is already in the garden!")

            self.name: str = name
            self.water_lvl: int = water_lvl
            self.sun_lvl: int = sun_lvl
            print(f"Added {name} successfully")

    @classmethod
    def create_plant(cls, name: str, water_lvl: int, sun_lvl: int) -> "Plant | None":
        try:
            plant: GardenManager.Plant = cls.Plant(name, water_lvl, sun_lvl)
            cls.Plant.garden.append(plant)
            return plant
        except ValueError as error:
            print(f"Error adding plant: {error}")
            return None
=======

    class GardenError(Exception):
        pass

    class WaterError(GardenError):
        pass

    class SunError(GardenError):
        pass

    class Plant:
        garden: list["GardenManager.Plant"] = []
        water_tank = 2

        def __init__(self, name: str, water_lvl: int, sun_lvl: int) -> None:
            if name == "":
                raise ValueError("Plant name cannot be empty!")
            if name in self.garden:
                raise ValueError("This plant is already in the garden!")
            self.name = name
            self.water_lvl = water_lvl
            self.sun_lvl = sun_lvl
            print(f"Added {name} successfully")

    @classmethod
    def create_plant(
            cls, name: str, water_lvl: int,
            sun_lvl: int) -> Plant | None:
        try:
            plant = cls.Plant(name, water_lvl, sun_lvl)
            cls.Plant.garden = cls.Plant.garden + [plant]
            return plant
        except ValueError as e:
            print(f"Error adding plant: {e}")
>>>>>>> 375dd648f5bc6fe412cd5bfc4a57527bdd288671

    @classmethod
    def water_plants(cls) -> None:
        print("\nWatering plants...")
<<<<<<< HEAD
        try:
            for plant in cls.Plant.garden:
                if cls.Plant.water_tank < 1:
                    raise cls.WaterError(
                        f"Can't water {plant.name}: Water tank level too low!"
                    )
                print(f"Watering {plant.name} - success")
                cls.Plant.water_tank -= 1
        except cls.WaterError as error:
            print(f"Error: {error}")
        finally:
            print("Closing watering system (cleanup)\n")
=======
        print("Opening watering system")
        try:
            for plants in cls.Plant.garden:
                if cls.Plant.water_tank < 1:
                    raise cls.WaterError(
                        f"Can't water {plants.name}: Water tank level too low!"
                        )
                print(f"Watering {plants.name} - success")
                cls.Plant.water_tank -= 1
        except cls.WaterError:
            print("Error:")
        finally:
            print("Closing watering sistem (cleanup)\n")
>>>>>>> 375dd648f5bc6fe412cd5bfc4a57527bdd288671

    @classmethod
    def check_plant_health(cls) -> None:
        print("Checking plant health...")
        try:
            for plant in cls.Plant.garden:
                if plant.water_lvl < 1:
                    raise cls.WaterError(
<<<<<<< HEAD
                        f"Water level {plant.water_lvl} is too low (min 1)"
                    )
                elif plant.water_lvl > 10:
                    raise cls.WaterError(
                        f"Water level {plant.water_lvl} is too high (max 10)"
                    )
                elif plant.sun_lvl < 1:
                    raise cls.SunError(
                        f"Sun level {plant.sun_lvl} is too low (min 1)"
                    )
                elif plant.sun_lvl > 10:
                    raise cls.SunError(
                        f"Sun level {plant.sun_lvl} is too high (max 10)"
                    )
                print(
                    f"{plant.name}: healthy "
                    f"(water: {plant.water_lvl}, sun: {plant.sun_lvl})"
                )
        except (cls.WaterError, cls.SunError) as error:
            print(f"Error checking {plant.name}: {error}")
=======
                        f"Water level {plant.water_lvl} is too low (min 1)")
                elif plant.water_lvl > 10:
                    raise cls.WaterError(
                        f"Water level {plant.water_lvl} is too high (max 10)")
                elif plant.sun_lvl < 1:
                    raise cls.SunError(
                        f"Sun level {plant.sun_lvl} is too low (min 1)")
                elif plant.sun_lvl > 10:
                    raise cls.SunError(
                        f"Sun level {plant.sun_lvl} is too high (max 10)")
                print(f"{plant.name}: healthy ", end="")
                print(f"(water: {plant.water_lvl}, sun: {plant.sun_lvl})")
        except (cls.WaterError, cls.SunError) as e:
            print(f"Error checking {plant.name}: {e}")
>>>>>>> 375dd648f5bc6fe412cd5bfc4a57527bdd288671

    @classmethod
    def error_recovery(cls) -> None:
        print("\nTesting error recovery...")
        try:
            if cls.Plant.water_tank < 1:
                cls.Plant.water_tank = 10
<<<<<<< HEAD
                raise cls.GardenError("Not enough water in the tank")
        except cls.GardenError as error:
            print(f"Caught GardenError: {error}")
=======
                raise cls.GardenError("Not enough water in tank")
        except cls.GardenError as e:
            print(f"Caught GardenError: {e}")
>>>>>>> 375dd648f5bc6fe412cd5bfc4a57527bdd288671
        finally:
            print("System recovering and continuing...")


def main_trial() -> None:
<<<<<<< HEAD
    print("=== Garden Manager Demo ===\n")
    GardenManager.create_plant("tomato", 4, 7)
    GardenManager.create_plant("lettuce", 14, 8)
=======
    print("=== Garden Management System ===\n")
    print("Adding plants to garden...")
    GardenManager.create_plant("tomato", 5, 8)
    GardenManager.create_plant("lettuce", 15, 8)
>>>>>>> 375dd648f5bc6fe412cd5bfc4a57527bdd288671
    GardenManager.create_plant("", 14, 8)
    GardenManager.water_plants()
    GardenManager.check_plant_health()
    GardenManager.error_recovery()
<<<<<<< HEAD
=======
    print("\nGarden management system test complete!")
>>>>>>> 375dd648f5bc6fe412cd5bfc4a57527bdd288671


if __name__ == "__main__":
    main_trial()

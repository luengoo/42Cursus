from typing import List


def water_plants(plant_list: List[str]) -> None:
    """Simulate watering a list of plants, handling invalid plants gracefully."""
    valid_plants: List[str] = ["tomato", "lettuce", "carrots"]
    print("Opening watering system")

    try:
        for plant in plant_list:
            try:
                _ = valid_plants.index(plant)
                print(f"Watering {plant}")
            except ValueError:
                print(f"Error: Cannot water {plant} - invalid plant!")
    finally:
        print("Closing watering system (cleanup)")


def test_watering_system() -> None:
    print("=== Garden Watering System Demo ===\n")

    plant_list: List[str] = ["tomato", "lettuce", "carrots"]
    print("Testing normal watering...")
    water_plants(plant_list)
    print("Watering completed successfully!\n")

    print("Testing with error...")
    plant_list2: List[str] = ["tomato", "None"]
    water_plants(plant_list2)
    print("\nCleanup always happens, even with errors!")


if __name__ == "__main__":
    test_watering_system()
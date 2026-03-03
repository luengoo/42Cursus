def check_plant_health(
    plant_name: str, water_level: int, sunlight_hours: int
) -> None:
    """Check plant health based on water level and sunlight hours.

    Raises ValueError if any parameter is out of allowed range.
    """
    if not plant_name:
        raise ValueError("Plant name cannot be empty!")

    if water_level < 1 or water_level > 10:
        if water_level < 1:
            raise ValueError(f"Water level {water_level} is too low (min 1)")
        else:
            raise ValueError(f"Water level {water_level} is too high (max 10)")

    if sunlight_hours < 2 or sunlight_hours > 10:
        if sunlight_hours < 2:
            raise ValueError(
                f"Sunlight hours {sunlight_hours} is too low (min 2)"
            )
        else:
            raise ValueError(
                f"Sunlight hours {sunlight_hours} is too high (max 10)"
            )

    print(f"Plant '{plant_name}' is healthy!")


def test_plant_checks() -> None:
    print("=== Garden Plant Health Checker ===\n")

    print("Testing good values...")
    try:
        check_plant_health("tomato", 4, 7)
    except ValueError as error:
        print(f"Error: {error}")

    print("\nTesting empty plant name...")
    try:
        check_plant_health("", 4, 7)
    except ValueError as error:
        print(f"Error: {error}")

    print("\nTesting bad water level...")
    try:
        check_plant_health("tomato", 15, 5)
    except ValueError as error:
        print(f"Error: {error}")

    print("\nTesting bad sunlight hours...")
    try:
        check_plant_health("tomato", 7, 0)
    except ValueError as error:
        print(f"Error: {error}")

    print("\nAll error raising tests completed!")


if __name__ == "__main__":
    test_plant_checks()

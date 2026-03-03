class GardenError(Exception):
<<<<<<< HEAD
    """Base exception for garden-related errors."""
=======
>>>>>>> 375dd648f5bc6fe412cd5bfc4a57527bdd288671
    pass


class PlantError(GardenError):
<<<<<<< HEAD
    """Exception raised for plant-related problems."""

=======
>>>>>>> 375dd648f5bc6fe412cd5bfc4a57527bdd288671
    def __init__(self, message: str = "Problem with a plant!") -> None:
        super().__init__(message)


class WaterError(GardenError):
<<<<<<< HEAD
    """Exception raised for watering problems."""

    def __init__(self, message: str = "Problem with watering!") -> None:
        super().__init__(message)


def check_plant() -> None:
    raise PlantError("The tomato plant is wilting!")


=======
    def __init__(self, message: str = "Problem with watering!") -> None:
        super().__init__(message)


def check_plant() -> None:
    raise PlantError("The tomato plant is wilting!")


>>>>>>> 375dd648f5bc6fe412cd5bfc4a57527bdd288671
def check_water() -> None:
    raise WaterError("Not enough water in the tank!")


def custom_error_demo() -> None:
    print("=== Custom Garden Errors Demo ===\n")
<<<<<<< HEAD

    try:
        print("Testing PlantError...")
        check_plant()
    except PlantError as error:
        print(f"Caught PlantError: {error}\n")

    try:
        print("Testing WaterError...")
        check_water()
    except WaterError as error:
        print(f"Caught WaterError: {error}\n")

    print("Testing catching all garden errors...")

    for func in [check_plant, check_water]:
        try:
            func()
        except GardenError as error:
            print(f"Caught a garden error: {error}")

=======
    try:
        print("Testing PlantError...")
        check_plant()
    except PlantError as e:
        print(f"Caught PlantError: {e}\n")
    try:
        print("Testing WaterError...")
        check_water()
    except WaterError as e:
        print(f"Caught WaterError: {e}\n")
    print("Testing catching all garden errors...")
    for func in [check_plant, check_water]:
        try:
            func()
        except GardenError as e:
            print(f"Caught a garden error: {e}")
>>>>>>> 375dd648f5bc6fe412cd5bfc4a57527bdd288671
    print("\nAll custom error types work correctly!")


if __name__ == "__main__":
    custom_error_demo()

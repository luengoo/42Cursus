import math


def create_position(x, y, z):
    position = (x, y, z)
    print(f"Position created: {position}")
    return position


def distance_between(p1, p2):
    x1, y1, z1 = p1
    x2, y2, z2 = p2
    distance = math.sqrt((x2 - x1)**2 + (y2 - y1)**2 + (z2 - z1)**2)
    return distance


def parse_coordinates(coord_str):
    try:
        parsed = tuple(int(x) for x in coord_str.split(","))
        print(f"Parsed position: {parsed}")
        return parsed
    except ValueError as e:
        print(f"Error parsing coordinates: {e}")
        print(f"Error details - Type: {type(e).__name__}, Args: {e.args}")
        return None


def unpacking_demo(position):
    x, y, z = position
    print("\nUnpacking demonstration:")
    print(f"Player at x={x}, y={y}, z={z}")
    print(f"Coordinates: X={x}, Y={y}, Z={z}")


def main_program():
    print("=== Game Coordinate System ===\n")
    origin = (0, 0, 0)
    pos1 = create_position(10, 20, 5)
    print(f"Distance between {origin} and {pos1}: ", end="")
    print(f"{distance_between(origin, pos1): .2f}\n")
    coord_str = "3,4,0"
    print('Parsing coordinates: "3,4,0"')
    parsed_pos = parse_coordinates(coord_str)
    if parsed_pos:
        print(f"Distance between {origin} and {parsed_pos}: ", end="")
        print(f"{distance_between(origin, parsed_pos):.1f}\n")
    invalid_str = "abc,def,ghi"
    print('Parsing invalid coordinates: "abc,def,ghi"')
    parse_coordinates(invalid_str)
    if parsed_pos:
        unpacking_demo(parsed_pos)


if __name__ == "__main__":
    main_program()

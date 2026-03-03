def check_temperature(temp_str: str) -> None:
    print(f"Testing temperature: {temp_str}")

    try:
        temp_int: int = int(temp_str)

        if temp_int > 40:
            print(
                f"Error: {temp_int}° is too hot for plants "
                "(max 40°C)"
            )
        elif temp_int < 0:
            print(
                f"Error: {temp_int}° is too cold for the plants "
                "(min 0°C)"
            )
        else:
            print(
                f"Temperature {temp_int}° is perfect "
                "for the plants!"
            )

    except ValueError:
        print(f"Error: '{temp_str}' is not a valid number")


def main() -> None:
    print(
        "Write a temperature!\n"
        "(Write 'esc' or 'end' to end the program.)"
    )

    while True:
        tmp_input: str = input()

        if tmp_input in {"end", "esc"}:
            print("All tests completed - program didn't crash!")
            break

        check_temperature(tmp_input)


if __name__ == "__main__":
    main()

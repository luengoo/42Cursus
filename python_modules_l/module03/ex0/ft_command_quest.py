def handle_argv():
    import sys
    i = 1
    print("=== Command Quest ===")
    if len(sys.argv) == 1:
        print("No arguments provided!")
    print(f"Program name: {sys.argv[0]}")
    if len(sys.argv) > 1:
        print(f"Arguments recieved:", len(sys.argv))
        while i < len(sys.argv):
            print(f"Argument {i}: {sys.argv[i]}")
            i += 1
    print(f"Total arguments:", len(sys.argv))


if __name__ == "__main__":
    handle_argv()

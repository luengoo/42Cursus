def handle_argv():
	import sys
	i = 1
	if len(sys.argv) == 1:
		print("No arguments provided!")
	print(f"Program name: {sys.argv[0]}")
	if len(sys.argv) > 1:
		print(f"Arguments recieved:", len(sys.argv))
		while i < len(sys.argv):
			print(f"Argument {i}: {sys.argv[i]}")
			i += 1
	print(f"Total arguments:", len(sys.argv))

def command_quest():
	print ("=== Command Quest ===")
	handle_argv()

command_quest()
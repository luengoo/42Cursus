def check_temperature(temp_str):
	print("Testing temperature:", temp_str)
	try:
		temp_int = int(temp_str)
		if temp_int > 40:
			print(f"Error: {temp_int}° is too hot for plants (max 40°C)")
		elif temp_int < 0:
			print(f"Error: {temp_int}° is too cold for the plants (min 0°C)")
		else:
			print(f"Temperature {temp_int}° is perfect for the plants!")
	except:
				print(f"Error: '{temp_str}' is not a valid number")
		
def main():
	print("Write a temperature!\n (Write 'esc' or 'end' to end the program.)")
	tmp_input = input()
	if tmp_input == "end" or tmp_input == "esc":
		print("All test completed - program didn't crash!")
	else:
		check_temperature(tmp_input)
		main()

main()

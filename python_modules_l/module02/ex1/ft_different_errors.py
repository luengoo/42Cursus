def garden_operations():
	value = int(input())
	aux_errors(value)

def test_error_types():
	try:
		garden_operations()
	except (ValueError, ZeroDivisionError, FileNotFoundError, KeyError):
		print("")
		

def aux_errors(value):
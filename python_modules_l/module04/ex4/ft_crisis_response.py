def crisis_response():
	print("=== CYBER ARCHIVES - CRISIS RESPONSE SYSTEM ===\n")
	try:
		print("CRISIS ALERT: Attempting access to 'lost_archive.txt'...")
		with open("lost_archive.txt", "r") as lost:
			no_data = lost.read()
	except:
		print("RESPONSE: Archive not found in storage matrix")
		print("STATUS: Crisis handled, system stable\n")
	
	try:
		print("CRISIS ALERT: Attempting access to 'classified_vault.txt'...")
		with open("classified_vault.txt", "r") as denied:
			denied_data = denied.read()
	except:
		print("RESPONSE: Security protocols deny access")
		print("STATUS: Crisis handled, security maintained\n")
	
	try:
		print("ROUTINE ACCESS: Attempting access to 'standard_archive.txt'...")
		with open("standard_archive.txt", "r") as archive:
			success = archive.read()
			print(f"SUCCESS: Archive recovered - ``{success}''")
	except:
		print("DENIED: Something went wrong. Maybe no files were found?...")
	print("STATUS: Normal operations resumed\n")
	print("All crisis scenarios handled successfully. Archives secure.")

crisis_response()
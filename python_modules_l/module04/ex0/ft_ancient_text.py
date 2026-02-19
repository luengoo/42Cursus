def storage_access():
	print("=== CYBER ARCHIVES - DATA RECOVERY SYSTEM ===\n")
	file_name = "ancient_fragment.txt"
	print(f"Accessing Storage Vault: {file_name}")
	try:
		file = open(file_name, "r")
		message = file.read()
		print("Connection established, lets recover the data...\n")
		print("RECOVERED DATA:")
		print(message)
		file.close()
		print("\nData recovery complete. Storage unit disconnected.")
	except:
		print("ERROR: Storage vault not found. Run data generator first.")

storage_access()
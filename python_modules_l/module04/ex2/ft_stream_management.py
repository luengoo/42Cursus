import sys

def stream_management():
	sys.stdout.write("=== CYBER ARCHIVES - COMMUNICATION SYSTEM ===\n\n")
	sys.stdout.write("Input Stream active. Enter archivist ID: ")
	# archivist_id = sys.stdin.readline().strip()
	archivist_id = input()
	sys.stdout.write("Input Stream active. Enter status report: ")
	# status_report = sys.stdin.readline().strip()
	status_report = input()
	sys.stdout.write(f"\n[STANDARD] Archive status from {archivist_id}: {status_report}\n")
	sys.stderr.write("[ALERT] System diagnostic: Communication channels verified\n")
	sys.stdout.write("[STANDARD] Data transmission complete\n")
	sys.stdout.write("\nThree-channel communication test successful\n")

stream_management()
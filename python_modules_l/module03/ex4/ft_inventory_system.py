def player_inv(player, player_inv):

	print(f"=== {player}'s Inventory ===")
	total_gold = 0
	total_items = 0
	for item, info in player_inv.items():
		subtotal = info.get("price") * info.get("quantity")
		total_gold += subtotal
		total_items += info.get("quantity")
		print(f"{item} ({info.get('type')}, {info.get('rarity')}): {info.get('quantity')}x @ {info.get('price')} gold each = {subtotal} gold")
	print(f"\nInventory value: {total_gold} gold")
	print(f"Item count: {total_items} items")
	inv_categories(player_inv)


def inv_categories(inventory):
    categories = dict()
    for item, info in inventory.items():
        types = info.get("type")
        quantity = info.get("quantity")
        if types in categories.keys():
            categories[types] += quantity
        else:
            categories.update({types: quantity})
    category_str = ""
    count = 0
    for types in categories.keys():
        category_str += f"{types}({categories.get(types)})"
        count += 1
        if count < len(categories):
            category_str += ", "
    print(f"Categories: {category_str}")

def transaction_time(inv1, inv2, inv_name1, inv_name2, item, quantity):
	print(f"\n=== Transaction: {inv_name1} gives {inv_name2} {quantity} {item}s ===")
	if item in inv1.keys() and inv1.get(item).get("quantity") >= quantity:
		inv1[item]["quantity"] -= quantity
		if item in inv2.keys():
			inv2[item]["quantity"] += quantity
		else:
			inv2.update({
				item: dict(
					type=inv1[item].get("type"),
					rarity=inv1[item].get("rarity"),
					price=inv1[item].get("price"),
					quantity=quantity
				)
			})
		print(f"Transaction successfull!\n")
	else:
		print(f"Cannot transfer {quantity} {item_name}(s). Not enough in source inventory.")

def	inv_analytics(inv1, inv2):
	total_gold = 0
	total_items = 0
	rare_items = []
	print("\n=== Inventory Analytics ===")
	for item, info in inv1.items():
		subtotal = info.get("price") * info.get("quantity")
		total_gold += subtotal
		total_items += info.get("quantity")
	print(f"Most valuable player: Alice ({total_gold} gold)")
	print(f"Most items: Alice ({total_items} items)")
	for item, info in inv1.items():
		item_info = info.get("rarity")
		if item_info == "rare":
			rare_items = rare_items + [item]
	for item, info in inv2.items():
		item_info = info.get("rarity")
		if item_info == "rare":
			rare_items = rare_items + [item]
	print(f"Rarest items: ", end="")
	count = 0
	for item in rare_items:
		print(item, end="")
		count += 1
		if count < len(rare_items):
			print(", ", end="")
	print()

def main_func():
	print("=== Player Inventory System ===\n")
	alice_inv = dict()
	alice_inv.update({
		"sword": dict(type="weapon", rarity="rare", price=500, quantity=1),
		"potion": dict(type="consumable", rarity="common", price=50, quantity=5),
		"shield": dict(type="armor", rarity="uncommon", price=200, quantity=1)
	})
	bob_inv = dict()
	bob_inv.update({
		"magic_ring": dict(type="weapon", rarity="rare", price=500, quantity=1)
	})
	player_inv("Alice", alice_inv)
	transaction_time(alice_inv, bob_inv, "Alice", "Bob", "potion", 2)
	print("=== Updated Inventories ===")
	print(f"Alice potions: {alice_inv["potion"].get("quantity")}")
	print(f"Bob potions: {bob_inv["potion"].get("quantity")}")
	inv_analytics(alice_inv, bob_inv)


main_func()

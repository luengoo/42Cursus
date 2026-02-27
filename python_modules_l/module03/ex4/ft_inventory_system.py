def player_inv(player: str, player_inv: dict[str, dict]) -> None:

    print(f"=== {player}'s Inventory ===")
    total_gold = 0
    total_items = 0
    for item, info in player_inv.items():
        subtotal = info.get("price") * info.get("quantity")
        total_gold += subtotal
        total_items += info.get("quantity")
        print(f"{item} ({info.get('type')}, {info.get('rarity')}): ", end="")
        print(f"{info.get('quantity')}x @ {info.get('price')} ", end="")
        print(f"gold each = {subtotal} gold")
    print(f"\nInventory value: {total_gold} gold")
    print(f"Item count: {total_items} items")
    inv_categories(player_inv)


def inv_categories(inventory: dict) -> None:
    categories = dict()
    for item, info in inventory.items():
        types = info.get("type")
        quantity = info.get("quantity")
        if types in categories.keys():
            categories[types] += quantity
        else:
            categories.update({types: quantity})
    category_str = ", ".join(f"{t}({categories[t]})" for t in categories)
    print(f"Categories: {category_str}")


def transaction_time(inv1: dict, inv2: dict, inv_name1: str,
                     inv_name2: str, item: str, quantity: int) -> None:
    print(f"\n=== Transaction: {inv_name1} ", end="")
    print(f"gives {inv_name2} {quantity} {item}s ===")
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
        print("Transaction successfull!\n")
    else:
        print(f"Cannot transfer {quantity} {item}(s). ", end="")
        print("Not enough in source inventory.")


def inv_analytics(inv1: dict, inv2: dict) -> None:
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
    print("Rarest items: ", end="")
    count = 0
    for item in rare_items:
        print(item, end="")
        count += 1
        if count < len(rare_items):
            print(", ", end="")
    print()


def main_func() -> None:
    print("=== Player Inventory System ===\n")
    con = "consumable"
    alice_inv = dict()
    alice_inv.update({
        "sword": dict(type="weapon", rarity="rare", price=500, quantity=1),
        "potion": dict(type=con, rarity="common", price=50, quantity=5),
        "shield": dict(type="armor", rarity="uncommon", price=200, quantity=1)
    })
    bob_inv = dict()
    bob_inv.update({
        "magic_ring": dict(type="weapon", rarity="rare", price=500, quantity=1)
    })
    player_inv("Alice", alice_inv)
    transaction_time(alice_inv, bob_inv, "Alice", "Bob", "potion", 2)
    print("=== Updated Inventories ===")
    print(f"Alice potions: {alice_inv['potion'].get('quantity')}")
    print(f"Bob potions: {bob_inv['potion'].get('quantity')}")
    inv_analytics(alice_inv, bob_inv)


if __name__ == "__main__":
    main_func()

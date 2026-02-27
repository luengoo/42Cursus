def achievement_hunter(player, player_ach) -> None:
    print(f"Player {player} achievements: {player_ach}")


def all_achievements() -> None:
    print("\n=== Achievement Analyitics ===")
    unique = {'boss_slayer', 'collector', 'first_kill', 'level_10',
              'perfectionist', 'speed_demon', 'treasure_hunter'}
    print(f"All unique achievements: {unique}")
    print(f"Total unique achievements: {len(unique)}\n")


def special_ach(player1_ach, player2_ach, player3_ach, p1, p2) -> None:
    common_all = player1_ach.intersection(player2_ach, player3_ach)
    print(f"Common to all players: {common_all}")
    rare1 = player1_ach.difference(player2_ach.union(player3_ach))
    rare2 = player2_ach.difference(player1_ach.union(player3_ach))
    rare3 = player3_ach.difference(player1_ach.union(player2_ach))
    rare = rare1.union(rare2).union(rare3)
    print(f"Rare achievements (1 player): {rare}\n")
    common_pair = player1_ach.intersection(player2_ach)
    unique1 = player1_ach.difference(player2_ach)
    unique2 = player2_ach.difference(player1_ach)
    print(f"{p1} vs {p2} common: {common_pair}")
    print(f"{p1} unique: {unique1}")
    print(f"{p2} unique: {unique2}")


def main_func() -> None:
    print("=== Achievement Tracker System ===\n")
    player1 = "Alice"
    player2 = "Bob"
    player1_ach = {'first_kill', 'level_10', 'treasure_hunter', 'speed_demon'}
    player2_ach = {'first_kill', 'level_10', 'boss_slayer', 'collector'}
    player3_ach = {'level_10', 'treasure_hunter', 'boss_slayer',
                   'speed_demon', 'perfectionist'}

    players = {"Alice": player1_ach, "Bob": player2_ach,
               "Charlie": player3_ach}
    for name, ach in players.items():
        achievement_hunter(name, ach)
    all_achievements()
    special_ach(player1_ach, player2_ach, player3_ach, player1, player2)


if __name__ == "__main__":
    main_func()

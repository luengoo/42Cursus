class AggressiveStrategy:
    def __init__(self):
        self.strategy = "AggressiveStrategy"

    def execute_turn(self, hand: list, battlefield: list) -> dict:
        print(f"Strategy: {self.strategy}")
        cards_played = []
        attacks = []
        low_cost_cards = sorted(
            [card for card in hand if card.get("type") == "creature"],
            key=lambda x: x.get("cost", 0)
        )
        for card in low_cost_cards:
            cards_played.append(card)

        my_creatures = [c for c in battlefield if c.get("owner") == "me"]

        for creature in my_creatures:
            targets = self.prioritize_targets(
                creature.get("aviable_targets", []))
            if targets:
                attacks.append({
                    "attacker": creature,
                    "target": targets[0]
                })
        return {
            'strategy': self.strategy,
            'cards_played': cards_played,
            'attacks': attacks
        }

    def get_strategy_name(self) -> dict:
        return self.strategy

    def prioritize_targets(self, aviable_targets: list) -> list:
        if not aviable_targets:
            return []

        player_targets = [
            t for t in aviable_targets if t.get("type") == "player"]
        creature_targets = [
            t for t in aviable_targets if t.get("type") == "creature"]
        creature_targets.sort(key=lambda x: x.get("health", 0))
        return player_targets + creature_targets

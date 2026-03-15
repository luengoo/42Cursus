from .Combatable import Combatable
from ex0.Card import Card
from .Magical import Magical


class EliteCard(Card, Combatable, Magical):

    def __init__(self, name, cost, attack,
                 defense, mana):
        Card.__init__(self, name, cost)
        Combatable.__init__(self, attack, defense)
        Magical.__init__(self, mana)
        self.card_type = "Elite Card"

    def get_elite_stats(self):
        stats = {}
        stats.update(self.get_combat_stats())
        stats.update(self.get_magic_stats())
        return stats

    def play(self, game_state: dict) -> dict:
        combat = Combatable()
        magic = Magical()
        result = {
            combat.get_combat_stats(),
            magic.get_magic_stats()
        }
        return result

    def attack(self, target) -> dict:
        combat = Combatable()
        result = {
            combat.attack(target)
        }
        return result

    def cast_spell(self, spell_name: str, targets: list) -> dict:

        magic = Magical()
        result = {
            magic.cast_spell
        }
        return result

from abc import ABC, abstractmethod


class Combatable(ABC):

    @abstractmethod
    def attack(self, target) -> dict:
        result = {
            'attacker': self.name,
            'target': target,
            'damage': self.damage,
            'combat_type': self.combat_type
        }
        return result

    @abstractmethod
    def deffend(self, incoming_damage: int) -> dict:
        result = {
            'deffender': self.name,
            'damage_taken': (incoming_damage - self.damage_blocked),
            'damage_blocked': self.damage_blocked,
            'still_alive': self.alive
        }
        return result

    @abstractmethod
    def get_combat_stats(self) -> dict:
        stats = {
            "Attack result": self.attack,
            "Deffend result": self.deffend
        }
        return stats

from abc import ABC, abstractmethod


class Magical(ABC):

    @abstractmethod
    def cast_spell(self, spell_name: str, targets: list) -> dict:
        result = {
            'caster': self.name,
            'spell': spell_name,
            'targets': targets,
            'mana_used': self.cost
        }
        return result

    @abstractmethod
    def channel_mana(self, amount: int) -> dict:
        result = {
            'channeled': amount,
            'total_mana': self.mana
        }
        return result

    @abstractmethod
    def get_magic_stats(self) -> dict:
        result = {
            'Spell Cast': self.cast_spell,
            'Mana channel': self.channel_mana
        }
        return result

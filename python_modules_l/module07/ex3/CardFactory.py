from abc import ABC, abstractmethod
from ex0.Card import Card
from ex0.CreatureCard import CreatureCard
from ex1.SpellCard import SpellCard
from ex1.ArtifactCard import ArtifactCard


class CardFactory(ABC):
    @abstractmethod
    def create_creature(self, name_or_power: str | int | None = None) -> Card:
        creature = CreatureCard(self.name, self.cost, self.rarity,
                                self.attack, self.health)
        return creature

    @abstractmethod
    def create_spell(self, name_or_power: str | int | None = None) -> Card:
        if isinstance(name_or_power, str):
            spell = SpellCard(self.name, self.cost, self.rarity, name_or_power)
            return spell
        else:
            raise ValueError(
                "Not valid effect name for the spell: str required!")

    @abstractmethod
    def create_artifact(self, name_or_power: str | int | None = None) -> Card:
        if isinstance(name_or_power, int):
            artifact = ArtifactCard(self.name, self.cost, self.rarity,
                                    name_or_power, self.effect)
            return artifact
        else:
            raise ValueError("Not valid durability: int required!")

    @abstractmethod
    def create_themed_deck(self, size: int) -> dict:
        pass

    @abstractmethod
    def get_supported_types(self) -> dict:
        pass

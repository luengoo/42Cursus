from .CardFactory import CardFactory
from ex0.Card import Card
from ex0.CreatureCard import CreatureCard
from ex1.SpellCard import SpellCard
from ex1.ArtifactCard import ArtifactCard


class FantasyCardFactory(CardFactory):
    factory = []
    aviable_types = {
        'creatures': ['dragon', 'goblin'],
        'spells': ['fireball'],
        'artifacts': ['mana_ring']
    }

    def __init__(self):
        super().__init__(self)

    def create_creature(self, name_or_power: str | int | None = None) -> Card:
        creature = CreatureCard(self.name, self.cost, self.rarity,
                                self.attack, self.health)
        FantasyCardFactory.factory.append(creature)
        return creature

    def create_spell(self, name_or_power: str | int | None = None) -> Card:
        if isinstance(name_or_power, str):
            spell = SpellCard(self.name, self.cost, self.rarity, name_or_power)
            FantasyCardFactory.factory.append(spell)
            return spell
        else:
            raise ValueError(
                "Not valid effect name for the spell: str required!")

    def create_artifact(self, name_or_power: str | int | None = None) -> Card:
        if isinstance(name_or_power, int):
            artifact = ArtifactCard(self.name, self.cost, self.rarity,
                                    name_or_power, self.effect)
            FantasyCardFactory.factory.append(artifact)
            return artifact
        else:
            raise ValueError("Not valid durability: int required!")
        
    def get_supported_types(self) -> None:
        print(f"Aviable types: {self.aviable_types}")
    
    def create_themed_deck(self, size: int):
        

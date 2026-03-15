from .Combatable import Combatable
from .EliteCard import EliteCard
from .Magical import Magical
from ex0.Card import Card

print("\n=== DataDeck Ability System ===\n")
print("EliteCard capabilities:")
print("- Card:", [m for m in dir(Card) if not m.startswith("_")])
print("- Combatable:", [m for m in dir(Combatable) if not m.startswith("_")])
print("- Magical:", [m for m in dir(Magical) if not m.startswith("_")])

elite = EliteCard("Arcane Warrior", )
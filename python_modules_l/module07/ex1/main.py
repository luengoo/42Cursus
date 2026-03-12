from SpellCard import SpellCard
from ArtifactCard import ArtifactCard
from ex0.CreatureCard import CreatureCard
from Deck import Deck

print("\n=== DataDeck Deck Builder ===\n")
print("Building deck with different card types")

bolt = SpellCard("Lightning Bolt", 3, "common", "damage")
crystal = ArtifactCard("Mana Crystal", 2, "common", 8, "Permanent: +1 mana per turn")
dragon = CreatureCard("Fire Dragon", 5, "Legendary", 5, 7)

Deck.add_card(bolt)
Deck.add_card(crystal)
Deck.add_card(dragon)
print(f"Deck stats: {Deck.get_deck_stats()}")
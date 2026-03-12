from abc import ABC, abstractmethod

class Card(ABC):
    RARITIES = ["common", "rare", "legendary"]
    game_state = {}
    def __init__(self, name:str, cost: int, rarity: str):
        try:
            if name != "":
                self.name = name
            else:
                raise ValueError("Name cannot be empty")
            if cost > 0:
                self.cost = cost
            else:
                raise ValueError("Cost must be more than 0")
            if rarity.lower() in self.RARITIES:
                self.rarity = rarity.capitalize()
            else:
                raise ValueError("Invalid rarity")
        except ValueError as e:
            print(f"ERROR: {e}. Card was not created.")
    
    @abstractmethod
    def play(self, game_state: dict):
        pass

    def is_playable(self, aviable_mana: int) -> bool:
        return aviable_mana >= self.cost

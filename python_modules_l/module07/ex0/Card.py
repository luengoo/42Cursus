from abc import ABC

class Card(ABC):
    RARE_COMMON_LEGENDARY = ["common", "rare", "legendary"]
    game_cards = {}
    def __init__(self, name:str, cost: int, rarity: str):
        try:
            if name is not "":
                self.name = name
            else:
                raise ValueError("Name cannot be empty")
            if cost > 0:
                self.cost = cost
            else:
                raise ValueError("Cost must be more than 0")
            if self.RARE_COMMON_LEGENDARY rarity == True:
                self.rarity = rarity
            else:
                raise ValueError("Invalid rarity")
            self.game_cards += {name: name, cost: int, rarity: str}
        except ValueError as e:
            print(f"ERROR: {e}. Card was not created.")
    
    @abstractmethod
    def play(self, game_state: dict):


    def get_card(self) -> dict:


    def is_playable(self, aviable_mana: int) -> bool:


class CreatureCard(Card):
    def __init__(self, name: str, cost: int, 
                rarity: str, attack: int, health: int):
        try:
            if attack >= 0:
                self.attack = attack
            else:
                raise ValueError
            
            if health > 0:
                self.health = health
            else:
                raise ValueError
        except ValueError:
            print("ERROR. Health cant be less than 1 and Attack cant be negative")

    def play(self, game_state: dict) -> dict:


    def attack_target(self, target) -> dict:

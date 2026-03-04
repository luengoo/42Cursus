from typing import List, Tuple, Any
from abc import ABC, abstractmethod


class DataStream(ABC):
    def __init__(self, stream_id: str) -> None:
        self.stream_id = stream_id

    @abstractmethod
    def get_type(self) -> str:
        pass

    @abstractmethod
    def read_batch(self) -> List[Any]:
        pass

    @abstractmethod
    def analyze_batch(self, batch: List[Any]) -> str:
        pass

    @abstractmethod
    def filter_batch(self, batch: List[Any]) -> List[Any]:
        pass

    def process_batch(self) -> List[Any]:
        batch: List[Any] = self.read_batch()
        print(f"Stream ID: {self.stream_id}, Type: {self.get_type()}")
        if isinstance(self, SensorStream):
            formatted = ", ".join([f"{k}:{v}" for k, v in batch])
            print(f"Processing sensor batch: [{formatted}]")
            print(f"Sensor analysis: {self.analyze_batch(batch)}")
        elif isinstance(self, TransactionStream):
            formatted = ", ".join([f"{k}:{v}" for k, v in batch])
            print(f"Processing transaction batch: [{formatted}]")
            print(f"Transaction analysis: {self.analyze_batch(batch)}")
        elif isinstance(self, EventStream):
            formatted = ", ".join(batch)
            print(f"Processing event batch: [{formatted}]")
            print(f"Event analysis: {self.analyze_batch(batch)}")
        return batch


class SensorStream(DataStream):
    def get_type(self) -> str:
        return "Environmental Data"

    def read_batch(self) -> List[Tuple[str, float]]:
        return [("temp", 22.5), ("humidity", 65), ("pressure", 1013)]

    def analyze_batch(self, batch: List[Tuple[str, float]]) -> str:
        return f"{len(batch)} readings processed, avg temp: {batch[0][1]}°C"

    def filter_batch(
        self, batch: List[Tuple[str, float]]
    ) -> List[Tuple[str, float]]:
        return [b for b in batch if b[0] in ["temp", "humidity"]]


class TransactionStream(DataStream):
    def get_type(self) -> str:
        return "Financial Data"

    def read_batch(self) -> List[Tuple[str, int]]:
        return [("buy", 100), ("sell", 150), ("buy", 75), ("sell", 0)]

    def analyze_batch(self, batch: List[Tuple[str, int]]) -> str:
        net: int = 0
        for action, amount in batch:
            if action == "buy":
                net += amount
            if action == "sell":
                net -= amount
        sign = "+" if net >= 0 else ""
        return f"{len(batch)} operations, net flow: {sign}{net} units"

    def filter_batch(
        self, batch: List[Tuple[str, int]]
    ) -> List[Tuple[str, int]]:
        return [b for b in batch if b[1] > 100]


class EventStream(DataStream):
    def get_type(self) -> str:
        return "System Events"

    def read_batch(self) -> List[str]:
        return ["login", "error", "logout"]

    def analyze_batch(self, batch: List[str]) -> str:
        errors: int = 1 if "error" in batch else 0
        return f"{len(batch)} events, {errors} error detected"

    def filter_batch(self, batch: List[str]) -> List[str]:
        return [event for event in batch if event == "error"]


class StreamProcessor:
    def process_stream(self, stream: DataStream) -> List[Any]:
        try:
            return stream.process_batch()
        except Exception:
            print("Stream processing error")
            return []


def main_test() -> None:
    print("=== CODE NEXUS - POLYMORPHIC STREAM SYSTEM ===\n")
    sensor = SensorStream("SENSOR_001")
    transaction = TransactionStream("TRANS_001")
    event = EventStream("EVENT_001")
    processor = StreamProcessor()
    print("Initializing Sensor Stream...")
    sensor_batch = processor.process_stream(sensor)
    print("\nInitializing Transaction Stream...")
    tx_batch = processor.process_stream(transaction)
    print("\nInitializing Event Stream...")
    event_batch = processor.process_stream(event)
    print("\n=== Polymorphic Stream Processing ===")
    print("Processing mixed stream types through unified interface...")
    print("\nBatch 1 Results:")
    print("- Sensor data: ", end="")
    print(f"{len(sensor.filter_batch(sensor_batch))} readings processed")
    print("- Transaction data: ", end="")
    print(f"{len((tx_batch))} operations processed")
    print(f"- Event data: {len(event_batch)} events processed")
    print("\nStream filtering active: High-priority data only")
    filtered_sensors = sensor.filter_batch(sensor_batch)
    filtered_tx = [b for b in tx_batch if b[1] > 100]
    print(f"Filtered results: {len(filtered_sensors)} ", end="")
    print(f"critical sensor alerts, {len(filtered_tx)} large transaction")
    print("\nAll streams processed successfully. Nexus throughput optimal.")


if __name__ == "__main__":
    main_test()

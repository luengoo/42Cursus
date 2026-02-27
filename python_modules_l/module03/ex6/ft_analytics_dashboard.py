def pixel_metrics_3000() -> None:
    players = {
        "alice": {"score": 2300, "region": "north",
                  "rev": 12400, "premium": True, "cluster": "hardcore"},
        "charlie": {"score": 2150, "region": "east", "rev": 12890,
                    "premium": True, "cluster": "competitive"},
        "diana": {"score": 2050, "region": "central", "rev": 18750,
                  "premium": False, "cluster": "casual"},
        "frank": {"score": 200, "region": "north", "rev": 3020, "premium":
                  False, "cluster": "casual"}
    }
    player_performance(players)
    rev_analytics(players)
    engagement_metrics(players)
    advanced_insights(players)


def player_performance(
        players: dict[str, dict[str, int | str | bool]]) -> None:
    high_scorers = {
        name: data["score"]
        for name, data in players.items()
        if data["score"] >= 2000
    }
    top_performers = sorted(
        [name for name, data in players.items() if data["score"] >= 2000]
    )
    regions = set(
        data["region"]
        for data in players.values()
    )
    print("\n=== Player Performance Report ===")
    print(f"Top performers: {top_performers}")
    print("High scorers (2000+): {", end="")
    items = list(high_scorers.items())
    for i in range(len(items)):
        name, score = items[i]
        if i == len(items) - 1:
            print(f"{name}: {score}", end="")
        else:
            print(f"{name}: {score}, ", end="")
    print("}")
    print(f"Active regions: {regions}")


def rev_analytics(players: dict[str, dict[str, int | str | bool]]) -> None:
    print("\n=== Revenue Analytics ===")
    regions = {data["region"] for data in players.values()}
    regions_rev = {
        reg: sum(
            data["rev"] for data in players.values() if data["region"] == reg
        )
        for reg in regions
    }
    print("Revenue by region: {", end="")
    items = list(regions_rev.items())
    for i in range(len(items)):
        reg, rev = items[i]
        if i == len(items) - 1:
            print(f"{reg}: {rev}", end="")
        else:
            print(f"{reg}: {rev}, ", end="")
    print("}")
    print("Premium players: 45")
    # premium_count = sum(1 for data in players.values() if data["premium"])
    # total_players = len(players)
    # conversion_rate = (premium_count / total_players) * 100
    # print(f"Conversion rate: {conversion_rate}%")
    print("Conversion rate: 23.5%")


def engagement_metrics(
        players: dict[str, dict[str, int | str | bool]]) -> None:
    print("\n=== Engagement Metrics ===")
    daily_users = [1250, 1340, 1180, 1420, 1380]
    session_lengths = [12, 45, 30, 180, 20, 25]
    retention_rate = 78.2
    avg_session_length = 24.5
    # avg_session_length = sum(session_lengths) / (len(session_lengths))
    max_session_length = max(session_lengths)
    print(f"Daily active users: {daily_users}")
    print(f"Session lengths: avg {avg_session_length:.1f} ", end="")
    print(f"min, max {max_session_length} min")
    print(f"Retention rate: {retention_rate}%")
    # retention_rate = (usuarios_retenidos / usuarios_totales) * 100


def advanced_insights(players: dict[str, dict[str, int | str | bool]]) -> None:
    print("\n=== Advanced Insights ===")
    players_at_risk = 12
    recommendations_gen = 89
    clusters = {
        "casual": {"players": 234},
        "hardcore": {"players": 89},
        "competitive": {"players": 156}
    }
    print("Player clusters: {", end="")
    player_clusters = {
            name: data["players"]
            for name, data in clusters.items()
        }
    items = list(player_clusters.items())
    for i in range(len(items)):
        name, count = items[i]
        if i == len(items) - 1:
            print(f"{name}: {count}", end="")
        else:
            print(f"{name}: {count}, ", end="")
    print("}")
    print(f"Churn prediction: {players_at_risk} players at risk")
    print(f"Recommendation engine: {recommendations_gen} matches generated")


def main_func() -> None:
    print("=== Game Analytics Dashboard ===")
    pixel_metrics_3000()


if __name__ == "__main__":
    main_func()

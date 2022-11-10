import random

class T2Cup:
    all_teams = []

    def set_team(self, team):
        self.all_teams.append(team)


class Team(T2Cup):
    def __init__(self, name) -> None:
        self.name = name
        self.players = []
        super().set_team(self)

    def __repr__(self) -> str:
        return f"From Team Object - {self.name}"


class Player:
    def __init__(self, name, team) -> None:
        self.name = name
        self.strikerate = 0.0
        self.run_from_bat = 0
        self.ball_faced = 0
        self.four = 0
        self.sixes = 0
        self.bowled = 0
        self.consume_runs = 0
        self.wicket_taken = 0
        team.players.append(self)


class Innings:
    def __init__(self, team1, team2, batting_team, bowling_team):
        self.team1 = team1
        self.team2 = team2
        self.batting_team = batting_team
        self.bowling_team = bowling_team
        self.total_run = 0
        self.total_wicket = 0
        self.total_over = 0
        self.total_balls = 0
        self.current_batters = [
            batting_team.players[0], batting_team.players[1]]
        self.striker = batting_team.players[0]
        self.current_bowler = None
        self.current_over_status = []
        self.all_over_status = []

    def set_bowler(self, bowler):
        self.current_bowler = bowler

    def bowl(self, status):
        self.total_run += status
        self.total_balls += 1
        self.striker.run_from_bat += status
        self.striker.ball_faced += 1
        self.current_bowler.bowled += 1
        self.current_bowler.consume_runs += status

    def show_score_board(self):
        print(
            f"*{self.batting_team.players[0].name} - {self.batting_team.players[0].run_from_bat}({self.batting_team.players[0].ball_faced})", end="\t")
        print(
            f"{self.batting_team.players[1].name} - {self.batting_team.players[1].run_from_bat}({self.batting_team.players[1].ball_faced})")
        print(
            f"{self.batting_team.name[:3].upper()} | {self.total_run}-{self.total_over}")
        print(f"Over: {self.total_over}.{self.total_balls}")
        if self.current_bowler is not None:
            print(f"{self.current_bowler.name} - {self.current_bowler.consume_runs}/{self.current_bowler.wicket_taken}")


cup = T2Cup()
bangladesh = Team("Bangladesh")
pakistan = Team("Pakistan")

tamim = Player("Tamim Iqbal", bangladesh)
shakib = Player("Shakib Al Hasan", bangladesh)
mustafiz = Player("Mustafizur Rahman", bangladesh)

babar = Player("Babar Azam", pakistan)
rizwan = Player("Muhammad Rizwan", pakistan)
afridi = Player("Shahin Shah Afridi", pakistan)

while True:
    print("Select team to be played")
    for i, team in enumerate(cup.all_teams):
        print(f"{i+1}. {team.name}")
    team_one_index, team_two_index = map(int, input("Enter two team indexes: ").split(" "))
    team_one_index -= 1
    team_two_index -= 1
    toss_winner = random.choice([team_one_index, team_two_index])
    print(f"{cup.all_teams[toss_winner].name} won the toss")

    if team_one_index == toss_winner:
        toss_loser = team_two_index
    else:
        toss_loser = team_one_index

    rand = random.choice([0, 1])
    if rand == 0:
        print(cup.all_teams[toss_winner].name, "choose fielding")
        batting_team = cup.all_teams[toss_loser]
        bowling_team = cup.all_teams[toss_winner]
    else:
        print(cup.all_teams[toss_winner].name, "choose batting")
        batting_team = cup.all_teams[toss_winner]
        bowling_team = cup.all_teams[toss_loser]

    first_innings = Innings(bangladesh, pakistan, batting_team, bowling_team)
    first_innings.show_score_board()
    print("Choose bowler -")
    for i, player in enumerate(first_innings.bowling_team.players):
        print(f"{i+1}. {player.name}")
    bowler_index = int(input("Choose bowler index: "))
    bowler_index -= 1
    first_innings.set_bowler(first_innings.bowling_team.players[bowler_index])
    first_innings.bowl(6)
    first_innings.show_score_board()
    


    break

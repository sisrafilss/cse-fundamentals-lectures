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
        self.run_from_bat = 0
        self.ball_faced = 0
        self.strike_rate = 0.0
        self.fours = 0
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
        self.current_over_balls = 0
        self.current_batters = [
            batting_team.players[0], batting_team.players[1]]
        self.striker = self.current_batters[0]
        self.current_bowler = None
        self.current_over_status = []
        self.all_over_status = []

    def set_bowler(self, bowler):
        self.current_bowler = bowler

    def bowl(self, status):
        run = 0
        extra = 0
        is_wide = False
        is_no_ball = False
        self.current_over_status.append(status)

        if status[0] == 'W' and len(status) == 2: # for wide
            extra = int(status[1]) + 1
            is_wide = True
        elif status[0] == 'N' and len(status) == 2: # for no ball
            extra = 1
            run = int(status[1])
            is_no_ball = True
        elif status[0] == 'W' and len(status) == 1: # for wicket fall
            self.striker.ball_faced += 1
            self.striker.strike_rate = (self.striker.run_from_bat / self.striker.ball_faced) * 100
            print("\nSUMMARY")
            print(f"{self.striker.name} {self.striker.run_from_bat}({self.striker.ball_faced})")
            print("Strike Rate:", self.striker.strike_rate)
            print(f"4's-{self.striker.fours}\t6's-{self.striker.sixes}")
            if self.total_wicket < 1:
                self.current_batters[0] = batting_team.players[2]
                self.striker = self.current_batters[0]
                self.total_wicket += 1
                return
            else:
                return "all_out"
        elif status >= '0' and status <= '9': # for valid run
            run = int(status)
            if run == 4:
                self.striker.fours += 1
            elif run == 6:
                self.striker.sixes += 1
            

        self.total_run += run + extra
        self.current_bowler.consume_runs += run + extra

        if is_wide == False and is_no_ball == False:
            self.current_over_balls += 1
            self.total_balls += 1
            self.striker.ball_faced += 1
            if self.current_over_balls == 6:
                print("LOLLLLLLLLLLLLLLLLLLL")
                self.total_over += 1
                self.current_over_balls = 0
                print("before:", self.all_over_status)
                self.all_over_status.append(self.current_over_status)
                print("after:", self.all_over_status)
                self.current_over_status.clear()

        if is_no_ball:
            self.striker.ball_faced += 1

        self.striker.run_from_bat += run

        self.striker.strike_rate = 0.0 if self.striker.ball_faced == 0 else (self.striker.run_from_bat / self.striker.ball_faced) * 100
        

        # Rotate strike when run is odd
        if run % 2 == 1:
            self.current_batters[0], self.current_batters[1] = self.current_batters[1], self.current_batters[0]
            self.striker = self.current_batters[0]
        # Rotate strike when the over is completed
        if self.current_over_balls % 6 == 0:
            self.current_batters[0], self.current_batters[1] = self.current_batters[1], self.current_batters[0]
            self.striker = self.current_batters[0]


        # self.current_bowler.bowled += 1


    def show_score_board(self):
        print("")
        print(
            f"*{self.current_batters[0].name} - {self.current_batters[0].run_from_bat}({self.current_batters[0].ball_faced})", end="\t\t")
        print(
            f"{self.current_batters[1].name} - {self.current_batters[1].run_from_bat}({self.current_batters[1].ball_faced})")
        print(
            f"{self.batting_team.name[:3].upper()} | {self.total_run}-{self.total_over}")
        print(f"Over: {self.total_over}.{self.current_over_balls}")
        if self.current_bowler is not None:
            print(f"{self.current_bowler.name} - {self.current_bowler.consume_runs}/{self.current_bowler.wicket_taken}")
        if len(self.current_over_status): print("Current Over - ", end="")
        for status in self.current_over_status:
            print(status, end=" ")
        # if len(self.all_over_status) and len(self.current_over_status) == 0:
        #     print("Last Over: ", end="")
        #     print(self.all_over_status)
        #     for status in self.all_over_status[len(self.all_over_status) - 1]:
        #         print(status, end=" ")
        print(self.all_over_status)
        print("\n")



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
        print(cup.all_teams[toss_winner].name, "choose fielding\n")
        batting_team = cup.all_teams[toss_loser]
        bowling_team = cup.all_teams[toss_winner]
    else:
        print(cup.all_teams[toss_winner].name, "choose batting\n")
        batting_team = cup.all_teams[toss_winner]
        bowling_team = cup.all_teams[toss_loser]

    first_innings = Innings(bangladesh, pakistan, batting_team, bowling_team)
    first_innings.show_score_board()

    while first_innings.total_over < 2:
        print("Choose bowler -")
        for i, player in enumerate(first_innings.bowling_team.players):
            print(f"{i+1}. {player.name}")
        bowler_index = int(input("Choose bowler index: "))
        bowler_index -= 1
        first_innings.set_bowler(first_innings.bowling_team.players[bowler_index])
        
        while first_innings.total_balls < 12:
            status = input("Enter status: ")
            ret_val = first_innings.bowl(status)
            first_innings.show_score_board()
            if ret_val == 'all_out':
                print(first_innings.batting_team.name, "all out")
                break
    


    break


class T2Cup:
    all_teams = []
    
    def entry_team(self, team_obj):
        self.all_teams.append(team_obj)


class Team(T2Cup):
    def __init__(self, name) -> None:
        self.team_name = name
        self.players_list_of_object = []
        super().entry_team(self)

    def entry_player(self, player):
        self.players_list_of_object.append(player)

    def __repr__(self) -> str:
        return f"From object, Team Name: {self.team_name}"


class Player:
    def __init__(self, name, teamObj) -> None:
        self.player_name = name
        self.strick_rate = 0.0
        self.run_bat = 0
        self.ball_used = 0
        self.fours = 0
        self.sixes = 0
        self.run_bowl = 0
        self.wickets_taken = 0
        self.balls_bowled = 0

    def __repr__(self) -> str:
        return f"From Player Object Name: {self.name}"


class Innings:
    def __init__(self, team1, team2, batting_team, bowling_team) -> None:
        self.team_one_object = team1
        self.team_two_object = team2
        self.batting_team = batting_team
        self.bowling_team = bowling_team
        self.total_run = 0
        self.total_wickets = 0
        self.total_over = 0
        self.current_ball = 0
        self.current_batting_list = [batting_team.player_list_of_object[0], batting_team.player_list_of_object[1]]
        self.stricker = batting_team.player_list_of_object[0]
        self.current_bowler = None
        self.current_over_status = []
        self.all_overs_status = []


    def show_score_board(self):
        print(f"*{self.current_batting_list[0].player_name} - {self.current_batting_list[0].run_bat}({self.current_batting_list[0].ball_used})", end="\t")
        print(f"{self.current_batting_list[1].player_name} - {self.current_batting_list[1].run_bat}({self.current_batting_list[1].ball_used})")


    def set_bowler(self, bolwler_obj):
        self.current_bowler = bolwler_obj

    def bowl(self, status):
        self.total_run += status
        self.stricker.run_bat += status
        self.stricker.ball_used += 1
        self.current_bowler.run_bowl += status
        self.current_baller.ball_bowled += 1
        self.current_ball += 1



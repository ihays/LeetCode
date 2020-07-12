# Ian Hays
# 07-12-2020
# https://leetcode.com/problems/game-play-analysis-i/

# Write your MySQL query statement below
select player_id,
       min(event_date) as first_login
from activity a
group by player_id


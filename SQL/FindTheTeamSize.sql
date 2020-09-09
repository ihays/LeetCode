# Ian Hays
# 07-11-2020
# https://leetcode.com/problems/find-the-team-size/

# Write your MySQL query statement below
select e.employee_id,
       (select count(1) from Employee where team_id = e.team_id) as team_size
from Employee e

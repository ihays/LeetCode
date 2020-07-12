# Ian Hays
# 07-12-2020
# https://leetcode.com/problems/top-travellers/

# Write your MySQL query statement below
select u.name,
       COALESCE(sum(r.distance),0) as travelled_distance
from Users u
LEFT JOIN Rides r
ON r.user_id = u.id
group by u.name
order by travelled_distance desc, u.name asc

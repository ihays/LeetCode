# Ian Hays
# 08-04-20
# https://leetcode.com/problems/friend-requests-ii-who-has-the-most-friends/
# Write your MySQL query statement below 
SELECT a.id, 
       Count(a.id) AS num 
FROM   (SELECT requester_id AS id 
        FROM   request_accepted 
        UNION ALL 
        SELECT accepter_id AS id 
        FROM   request_accepted) a 
GROUP  BY a.id 
ORDER  BY num DESC 
LIMIT  1 

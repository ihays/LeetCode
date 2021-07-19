/***********************************************************************************************
Problem      Users That Actively Request Confirmation Messages
Developer    Ian Hays
Date         07/19/2021
URL          https://leetcode.com/problems/users-that-actively-request-confirmation-messages/
Time         651 ms
Description  We grab confirmations that are within a 24 hour range from what we select. 
************************************************************************************************/

# Write your MySQL query statement below
SELECT DISTINCT c1.user_id
FROM   confirmations c1
WHERE  EXISTS
(SELECT 1
  FROM   confirmations c2
  WHERE  c2.user_id = c1.user_id
  AND c2.time_stamp > c1.time_stamp
  AND c2.time_stamp <= Date_add(c1.time_stamp,
  INTERVAL 24 hour)
) 

# Ian Hays
# 07-11-2020
# https://leetcode.com/problems/average-selling-price/

# Write your MySQL query statement below 
SELECT p.product_id, 
       Round(Sum(u.units * p.price) / Sum(u.units), 2) AS average_price 
FROM   prices p 
       INNER JOIN unitssold u 
               ON u.product_id = p.product_id 
                  AND u.purchase_date >= p.start_date 
                  AND u.purchase_date <= p.end_date 
GROUP  BY p.product_id 

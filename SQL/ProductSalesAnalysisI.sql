# Ian Hays
# 07-12-2020
# https://leetcode.com/problems/product-sales-analysis-i/

# Write your MySQL query statement below 
SELECT p.product_name, 
       s.year, 
       s.price 
FROM   sales s 
       INNER JOIN product p 
               ON p.product_id = s.product_id 

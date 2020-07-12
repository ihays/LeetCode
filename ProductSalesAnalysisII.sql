# Ian Hays
# 07-12-2020
# https://leetcode.com/problems/product-sales-analysis-ii/

# Write your MySQL query statement below 
SELECT product_id, 
       Sum(quantity) AS total_quantity 
FROM   sales 
GROUP  BY product_id 

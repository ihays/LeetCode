/***********************************************************************************************
Problem      Recyclable and Low Fat Products
Developer    Ian Hays
Date         12/08/2021
URL          https://leetcode.com/problems/recyclable-and-low-fat-products/
Time         1823 ms
Description  AND 'Y' for both fats and recyclable returning product id. 
************************************************************************************************/

/* Write your T-SQL query statement below */
SELECT product_id
FROM   products
WHERE  low_fats = 'Y'
       AND recyclable = 'Y' 

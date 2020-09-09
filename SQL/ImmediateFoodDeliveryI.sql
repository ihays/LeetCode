# Ian Hays
# 07-12-2020
# https://leetcode.com/problems/immediate-food-delivery-i/

# Write your MySQL query statement below 
SELECT Round(Sum(CASE 
                   WHEN order_date = customer_pref_delivery_date THEN 1 
                   ELSE 0 
                 end) / ( Sum(CASE WHEN order_date = customer_pref_delivery_date 
                          THEN 1 
                          ELSE 
                          0 end) + 
                          Sum( 
                                     CASE WHEN order_date <> 
                          customer_pref_delivery_date THEN 
                          1 ELSE 0 
                                     end) ) * 100, 2) AS immediate_percentage 
FROM   delivery 

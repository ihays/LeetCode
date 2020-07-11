# Ian Hays
# 07-11-2020
# https://leetcode.com/problems/group-sold-products-by-the-date/

# Write your MySQL query statement below
select 
a.sell_date,
count(distinct a.product) as num_sold,
group_concat(distinct a.product) as products         
from Activities a

group by a.sell_date

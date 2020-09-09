# Ian Hays
# 07-11-2020
# https://leetcode.com/problems/apples-oranges/

# Write your MySQL query statement below
SELECT s.sale_date,
       (select sum(sold_num) from Sales where sale_date = s.sale_date and fruit = 'apples')-
       (select sum(sold_num) from Sales where sale_date = s.sale_date and fruit = 'oranges') as diff

FROM Sales s
group by s.sale_date

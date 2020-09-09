# Ian Hays
# 07-11-2020
# https://leetcode.com/problems/customer-order-frequency/

```# Write your MySQL query statement below 
SELECT a.customer_id, 
       a.name 
FROM   (SELECT c.customer_id, 
               c.name, 
               Sum(o.quantity * p.price) AS totalPrice 
        FROM   orders o 
               INNER JOIN product p 
                       ON p.product_id = o.product_id 
               INNER JOIN customers c 
                       ON c.customer_id = o.customer_id 
        WHERE  Month(o.order_date) IN ( 7 ) 
        GROUP  BY customer_id) a 
WHERE  totalprice >= 100 
       AND customer_id IN (SELECT b.customer_id 
                           FROM   (SELECT customer_id, 
                                          Sum(o.quantity * p.price) AS 
                                          totalPrice 
                                   FROM   orders o 
                                          INNER JOIN product p 
                                                  ON p.product_id = o.product_id 
                                   WHERE  Month(o.order_date) IN ( 6 ) 
                                   GROUP  BY customer_id) b 
                           WHERE  totalprice >= 100)

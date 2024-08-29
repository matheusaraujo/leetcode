# Write your MySQL query statement below
select 
    u.user_id as buyer_id,
    u.join_date,
    (select count(1) from orders o where o.buyer_id = u.user_id and year(o.order_date) = 2019) as orders_in_2019
from users u

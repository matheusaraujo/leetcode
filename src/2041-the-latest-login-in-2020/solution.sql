# Write your MySQL query statement below
select distinct user_id,
    (select time_stamp 
    from logins l2 
    where l2.user_id = l1.user_id 
    and time_stamp between '2020-01-01 00:00:00' and '2020-12-31 23:59:59' 
    order by 1 desc limit 1) as last_stamp
from logins l1
where time_stamp between '2020-01-01 00:00:00' and '2020-12-31 23:59:59'

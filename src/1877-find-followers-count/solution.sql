# Write your MySQL query statement below
select distinct user_id, 
(select count(1) from Followers f2 where f2.user_id = f1.user_id) as followers_count
from Followers f1
order by user_id

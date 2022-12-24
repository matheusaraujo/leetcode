# Write your MySQL query statement below
select t1.id,
    if (t1.p_id is null, 'Root', 
        if((select count(1) from Tree t2 where t2.p_id = t1.id) = 0, 'Leaf', 'Inner') 
    ) as type
from Tree t1

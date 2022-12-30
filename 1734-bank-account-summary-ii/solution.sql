# Write your MySQL query statement below
select u.name, sum(t.amount) as balance
from users u, transactions t
where u.account = t.account
group by u.name
having balance > 10000

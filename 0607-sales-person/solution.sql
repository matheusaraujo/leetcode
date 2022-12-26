# Write your MySQL query statement below
select sp.name
from SalesPerson sp
where sp.sales_id not in (
  select distinct o2.sales_id from Orders o2, Company c2
  where o2.com_id = c2.com_id and c2.name = 'RED'
)

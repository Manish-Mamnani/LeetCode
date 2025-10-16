# Write your MySQL query statement below
select s.name 
from SalesPerson as s
where s.name not in(
    select s.name 
    from SalesPerson as s
    join Orders as o    
    on o.sales_id = s.sales_id
    join company as c
    on o.com_id = c.com_id
    where c.name = "RED");
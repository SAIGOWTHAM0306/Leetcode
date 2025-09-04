# Write your MySQL query statement below
select p.product_name,sum(o.unit) as unit from
products p left join orders o on
p.product_id=o.product_id
where o.order_date >= '2020-02-01' AND o.order_date < '2020-03-01'
group by o.product_id
having sum(o.unit)>=100;

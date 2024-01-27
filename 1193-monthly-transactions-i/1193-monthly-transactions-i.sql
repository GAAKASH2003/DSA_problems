# Write your MySQL query statement below

# SELECT LEFT(trans_date, 7) AS month, country,
# COUNT(*) AS trans_count,
# SUM(IF(state = 'approved', 1, 0)) AS approved_count, 
# SUM(amount) AS trans_total_amount,
# SUM(IF(state = 'approved', amount, 0)) AS approved_total_amount
# FROM Transactions
# GROUP BY month, country;

select left(trans_date,7) as month,country,count(*) as trans_count,sum(if(state='approved',1,0)) as approved_count,sum(amount)  as trans_total_amount,sum(if(state='approved',amount,0)) as approved_total_amount  from Transactions group by month,country;   

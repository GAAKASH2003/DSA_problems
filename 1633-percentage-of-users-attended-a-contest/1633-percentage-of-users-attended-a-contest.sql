# Write your MySQL query statement below
SELECT r.contest_id,ROUND((COUNT(DISTINCT u.user_id) * 100) / (select count(*) from Users), 2) as percentage 
FROM Register r
LEFT JOIN Users u ON r.user_id = u.user_id
GROUP BY r.contest_id order by percentage DESC,contest_id;
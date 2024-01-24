# Write your MySQL query statement below
select u1.user_id ,round(avg(if(u2.action="confirmed",1,0)),2) as confirmation_rate from Signups u1 left join Confirmations u2 on u1.user_id=u2.user_id group by  user_id;



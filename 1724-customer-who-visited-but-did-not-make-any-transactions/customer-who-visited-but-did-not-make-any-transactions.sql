# Write your MySQL query statement below

Select v.customer_id, Count(*) AS count_no_trans From Visits v Left Join Transactions t on v.visit_id=t.visit_id where t.transaction_id IS NULL group by v.customer_id;
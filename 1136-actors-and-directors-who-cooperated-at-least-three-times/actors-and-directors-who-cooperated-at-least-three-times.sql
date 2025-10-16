# Write your MySQL query statement below
select actor_id,director_id
from ActorDirector as t
group by actor_id,director_id 
having count(t.timestamp) >= 3;
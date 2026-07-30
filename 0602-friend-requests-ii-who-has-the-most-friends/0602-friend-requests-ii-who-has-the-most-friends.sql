WITH base AS (
    SELECT requester_id AS id FROM RequestAccepted
    UNION ALL
    SELECT accepter_id AS id FROM RequestAccepted
),
friends_count AS (
    SELECT id, COUNT(*) AS num
    FROM base
    GROUP BY id
)
SELECT id, num
FROM friends_count
WHERE num = (
    SELECT MAX(num) 
    FROM friends_count
);
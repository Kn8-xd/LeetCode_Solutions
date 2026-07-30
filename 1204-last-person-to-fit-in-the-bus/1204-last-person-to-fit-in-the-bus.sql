SELECT person_name
FROM (
    SELECT person_name,
           RANK() OVER (ORDER BY running_weight DESC) AS rnk
    FROM (
        SELECT person_name,
               SUM(weight) OVER (ORDER BY turn) AS running_weight
        FROM Queue
    )
    WHERE running_weight <= 1000
)
WHERE rnk = 1;
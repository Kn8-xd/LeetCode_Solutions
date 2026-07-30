SELECT c.name AS customers FROM customers c LEFT JOIN orders o ON c.id=o.customerid Where
o.id is NULL;
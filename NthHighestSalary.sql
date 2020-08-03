# Ian Hays
# 08-2-2020
# https://leetcode.com/problems/nth-highest-salary/
# We offset by N-1 since offsets are indexed starting at 0.

CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
DECLARE M INT;
SET M = N-1;
  RETURN (
      SELECT DISTINCT Salary FROM Employee ORDER BY Salary DESC LIMIT M, 1
      
  );
END

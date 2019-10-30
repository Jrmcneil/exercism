module CollatzConjecture (collatz) where

collatz :: Integer -> Maybe Integer
collatz n = steps n 0

steps :: Integer -> Integer ->  Maybe Integer
steps 1 i = Just i
steps n i
  | n <=  0 = Nothing
  | n `mod` 2 == 0 = steps (n `div` 2) (i + 1)
  | otherwise = steps (n * 3 + 1) (i + 1)


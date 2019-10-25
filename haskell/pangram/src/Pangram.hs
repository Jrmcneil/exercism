module Pangram (isPangram) where
import Data.Char (toLower)

isPangram :: String -> Bool
isPangram word = length [ x | x <- ['a' .. 'z'], x `elem` (map toLower word) ] == 26

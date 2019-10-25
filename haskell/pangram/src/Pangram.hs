module Pangram (isPangram) where
import Data.Char
import qualified Data.Set as Set

isPangram :: String -> Bool
isPangram word = Set.fromList ['a' .. 'z'] == Set.fromList [ toLower x | x <- word, isLetter x && isAscii x ]

module Main where
--
import System.IO
import System.Environment
import Text.Parsec
import Data.Either
--
pathA = "test.out"
pathB = "test.pi"
--
main :: IO ()
main = do
   args <- getArgs
   fileA <- openFile (args!!0) ReadMode
   lsA <- lines <$> hGetContents fileA
   let xs = pls lsA
   fileB <- openFile (args!!1) ReadMode
   lsB <- lines <$> hGetContents fileB
   --
   mapM (putStrLn . showDig lsB) xs
   --
   hClose fileA
   hClose fileB
--
-- ##
term =
   [ "name"
   , "nu_name"
   , "cmd"
   , "label"
   , "digit"
   , "biop"
   , "unop"
   ]
--
showDig :: [String] -> Node -> String
showDig ctx x@(N d n s e) =
   if elem n term
      then showDig' ctx x
      else
         "\ESC[1;34m\STX" ++
         -- show d ++
         take d (repeat '-') ++
         "\ESC[0m\STX" ++
         -- "/"++
         "\ESC[1;33m\STX" ++ n ++ "\ESC[0m\STX"
--
showDig' :: [String] -> Node -> String
showDig' ctx x@(N d n s e) =
   "\ESC[1;34m\STX" ++
   -- show d++
   take d (repeat '-') ++
   "\ESC[0m\STX" ++
   -- "/"++
   "\ESC[1;33m\STX" ++
   n++
   "\ESC[0m\STX" ++
   " (" ++
   "\ESC[1;32m\STX" ++
   (dig ctx s e) ++
   "\ESC[0m\STX" ++
   ")"
--
dig :: [String] -> Pos -> Pos -> String
dig ctx (P sl sx) (P el ex) =
   let aa = ctx !! sl
   in take (ex - sx) $ drop sx aa

-- ## line-based parsing
pls :: [String] -> [Node]
pls xs =
   let (ls, rs) = partitionEithers (map pl xs)
   in if ls == []
      then rs else error (show ls)
pl s = parse parseNode "" s
--
-- ## simple parsec parser
parseNode :: Parsec String st Node
parseNode = do
   d <- parseSpaces
   char '('
   n <- manyTill anyChar (char ' ')
   s <- parsePos
   string " - "
   e <- parsePos
   return $ N d n s e
--
parsePos :: Parsec String st Pos
parsePos = do
   char '['
   x <- manyTill anyChar (string ", ")
   y <- manyTill anyChar (char ']')
   return $ P (read x) (read y)
--
parseSpaces :: Parsec String st Int
parseSpaces = do
   ss <- many (char ' ')
   return (length ss)
--
data Node = N
   { depth :: Int
   , name :: String
   , p0 :: Pos
   , p1 :: Pos
   }
data Pos = P
   { l :: Int
   , x :: Int
   }
--
instance Show Node where
   show (N d n s e) =
      "["++
      "\ESC[1;34m\STX" ++
      show d++
      "\ESC[0m\STX" ++
      "/"++
      "\ESC[1;33m\STX" ++
      n++
      "\ESC[0m\STX" ++
      "/"++
      show s++ "-"++ show e  ++
      "]"
instance Show Pos where
   show (P a b) = show a ++":"++ show b
--

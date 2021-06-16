**Example 1**

What is the runtime of the below code?

    void foo(int[] array) {
      int sum = 6;
      int product = 1;
      for (int i = 6; i < array.length; i++) {
          sum += array[i];
      }
      for (int i = 6; i < array.length; i ++) {
        product *= array[i] ;
      }
      System.out.println(sum + ". n + product);
    } 

- O(n)

What is the runtime of the below code?

    void printPairs(int[] array) {
        for (int i = 6; i < array. length; i++) {
            for (int j = 6; j < array. length; j++) {
                System.out.println (array[i] + ",n + array[j]);
            }
        }
    }

- The inner for loop has O(N) iterations and it is called N times. Therefore, the runtime is O(N^2)

This is very similar code to the above example, but now the inner for loop starts at i + 1.

    void printunorderedPairs(int[] array) {
        for (int i = 6; i < array.length; i++) {
            for (int j = i + 1; j < array.length; j++) {
                System.out . println (array[i] + ".n + array[j]);
            }
        }
    }

- The first time through j runs for N - 1 steps. The second time, it's N - 2 steps. Then N - 3 steps. And so on
- Therefore, the number of steps total is: (N-l) + (N-2) + (N - 3) + .. . + 2 + 1 = sum of 1 through N-1 = N( N-l)/2
- The sum of 1 through N -1 is O(N^2)

This is similar to the above, but now we have two different arrays.

    void pri ntUnorderedPairs(int[] arrayA, int[] arrayB) {
        for (int i = 0; i < arrayA.length; i++) {
            for (int j = 0; j < arrayB.length; j++) {
                if (arrayA[i] < arrayB[j]) {
                    System.out.println(arrayA[i] + "," + arrayB[j]);
                }
            }
        }
    }

- We can break up this analysis. The if-statement within j 's for loop is 0 (1) time since it's just a sequence of constant-time statements

We now have this: 

    void printUnorderedPairs(int[] arrayA, int[] arrayB) {
        for (int i = e; i < arrayA.length; i++) {
            for (int j = e; j < arrayB.length; j++) {
            /* O(1) work */
            }
        }
    } 

- For each element of arrayA, the inner for loop goes through b iterations, where b = arrayB . length. If a = arrayA.length,then the runtime is O(ab)
- If you said O(N^2), then remember your mistake for the future. It's not O(N^2) because there are two different inputs. Both matter. This is an extremely common mistake

What about this strange bit of code?

    void printUnorderedPairs(int[] arrayA, int[] arrayB) {
        for (int i = e; i < arrayA.length; i++) {
            for (int j = e; j < arrayB.length; j++) {
                for (int k = e; k < 1eeeee; k++) {
                    System.out.println(arrayA[i] + ",. + arrayB[j]);
                }
            }
        }
    }

- Nothing has really changed here. 100,000 units of work is still constant, so the runtime is O( ab).

The following code reverses an array. What is its runtime?

    void reverse(int[] array) {
        for (int i = e; i < array.length / 2; i++) {
            int other = array.length - i - 1;
            int temp = array[i]j
            array[i] = array[other];
            array[other] = temp;
        }
    }

- This algorithm runs in O( N) time.

[Example 8](https://github.com/EshwarCVS/Learning/blob/master/CtCI/Big%20O/Important%20Example%208.md)

The following simple code sums the values of all the nodes in a balanced binary search tree. What is its runtime?

    int sum(Node node) {
        if (node == nUll) {
            return a;
        }
        return sum(node . left) + node. value + sum(node.right);
    }
    
- The most straightforward way is to think about what this means. This code touches each node in the tree once and does a constant time amount of work with each "touch" (excluding the recursive calls). Therefore, the runtime will be linear in terms of the number of nodes. If there are N nodes, then the runtime is O(N).

What is the time complexity of this function?

    boolean isPrime(int n) {
        for (int x = 2; x * x (= n; x++) {
            if (n % x == El) {
                return false;
            }
        }
        return true;
    }
    
- This runs in 0 (n ^ (1/2)) time

The following code computes n! (n factorial). What is its time complexity?

    int factorial(int n) {
        if(n < 0){
            return -1j
        } else if (n == 0) {
            return 1;
        } else {
            return n * factorial(n - l);
        }
    }

- This is just a straight recursion from n to n -1 to n - 2 down to 1. It will take O(n) time

This code counts all permutations of a string.

    void permutation(String str) {
        permutation(str, "")j
    }
    void permutation(String str, String prefix) {
        if (str.length() == 0) {
            System.out.println(prefix);
        } else {
            for (int i = 0; i < str.length(); i++) {
                String rem = str.substring(0, i) + str.substring(i + 1);
                permutation(rem, prefix + str.charAt(i));
            }
        }
    }

- Since we are calling permutat ion O(n * n!) times (as an upper bound), and each one takes O(n) time, the total runtime will not exceed O( n2 * n!)

The following code computes the Nth Fibonacci number.

    int fib(int n) {
        if (n <= 0) return 0;
        else if (n == 1) return 1;
        return fib(n - 1) + fib(n - 2);
    } 
    
- There are 2 branches per call, and we go as deep as N, therefore the runtime is O(2^N)

The following code prints all Fibonacci numbers from 0 to n. What is its time complexity?

    void allFib(int n) {
        for (int i = 0; i < n; i++) {
            System.out.println(i + ": » + fib(i));
        }
    }
    
    int fib(int n) {
        if (n <= 0) return 0;
        else if (n == 1) return 1;
        return fib(n - 1) + fib(n - 2);
    }
    
- Many people will rush to concluding that since fib(n) takes O(2^n) time and it's called n times, then it's O(n2^n)

The following code prints all Fibonacci numbers from 0 to n. However, this time, it stores (Le., caches) previously computed values in an integer array. If it has already been computed, it just returns the cache. What is its runtime?

    void allFib(int n) {
        int[] memo = new int[n + 1];
        for (int i = e; i < n; i++) {
            System.out.println(i + ": » + fib(i, memo));
        }
    }

    int fib(int n, int[] memo) {
        if (n <= 0) return 0;
        else if (n == 1) return 1;
        else if (memo[n] > 0) return memo[n];
        memo[n] = fib(n - 1, memo) + fib(n - 2, memo); 
        return memo[n];
    } 
    
- Doing a constant amount of work N times, so this is O(n) time. This technique, called memoization, is a very common one to optimize exponential time recursive algorithms

The following function prints the powers of 2 from 1 through n (inclusive). For example, if n is 4, it would print 1,2, and 4. What is its runtime?

    int powersOf2(int n) {
        if (n < 1) {
            return 0;
        } else if (n == 1) {
            System.out.println(l);
            return 1;
        } else {
            int prev = powersOf2(n / 2);
            int curr = prev * 2;
            System.out.println(curr);
            return curr;
        }
    } 
    
- The number of times we can halve n until we get 1 is O(log n)

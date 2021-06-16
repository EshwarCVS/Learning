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



package Aone;

class automation{
    public static void main(String[] args) {
        int numGroups = 4;
        int[] arr = { 1, 3, 2, 2 }; // expected : 3

        // int numGroups = 4;
        // int[] arr = {1, 1, 1, 1}; // expected : 1

        // int numGroups = 15;
        // int[] arr = {1,1,1,1,2,1,1,2,1,1,1,1,1,2,1}; // expected : 3

        // int numGroups = 10;
        // int[] arr = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4}; // expected : 6

        // int numGroups = 13;
        // int[] arr = {1, 1, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4}; // expected : 7

        // int numGroups = 9;
        // int[] arr = {4,5,67,7,8,1,3,4,6}; // expected : 9

        // int result = packagingAutomation(numGroups, arr);
        int result = packagingAutomation(numGroups, arr);
        System.out.println("{1, 3, 2, 2}                            |" + result);
        System.out.println(
                "{1, 1, 1, 1}                            |" + packagingAutomation(4, new int[] { 1, 1, 1, 1 }));
        System.out.println("{1,1,1,1,2,1,1,2,1,1,1,1,1,2,1}         |"
                + packagingAutomation(15, new int[] { 1, 1, 1, 1, 2, 1, 1, 2, 1, 1, 1, 1, 1, 2, 1 }));
        System.out.println("{1, 2, 2, 3, 3, 3, 4, 4, 4, 4}          |"
                + packagingAutomation(10, new int[] { 1, 2, 2, 3, 3, 3, 4, 4, 4, 4 }));
        System.out.println("{1, 1, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4} |"
                + packagingAutomation(13, new int[] { 1, 1, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4 }));
        System.out.println("{4,5,67,7,8,1,3,4,6}                    |"
                + packagingAutomation(9, new int[] { 4, 5, 67, 7, 8, 1, 3, 4, 6 }));
        // System.out.println(result);
    }

    public static int packagingAutomation(int numGroups, int[] arr) {
        int result = 0;
        for (int i = 0; i < numGroups; i++) {
            result += arr[i];
        }

        while (result < numGroups * (numGroups + 1) / 2) {
            result--;
            numGroups--;
        }
        return numGroups;
    }
}
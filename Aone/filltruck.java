package Aone;
import java.util.*;

class Box implements Comparable<Box> {
    int numBoxes;
    int size;

    public Box(int num, int s) {
        numBoxes = num;
        size = s;
    }

    @Override
    public int compareTo(Box o) {
        return o.size - this.size;
    }
}

public class filltruck {
    public static int fillTheTruck(int num, int[] boxes, int unitSize, int[] unitsPerBox, long truckSize) {
        PriorityQueue<Box> maxBoxSize = new PriorityQueue<Box>();
        for (int i = 0; i < boxes.length; i++) {
            maxBoxSize.add(new Box((int) boxes[i], (int) unitsPerBox[i]));
        }
        long count = 0;
        while (truckSize > 0 && !maxBoxSize.isEmpty()) {
            Box curr = maxBoxSize.remove();
            long numBoxes = Math.min(curr.numBoxes, truckSize);
            count = count + numBoxes * curr.size;
            truckSize = truckSize - numBoxes;
        }
        return (int) count;
    }

    public static void main(String args[]) {
        Scanner scan = new Scanner(System.in);
        int num = scan.nextInt();
        int[] boxes = new int[num];
        for (int i = 0; i < num; i++) {
            boxes[i] = scan.nextInt();
        }
        int unitSize = scan.nextInt();
        int[] unitsPerBox = new int[unitSize];
        for (int i = 0; i < unitSize; i++) {
            unitsPerBox[i] = scan.nextInt();
        }
        int truckSize = scan.nextInt();
        int result = fillTheTruck( num,  boxes,  unitSize, unitsPerBox, truckSize);
        System.out.println(result);
        scan.close();
    }
}
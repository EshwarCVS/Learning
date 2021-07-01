package Aone;
import java.util.ArrayDeque;
import java.util.Deque;
import java.util.Scanner;

class disk{
public static int analyse(int numComputer, int[] hardDiskSpace, int segmentLength) {
Deque<Integer> deq = new ArrayDeque<>();
int maxMin = Integer.MIN_VALUE;
for(int i = 0; i < numComputer; i++) {
if(!deq.isEmpty() && deq.peekFirst() <= (i - segmentLength)) {
deq.pollFirst();
}
while(!deq.isEmpty() && hardDiskSpace[deq.peekLast()] > hardDiskSpace[i]) {
deq.pollLast();
}
deq.offerLast(i);
if(i >= (segmentLength - 1)) {
maxMin = Math.max(maxMin, hardDiskSpace[deq.peekFirst()]);
}
}
return maxMin;
}

public static void main(String args[]) {
    Scanner scan = new Scanner(System.in);
    int num = scan.nextInt();
    int[] scores = new int[num];
    for (int i = 0; i < num; i++) {
        scores[i] = scan.nextInt();
    }
    int segment = scan.nextInt();
    int result = analyse( num, scores, segment);
    System.out.println(result);
    scan.close();
}
}
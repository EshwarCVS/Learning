package Aone;
import java.util.Arrays;
import java.util.Scanner;

public class cutoff {
public static int cutOffRank(int cutOffRank, int num, int[] scores) {
if(cutOffRank == 0) return 0;
if(cutOffRank == num) return num;
if(cutOffRank == 0) return 0;
int[] scoreFreq = new int[101];
for(int n: scores) {
scoreFreq[n]++;
}
int[] rank = new int[num+1];
Arrays.fill(rank, -1);
int count = 1;
for(int i = scoreFreq.length-1; i >= 0; i--) {
if(scoreFreq[i] > 0) {
rank[count] = i;
count += scoreFreq[i];
}
}
int result = 0;
for(int i = 1; i <= cutOffRank; i++) {
    if(rank[i] != -1) {
result += scoreFreq[rank[i]];
}
}
return result;
}

public static void main(String args[]){
    Scanner scan = new Scanner(System.in);
    int rank = scan.nextInt();
    int num = scan.nextInt();
    int[] scores = new int[num];
    for(int i = 0; i<num; i++){
        scores[i] = scan.nextInt();
    }
    int result = cutOffRank(rank, num, scores);
    System.out.println(result);
    scan.close();
}
}
package Aone;

import java.util.*;

//If no other cities share an x or y coordinate, return null
public class nearest {
    public static String[] findNearestCities(int numOfPoints, String[] points, int[] xCoordinates, int[] yCoordinates,
            int numOfQueries, String[] queries) {

        HashMap<String, Map.Entry<String, Integer>> map = new HashMap<>();
        PriorityQueue<Map.Entry<String, Integer>> pq[] = new PriorityQueue[numOfPoints];
        HashMap<String, Integer> map1 = new HashMap<>();
        for (int i = 0; i < points.length; i++) {
            map1.put(points[i], i);
        }
        for (int i = 0; i < pq.length; i++)
            pq[i] = new PriorityQueue<>((a, b) -> a.getValue() - b.getValue() != 0 ? a.getValue() - b.getValue()
                    : a.getKey().compareTo(b.getKey()));
        for (int i = 0; i < xCoordinates.length; i++) {
            for (int j = 0; j < xCoordinates.length; j++) {
                if (i == j)
                    continue;
                if (xCoordinates[i] == xCoordinates[j]) {
                    int x = Math.abs(xCoordinates[i] - xCoordinates[j]);
                    int y = Math.abs(yCoordinates[i] - yCoordinates[j]);
                    int d = x + y;
                    HashMap<String, Integer> m = new HashMap<>();
                    m.put(points[j], d);
                    for (Map.Entry<String, Integer> e : m.entrySet())
                        pq[i].offer(e);
                }
            }
        }
        for (int i = 0; i < yCoordinates.length; i++) {
            for (int j = 0; j < yCoordinates.length; j++) {
                if (i == j)
                    continue;
                if (yCoordinates[i] == yCoordinates[j]) {
                    int x = Math.abs(xCoordinates[i] - xCoordinates[j]);
                    int y = Math.abs(yCoordinates[i] - yCoordinates[j]);
                    int d = x + y;
                    HashMap<String, Integer> m = new HashMap<>();
                    m.put(points[j], d);
                    for (Map.Entry<String, Integer> e : m.entrySet())
                        pq[i].offer(e);
                }
            }
        }
        String res[] = new String[numOfQueries];
        for (int i = 0; i < queries.length; i++) {
            int idx = map1.get(queries[i]);
            if (!pq[idx].isEmpty()) {
                Map.Entry<String, Integer> e = pq[idx].peek();
                res[i] = e.getKey();
            } else
                res[i] = null;
        }
        return res;
    }
    
    public static void main(String args[]) {
        int numOfCities = 6;
        String[] cities = {"green","yellow","red","blue","grey","pink"};
        int[] xCoordinates = {10,20,15,30,10,15} ;
        int[] yCoordinates = {30,25,30,40,25,25};
        int numOfQueries = 4;
        String[] queries = {"grey","blue","red","pink"};
        String res[] = findNearestCities(numOfCities,cities,xCoordinates,yCoordinates,numOfQueries,queries);
        for(String s : res)
            System.out.print(s + " ");
    }
}
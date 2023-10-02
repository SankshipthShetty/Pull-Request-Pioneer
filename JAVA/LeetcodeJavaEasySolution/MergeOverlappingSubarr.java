package LEasy;


import java.util.ArrayList;
import java.util.Arrays;
import java.util.Comparator;
import java.util.List;

public class MergeOverlappingSubarr {


    public static void main(String[] args) {
        int[][] arr = {{1, 3}, {8, 10}, {2, 6}, {15, 18}};
//        List<List<Integer>> ans = mergeOverlappingIntervals(arr);

        System.out.print("The merged intervals are: \n");



        Arrays.sort(arr, new Comparator<int[]>() {
            @Override
            public int compare(int[] o1, int[] o2) {
                return o1[0]-o2[0];
            }
        });

//        printarr(arr);


        for (int i = 0; i < arr.length; i++) {

            int start=arr[i][0];
            int end=arr[i][1];

            for (int j = i+1; j < arr.length; j++) {

                if (arr[j][0]<=end){

                    end=Math.max(end,arr[j][1]);



                }else{
                    break;
                }

            }

        }

        printarr(arr);


//        for (List<Integer> it : ans) {
//            System.out.print("[" + it.get(0) + ", " + it.get(1) + "] ");
//        }
//        System.out.println();

    }

    public static void printarr(int[][] arr){
        for (int i = 0; i < arr.length; i++) {

            for (int j = 0; j < arr[0].length; j++) {

                System.out.print(arr[i][j]+" ");

            }
            System.out.println();
        }
    }

    private static List<List<Integer>> mergeOverlappingIntervals(int[][] arr) {
        int n=arr.length;
        Arrays.sort(arr, new Comparator<int[]>() {
            @Override
            public int compare(int[] a, int[] b) {
                return a[0]-b[0];
            }
        });

        List<List<Integer>> ans = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            int start=arr[i][0];
            int end=arr[i][1];




//            if (!ans.isEmpty() && end <= ans.get(ans.size() - 1).get(1)) {
//                continue;
//            }

            for (int j = i+1; j <n ; j++) {
                if(arr[j][0]<=end){
                    end=Math.max(end,arr[j][1]);
                }else{
                    break;
                }
            }
            ans.add(Arrays.asList(start,end));

        }
        return ans;
    }
}

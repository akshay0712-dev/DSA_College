public class MergeSort {

    static void printArr(int[] arr) {
        for (int i: arr) {
            System.out.print(i + " ");
        }
        System.out.println(" ");
    }

    static void mergeSort(int[] arr, int l, int r) {
        if (l < r) {
            int mid = l + (r - l) / 2;

            mergeSort(arr, l, mid);
            mergeSort(arr, mid + 1, r);

            merge(arr, l, mid, r);
        }
    }

    static void merge(int[] arr, int l, int mid, int r) {
        int[] tempArr = new int[r - l + 1];
        int k = 0;
        int i = l;
        int j = mid + 1;

        while (i <= mid  && j <= r ) {
            tempArr[k++] = (arr[i] <= arr[j]) ? arr[i++] : arr[j++];
            // if (arr[i] <= arr[j]) {
            //     tempArr[k++] = arr[i++];
            // }else if (arr[i] > arr[j]) {
            //     tempArr[k++] = arr[j++];
            // }
        }
        while (i <= mid){
            tempArr[k++] = arr[i++];
        }
        while (j <= r) {
            tempArr[k++] = arr[j++];
        }

        for (int m = 0; m < tempArr.length; m++) {
            arr[l + m] = tempArr[m];
        }
    }



    public static void main(String[] args) {
        int[] arr = {8, 5, 9, 1, 6, 7};
        System.out.println("Before Sorting...");
        printArr(arr);
        System.out.println("After Sorting...");
        mergeSort(arr, 0, (arr.length - 1));
        printArr(arr);

    }
    
}

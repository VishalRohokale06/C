class Solution {
    public int[] relativeSortArray(int[] arr1, int[] arr2) {
        int arr[] = new int[arr1.length];
        int freq[] = new int[1001];
        int k=0;

        for(int num:arr1){
            freq[num]++;
        }

        for(int num:arr2){
            while(freq[num]>0){
                arr[k++]=num;
                freq[num]--;
            }
        }

        for(int i=0;i<freq.length;i++){
            while(freq[i]>0){
                arr[k++]=i;
                freq[i]--;
            }
        }
        return arr;
    }
}

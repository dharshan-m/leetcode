int maxSubArray(int* n, int a){
    int b = 0;
    int maxsum = n[0];
    for(int i=0;i<n;i++){
        b += n[i];
        if(b > maxsum)  maxsum = b;
        if(b < 0) b = 0;
    }
    return maxsum;
}

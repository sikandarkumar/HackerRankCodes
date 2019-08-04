// Complete the birthdayCakeCandles function below.
int birthdayCakeCandles(vector<int> ar) {
    std::sort(ar.begin(),ar.end(),std::greater<int>());
    int big = ar[0];
    int mycount = std::count (ar.begin(),ar.end(), big);

    return mycount;
}

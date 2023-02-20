//Take and NotTake Approach

void printSub(char input[], int n, int index, string &res){
  if(index == n){
    cout<<res<<" ";
    return;
  }
  res.push_back(input[index]); //Adding one more element
  printSub(input, n , index + 1, res);
  res.pop_back(input[index]); //Removing added element
  printSub(input, n , index + 1, res);
  
}
  

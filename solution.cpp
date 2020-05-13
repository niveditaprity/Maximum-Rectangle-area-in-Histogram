long getMaxArea(long long arr[], int n){
   stack<int> st; long area=0,max=0; int i=0;
while(i<n){ if(st.empty()||arr[i]>=arr[st.top()]){
st.push(i);
i++;
}
else{
int curr = st.top();st.pop();
area = arr[curr]*(st.empty()?i:(i-1-st.top()));
if(area>max)
max=area;
}
}
while(!st.empty()){
int curr = st.top();st.pop();
area = arr[curr]*(st.empty()?i:(i-1-st.top()));
if(area>max)
max=area;
}
return max; 
  }

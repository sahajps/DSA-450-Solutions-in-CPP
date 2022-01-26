void push(stack<int>& s, int a){
	s.push(a);
}

bool isFull(stack<int>& s,int n){
	return n==s.size();
}

bool isEmpty(stack<int>& s){
	return s.empty();
}

int pop(stack<int>& s){
	int top=s.top();
	s.pop();
	
	return top;
}

int getMin(stack<int>& s){
	if(s.empty()){
	    return 1e5;
	}
	
	int x=s.top();
	s.pop();
	int mini=min(x,getMin(s));
	s.push(x);
	
	return mini;
}

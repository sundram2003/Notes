//power set using recursion

	void solve(int ind , string s , vector<string>&ans , string temp ){
	    int n = s.size();
	    if(ind == n){
	        if(temp != "")
	            ans.push_back(temp);
	        temp = "";
	        return;
	    }
	    //pick
	    temp += s[ind];
	    solve(ind+1,s,ans,temp);
	    //not pick
	    temp.pop_back();
	    solve(ind+1,s,ans,temp);
	    
	    return ;
	}
	vector<string> AllPossibleStrings(string s){
		    // Code here
		    int ind = 0;
		    vector<string>ans;
		    string temp ="";
		    solve(ind , s , ans,temp);
		    sort(ans.begin(),ans.end());
		    return ans;
	}

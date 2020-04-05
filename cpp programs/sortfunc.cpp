// https://ideone.com/HQFKLY

/*
How to use custom function to sort 
Problem :
You are given N number of strings. Now you have to print them in descending order of their length.
If length are equal then print lexographical smaller string first.

Example:
5
Mahendra
Pratiksha
Yuvi
Mahi 
Vinay

Output:
Pratiksha
Mahendra
Vinay
Mahi
Yuvi


explanition :
Pratiksha is longest word so first.
in Mahi and Yuvi Mahi is lexographically small as  M<Y

*/

#include <bits/stdc++.h>
using namespace std;



//About custom function for sort Logic:
/*
return type : bool ( always )
input arguments: 2 entity of same datatype (comapring two items)
result:

true : if first item we have to put first place in resulted ouput
false: if second item we have to put first place in resulted output

More explanition is in function

*/

bool stringComp(string S1,string S2){
	if(S1.length()==S2.length()){
		// Case : S1="Yuvi", S2="Mahi" result will be lexographically small first i.e. Mahi
		return S1<=S2;
		//This compare character by charcter with there ascii value 
		//( so 'M'<'a' ascii value of captial is less than small letter)
		
	}
	else{
		//Case S1= "Mahendra" len=8 S2="Pratiksha" len=9
		return S1.length()>=S2.length();
		//This says if length of S1 is greater than true
		//Means here in this case it will be false
		//so refer above logic on false second item will come first i.e "Pratiksha"
		
	}
	/*
	Here else staement is not needed b'coz if code flow went into if part it will never come out
	So you could have directy writen
	
	return S1.length()>=S2.length();
	
	in place of
	
	else{ return S1.length()>=S2.length(); }
	
	*/
}



int main() {
	// your code goes here
	
	int N;
	cin>>N;
	vector<string> words(N);
	for(int i=0;i<N;i++){
		cin>>words[i];
	}
	//on custom sort 3rd argument will be you custom function
	sort(words.begin(),words.end(),stringComp);
	
	for(int i=0;i<N;i++){
		cout<<words[i]<<endl;
	}
	
	return 0;
}

//other way to initialise vector without mentioning size
int main1() {
	// your code goes here
	
	int N;
	cin>>N;
	vector<string> words;
	
	for(int i=0;i<N;i++){
		//in case size is not defined
		string s;
		cin>>s;
		words.push_back(s);
	}
	//on custom sort 3rd argument will be you custom function
	sort(words.begin(),words.end(),stringComp);
	
	for(int i=0;i<N;i++){
		cout<<words[i]<<endl;
	}
	
	return 0;
}
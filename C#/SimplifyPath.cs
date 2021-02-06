//Ian Hays
//02-06-2021
//https://leetcode.com/problems/simplify-path/
//SC: O(N^2) TC: O(N^2)

public class Solution {
    public string SimplifyPath(string path) {
        string[] directories = path.Trim('/').Split('/',StringSplitOptions.RemoveEmptyEntries).Where(x => x != ".").ToArray();
        Stack<string> stack = new Stack<string>();
        foreach(string directory in directories)
        {
            if(directory == "..")
            {
                if(stack.Count != 0) stack.Pop();
            } 
            else 
            {
                stack.Push(directory);
            }
        }
        return "/" +  String.Join("/", stack.Reverse());
    }
}

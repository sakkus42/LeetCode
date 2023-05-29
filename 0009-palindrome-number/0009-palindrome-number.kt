class Solution {
    fun isPalindrome(x: Int): Boolean {
        var strX = x.toString()
        if (strX == strX.reversed()) return true else return false
    }
}
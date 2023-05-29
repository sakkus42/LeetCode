class Solution {
    fun lengthOfLongestSubstring(s: String): Int {
        var res = 0
        var start = 0
        var str = ""
        var index = 0
        while (index in s.indices){
            if (str.contains(s[index]) == true){
                start = s.indexOf(s[index], start) + 1
                index = start
                if (str.length > res) res = str.length
                str = ""
                if (res > s.length - index) break
            }
            if (index != s.length){
                str += s[index]
            }
            index++
        }
        if (str.isEmpty() == false && str.length > res) res = str.length
        return res
    }
}
/*

�����������һ����λָ�����ѭ�����ƣ�ROL���������и��򵥵����񣬾������ַ���ģ�����ָ���������������һ���������ַ�����S���������ѭ������Kλ���������������磬�ַ�����S=��abcXYZdef��,Ҫ�����ѭ������3λ��Ľ��������XYZdefabc�����ǲ��Ǻܼ򵥣�OK���㶨����

*/


class Solution {
public:
    string LeftRotateString(string str, int n) {
        Reverse(str,0,n - 1);
        Reverse(str,n,str.size() - 1);
        Reverse(str,0,str.size() - 1);
        
        return str;
    }
    
    void Reverse(string& s, int begin, int end)
        {
        while(begin < end)
            {
            char tmp = s[begin];
            s[begin] = s[end];
            s[end] = tmp;
            
            begin++;
            end--;
        }
    }
};
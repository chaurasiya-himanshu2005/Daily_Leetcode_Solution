class Solution {
    public int compress(char[] chars) {
        int write = 0, count = 0;
        char cur = chars[0];

        for (int scan = 0; scan < chars.length; scan++) {
            if (cur == chars[scan]) {
                count++;
            } else {
                write = writeToChars(chars, write, cur, count);
                cur = chars[scan];
                count = 1;
            }
        }

        write = writeToChars(chars, write, cur, count);

        return write;
    }

    // input the index to start write
    // output the index the write finished + 1
    private int writeToChars(char[] chars, int write, char cur, int count) {
        chars[write++] = cur;
        if (count == 1) {
            return write;
        }
        int divisor = 1;
        while (count / divisor >= 10) {
            divisor *= 10;
        }

        while (divisor > 0) {
            int digit = count / divisor;
            chars[write++] = (char)('0' + digit);
            count %= divisor;
            divisor /= 10;
        }
        return write;
    }
}
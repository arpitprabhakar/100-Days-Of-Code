#include <stdio.h>
#include <string.h>

int main() {
    char s[100005], t[100005];
    if (scanf("%100004s %100004s", s, t) != 2) return 0;
    int cnt[26] = {0};
    for (int i = 0; s[i]; ++i) cnt[s[i]-'a']++;
    for (int i = 0; t[i]; ++i) cnt[t[i]-'a']--;
    for (int i = 0; i < 26; ++i) if (cnt[i] != 0) { printf("Not Anagram"); return 0; }
    printf("Anagram");
    return 0;
}


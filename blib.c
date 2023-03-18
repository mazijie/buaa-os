#include <blib.h>

size_t strlen(const char *s) {
	//panic("please implement");
	if(s==NULL) return 0;
	size_t i;
	for(i=0;s[i]!='\0';i++);
	return i;
}

char *strcpy(char *dst, const char *src) {
	//panic("please implement");
	size_t len = strlen(src);
	size_t i;
	for(i=0;i<len;i++) dst[i]=src[i];
	dst[i]='\0';
	return dst;
}

char *strncpy(char *dst, const char *src, size_t n) {
	char *res = dst;
	while (*src && n--) {
		*dst++ = *src++;
	}
	*dst = '\0';
	return res;
}

char *strcat(char *dst, const char *src) {
	//panic("please implement");
	size_t len1 = strlen(dst);
	size_t len2 = strlen(src);
	size_t i;
	for(i=0;i<len2;i++) dst[len1+i]=src[i];
	dst[len1+len2]='\0';
	return dst;
}

int strcmp(const char *s1, const char *s2) {
	//panic("please implement");
	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);
	size_t i;
	if(len1<len2) return -1;
	if(len1>len2) return 1;
	for(i=0;i<len1;i++)
	{
		if(s1[i]!=s2[i]) return s1[i]-s2[i];
	}
	return 0;
}

int strncmp(const char *s1, const char *s2, size_t n) {
	while (n--) {
		if (*s1 != *s2) {
			return *s1 - *s2;
		}
		if (*s1 == 0) {
			break;
		}
		s1++;
		s2++;
	}
	return 0;
}

void *memset(void *s, int c, size_t n) {
	//panic("please implement");
	char *sint = (char*)s;
	char ch =(char) c;
	for(size_t i=0;i<n;i++) sint[i]=ch;
	return s;
}

void *memcpy(void *out, const void *in, size_t n) {
	char *csrc = (char *)in;
	char *cdest = (char *)out;
	for (int i = 0; i < n; i++) {
		cdest[i] = csrc[i];
	}
	return out;
}

int memcmp(const void *s1, const void *s2, size_t n) {
	//panic("please implement");
	const char *c1=(const char*)s1;
	const char *c2=(const char*)s2;
	for(size_t i=0;i<n;i++)
	{
		if(c1[i]==0&&c2[i]==0) break;
		if(c1[i]!=c2[i]) return c1[i]-c2[i];
	}
	return 0;
}

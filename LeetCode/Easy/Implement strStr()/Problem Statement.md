<h1>28. Implement strStr()</h1>

<div><p>Implement <b>strStr()</b>.</p>

<p>Return the index of the first occurrence of needle in haystack, or <code>-1</code> if <code>needle</code> is not part of <code>haystack</code>.</p>

<p><strong>Clarification:</strong></p>

<p>What should we return when <code>needle</code> is an empty string? This is a great question to ask during an interview.</p>

<p>For the purpose of this problem, we will return 0 when <code>needle</code> is an empty string. This is consistent to C's&nbsp;<b>strstr()</b> and Java's&nbsp;
	<b>indexOf()</b>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<pre><strong>Input:</strong> haystack = "hello", needle = "ll"
<strong>Output:</strong> 2
</pre><p><strong>Example 2:</strong></p>
<pre><strong>Input:</strong> haystack = "aaaaa", needle = "bba"
<strong>Output:</strong> -1
</pre><p><strong>Example 3:</strong></p>
<pre><strong>Input:</strong> haystack = "", needle = ""
<strong>Output:</strong> 0
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= haystack.length, needle.length &lt;= 5 * 10<sup>4</sup></code></li>
	<li><code>haystack</code> and&nbsp;<code class="__web-inspector-hide-shortcut__">needle</code> consist of only lower-case English characters.</li>
</ul>
</div>

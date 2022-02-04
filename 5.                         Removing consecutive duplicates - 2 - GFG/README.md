# 5. 
                        Removing consecutive duplicates - 2
##  Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">You are given string <strong>str</strong>. You need to remove the pair of duplicates.<br>
<strong>Note:&nbsp;</strong>The pair should be of adjacent elements and after removing a pair the remaining string is joined together.&nbsp;</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>:
aaabbaaccd

<strong>Output</strong>: 
ad

<strong>Explanation</strong>: 
Remove (aa)abbaaccd =&gt;abbaaccd
Remove a(bb)aaccd =&gt; aaaccd
Remove (aa)accd =&gt; accd
Remove a(cc)d =&gt; ad
</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>: 
aaaa

<strong>Output</strong>: 
Empty String

<strong>Explanation</strong>: 
Remove (aa)aa =&gt; aa
Again removing pair of duplicates then (aa) 
will be removed and we will get 'Empty String'.</span>
</pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
This is a <strong>function </strong>problem. You only need to <strong>complete </strong>the function<strong> removePair()&nbsp;</strong>that takes a&nbsp;<strong>string </strong>as a&nbsp;<strong>parameter</strong> and <strong>returns </strong>the <strong>modified string</strong>. Return an empty string if the whole string is deleted.</span><br>
<br>
<span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(N).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(N).<br>
N = length of the string.</span><br>
<br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= |str| &lt;= 10<sup>3</sup></span></p>
 <p></p>
            </div>
# Markdown Template 

ref : https://markdown.tw/

    : https://ithelp.ithome.com.tw/articles/10203758

## 字體 (font)

- 粗體：
*your text*

- 斜體：
_your text_

- 刪除線：
~your text~
```Markdown
    - 粗體：
    *your text*
    
    - 斜體：
    _your text_
    
    - 刪除線：
    ~your text~
```



**bold**
標題字

# This is an `<h1>` tag
次標題字

## This is an `<h2>` tag
小標題字

###### This is an `<h6>` tag
 
```Markdown
    **bold**
    標題字
    
    # This is an `<h1>` tag
    次標題字
    
    ## This is an `<h2>` tag
    小標題字
    
    ###### This is an `<h6>` tag
```
 

## 列表     

* Item 1
* Item 2
  * Item 2a
  * Item 2b
```Markdown
    * Item 1
    * Item 2
      * Item 2a
      * Item 2b
```



## 清單

### 無序清單  使用星號、加號或是減號作為清單標記：

*   Red
*   Green
*   Blue

等同於：
+   Red
+   Green
+   Blue

也等同於：
-   Red
-   Green
-   Blue
```Markdown
    *   Red
    *   Green
    *   Blue
    
    等同於：
    +   Red
    +   Green
    +   Blue
    
    也等同於：
    -   Red
    -   Green
    -   Blue
```

### 有序清單   則使用數字接著一個英文句點：

1.  Bird
2.  McHale
3.  Parish

```Markdown
    1.  Bird
    2.  McHale
    3.  Parish
```

## CheckBox

- [x] This is a complete item
- [ ] This is an incomplete item
```Markdown
    - [x] This is a complete item
    - [ ] This is an incomplete item
```

## 區塊

小區塊語法：

`Format one word or one line`

```Markdown
    `Format one word or one line`
```
大區塊語法：

    code (4 spaces indent)
    
```Markdown
        code (4 spaces indent)
```
##  程式碼

高亮程式碼顯示語法 （前後三個反引號 *``` *+ 語言)

    ```js
    這邊是程式碼
    ```
```Markdown
         ```js
        這邊是程式碼
        ```
```
##  圖片
插入圖片語法

![GITHUB]( 圖片網址 "圖片名稱")

```Markdown
    ![GITHUB]( 圖片網址 "圖片名稱")
```

##  階層式區塊
階層式區塊語法：

> Quote one sentences
>>Quote two sentences
>>Quote two sentences
>>>Quote three sentences

```Markdown
    > Quote one sentences
    >>Quote two sentences
    >>Quote two sentences
    >>>Quote three sentences
```

## 行內 HTML

This is a regular paragraph.

<table>
    <tr>
        <td>Foo</td>
    </tr>
</table>

This is another regular paragraph.
```Markdown
    This is a regular paragraph.
    
    <table>
        <tr>
            <td>Foo</td>
        </tr>
    </table>
    
    This is another regular paragraph.
```
### http://images.google.com/images?num=30&q=larry+bird

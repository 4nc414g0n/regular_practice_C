// 给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串 s ，判断字符串是否有效。

// 有效字符串需满足：

// 左括号必须用相同类型的右括号闭合。
// 左括号必须以正确的顺序闭合。





//前提：有栈的尾插 尾删等功能函数
bool isValid(char* s) {
    ST st;
    StackInit(&st);
    // if(strlen(s)%2==1)
    //     return false;
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]=='(')
        {
            StackPush(&st,')');
        }
        if(s[i]=='[')
        {
            StackPush(&st,']');
        }
        if(s[i]=='{')
        {
            StackPush(&st,'}');
        }
        
        if((s[i]==')')||(s[i]==']')||(s[i]=='}'))
        {
            if(s[i]!=StackTop(&st)||StackEmpty(&st))
            {
                free(st.a);
                st.a=NULL;
                return false;
            }
            else
            {
                StackPop(&st);
            }
        }
    }
    if(!StackEmpty(&st))
    {
        free(st.a);
        st.a=NULL;
        return false;
    }
        
    free(st.a);
    st.a=NULL;
    return true;
}

for (int x: st)
    {
        if((x%k==0) || (x%l==0) || (x%m==0) || (x%n==0)){
            st.erase(x);
        }
    }
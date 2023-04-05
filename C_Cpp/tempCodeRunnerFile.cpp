    while(N--){
        cin >> s1 >> s2;
        if(!f && (s1=="ChongChong" || s2 == "ChongChong")){
            f=true;
            s.insert(s1); s.insert(s2);
            sz = 2;
            continue;
        }
        if(!f) continue;

        s.insert(s1); s.insert(s2);
        if(sz==s.size()-2){
            s.erase(s1); s.erase(s2);
        }        
    }
    cout << s.size();
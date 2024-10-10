    void Result::studentData()
    {
        cout<<"\n\tEnter Student Roll Number => ";
        cin>>rollNo;
        cout<<"\n\tEnter Student Name => ";
        cin>>studentName;  
        cout<<"\n\tEnter Student scored Percentage => ";
        cin>>percent;  
    }
    void Result::showDetails()
    {
        cout<<"\n\t"<<rollNo<<"  "<<studentName<<"  "<<percent<<"\%\n";
    }
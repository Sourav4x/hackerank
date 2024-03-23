vector<int> gradingStudents(vector<int> grades) {
    vector<int>f;
    for(int i=0;i<grades.size();i++)
    {
        if(grades[i]<38)
        {
            f.push_back(grades[i]);
        }
        else{
            if((grades[i]+2)%5==0)
            {
                f.push_back(grades[i]+2);
            }
            else if((grades[i]+1)%5==0)
            {
                f.push_back(grades[i]+1);
            }
            else if(grades[i]%5==0)
            {
                f.push_back(grades[i]);
            }
            else{
                f.push_back(grades[i]);
                
            }
        }
        }
        return f;
    }
    

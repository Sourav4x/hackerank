string catAndMouse(int x, int y, int z) {
    if(abs(z-x)>abs(z-y))
    {
        return "Cat B";
    }
    else if(abs(z-x)==abs(z-y))
    {
        return "Mouse C";
    }
    else{
        return "Cat A";
    }
return 0;

}

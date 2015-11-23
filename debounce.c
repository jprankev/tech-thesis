








bool debounce(bool run)
{
 
    static unsigned short State = 0; // Current debounce status 
    State=(State<<1) | SW5 | 0xe000; 
    if(State==0xf000)
        return TRUE; 
    return FALSE;   
 
}

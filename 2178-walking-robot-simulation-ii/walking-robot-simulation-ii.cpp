class Robot {
public:
    
    int w,h;
    int x,y;
    int dir;

    vector<string>directions={"East","North","West","South"};
    Robot(int width, int height) {
        w=width;
        h=height;
        x=0;
        y=0;
        dir=0;
    }
    
    void step(int num) {
        
        int cycle=2*(w+h-2);
        num%=cycle;

        if(num==0){
            if(x==0 && y==0){
                dir=3;
            }
            return;
        }

        while(num>0){
            int nx=x,ny=y;
            
            if(dir==0){
                nx++;
            }
            else if(dir==1){
                ny++;
            }
            else if(dir==2){
                nx--;
            }
            else{
                ny--;
            }

            if(nx<0 || nx>=w || ny<0 || ny>=h){
                dir=(dir+1)%4;
            }
            else{
                x=nx;
                y=ny;
                num--;
            }
        }
    }
    
    vector<int> getPos() {
        return {x,y};
    }
    
    string getDir() {
        return directions[dir];
    }
};

/**
 * Your Robot object will be instantiated and called as such:
 * Robot* obj = new Robot(width, height);
 * obj->step(num);
 * vector<int> param_2 = obj->getPos();
 * string param_3 = obj->getDir();
 */
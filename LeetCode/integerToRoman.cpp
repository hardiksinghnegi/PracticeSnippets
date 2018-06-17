static const auto __ = []()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	return 0;
}();

class Solution {
public:
    string intToRoman(int num) {
        int numDigit[4] = {0};
        int tmpInt = 0;
        string romDigit[4];
        string tmpRom = "";
        
        int tmpNum = num;
        int mulConst = 10;
        int arrIndex = 0;
        int placeVal = 1;
        
        while(tmpNum>0){
            numDigit[arrIndex] = (tmpNum%mulConst)*placeVal;
            tmpNum = tmpNum/mulConst;
            arrIndex++;
            placeVal *= 10;
        }
        
        if(numDigit[0] == 0){
            romDigit[0] = "";
        }
        else if(numDigit[0]==4){
            romDigit[0] = "IV";
        }
        else if(numDigit[0]==5){
            romDigit[0] = "V";
        }
         else if(numDigit[0]==9){
            romDigit[0] = "IX";
        }
        else if(numDigit[0]<4){
            tmpInt = numDigit[0];
            tmpRom = "";
            while(tmpInt>0){
                tmpRom = tmpRom+"I";
                tmpInt--;
            }
            romDigit[0] = tmpRom;
        }
        else{
            tmpInt = numDigit[0]-5;
            tmpRom = "V";
            while(tmpInt>0){
                tmpRom = tmpRom+"I";
                tmpInt--;
            }
            romDigit[0] = tmpRom;
        }    
            
        if(numDigit[1] == 0){
            romDigit[1] = "";
        }
        else if(numDigit[1]==40){
            romDigit[1] = "XL";
        }
        else if(numDigit[1]==50){
            romDigit[1] = "L";
        }
         else if(numDigit[1]==90){
            romDigit[1] = "XC";
        }
        else if(numDigit[1]==10){
            romDigit[1] = "X";
        }
        else if(numDigit[1]<40){
            tmpInt = numDigit[1];
            tmpRom = "";
            while(tmpInt>=10){
                tmpRom = tmpRom+"X";
                tmpInt-=10;
            }
            romDigit[1] = tmpRom;
        }
        else{
            tmpInt = numDigit[1]-50;
            tmpRom = "L";
            while(tmpInt>=10){
                tmpRom = tmpRom+"X";
                tmpInt-=10;
            }
            romDigit[1] = tmpRom;
        }  
        
        if(numDigit[2] == 0){
            romDigit[2] = "";
        }
        else if(numDigit[2]==400){
            romDigit[2] = "CD";
        }
        else if(numDigit[2]==500){
            romDigit[2] = "D";
        }
         else if(numDigit[2]==900){
            romDigit[2] = "CM";
        }
        else if(numDigit[2]==100){
            romDigit[2] = "C";
        }
        else if(numDigit[2]<400){
            tmpInt = numDigit[2];
            tmpRom = "";
            while(tmpInt>=100){
                tmpRom = tmpRom+"C";
                tmpInt-=100;
            }
            romDigit[2] = tmpRom;
        }
        else{
            tmpInt = numDigit[2]-500;
            tmpRom = "D";
            while(tmpInt>=100){
                tmpRom = tmpRom+"C";
                tmpInt-=100;
            }
            romDigit[2] = tmpRom;
        }
        
        if(numDigit[3] == 0){
            romDigit[3] = "";
        }
        else if(numDigit[3]==1000){
            romDigit[3] = "M";
        }
        else if(numDigit[3]==2000){
            romDigit[3] = "MM";
        }
        else{
            romDigit[3] = "MMM";
        }
            
        return romDigit[3]+romDigit[2]+romDigit[1]+romDigit[0];
    }
};

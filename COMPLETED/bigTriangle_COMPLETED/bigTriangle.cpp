#include<bits/stdc++.h>
using namespace std;

float findArea(int x1, int y1, int x2, int y2, int  x3, int y3){
    float sum = abs((x1*y2)+(x2*y3)+(x3*y1)-(y1*x2)-(y2*x3)-(y3*x1));
    return sum/2;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n; cin >> n;
    int x[n], y[n];
    float max=0;
    for (int i=0; i<n; i++){
        cin >> x[i] >> y[i];
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            for (int k=0; k<n; k++){
                float area = findArea(x[i],y[i],x[j],y[j],x[k],y[k]);
                if (area > max){
                    max = area;
                }
            }
        }
    }
    printf("%.3f", max);
}

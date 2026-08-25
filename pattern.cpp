#include<bits/stdc++.h>
using namespace std;

void print1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << "* ";
        }
        cout << endl;
    }
}
void print2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void print3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
void print4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << i << " ";
        }
        cout << endl;
    }
}
void print5(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout << "* ";
        }
        cout << endl;
    }
}
void print6(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
void print7(int n){
    for(int i=0;i<n;i++){
        for(int k=0;k<n-i-1;k++)
            cout << " ";
        for(int j=0;j<2*i+1;j++)
            cout << "*";
        for(int k=0;k<n-i-1;k++)
            cout << " ";
        cout << endl;
    }
}
void print8(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++)
            cout << " ";
        for(int j=0;j<2*n-2*i-1;j++)
            cout << "*";
        for(int j=0;j<i;j++)
            cout << " ";
        cout << endl;
    }
}
void print9(int n){
    for(int i=0;i<n;i++){
        for(int k=0;k<n-i-1;k++)
            cout << " ";
        for(int j=0;j<2*i+1;j++)
            cout << "*";
        for(int k=0;k<n-i-1;k++)
            cout << " ";
        cout << endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++)
            cout << " ";
        for(int j=0;j<2*n-2*i-1;j++)
            cout << "*";
        for(int j=0;j<i;j++)
            cout << " ";
        cout << endl;
    }
}
void print10(int n){
    for(int i=1;i<=2*n-1;i++){
        int star = i;
        if(i>n) star=2*n-i;
        for(int j=1;j<=star;j++)
            cout << "* ";
        cout << endl;
    }
}
void print11(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if((i+j)%2==0)
                cout << 1 << " ";
            else cout << 0 << " ";
        }
        cout << endl;
    }
}

void print12(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
            cout << j;
        for(int j=1;j<=2*n-2*i;j++)
            cout << " ";
        for (int j=i;j>=1;j--)
            cout << j;
        cout << endl;
    }
}
void print13(int n){
    int x=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << x << " ";
            x++;
        }
        cout << endl;
    }
}
void print14(int n){
    for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+i;ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}
void print15(int n){
    for(int i=1;i<=n;i++){
        for(char ch='A';ch<='A'+n-i;ch++)
            cout << ch << " ";
        cout << endl;
    }
}
void print16(int n){
    for(int i=0;i<n;i++){
        char ch='A'+i;
        for(int j=0;j<=i;j++){
            cout << ch << " ";
        }
        cout << endl;
    }
}
void print17(int n) {
        for(int i=0;i<n;i++){
            for(int j=1;j<n-i;j++)
                cout << " ";
            char ch='A';
            int breakpoint = (2*i+1)/2;
            for(int j=1;j<=2*i+1;j++){
                cout << ch;
                if(j <= breakpoint ) ch++;
                else ch--;
            }
            for(int j=1;j<n-i;j++)
                cout << " ";
            cout << endl;
        }
    }
void print18(int n){
    for(int i=0;i<n;i++){
        for(char j='A'+n-1-i;j<='A'+n-1;j++){
            cout << j;
        }
        cout << endl;
    }
}
void print19(int n){
    for(int i=0;i<2*n;i++){
        int k=i;
        if(i>=n) k=2*n-i-1;
        for(int j=1;j<=n-k;j++)
            cout << "* ";
        for(int j=1;j<=k*2;j++)
            cout << "  ";
        for(int j=1;j<=n-k;j++)
            cout << "* ";
        cout << endl;
    }
}
void print20(int n){
    for(int i=1;i<n*2;i++){
        int k=i;
        if(i>n) k=2*n-i;
        for(int j=1;j<=k;j++)
            cout << "*";
        for(int j=1;j<=2*n-2*k;j++)
            cout << " ";
        for(int j=1;j<=k;j++)
            cout << "*";
        cout << endl;
    }
}
void print21(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || j==0 || i==n-1 || j==n-1)
                cout << "*";
            else   cout << " ";
        }
        cout << endl;
    }
}
void print22(int n){
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int top=i;
            int left=j;
            int right=2*n-2-j;
            int down=2*n-2-i;
            cout << (n - min(min(top,down),min(left,right)));
        }
        cout << endl;
    }
}
int main(){
    int t;
    cin >> t;
    for(int i=1;i<=t;i++){
        int n;
        cin >> n;
        print22(n);
    }
    return 0;
}
int all = 0 , odd = 0 ,  even = 0 ;
    int i ;

    for ( i = A ; i <= B ; i++)
    {
        all += i ;
        if ( i % 2 == 0 )
        {
            even += i ;
        }
        else if ( i % 2 != 0)
        {
            odd += i ;
        }
    }

    cout<<all<<endl;
    cout<<even<<endl;
    cout<<odd<<endl;
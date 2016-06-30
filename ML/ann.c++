[Serializable]
struct PreInput
{
    public double Value;
    public double[] Weights;            
};

[Serializable]
struct Input
{
    public double InputSum;                
    public double Output;                
    public double Error;                
    public double[] Weights;        
};
            
[Serializable]        
struct Hidden        
{                
    public double InputSum;                    
    public double Output;                
    public double Error;                
    public double[] Weights;        
};
            
[Serializable]        
struct Output<T> where T : IComparable<T>         
{                
    public double InputSum;                
    public double output;                
    public double Error;                
    public double Target;     
    public T Value;   
};
private PreInput[] PreInputLayer;
private Input[] InputLayer;
private Hidden[] HiddenLayer;
private Output<string>[] OutputLayer;

void TrainNetwork(TrainingSet,MaxError)
{
     while(CurrentError>MaxError)
     {
          foreach(Pattern in TrainingSet)
          {
               ForwardPropagate(Pattern);//calculate output 
               BackPropagate()//fix errors, update weights
          }
     }
}

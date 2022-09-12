const clientesNormaisF = [];
const clientesNormaisA = [];
const clientesPreferenciaisF = [];
const clientesPreferenciaisA = [];

function menu(){
    while(true){
        let opcao = prompt("Bem vindo ao servico de atendimento!\n" + 
                           "1 - Cadastrar novo cliente;\n" + 
                           "2 - Exibir fila;\n" + 
                           "3 - Chamar cliente para atendimento;\n" + 
                           "4 - Exibir clientes atendidos.");
        
        switch(opcao){
            case "1": novoCliente()
            break;
            
            case "2": exibeFilas()
            break;

            case "3": chamaCliente()
            break;

            case "4": exibeAtendidos()
            break;

            default: prompt("Opcao invalida, selecione novamente!")
            break;
        }
    }
}

function novoCliente(){
    let cliente = prompt("Informe seu nome:");
    let preferencial = confirm("Necessita de atendimento preferencial?");

    if(preferencial)
        clientesPreferenciaisF.push(cliente);
    else
        clientesNormaisF.push(cliente);
}

function exibeFilas(){
    let fila = prompt("Qual fila voce deseja exibir?");

    if(fila === "Normal")
        alert(clientesNormaisF);
    else
        alert(clientesPreferenciaisF);    
}

function chamaCliente(){
    if(clientesPreferenciaisF.length !== 0){
        const cliente = clientesPreferenciaisF.shift()
        clientesPreferenciaisA.push(cliente);
        alert(cliente + " sendo chamado para atendimento com Lucas Passarinho!");
    }
    else if(clientesNormaisF.length !== 0){
        const cliente = clientesNormaisF.shift()
        clientesNormaisA.push(cliente);
        alert(cliente + " sendo chamado para atendimento com Jose Klak!");
    }
    else
        alert("Fila vazia!");
}

function exibeAtendidos(){
    alert("Um total de " + (clientesNormaisA.length + clientesPreferenciaisA.length) + " foram atendidos, seguem os nomes:" + 
          (clientesPreferenciaisA + clientesNormaisA) + ".");
}

menu();
biblioteca = []
Usuarios = []
ID_libro = 0
ID_usuario = 0
class Libro:
    def __init__(self, titulo, autor, ID_libro):
        self.Titulo = titulo
        self.Autor = autor
        self.Usuario = "Null"
        self.ID = ID_libro
    def modificar_titulo(self, nuevo_titulo):
        self.Titulo = nuevo_titulo
    
    def modificar_autor(self, nuevo_autor):
        self.Autor = nuevo_autor
    
    def modificar_usuario(self, nuevo_usuario):
        self.Usuario = nuevo_usuario
    
class Usuario:
    def __init__(self, nombre, correo, telefono, ID_usuario):
        self.Nombre = nombre
        self.Correo = correo
        self.Telefono = telefono
        self.ID = ID_usuario

def crear_libro():
    global ID_libro
    titulo = input("Ingrese el título del libro: ")
    autor = input("Ingrese el autor del libro: ")
    libro = Libro(titulo, autor, ID_libro)
    biblioteca.append(libro)
    ID_libro += 1

def modificar_libro():
    if len(biblioteca) == 0:
        print("No hay libros en la biblioteca")
        return
    mostrar_libros()
    nuevo_titulo = input("Ingrese el nuevo título del libro: ")
    nuevo_autor = input("Ingrese el nuevo autor del libro: ")


def mostrar_libros():
    for libro in biblioteca:
        print("ID: " + str(libro.ID))
        print("Título: " + libro.Titulo)
        print("Autor: " + libro.Autor)
        print("")

def mostrar_libros_prestados():
    for libro in biblioteca:
        if libro.Usuario != "Null":
            print("ID: " + str(libro.ID))
            print("Título: " + libro.Titulo)
            print("Autor: " + libro.Autor)
            print("Prestado a: " + libro.Usuario)
            print("")

def mostrar_libros_disponibles():
    libros_disponibles = False
    for libro in biblioteca:
        if libro.Usuario == "Null":
            print("ID: " + str(libro.ID))
            print("Título: " + libro.Titulo)
            print("Autor: " + libro.Autor)
            print("")
            libros_disponibles = True
    return libros_disponibles

def crear_usuario():
    global ID_usuario
    nombre = input("Ingrese el nombre del usuario: ")
    correo = input("Ingrese el correo del usuario: ")
    telefono = input("Ingrese el teléfono del usuario: ")
    usuario = Usuario(nombre, correo, telefono, ID_usuario)
    Usuarios.append(usuario)
    ID_usuario += 1

def modificar_usuario():
    if len(Usuarios) == 0:
        print("No hay usuarios en la biblioteca")
        return
    mostrar_usuarios()
    usuario = int(input("Ingrese el ID del usuario: "))
    if Usuarios[usuario].ID == usuario:
        print("El usuario " + Usuarios[usuario].Nombre + " ha sido seleccionado")
    else:
        print("El usuario no existe favor de crearlo o elegir otro usuario")
        return
    nuevo_nombre = input("Ingrese el nuevo nombre del usuario: ")
    nuevo_correo = input("Ingrese el nuevo correo del usuario: ")
    nuevo_telefono = input("Ingrese el nuevo teléfono del usuario: ")
    Usuarios[usuario].Nombre = nuevo_nombre
    Usuarios[usuario].Correo = nuevo_correo
    Usuarios[usuario].Telefono = nuevo_telefono

def mostrar_usuarios():
    for usuario in Usuarios:
        print("ID: " + str(usuario.ID))
        print("Nombre: " + usuario.Nombre)

def prestar_libro():
    if len(Usuarios) == 0 and len(biblioteca) == 0:
        print("No hay usuarios o libros en la biblioteca")
        return
    mostrar_usuarios()
    usuario = int(input("Ingrese el ID del usuario: "))
    if Usuarios[usuario].ID == usuario:
        print("El usuario " + Usuarios[usuario].Nombre + " ha sido seleccionado")
    else:
        print("El usuario no existe favor de crearlo o elegir otro usuario")
        return
    if mostrar_libros_disponibles():
        libro = int(input("Ingrese el ID del libro: "))
        if biblioteca[libro].Usuario == "Null":
            biblioteca[libro].Usuario = Usuarios[usuario].Nombre
            print("El libro " + biblioteca[libro].Titulo + " ha sido prestado a " + Usuarios[usuario].Nombre)
        else:
            print("El libro no está disponible")
    else:
        print("No hay libros disponibles")

def devolver_libro():
    mostrar_usuarios()
    usuario = int(input("Ingrese el ID del usuario: "))
    if Usuarios[usuario].ID == usuario:
        print("El usuario " + Usuarios[usuario].Nombre + " ha sido seleccionado")
    else:
        print("El usuario no existe favor de crearlo o elegir otro usuario")
        return
    for libro in biblioteca:
        if libro.Usuario == Usuarios[usuario].Nombre:
            print("ID: " + str(libro.ID))
            print("Título: " + libro.Titulo)
            print("Autor: " + libro.Autor)
            print("")
    libro = int(input("Ingrese el ID del libro: "))
    if biblioteca[libro].Usuario == Usuarios[usuario].Nombre:
        biblioteca[libro].Usuario = "Null"
        print("El libro " + biblioteca[libro].Titulo + " ha sido devuelto")
    else:
        print("El libro no está prestado a este usuario")

    
def menu():
    print("1. Crear libro")
    print("2. Modificar libro")
    print("3. Mostrar libros")
    print("4. Mostrar libros prestados")
    print("5. Mostrar libros disponibles")
    print("6. Crear usuario")
    print("7. Modificar usuario")
    print("8. Prestar libro")
    print("9. Devolver libro")
    print("10. Salir")
    opcion = int(input("Ingrese la opción: "))
    if opcion == 1:
        crear_libro()
    elif opcion == 2:
        modificar_libro()
    elif opcion == 3:
        mostrar_libros()
    elif opcion == 4:
        mostrar_libros_prestados()
    elif opcion == 5:
        mostrar_libros_disponibles()
    elif opcion == 6:
        crear_usuario()
    elif opcion == 7:
        modificar_usuario()
    elif opcion == 8:
        prestar_libro()
    elif opcion == 9:
        devolver_libro()
    elif opcion == 10:
        biblioteca_abierta = False
        return
    else:
        print("Opción no válida")
        menu()
biblioteca_abierta = True

while biblioteca_abierta:
    menu()
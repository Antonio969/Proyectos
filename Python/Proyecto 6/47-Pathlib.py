from pathlib import Path,PureWindowsPath

carpeta= Path('/home/antoniob/Documentos/programacion/Python/Temario/otro archivo.txt')

ruta_windows = PureWindowsPath(carpeta)

print(ruta_windows)

if not carpeta.exists():
    print('este archivo no existe')
else:
    print('el archivo existe')
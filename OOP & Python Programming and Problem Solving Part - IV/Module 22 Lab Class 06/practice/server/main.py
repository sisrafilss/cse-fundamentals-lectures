""" Object Processor """

import glob
import shutil
import os

source_path = "../source/*"
destination_path = "../destination"

while True:
    source_object = glob.glob(source_path)
    if len(source_object) > 0:
        object_path = source_object[0]

        object_name = object_path.split("\\")[-1].split(".")
        prefix = object_name[0]
        postfix = object_name[-1]

        for i in range(3):
            file_name = f"{prefix}_{i}.{postfix}"
            shutil.copy(object_path, f"{destination_path}/{file_name}")
            print(file_name)

        os.remove(object_path)
    
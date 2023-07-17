def main():
    media_type = {
        'gif': 'image/gif',
        'jpg': 'image/jpg',
        'jpeg': 'image/jpeg',
        'png': 'image/png',
        'pdf': 'application/pdf',
        'txt': 'text/plain',
        'zip': 'application/zip'
    }
    s = input('File name: ').lower().split('.')[1]
    if s in media_type:
        print(media_type[s])
    else:
        print("application/octet-stream")

main()
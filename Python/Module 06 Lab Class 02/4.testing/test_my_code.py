import my_code

def test_get_response():
    ret = my_code.get_response(my_code.api_url)
    assert ret.status_code == 200


## Dynamic Array (가변 배열)
- 배열을 가변적으로 동적 할당해서 저장하는 배열

### DyArray Class 
- `typedefine T`로 저장할 데이타형 정의
- `count`로 저장된 데이터 갯수 저장
- `capacity`로 배열 최대 저장 수 저장
- class에서 지원하는 `method`   
  * push_back(value) : 끝에 value 삽입
  * insert(index, value) : index 위치에 value 삽입
  * erase(index, value) : index 위치 삭제
  * begin() - 첫번째 요소를 가리킴
  * end() - 마지막 요소를 가리킴
  * size() - 요소 수(크기)를 반환
  * resize() - 크기를 재조정
  * empty() - 비어 있는지 여부 반환 (true, false)
  * at()(또는 []) - 요소에 접근
  * front() - 첫번째 요소 반환
  * back() - 마지막 요소 반환


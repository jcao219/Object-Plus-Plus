#include <napi.h>

Napi::Object CreateObject(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object obj = Napi::Object::New(env);
  obj.Set(Napi::String::New(env, "msg"), info[0].ToString());

  return obj;
}

Napi::Object Main(Napi::Env env, Napi::Object exports) {
  exports.Set(Napi::String::New(env, "createObject"), 
              Napi::Function::New(env, CreateObject, "createObject"));
  return exports;
}

NODE_API_MODULE(addon, Main)
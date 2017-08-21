// Baidu RPC - A framework to host and access services throughout Baidu.
// Copyright (c) 2014 Baidu.com, Inc. All Rights Reserved

// Author: The baidu-rpc authors (pbrpc@baidu.com)
// Date: 2014/11/06 15:15:57

#ifndef  BRPC_INDEX_SERVICE_H
#define  BRPC_INDEX_SERVICE_H

#include <ostream>
#include "brpc/builtin_service.pb.h"
#include "brpc/builtin/tabbed.h"


namespace brpc {

class IndexService : public index, public Tabbed {
public:
    void default_method(::google::protobuf::RpcController* cntl_base,
                        const ::brpc::IndexRequest* request,
                        ::brpc::IndexResponse* response,
                        ::google::protobuf::Closure* done);

    void GetTabInfo(brpc::TabInfoList*) const;
};

} // namespace brpc


#endif  //BRPC_INDEX_SERVICE_H
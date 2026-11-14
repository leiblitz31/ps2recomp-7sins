#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010B5F0
// Address: 0x10b5f0 - 0x10ba30
void sub_0010B5F0_0x10b5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B5F0_0x10b5f0");
#endif

    switch (ctx->pc) {
        case 0x10b5f0u: goto label_10b5f0;
        case 0x10b5f4u: goto label_10b5f4;
        case 0x10b5f8u: goto label_10b5f8;
        case 0x10b5fcu: goto label_10b5fc;
        case 0x10b600u: goto label_10b600;
        case 0x10b604u: goto label_10b604;
        case 0x10b608u: goto label_10b608;
        case 0x10b60cu: goto label_10b60c;
        case 0x10b610u: goto label_10b610;
        case 0x10b614u: goto label_10b614;
        case 0x10b618u: goto label_10b618;
        case 0x10b61cu: goto label_10b61c;
        case 0x10b620u: goto label_10b620;
        case 0x10b624u: goto label_10b624;
        case 0x10b628u: goto label_10b628;
        case 0x10b62cu: goto label_10b62c;
        case 0x10b630u: goto label_10b630;
        case 0x10b634u: goto label_10b634;
        case 0x10b638u: goto label_10b638;
        case 0x10b63cu: goto label_10b63c;
        case 0x10b640u: goto label_10b640;
        case 0x10b644u: goto label_10b644;
        case 0x10b648u: goto label_10b648;
        case 0x10b64cu: goto label_10b64c;
        case 0x10b650u: goto label_10b650;
        case 0x10b654u: goto label_10b654;
        case 0x10b658u: goto label_10b658;
        case 0x10b65cu: goto label_10b65c;
        case 0x10b660u: goto label_10b660;
        case 0x10b664u: goto label_10b664;
        case 0x10b668u: goto label_10b668;
        case 0x10b66cu: goto label_10b66c;
        case 0x10b670u: goto label_10b670;
        case 0x10b674u: goto label_10b674;
        case 0x10b678u: goto label_10b678;
        case 0x10b67cu: goto label_10b67c;
        case 0x10b680u: goto label_10b680;
        case 0x10b684u: goto label_10b684;
        case 0x10b688u: goto label_10b688;
        case 0x10b68cu: goto label_10b68c;
        case 0x10b690u: goto label_10b690;
        case 0x10b694u: goto label_10b694;
        case 0x10b698u: goto label_10b698;
        case 0x10b69cu: goto label_10b69c;
        case 0x10b6a0u: goto label_10b6a0;
        case 0x10b6a4u: goto label_10b6a4;
        case 0x10b6a8u: goto label_10b6a8;
        case 0x10b6acu: goto label_10b6ac;
        case 0x10b6b0u: goto label_10b6b0;
        case 0x10b6b4u: goto label_10b6b4;
        case 0x10b6b8u: goto label_10b6b8;
        case 0x10b6bcu: goto label_10b6bc;
        case 0x10b6c0u: goto label_10b6c0;
        case 0x10b6c4u: goto label_10b6c4;
        case 0x10b6c8u: goto label_10b6c8;
        case 0x10b6ccu: goto label_10b6cc;
        case 0x10b6d0u: goto label_10b6d0;
        case 0x10b6d4u: goto label_10b6d4;
        case 0x10b6d8u: goto label_10b6d8;
        case 0x10b6dcu: goto label_10b6dc;
        case 0x10b6e0u: goto label_10b6e0;
        case 0x10b6e4u: goto label_10b6e4;
        case 0x10b6e8u: goto label_10b6e8;
        case 0x10b6ecu: goto label_10b6ec;
        case 0x10b6f0u: goto label_10b6f0;
        case 0x10b6f4u: goto label_10b6f4;
        case 0x10b6f8u: goto label_10b6f8;
        case 0x10b6fcu: goto label_10b6fc;
        case 0x10b700u: goto label_10b700;
        case 0x10b704u: goto label_10b704;
        case 0x10b708u: goto label_10b708;
        case 0x10b70cu: goto label_10b70c;
        case 0x10b710u: goto label_10b710;
        case 0x10b714u: goto label_10b714;
        case 0x10b718u: goto label_10b718;
        case 0x10b71cu: goto label_10b71c;
        case 0x10b720u: goto label_10b720;
        case 0x10b724u: goto label_10b724;
        case 0x10b728u: goto label_10b728;
        case 0x10b72cu: goto label_10b72c;
        case 0x10b730u: goto label_10b730;
        case 0x10b734u: goto label_10b734;
        case 0x10b738u: goto label_10b738;
        case 0x10b73cu: goto label_10b73c;
        case 0x10b740u: goto label_10b740;
        case 0x10b744u: goto label_10b744;
        case 0x10b748u: goto label_10b748;
        case 0x10b74cu: goto label_10b74c;
        case 0x10b750u: goto label_10b750;
        case 0x10b754u: goto label_10b754;
        case 0x10b758u: goto label_10b758;
        case 0x10b75cu: goto label_10b75c;
        case 0x10b760u: goto label_10b760;
        case 0x10b764u: goto label_10b764;
        case 0x10b768u: goto label_10b768;
        case 0x10b76cu: goto label_10b76c;
        case 0x10b770u: goto label_10b770;
        case 0x10b774u: goto label_10b774;
        case 0x10b778u: goto label_10b778;
        case 0x10b77cu: goto label_10b77c;
        case 0x10b780u: goto label_10b780;
        case 0x10b784u: goto label_10b784;
        case 0x10b788u: goto label_10b788;
        case 0x10b78cu: goto label_10b78c;
        case 0x10b790u: goto label_10b790;
        case 0x10b794u: goto label_10b794;
        case 0x10b798u: goto label_10b798;
        case 0x10b79cu: goto label_10b79c;
        case 0x10b7a0u: goto label_10b7a0;
        case 0x10b7a4u: goto label_10b7a4;
        case 0x10b7a8u: goto label_10b7a8;
        case 0x10b7acu: goto label_10b7ac;
        case 0x10b7b0u: goto label_10b7b0;
        case 0x10b7b4u: goto label_10b7b4;
        case 0x10b7b8u: goto label_10b7b8;
        case 0x10b7bcu: goto label_10b7bc;
        case 0x10b7c0u: goto label_10b7c0;
        case 0x10b7c4u: goto label_10b7c4;
        case 0x10b7c8u: goto label_10b7c8;
        case 0x10b7ccu: goto label_10b7cc;
        case 0x10b7d0u: goto label_10b7d0;
        case 0x10b7d4u: goto label_10b7d4;
        case 0x10b7d8u: goto label_10b7d8;
        case 0x10b7dcu: goto label_10b7dc;
        case 0x10b7e0u: goto label_10b7e0;
        case 0x10b7e4u: goto label_10b7e4;
        case 0x10b7e8u: goto label_10b7e8;
        case 0x10b7ecu: goto label_10b7ec;
        case 0x10b7f0u: goto label_10b7f0;
        case 0x10b7f4u: goto label_10b7f4;
        case 0x10b7f8u: goto label_10b7f8;
        case 0x10b7fcu: goto label_10b7fc;
        case 0x10b800u: goto label_10b800;
        case 0x10b804u: goto label_10b804;
        case 0x10b808u: goto label_10b808;
        case 0x10b80cu: goto label_10b80c;
        case 0x10b810u: goto label_10b810;
        case 0x10b814u: goto label_10b814;
        case 0x10b818u: goto label_10b818;
        case 0x10b81cu: goto label_10b81c;
        case 0x10b820u: goto label_10b820;
        case 0x10b824u: goto label_10b824;
        case 0x10b828u: goto label_10b828;
        case 0x10b82cu: goto label_10b82c;
        case 0x10b830u: goto label_10b830;
        case 0x10b834u: goto label_10b834;
        case 0x10b838u: goto label_10b838;
        case 0x10b83cu: goto label_10b83c;
        case 0x10b840u: goto label_10b840;
        case 0x10b844u: goto label_10b844;
        case 0x10b848u: goto label_10b848;
        case 0x10b84cu: goto label_10b84c;
        case 0x10b850u: goto label_10b850;
        case 0x10b854u: goto label_10b854;
        case 0x10b858u: goto label_10b858;
        case 0x10b85cu: goto label_10b85c;
        case 0x10b860u: goto label_10b860;
        case 0x10b864u: goto label_10b864;
        case 0x10b868u: goto label_10b868;
        case 0x10b86cu: goto label_10b86c;
        case 0x10b870u: goto label_10b870;
        case 0x10b874u: goto label_10b874;
        case 0x10b878u: goto label_10b878;
        case 0x10b87cu: goto label_10b87c;
        case 0x10b880u: goto label_10b880;
        case 0x10b884u: goto label_10b884;
        case 0x10b888u: goto label_10b888;
        case 0x10b88cu: goto label_10b88c;
        case 0x10b890u: goto label_10b890;
        case 0x10b894u: goto label_10b894;
        case 0x10b898u: goto label_10b898;
        case 0x10b89cu: goto label_10b89c;
        case 0x10b8a0u: goto label_10b8a0;
        case 0x10b8a4u: goto label_10b8a4;
        case 0x10b8a8u: goto label_10b8a8;
        case 0x10b8acu: goto label_10b8ac;
        case 0x10b8b0u: goto label_10b8b0;
        case 0x10b8b4u: goto label_10b8b4;
        case 0x10b8b8u: goto label_10b8b8;
        case 0x10b8bcu: goto label_10b8bc;
        case 0x10b8c0u: goto label_10b8c0;
        case 0x10b8c4u: goto label_10b8c4;
        case 0x10b8c8u: goto label_10b8c8;
        case 0x10b8ccu: goto label_10b8cc;
        case 0x10b8d0u: goto label_10b8d0;
        case 0x10b8d4u: goto label_10b8d4;
        case 0x10b8d8u: goto label_10b8d8;
        case 0x10b8dcu: goto label_10b8dc;
        case 0x10b8e0u: goto label_10b8e0;
        case 0x10b8e4u: goto label_10b8e4;
        case 0x10b8e8u: goto label_10b8e8;
        case 0x10b8ecu: goto label_10b8ec;
        case 0x10b8f0u: goto label_10b8f0;
        case 0x10b8f4u: goto label_10b8f4;
        case 0x10b8f8u: goto label_10b8f8;
        case 0x10b8fcu: goto label_10b8fc;
        case 0x10b900u: goto label_10b900;
        case 0x10b904u: goto label_10b904;
        case 0x10b908u: goto label_10b908;
        case 0x10b90cu: goto label_10b90c;
        case 0x10b910u: goto label_10b910;
        case 0x10b914u: goto label_10b914;
        case 0x10b918u: goto label_10b918;
        case 0x10b91cu: goto label_10b91c;
        case 0x10b920u: goto label_10b920;
        case 0x10b924u: goto label_10b924;
        case 0x10b928u: goto label_10b928;
        case 0x10b92cu: goto label_10b92c;
        case 0x10b930u: goto label_10b930;
        case 0x10b934u: goto label_10b934;
        case 0x10b938u: goto label_10b938;
        case 0x10b93cu: goto label_10b93c;
        case 0x10b940u: goto label_10b940;
        case 0x10b944u: goto label_10b944;
        case 0x10b948u: goto label_10b948;
        case 0x10b94cu: goto label_10b94c;
        case 0x10b950u: goto label_10b950;
        case 0x10b954u: goto label_10b954;
        case 0x10b958u: goto label_10b958;
        case 0x10b95cu: goto label_10b95c;
        case 0x10b960u: goto label_10b960;
        case 0x10b964u: goto label_10b964;
        case 0x10b968u: goto label_10b968;
        case 0x10b96cu: goto label_10b96c;
        case 0x10b970u: goto label_10b970;
        case 0x10b974u: goto label_10b974;
        case 0x10b978u: goto label_10b978;
        case 0x10b97cu: goto label_10b97c;
        case 0x10b980u: goto label_10b980;
        case 0x10b984u: goto label_10b984;
        case 0x10b988u: goto label_10b988;
        case 0x10b98cu: goto label_10b98c;
        case 0x10b990u: goto label_10b990;
        case 0x10b994u: goto label_10b994;
        case 0x10b998u: goto label_10b998;
        case 0x10b99cu: goto label_10b99c;
        case 0x10b9a0u: goto label_10b9a0;
        case 0x10b9a4u: goto label_10b9a4;
        case 0x10b9a8u: goto label_10b9a8;
        case 0x10b9acu: goto label_10b9ac;
        case 0x10b9b0u: goto label_10b9b0;
        case 0x10b9b4u: goto label_10b9b4;
        case 0x10b9b8u: goto label_10b9b8;
        case 0x10b9bcu: goto label_10b9bc;
        case 0x10b9c0u: goto label_10b9c0;
        case 0x10b9c4u: goto label_10b9c4;
        case 0x10b9c8u: goto label_10b9c8;
        case 0x10b9ccu: goto label_10b9cc;
        case 0x10b9d0u: goto label_10b9d0;
        case 0x10b9d4u: goto label_10b9d4;
        case 0x10b9d8u: goto label_10b9d8;
        case 0x10b9dcu: goto label_10b9dc;
        case 0x10b9e0u: goto label_10b9e0;
        case 0x10b9e4u: goto label_10b9e4;
        case 0x10b9e8u: goto label_10b9e8;
        case 0x10b9ecu: goto label_10b9ec;
        case 0x10b9f0u: goto label_10b9f0;
        case 0x10b9f4u: goto label_10b9f4;
        case 0x10b9f8u: goto label_10b9f8;
        case 0x10b9fcu: goto label_10b9fc;
        case 0x10ba00u: goto label_10ba00;
        case 0x10ba04u: goto label_10ba04;
        case 0x10ba08u: goto label_10ba08;
        case 0x10ba0cu: goto label_10ba0c;
        case 0x10ba10u: goto label_10ba10;
        case 0x10ba14u: goto label_10ba14;
        case 0x10ba18u: goto label_10ba18;
        case 0x10ba1cu: goto label_10ba1c;
        case 0x10ba20u: goto label_10ba20;
        case 0x10ba24u: goto label_10ba24;
        case 0x10ba28u: goto label_10ba28;
        case 0x10ba2cu: goto label_10ba2c;
        default: break;
    }

    ctx->pc = 0x10b5f0u;

label_10b5f0:
    // 0x10b5f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10b5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_10b5f4:
    // 0x10b5f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10b5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10b5f8:
    // 0x10b5f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10b5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_10b5fc:
    // 0x10b5fc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10b5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_10b600:
    // 0x10b600: 0xc08ccfc  jal         func_2333F0
label_10b604:
    if (ctx->pc == 0x10B604u) {
        ctx->pc = 0x10B608u;
        goto label_10b608;
    }
    ctx->pc = 0x10B600u;
    SET_GPR_U32(ctx, 31, 0x10B608u);
    ctx->pc = 0x2333F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2333F0u, 0x10B600u, 0x10B608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B608u;
label_10b608:
    // 0x10b608: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x10b608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_10b60c:
    // 0x10b60c: 0x246332e0  addiu       $v1, $v1, 0x32E0
    ctx->pc = 0x10b60cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13024));
label_10b610:
    // 0x10b610: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10b610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_10b614:
    // 0x10b614: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10b614u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_10b618:
    // 0x10b618: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10b618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_10b61c:
    // 0x10b61c: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x10b61cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_10b620:
    // 0x10b620: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10b620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_10b624:
    // 0x10b624: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x10b624u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_10b628:
    // 0x10b628: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10b628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_10b62c:
    // 0x10b62c: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x10b62cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_10b630:
    // 0x10b630: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10b630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_10b634:
    // 0x10b634: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x10b634u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_10b638:
    // 0x10b638: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10b638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_10b63c:
    // 0x10b63c: 0xaf82bb8c  sw          $v0, -0x4474($gp)
    ctx->pc = 0x10b63cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949772), GPR_U32(ctx, 2));
label_10b640:
    // 0x10b640: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10b640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_10b644:
    // 0x10b644: 0xaf82b9ac  sw          $v0, -0x4654($gp)
    ctx->pc = 0x10b644u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949292), GPR_U32(ctx, 2));
label_10b648:
    // 0x10b648: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10b648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_10b64c:
    // 0x10b64c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10b64cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10b650:
    // 0x10b650: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x10b650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_10b654:
    // 0x10b654: 0x3e00008  jr          $ra
label_10b658:
    if (ctx->pc == 0x10B658u) {
        ctx->pc = 0x10B65Cu;
        goto label_10b65c;
    }
    ctx->pc = 0x10B654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B65Cu;
label_10b65c:
    // 0x10b65c: 0x0  nop
    ctx->pc = 0x10b65cu;
    // NOP
label_10b660:
    // 0x10b660: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10b660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_10b664:
    // 0x10b664: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10b664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10b668:
    // 0x10b668: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10b668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_10b66c:
    // 0x10b66c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x10b66cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_10b670:
    // 0x10b670: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10b670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_10b674:
    // 0x10b674: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_10b678:
    if (ctx->pc == 0x10B678u) {
        ctx->pc = 0x10B67Cu;
        goto label_10b67c;
    }
    ctx->pc = 0x10B674u;
    {
        const bool branch_taken_0x10b674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b674) {
            ctx->pc = 0x10B6C4u;
            goto label_10b6c4;
        }
    }
    ctx->pc = 0x10B67Cu;
label_10b67c:
    // 0x10b67c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x10b67cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_10b680:
    // 0x10b680: 0x246332e0  addiu       $v1, $v1, 0x32E0
    ctx->pc = 0x10b680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13024));
label_10b684:
    // 0x10b684: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10b684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_10b688:
    // 0x10b688: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10b688u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_10b68c:
    // 0x10b68c: 0xaf80bb8c  sw          $zero, -0x4474($gp)
    ctx->pc = 0x10b68cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949772), GPR_U32(ctx, 0));
label_10b690:
    // 0x10b690: 0xaf80b9ac  sw          $zero, -0x4654($gp)
    ctx->pc = 0x10b690u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949292), GPR_U32(ctx, 0));
label_10b694:
    // 0x10b694: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10b694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_10b698:
    // 0x10b698: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10b698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10b69c:
    // 0x10b69c: 0xc08cd0c  jal         func_233430
label_10b6a0:
    if (ctx->pc == 0x10B6A0u) {
        ctx->pc = 0x10B6A4u;
        goto label_10b6a4;
    }
    ctx->pc = 0x10B69Cu;
    SET_GPR_U32(ctx, 31, 0x10B6A4u);
    ctx->pc = 0x233430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233430u, 0x10B69Cu, 0x10B6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B6A4u;
label_10b6a4:
    // 0x10b6a4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x10b6a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_10b6a8:
    // 0x10b6a8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x10b6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_10b6ac:
    // 0x10b6ac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x10b6acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_10b6b0:
    // 0x10b6b0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_10b6b4:
    if (ctx->pc == 0x10B6B4u) {
        ctx->pc = 0x10B6B8u;
        goto label_10b6b8;
    }
    ctx->pc = 0x10B6B0u;
    {
        const bool branch_taken_0x10b6b0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x10b6b0) {
            ctx->pc = 0x10B6C4u;
            goto label_10b6c4;
        }
    }
    ctx->pc = 0x10B6B8u;
label_10b6b8:
    // 0x10b6b8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10b6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_10b6bc:
    // 0x10b6bc: 0xc0ba070  jal         func_2E81C0
label_10b6c0:
    if (ctx->pc == 0x10B6C0u) {
        ctx->pc = 0x10B6C4u;
        goto label_10b6c4;
    }
    ctx->pc = 0x10B6BCu;
    SET_GPR_U32(ctx, 31, 0x10B6C4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x10B6BCu, 0x10B6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B6C4u;
label_10b6c4:
    // 0x10b6c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10b6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_10b6c8:
    // 0x10b6c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10b6c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10b6cc:
    // 0x10b6cc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x10b6ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_10b6d0:
    // 0x10b6d0: 0x3e00008  jr          $ra
label_10b6d4:
    if (ctx->pc == 0x10B6D4u) {
        ctx->pc = 0x10B6D8u;
        goto label_10b6d8;
    }
    ctx->pc = 0x10B6D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B6D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B6D8u;
label_10b6d8:
    // 0x10b6d8: 0x0  nop
    ctx->pc = 0x10b6d8u;
    // NOP
label_10b6dc:
    // 0x10b6dc: 0x0  nop
    ctx->pc = 0x10b6dcu;
    // NOP
label_10b6e0:
    // 0x10b6e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x10b6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_10b6e4:
    // 0x10b6e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x10b6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_10b6e8:
    // 0x10b6e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x10b6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_10b6ec:
    // 0x10b6ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x10b6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_10b6f0:
    // 0x10b6f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10b6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_10b6f4:
    // 0x10b6f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10b6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_10b6f8:
    // 0x10b6f8: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x10b6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
label_10b6fc:
    // 0x10b6fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10b6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10b700:
    // 0x10b700: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x10b700u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_10b704:
    // 0x10b704: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x10b704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_10b708:
    // 0x10b708: 0xc119b68  jal         func_466DA0
label_10b70c:
    if (ctx->pc == 0x10B70Cu) {
        ctx->pc = 0x10B710u;
        goto label_10b710;
    }
    ctx->pc = 0x10B708u;
    SET_GPR_U32(ctx, 31, 0x10B710u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x10B708u, 0x10B710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B710u;
label_10b710:
    // 0x10b710: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x10b710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_10b714:
    // 0x10b714: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10b714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10b718:
    // 0x10b718: 0xc0400e0  jal         func_100380
label_10b71c:
    if (ctx->pc == 0x10B71Cu) {
        ctx->pc = 0x10B720u;
        goto label_10b720;
    }
    ctx->pc = 0x10B718u;
    SET_GPR_U32(ctx, 31, 0x10B720u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x10B718u, 0x10B720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B720u;
label_10b720:
    // 0x10b720: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x10b720u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10b724:
    // 0x10b724: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
label_10b728:
    if (ctx->pc == 0x10B728u) {
        ctx->pc = 0x10B72Cu;
        goto label_10b72c;
    }
    ctx->pc = 0x10B724u;
    {
        const bool branch_taken_0x10b724 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b724) {
            ctx->pc = 0x10B73Cu;
            goto label_10b73c;
        }
    }
    ctx->pc = 0x10B72Cu;
label_10b72c:
    // 0x10b72c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10b72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10b730:
    // 0x10b730: 0xc043788  jal         func_10DE20
label_10b734:
    if (ctx->pc == 0x10B734u) {
        ctx->pc = 0x10B738u;
        goto label_10b738;
    }
    ctx->pc = 0x10B730u;
    SET_GPR_U32(ctx, 31, 0x10B738u);
    ctx->pc = 0x10DE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DE20u, 0x10B730u, 0x10B738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B738u;
label_10b738:
    // 0x10b738: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x10b738u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10b73c:
    // 0x10b73c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x10b73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_10b740:
    // 0x10b740: 0xac530028  sw          $s3, 0x28($v0)
    ctx->pc = 0x10b740u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 19));
label_10b744:
    // 0x10b744: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x10b744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_10b748:
    // 0x10b748: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x10b748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_10b74c:
    // 0x10b74c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10b74cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10b750:
    // 0x10b750: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x10b750u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_10b754:
    // 0x10b754: 0x320f809  jalr        $t9
label_10b758:
    if (ctx->pc == 0x10B758u) {
        ctx->pc = 0x10B75Cu;
        goto label_10b75c;
    }
    ctx->pc = 0x10B754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10B75Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B754u, 0x10B75Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10B75Cu;
label_10b75c:
    // 0x10b75c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x10b75cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_10b760:
    // 0x10b760: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x10b760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_10b764:
    // 0x10b764: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10b764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_10b768:
    // 0x10b768: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x10b768u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_10b76c:
    // 0x10b76c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10b76cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_10b770:
    // 0x10b770: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10b770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_10b774:
    // 0x10b774: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x10b774u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_10b778:
    // 0x10b778: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x10b778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_10b77c:
    // 0x10b77c: 0xc119b68  jal         func_466DA0
label_10b780:
    if (ctx->pc == 0x10B780u) {
        ctx->pc = 0x10B784u;
        goto label_10b784;
    }
    ctx->pc = 0x10B77Cu;
    SET_GPR_U32(ctx, 31, 0x10B784u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x10B77Cu, 0x10B784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B784u;
label_10b784:
    // 0x10b784: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x10b784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_10b788:
    // 0x10b788: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10b788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10b78c:
    // 0x10b78c: 0xc0400e0  jal         func_100380
label_10b790:
    if (ctx->pc == 0x10B790u) {
        ctx->pc = 0x10B794u;
        goto label_10b794;
    }
    ctx->pc = 0x10B78Cu;
    SET_GPR_U32(ctx, 31, 0x10B794u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x10B78Cu, 0x10B794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B794u;
label_10b794:
    // 0x10b794: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10b794u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10b798:
    // 0x10b798: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_10b79c:
    if (ctx->pc == 0x10B79Cu) {
        ctx->pc = 0x10B7A0u;
        goto label_10b7a0;
    }
    ctx->pc = 0x10B798u;
    {
        const bool branch_taken_0x10b798 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b798) {
            ctx->pc = 0x10B7B0u;
            goto label_10b7b0;
        }
    }
    ctx->pc = 0x10B7A0u;
label_10b7a0:
    // 0x10b7a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10b7a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10b7a4:
    // 0x10b7a4: 0xc042954  jal         func_10A550
label_10b7a8:
    if (ctx->pc == 0x10B7A8u) {
        ctx->pc = 0x10B7ACu;
        goto label_10b7ac;
    }
    ctx->pc = 0x10B7A4u;
    SET_GPR_U32(ctx, 31, 0x10B7ACu);
    ctx->pc = 0x10A550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A550u, 0x10B7A4u, 0x10B7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B7ACu;
label_10b7ac:
    // 0x10b7ac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10b7acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10b7b0:
    // 0x10b7b0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x10b7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_10b7b4:
    // 0x10b7b4: 0xac52002c  sw          $s2, 0x2C($v0)
    ctx->pc = 0x10b7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 18));
label_10b7b8:
    // 0x10b7b8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x10b7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_10b7bc:
    // 0x10b7bc: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x10b7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_10b7c0:
    // 0x10b7c0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10b7c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10b7c4:
    // 0x10b7c4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x10b7c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_10b7c8:
    // 0x10b7c8: 0x320f809  jalr        $t9
label_10b7cc:
    if (ctx->pc == 0x10B7CCu) {
        ctx->pc = 0x10B7D0u;
        goto label_10b7d0;
    }
    ctx->pc = 0x10B7C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10B7D0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B7C8u, 0x10B7D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10B7D0u;
label_10b7d0:
    // 0x10b7d0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x10b7d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_10b7d4:
    // 0x10b7d4: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x10b7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_10b7d8:
    // 0x10b7d8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10b7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_10b7dc:
    // 0x10b7dc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x10b7dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_10b7e0:
    // 0x10b7e0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10b7e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_10b7e4:
    // 0x10b7e4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10b7e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_10b7e8:
    // 0x10b7e8: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x10b7e8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_10b7ec:
    // 0x10b7ec: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x10b7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_10b7f0:
    // 0x10b7f0: 0xc119b68  jal         func_466DA0
label_10b7f4:
    if (ctx->pc == 0x10B7F4u) {
        ctx->pc = 0x10B7F8u;
        goto label_10b7f8;
    }
    ctx->pc = 0x10B7F0u;
    SET_GPR_U32(ctx, 31, 0x10B7F8u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x10B7F0u, 0x10B7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B7F8u;
label_10b7f8:
    // 0x10b7f8: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x10b7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_10b7fc:
    // 0x10b7fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10b7fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10b800:
    // 0x10b800: 0xc0400e0  jal         func_100380
label_10b804:
    if (ctx->pc == 0x10B804u) {
        ctx->pc = 0x10B808u;
        goto label_10b808;
    }
    ctx->pc = 0x10B800u;
    SET_GPR_U32(ctx, 31, 0x10B808u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x10B800u, 0x10B808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B808u;
label_10b808:
    // 0x10b808: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10b808u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10b80c:
    // 0x10b80c: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_10b810:
    if (ctx->pc == 0x10B810u) {
        ctx->pc = 0x10B814u;
        goto label_10b814;
    }
    ctx->pc = 0x10B80Cu;
    {
        const bool branch_taken_0x10b80c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b80c) {
            ctx->pc = 0x10B824u;
            goto label_10b824;
        }
    }
    ctx->pc = 0x10B814u;
label_10b814:
    // 0x10b814: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10b814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10b818:
    // 0x10b818: 0xc044c1c  jal         func_113070
label_10b81c:
    if (ctx->pc == 0x10B81Cu) {
        ctx->pc = 0x10B820u;
        goto label_10b820;
    }
    ctx->pc = 0x10B818u;
    SET_GPR_U32(ctx, 31, 0x10B820u);
    ctx->pc = 0x113070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113070u, 0x10B818u, 0x10B820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B820u;
label_10b820:
    // 0x10b820: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10b820u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10b824:
    // 0x10b824: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x10b824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_10b828:
    // 0x10b828: 0xac510030  sw          $s1, 0x30($v0)
    ctx->pc = 0x10b828u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 17));
label_10b82c:
    // 0x10b82c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x10b82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_10b830:
    // 0x10b830: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x10b830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_10b834:
    // 0x10b834: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10b834u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10b838:
    // 0x10b838: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x10b838u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_10b83c:
    // 0x10b83c: 0x320f809  jalr        $t9
label_10b840:
    if (ctx->pc == 0x10B840u) {
        ctx->pc = 0x10B844u;
        goto label_10b844;
    }
    ctx->pc = 0x10B83Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10B844u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B83Cu, 0x10B844u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10B844u;
label_10b844:
    // 0x10b844: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x10b844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_10b848:
    // 0x10b848: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x10b848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_10b84c:
    // 0x10b84c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10b84cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_10b850:
    // 0x10b850: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x10b850u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_10b854:
    // 0x10b854: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10b854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_10b858:
    // 0x10b858: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10b858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_10b85c:
    // 0x10b85c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x10b85cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_10b860:
    // 0x10b860: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x10b860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_10b864:
    // 0x10b864: 0xc08ec3c  jal         func_23B0F0
label_10b868:
    if (ctx->pc == 0x10B868u) {
        ctx->pc = 0x10B86Cu;
        goto label_10b86c;
    }
    ctx->pc = 0x10B864u;
    SET_GPR_U32(ctx, 31, 0x10B86Cu);
    ctx->pc = 0x23B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B0F0u, 0x10B864u, 0x10B86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B86Cu;
label_10b86c:
    // 0x10b86c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x10b86cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_10b870:
    // 0x10b870: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x10b870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_10b874:
    // 0x10b874: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10b874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_10b878:
    // 0x10b878: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x10b878u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_10b87c:
    // 0x10b87c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10b87cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_10b880:
    // 0x10b880: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10b880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_10b884:
    // 0x10b884: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x10b884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_10b888:
    // 0x10b888: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x10b888u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_10b88c:
    // 0x10b88c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10b88cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10b890:
    // 0x10b890: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10b890u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10b894:
    // 0x10b894: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10b894u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_10b898:
    // 0x10b898: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x10b898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_10b89c:
    // 0x10b89c: 0x3e00008  jr          $ra
label_10b8a0:
    if (ctx->pc == 0x10B8A0u) {
        ctx->pc = 0x10B8A4u;
        goto label_10b8a4;
    }
    ctx->pc = 0x10B89Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B89Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B8A4u;
label_10b8a4:
    // 0x10b8a4: 0x0  nop
    ctx->pc = 0x10b8a4u;
    // NOP
label_10b8a8:
    // 0x10b8a8: 0x0  nop
    ctx->pc = 0x10b8a8u;
    // NOP
label_10b8ac:
    // 0x10b8ac: 0x0  nop
    ctx->pc = 0x10b8acu;
    // NOP
label_10b8b0:
    // 0x10b8b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10b8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_10b8b4:
    // 0x10b8b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10b8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_10b8b8:
    // 0x10b8b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10b8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_10b8bc:
    // 0x10b8bc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x10b8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_10b8c0:
    // 0x10b8c0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10b8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_10b8c4:
    // 0x10b8c4: 0xc08ec48  jal         func_23B120
label_10b8c8:
    if (ctx->pc == 0x10B8C8u) {
        ctx->pc = 0x10B8CCu;
        goto label_10b8cc;
    }
    ctx->pc = 0x10B8C4u;
    SET_GPR_U32(ctx, 31, 0x10B8CCu);
    ctx->pc = 0x23B120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B120u, 0x10B8C4u, 0x10B8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B8CCu;
label_10b8cc:
    // 0x10b8cc: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x10b8ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_10b8d0:
    // 0x10b8d0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10b8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_10b8d4:
    // 0x10b8d4: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x10b8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_10b8d8:
    // 0x10b8d8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10b8d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10b8dc:
    // 0x10b8dc: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x10b8dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_10b8e0:
    // 0x10b8e0: 0x320f809  jalr        $t9
label_10b8e4:
    if (ctx->pc == 0x10B8E4u) {
        ctx->pc = 0x10B8E8u;
        goto label_10b8e8;
    }
    ctx->pc = 0x10B8E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10B8E8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B8E0u, 0x10B8E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10B8E8u;
label_10b8e8:
    // 0x10b8e8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x10b8e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_10b8ec:
    // 0x10b8ec: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x10b8ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_10b8f0:
    // 0x10b8f0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10b8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_10b8f4:
    // 0x10b8f4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x10b8f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_10b8f8:
    // 0x10b8f8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10b8f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_10b8fc:
    // 0x10b8fc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10b8fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_10b900:
    // 0x10b900: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x10b900u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_10b904:
    // 0x10b904: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10b904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_10b908:
    // 0x10b908: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x10b908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_10b90c:
    // 0x10b90c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_10b910:
    if (ctx->pc == 0x10B910u) {
        ctx->pc = 0x10B914u;
        goto label_10b914;
    }
    ctx->pc = 0x10B90Cu;
    {
        const bool branch_taken_0x10b90c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b90c) {
            ctx->pc = 0x10B93Cu;
            goto label_10b93c;
        }
    }
    ctx->pc = 0x10B914u;
label_10b914:
    // 0x10b914: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10b914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_10b918:
    // 0x10b918: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x10b918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_10b91c:
    // 0x10b91c: 0xc042ea4  jal         func_10BA90
label_10b920:
    if (ctx->pc == 0x10B920u) {
        ctx->pc = 0x10B924u;
        goto label_10b924;
    }
    ctx->pc = 0x10B91Cu;
    SET_GPR_U32(ctx, 31, 0x10B924u);
    ctx->pc = 0x10BA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BA90u, 0x10B91Cu, 0x10B924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B924u;
label_10b924:
    // 0x10b924: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10b924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_10b928:
    // 0x10b928: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x10b928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_10b92c:
    // 0x10b92c: 0xc119c5c  jal         func_467170
label_10b930:
    if (ctx->pc == 0x10B930u) {
        ctx->pc = 0x10B934u;
        goto label_10b934;
    }
    ctx->pc = 0x10B92Cu;
    SET_GPR_U32(ctx, 31, 0x10B934u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x10B92Cu, 0x10B934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B934u;
label_10b934:
    // 0x10b934: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10b934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_10b938:
    // 0x10b938: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x10b938u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_10b93c:
    // 0x10b93c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10b93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_10b940:
    // 0x10b940: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x10b940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_10b944:
    // 0x10b944: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10b944u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10b948:
    // 0x10b948: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x10b948u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_10b94c:
    // 0x10b94c: 0x320f809  jalr        $t9
label_10b950:
    if (ctx->pc == 0x10B950u) {
        ctx->pc = 0x10B954u;
        goto label_10b954;
    }
    ctx->pc = 0x10B94Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10B954u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B94Cu, 0x10B954u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10B954u;
label_10b954:
    // 0x10b954: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x10b954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_10b958:
    // 0x10b958: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x10b958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_10b95c:
    // 0x10b95c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10b95cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_10b960:
    // 0x10b960: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x10b960u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_10b964:
    // 0x10b964: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10b964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_10b968:
    // 0x10b968: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10b968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_10b96c:
    // 0x10b96c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x10b96cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_10b970:
    // 0x10b970: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10b970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_10b974:
    // 0x10b974: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x10b974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_10b978:
    // 0x10b978: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_10b97c:
    if (ctx->pc == 0x10B97Cu) {
        ctx->pc = 0x10B980u;
        goto label_10b980;
    }
    ctx->pc = 0x10B978u;
    {
        const bool branch_taken_0x10b978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b978) {
            ctx->pc = 0x10B9A8u;
            goto label_10b9a8;
        }
    }
    ctx->pc = 0x10B980u;
label_10b980:
    // 0x10b980: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10b980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_10b984:
    // 0x10b984: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x10b984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_10b988:
    // 0x10b988: 0xc042e98  jal         func_10BA60
label_10b98c:
    if (ctx->pc == 0x10B98Cu) {
        ctx->pc = 0x10B990u;
        goto label_10b990;
    }
    ctx->pc = 0x10B988u;
    SET_GPR_U32(ctx, 31, 0x10B990u);
    ctx->pc = 0x10BA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BA60u, 0x10B988u, 0x10B990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B990u;
label_10b990:
    // 0x10b990: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10b990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_10b994:
    // 0x10b994: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x10b994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_10b998:
    // 0x10b998: 0xc119c5c  jal         func_467170
label_10b99c:
    if (ctx->pc == 0x10B99Cu) {
        ctx->pc = 0x10B9A0u;
        goto label_10b9a0;
    }
    ctx->pc = 0x10B998u;
    SET_GPR_U32(ctx, 31, 0x10B9A0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x10B998u, 0x10B9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B9A0u;
label_10b9a0:
    // 0x10b9a0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10b9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_10b9a4:
    // 0x10b9a4: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x10b9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_10b9a8:
    // 0x10b9a8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10b9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_10b9ac:
    // 0x10b9ac: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x10b9acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_10b9b0:
    // 0x10b9b0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10b9b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10b9b4:
    // 0x10b9b4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x10b9b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_10b9b8:
    // 0x10b9b8: 0x320f809  jalr        $t9
label_10b9bc:
    if (ctx->pc == 0x10B9BCu) {
        ctx->pc = 0x10B9C0u;
        goto label_10b9c0;
    }
    ctx->pc = 0x10B9B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10B9C0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B9B8u, 0x10B9C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10B9C0u;
label_10b9c0:
    // 0x10b9c0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x10b9c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_10b9c4:
    // 0x10b9c4: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x10b9c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_10b9c8:
    // 0x10b9c8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10b9c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_10b9cc:
    // 0x10b9cc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x10b9ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_10b9d0:
    // 0x10b9d0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10b9d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_10b9d4:
    // 0x10b9d4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10b9d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_10b9d8:
    // 0x10b9d8: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x10b9d8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_10b9dc:
    // 0x10b9dc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10b9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_10b9e0:
    // 0x10b9e0: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x10b9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_10b9e4:
    // 0x10b9e4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_10b9e8:
    if (ctx->pc == 0x10B9E8u) {
        ctx->pc = 0x10B9ECu;
        goto label_10b9ec;
    }
    ctx->pc = 0x10B9E4u;
    {
        const bool branch_taken_0x10b9e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b9e4) {
            ctx->pc = 0x10BA14u;
            goto label_10ba14;
        }
    }
    ctx->pc = 0x10B9ECu;
label_10b9ec:
    // 0x10b9ec: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10b9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_10b9f0:
    // 0x10b9f0: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x10b9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_10b9f4:
    // 0x10b9f4: 0xc042e8c  jal         func_10BA30
label_10b9f8:
    if (ctx->pc == 0x10B9F8u) {
        ctx->pc = 0x10B9FCu;
        goto label_10b9fc;
    }
    ctx->pc = 0x10B9F4u;
    SET_GPR_U32(ctx, 31, 0x10B9FCu);
    ctx->pc = 0x10BA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BA30u, 0x10B9F4u, 0x10B9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B9FCu;
label_10b9fc:
    // 0x10b9fc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10b9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_10ba00:
    // 0x10ba00: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x10ba00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_10ba04:
    // 0x10ba04: 0xc119c5c  jal         func_467170
label_10ba08:
    if (ctx->pc == 0x10BA08u) {
        ctx->pc = 0x10BA0Cu;
        goto label_10ba0c;
    }
    ctx->pc = 0x10BA04u;
    SET_GPR_U32(ctx, 31, 0x10BA0Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x10BA04u, 0x10BA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BA0Cu;
label_10ba0c:
    // 0x10ba0c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10ba0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_10ba10:
    // 0x10ba10: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x10ba10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_10ba14:
    // 0x10ba14: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10ba14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10ba18:
    // 0x10ba18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10ba18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10ba1c:
    // 0x10ba1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10ba1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_10ba20:
    // 0x10ba20: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x10ba20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_10ba24:
    // 0x10ba24: 0x3e00008  jr          $ra
label_10ba28:
    if (ctx->pc == 0x10BA28u) {
        ctx->pc = 0x10BA2Cu;
        goto label_10ba2c;
    }
    ctx->pc = 0x10BA24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BA24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10BA2Cu;
label_10ba2c:
    // 0x10ba2c: 0x0  nop
    ctx->pc = 0x10ba2cu;
    // NOP
    ctx->pc = 0x10ba30u;
}

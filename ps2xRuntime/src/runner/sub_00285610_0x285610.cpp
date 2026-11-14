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

// Function: sub_00285610
// Address: 0x285610 - 0x285650
void sub_00285610_0x285610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285610_0x285610");
#endif

    switch (ctx->pc) {
        case 0x285628u: goto label_285628;
        case 0x28563cu: goto label_28563c;
        default: break;
    }

    ctx->pc = 0x285610u;

    // 0x285610: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x285610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x285614: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x285614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x285618: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x285618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x28561c: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x28561cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x285620: 0xc0a1614  jal         func_285850
    ctx->pc = 0x285620u;
    SET_GPR_U32(ctx, 31, 0x285628u);
    ctx->pc = 0x285850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285850u, 0x285620u, 0x285628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285628u;
label_285628:
    // 0x285628: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x285628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28562c: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x28562cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x285630: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x285630u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285634: 0xc0a1594  jal         func_285650
    ctx->pc = 0x285634u;
    SET_GPR_U32(ctx, 31, 0x28563Cu);
    ctx->pc = 0x285650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285650u, 0x285634u, 0x28563Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28563Cu;
label_28563c:
    // 0x28563c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x28563cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x285640: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x285640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x285644: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x285644u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x285648: 0x3e00008  jr          $ra
    ctx->pc = 0x285648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x285650u;
}

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

// Function: sub_00115990
// Address: 0x115990 - 0x1159d0
void sub_00115990_0x115990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115990_0x115990");
#endif

    switch (ctx->pc) {
        case 0x1159a8u: goto label_1159a8;
        case 0x1159bcu: goto label_1159bc;
        default: break;
    }

    ctx->pc = 0x115990u;

    // 0x115990: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x115990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x115994: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x115994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x115998: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x115998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x11599c: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x11599cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1159a0: 0xc0456f4  jal         func_115BD0
    ctx->pc = 0x1159A0u;
    SET_GPR_U32(ctx, 31, 0x1159A8u);
    ctx->pc = 0x115BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115BD0u, 0x1159A0u, 0x1159A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1159A8u;
label_1159a8:
    // 0x1159a8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1159a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1159ac: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x1159acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1159b0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1159b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1159b4: 0xc045674  jal         func_1159D0
    ctx->pc = 0x1159B4u;
    SET_GPR_U32(ctx, 31, 0x1159BCu);
    ctx->pc = 0x1159D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1159D0u, 0x1159B4u, 0x1159BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1159BCu;
label_1159bc:
    // 0x1159bc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1159bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1159c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1159c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1159c4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1159c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1159c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1159C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1159C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1159D0u;
}

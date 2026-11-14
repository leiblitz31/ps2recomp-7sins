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

// Function: sub_0020B660
// Address: 0x20b660 - 0x20b6a0
void sub_0020B660_0x20b660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B660_0x20b660");
#endif

    switch (ctx->pc) {
        case 0x20b688u: goto label_20b688;
        default: break;
    }

    ctx->pc = 0x20b660u;

    // 0x20b660: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x20b660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x20b664: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20b664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20b668: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x20b668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x20b66c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x20b66cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x20b670: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x20b670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x20b674: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x20b674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20b678: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x20b678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20b67c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x20b67cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20b680: 0xc041934  jal         func_1064D0
    ctx->pc = 0x20B680u;
    SET_GPR_U32(ctx, 31, 0x20B688u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x20B680u, 0x20B688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B688u;
label_20b688:
    // 0x20b688: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20b688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20b68c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x20b68cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x20b690: 0x3e00008  jr          $ra
    ctx->pc = 0x20B690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B698u;
    // 0x20b698: 0x0  nop
    ctx->pc = 0x20b698u;
    // NOP
    // 0x20b69c: 0x0  nop
    ctx->pc = 0x20b69cu;
    // NOP
    ctx->pc = 0x20b6a0u;
}

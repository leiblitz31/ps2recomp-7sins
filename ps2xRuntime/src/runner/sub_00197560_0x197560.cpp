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

// Function: sub_00197560
// Address: 0x197560 - 0x1975b0
void sub_00197560_0x197560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197560_0x197560");
#endif

    switch (ctx->pc) {
        case 0x19757cu: goto label_19757c;
        case 0x197590u: goto label_197590;
        case 0x1975a0u: goto label_1975a0;
        default: break;
    }

    ctx->pc = 0x197560u;

    // 0x197560: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x197560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x197564: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x197564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x197568: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x197568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x19756c: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x19756cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x197570: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x197570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x197574: 0xc067258  jal         func_19C960
    ctx->pc = 0x197574u;
    SET_GPR_U32(ctx, 31, 0x19757Cu);
    ctx->pc = 0x19C960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C960u, 0x197574u, 0x19757Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19757Cu;
label_19757c:
    // 0x19757c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x19757cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x197580: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x197580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197584: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x197584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x197588: 0xc065d6c  jal         func_1975B0
    ctx->pc = 0x197588u;
    SET_GPR_U32(ctx, 31, 0x197590u);
    ctx->pc = 0x1975B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1975B0u, 0x197588u, 0x197590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197590u;
label_197590:
    // 0x197590: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x197590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x197594: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x197594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x197598: 0xc067260  jal         func_19C980
    ctx->pc = 0x197598u;
    SET_GPR_U32(ctx, 31, 0x1975A0u);
    ctx->pc = 0x19C980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C980u, 0x197598u, 0x1975A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1975A0u;
label_1975a0:
    // 0x1975a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1975a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1975a4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1975a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1975a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1975A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1975A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1975B0u;
}

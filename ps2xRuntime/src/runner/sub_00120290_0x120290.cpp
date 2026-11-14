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

// Function: sub_00120290
// Address: 0x120290 - 0x1202d0
void sub_00120290_0x120290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00120290_0x120290");
#endif

    switch (ctx->pc) {
        case 0x1202a8u: goto label_1202a8;
        case 0x1202b8u: goto label_1202b8;
        default: break;
    }

    ctx->pc = 0x120290u;

    // 0x120290: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x120290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x120294: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x120294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x120298: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x120298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x12029c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x12029cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1202a0: 0xc0480f4  jal         func_1203D0
    ctx->pc = 0x1202A0u;
    SET_GPR_U32(ctx, 31, 0x1202A8u);
    ctx->pc = 0x1203D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203D0u, 0x1202A0u, 0x1202A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1202A8u;
label_1202a8:
    // 0x1202a8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1202a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1202ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1202acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1202b0: 0xc0480b4  jal         func_1202D0
    ctx->pc = 0x1202B0u;
    SET_GPR_U32(ctx, 31, 0x1202B8u);
    ctx->pc = 0x1202D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1202D0u, 0x1202B0u, 0x1202B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1202B8u;
label_1202b8:
    // 0x1202b8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1202b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1202bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1202bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1202c0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1202c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1202c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1202C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1202C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1202CCu;
    // 0x1202cc: 0x0  nop
    ctx->pc = 0x1202ccu;
    // NOP
    ctx->pc = 0x1202d0u;
}

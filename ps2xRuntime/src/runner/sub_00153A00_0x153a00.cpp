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

// Function: sub_00153A00
// Address: 0x153a00 - 0x153a40
void sub_00153A00_0x153a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153A00_0x153a00");
#endif

    switch (ctx->pc) {
        case 0x153a18u: goto label_153a18;
        case 0x153a2cu: goto label_153a2c;
        default: break;
    }

    ctx->pc = 0x153a00u;

    // 0x153a00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x153a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x153a04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x153a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x153a08: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x153a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x153a0c: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x153a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x153a10: 0xc054f10  jal         func_153C40
    ctx->pc = 0x153A10u;
    SET_GPR_U32(ctx, 31, 0x153A18u);
    ctx->pc = 0x153C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153C40u, 0x153A10u, 0x153A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153A18u;
label_153a18:
    // 0x153a18: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x153a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x153a1c: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x153a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x153a20: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x153a20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153a24: 0xc054e90  jal         func_153A40
    ctx->pc = 0x153A24u;
    SET_GPR_U32(ctx, 31, 0x153A2Cu);
    ctx->pc = 0x153A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153A40u, 0x153A24u, 0x153A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153A2Cu;
label_153a2c:
    // 0x153a2c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x153a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x153a30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x153a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x153a34: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x153a34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x153a38: 0x3e00008  jr          $ra
    ctx->pc = 0x153A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153A38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153A40u;
}

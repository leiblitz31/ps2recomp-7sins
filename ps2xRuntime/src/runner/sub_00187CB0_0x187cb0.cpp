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

// Function: sub_00187CB0
// Address: 0x187cb0 - 0x187d10
void sub_00187CB0_0x187cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187CB0_0x187cb0");
#endif

    switch (ctx->pc) {
        case 0x187cd8u: goto label_187cd8;
        case 0x187cecu: goto label_187cec;
        default: break;
    }

    ctx->pc = 0x187cb0u;

    // 0x187cb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x187cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x187cb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x187cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x187cb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x187cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x187cbc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x187cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x187cc0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x187cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x187cc4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x187cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x187cc8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x187cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x187ccc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x187cccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187cd0: 0xc061c88  jal         func_187220
    ctx->pc = 0x187CD0u;
    SET_GPR_U32(ctx, 31, 0x187CD8u);
    ctx->pc = 0x187220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187220u, 0x187CD0u, 0x187CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187CD8u;
label_187cd8:
    // 0x187cd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x187cd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187cdc: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x187cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x187ce0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x187ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x187ce4: 0xc056204  jal         func_158810
    ctx->pc = 0x187CE4u;
    SET_GPR_U32(ctx, 31, 0x187CECu);
    ctx->pc = 0x158810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158810u, 0x187CE4u, 0x187CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187CECu;
label_187cec:
    // 0x187cec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x187cecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187cf0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x187cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187cf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x187cf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187cf8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x187cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x187cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x187CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187D04u;
    // 0x187d04: 0x0  nop
    ctx->pc = 0x187d04u;
    // NOP
    // 0x187d08: 0x0  nop
    ctx->pc = 0x187d08u;
    // NOP
    // 0x187d0c: 0x0  nop
    ctx->pc = 0x187d0cu;
    // NOP
    ctx->pc = 0x187d10u;
}

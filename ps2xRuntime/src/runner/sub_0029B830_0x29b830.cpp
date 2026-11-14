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

// Function: sub_0029B830
// Address: 0x29b830 - 0x29b880
void sub_0029B830_0x29b830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B830_0x29b830");
#endif

    switch (ctx->pc) {
        case 0x29b860u: goto label_29b860;
        default: break;
    }

    ctx->pc = 0x29b830u;

    // 0x29b830: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29b830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29b834: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29b834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29b838: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29b838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29b83c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x29b83cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x29b840: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x29b840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29b844: 0x8c500018  lw          $s0, 0x18($v0)
    ctx->pc = 0x29b844u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x29b848: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29b848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b84c: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x29b84cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x29b850: 0x24a5b790  addiu       $a1, $a1, -0x4870
    ctx->pc = 0x29b850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948752));
    // 0x29b854: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29b854u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b858: 0xc0e3396  jal         func_38CE58
    ctx->pc = 0x29B858u;
    SET_GPR_U32(ctx, 31, 0x29B860u);
    ctx->pc = 0x38CE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CE58u, 0x29B858u, 0x29B860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B860u;
label_29b860:
    // 0x29b860: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x29b860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29b864: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29b864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b868: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29b868u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b86c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x29b86cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x29b870: 0x3e00008  jr          $ra
    ctx->pc = 0x29B870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B878u;
    // 0x29b878: 0x0  nop
    ctx->pc = 0x29b878u;
    // NOP
    // 0x29b87c: 0x0  nop
    ctx->pc = 0x29b87cu;
    // NOP
    ctx->pc = 0x29b880u;
}

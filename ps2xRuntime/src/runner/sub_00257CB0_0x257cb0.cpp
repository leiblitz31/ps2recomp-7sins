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

// Function: sub_00257CB0
// Address: 0x257cb0 - 0x257d10
void sub_00257CB0_0x257cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257CB0_0x257cb0");
#endif

    switch (ctx->pc) {
        case 0x257cd8u: goto label_257cd8;
        case 0x257cecu: goto label_257cec;
        default: break;
    }

    ctx->pc = 0x257cb0u;

    // 0x257cb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x257cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x257cb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x257cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x257cb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x257cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x257cbc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x257cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x257cc0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x257cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x257cc4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x257cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x257cc8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x257cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x257ccc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x257cccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257cd0: 0xc095c48  jal         func_257120
    ctx->pc = 0x257CD0u;
    SET_GPR_U32(ctx, 31, 0x257CD8u);
    ctx->pc = 0x257120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257120u, 0x257CD0u, 0x257CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257CD8u;
label_257cd8:
    // 0x257cd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x257cd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257cdc: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x257cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x257ce0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x257ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257ce4: 0xc095f44  jal         func_257D10
    ctx->pc = 0x257CE4u;
    SET_GPR_U32(ctx, 31, 0x257CECu);
    ctx->pc = 0x257D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257D10u, 0x257CE4u, 0x257CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257CECu;
label_257cec:
    // 0x257cec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x257cecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257cf0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x257cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257cf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x257cf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257cf8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x257cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x257cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x257CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257D04u;
    // 0x257d04: 0x0  nop
    ctx->pc = 0x257d04u;
    // NOP
    // 0x257d08: 0x0  nop
    ctx->pc = 0x257d08u;
    // NOP
    // 0x257d0c: 0x0  nop
    ctx->pc = 0x257d0cu;
    // NOP
    ctx->pc = 0x257d10u;
}

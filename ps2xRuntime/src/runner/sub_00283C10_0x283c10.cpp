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

// Function: sub_00283C10
// Address: 0x283c10 - 0x283c70
void sub_00283C10_0x283c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283C10_0x283c10");
#endif

    switch (ctx->pc) {
        case 0x283c38u: goto label_283c38;
        case 0x283c4cu: goto label_283c4c;
        default: break;
    }

    ctx->pc = 0x283c10u;

    // 0x283c10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x283c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x283c14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x283c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x283c18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x283c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x283c1c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x283c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x283c20: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x283c20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x283c24: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x283c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x283c28: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x283c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x283c2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x283c2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283c30: 0xc0a07a4  jal         func_281E90
    ctx->pc = 0x283C30u;
    SET_GPR_U32(ctx, 31, 0x283C38u);
    ctx->pc = 0x281E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281E90u, 0x283C30u, 0x283C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283C38u;
label_283c38:
    // 0x283c38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x283c38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283c3c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x283c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x283c40: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x283c40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x283c44: 0xc0a0f1c  jal         func_283C70
    ctx->pc = 0x283C44u;
    SET_GPR_U32(ctx, 31, 0x283C4Cu);
    ctx->pc = 0x283C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283C70u, 0x283C44u, 0x283C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283C4Cu;
label_283c4c:
    // 0x283c4c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x283c4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283c50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x283c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283c54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x283c54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283c58: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x283c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x283c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x283C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283C64u;
    // 0x283c64: 0x0  nop
    ctx->pc = 0x283c64u;
    // NOP
    // 0x283c68: 0x0  nop
    ctx->pc = 0x283c68u;
    // NOP
    // 0x283c6c: 0x0  nop
    ctx->pc = 0x283c6cu;
    // NOP
    ctx->pc = 0x283c70u;
}

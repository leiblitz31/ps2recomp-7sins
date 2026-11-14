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

// Function: sub_002C33A0
// Address: 0x2c33a0 - 0x2c3400
void sub_002C33A0_0x2c33a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C33A0_0x2c33a0");
#endif

    switch (ctx->pc) {
        case 0x2c33d0u: goto label_2c33d0;
        case 0x2c33e0u: goto label_2c33e0;
        default: break;
    }

    ctx->pc = 0x2c33a0u;

    // 0x2c33a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c33a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c33a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c33a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c33a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c33a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c33ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c33acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c33b0: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2c33b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x2c33b4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2c33b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c33b8: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C33B8u;
    {
        const bool branch_taken_0x2c33b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c33b8) {
            ctx->pc = 0x2C33E0u;
            goto label_2c33e0;
        }
    }
    ctx->pc = 0x2C33C0u;
    // 0x2c33c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c33c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c33c4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2c33c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c33c8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2C33C8u;
    SET_GPR_U32(ctx, 31, 0x2C33D0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C33C8u, 0x2C33D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C33D0u;
label_2c33d0:
    // 0x2c33d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c33d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c33d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c33d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c33d8: 0xc096b30  jal         func_25ACC0
    ctx->pc = 0x2C33D8u;
    SET_GPR_U32(ctx, 31, 0x2C33E0u);
    ctx->pc = 0x25ACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25ACC0u, 0x2C33D8u, 0x2C33E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C33E0u;
label_2c33e0:
    // 0x2c33e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c33e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c33e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c33e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c33e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c33e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c33ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c33ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c33f0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2c33f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2c33f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C33F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C33F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C33FCu;
    // 0x2c33fc: 0x0  nop
    ctx->pc = 0x2c33fcu;
    // NOP
    ctx->pc = 0x2c3400u;
}

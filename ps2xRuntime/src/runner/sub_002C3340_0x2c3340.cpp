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

// Function: sub_002C3340
// Address: 0x2c3340 - 0x2c33a0
void sub_002C3340_0x2c3340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C3340_0x2c3340");
#endif

    switch (ctx->pc) {
        case 0x2c3370u: goto label_2c3370;
        case 0x2c3380u: goto label_2c3380;
        default: break;
    }

    ctx->pc = 0x2c3340u;

    // 0x2c3340: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c3340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c3344: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c3344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c3348: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c3348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c334c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c334cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c3350: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2c3350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x2c3354: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2c3354u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c3358: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C3358u;
    {
        const bool branch_taken_0x2c3358 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3358) {
            ctx->pc = 0x2C3380u;
            goto label_2c3380;
        }
    }
    ctx->pc = 0x2C3360u;
    // 0x2c3360: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c3360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3364: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2c3364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c3368: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2C3368u;
    SET_GPR_U32(ctx, 31, 0x2C3370u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C3368u, 0x2C3370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3370u;
label_2c3370:
    // 0x2c3370: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c3370u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3374: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c3374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3378: 0xc096b1c  jal         func_25AC70
    ctx->pc = 0x2C3378u;
    SET_GPR_U32(ctx, 31, 0x2C3380u);
    ctx->pc = 0x25AC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC70u, 0x2C3378u, 0x2C3380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3380u;
label_2c3380:
    // 0x2c3380: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c3380u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3384: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c3384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c3388: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c3388u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c338c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c338cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c3390: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2c3390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2c3394: 0x3e00008  jr          $ra
    ctx->pc = 0x2C3394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C339Cu;
    // 0x2c339c: 0x0  nop
    ctx->pc = 0x2c339cu;
    // NOP
    ctx->pc = 0x2c33a0u;
}

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

// Function: sub_002DF290
// Address: 0x2df290 - 0x2df310
void sub_002DF290_0x2df290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF290_0x2df290");
#endif

    switch (ctx->pc) {
        case 0x2df2b8u: goto label_2df2b8;
        case 0x2df2ccu: goto label_2df2cc;
        case 0x2df2dcu: goto label_2df2dc;
        case 0x2df2fcu: goto label_2df2fc;
        default: break;
    }

    ctx->pc = 0x2df290u;

    // 0x2df290: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2df290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2df294: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2df294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2df298: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2df298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2df29c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2df29cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2df2a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2df2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df2a4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2DF2A4u;
    {
        const bool branch_taken_0x2df2a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df2a4) {
            ctx->pc = 0x2DF2FCu;
            goto label_2df2fc;
        }
    }
    ctx->pc = 0x2DF2ACu;
    // 0x2df2ac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2df2acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df2b0: 0xc0b7ce0  jal         func_2DF380
    ctx->pc = 0x2DF2B0u;
    SET_GPR_U32(ctx, 31, 0x2DF2B8u);
    ctx->pc = 0x2DF380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF380u, 0x2DF2B0u, 0x2DF2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF2B8u;
label_2df2b8:
    // 0x2df2b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2df2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df2bc: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x2df2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2df2c0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2df2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2df2c4: 0xc0b7a88  jal         func_2DEA20
    ctx->pc = 0x2DF2C4u;
    SET_GPR_U32(ctx, 31, 0x2DF2CCu);
    ctx->pc = 0x2DEA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEA20u, 0x2DF2C4u, 0x2DF2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF2CCu;
label_2df2cc:
    // 0x2df2cc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2df2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df2d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2df2d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df2d4: 0xc0b7cc4  jal         func_2DF310
    ctx->pc = 0x2DF2D4u;
    SET_GPR_U32(ctx, 31, 0x2DF2DCu);
    ctx->pc = 0x2DF310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF310u, 0x2DF2D4u, 0x2DF2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF2DCu;
label_2df2dc:
    // 0x2df2dc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2df2dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2df2e0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2df2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2df2e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2df2e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2df2e8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DF2E8u;
    {
        const bool branch_taken_0x2df2e8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2df2e8) {
            ctx->pc = 0x2DF2FCu;
            goto label_2df2fc;
        }
    }
    ctx->pc = 0x2DF2F0u;
    // 0x2df2f0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2df2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df2f4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2DF2F4u;
    SET_GPR_U32(ctx, 31, 0x2DF2FCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2DF2F4u, 0x2DF2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF2FCu;
label_2df2fc:
    // 0x2df2fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2df2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df300: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2df300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df304: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2df304u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2df308: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF310u;
}

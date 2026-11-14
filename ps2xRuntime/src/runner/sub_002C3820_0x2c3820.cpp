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

// Function: sub_002C3820
// Address: 0x2c3820 - 0x2c38b0
void sub_002C3820_0x2c3820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C3820_0x2c3820");
#endif

    switch (ctx->pc) {
        case 0x2c3850u: goto label_2c3850;
        case 0x2c3864u: goto label_2c3864;
        case 0x2c3878u: goto label_2c3878;
        case 0x2c3898u: goto label_2c3898;
        default: break;
    }

    ctx->pc = 0x2c3820u;

    // 0x2c3820: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c3820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c3824: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c3824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c3828: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2c3828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2c382c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2c382cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2c3830: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2c3830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c3834: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2C3834u;
    {
        const bool branch_taken_0x2c3834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3834) {
            ctx->pc = 0x2C3898u;
            goto label_2c3898;
        }
    }
    ctx->pc = 0x2C383Cu;
    // 0x2c383c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2c383cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c3840: 0x2444001c  addiu       $a0, $v0, 0x1C
    ctx->pc = 0x2c3840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x2c3844: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2c3844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c3848: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2C3848u;
    SET_GPR_U32(ctx, 31, 0x2C3850u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2C3848u, 0x2C3850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3850u;
label_2c3850:
    // 0x2c3850: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2c3850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c3854: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x2c3854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2c3858: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2c3858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c385c: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2C385Cu;
    SET_GPR_U32(ctx, 31, 0x2C3864u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2C385Cu, 0x2C3864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3864u;
label_2c3864:
    // 0x2c3864: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2c3864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c3868: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2c3868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c386c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2c386cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c3870: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2C3870u;
    SET_GPR_U32(ctx, 31, 0x2C3878u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2C3870u, 0x2C3878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3878u;
label_2c3878:
    // 0x2c3878: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2c3878u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c387c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2c387cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c3880: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c3880u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c3884: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C3884u;
    {
        const bool branch_taken_0x2c3884 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c3884) {
            ctx->pc = 0x2C3898u;
            goto label_2c3898;
        }
    }
    ctx->pc = 0x2C388Cu;
    // 0x2c388c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2c388cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c3890: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2C3890u;
    SET_GPR_U32(ctx, 31, 0x2C3898u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2C3890u, 0x2C3898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3898u;
label_2c3898:
    // 0x2c3898: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2c3898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c389c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c389cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c38a0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2c38a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c38a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C38A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C38A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C38ACu;
    // 0x2c38ac: 0x0  nop
    ctx->pc = 0x2c38acu;
    // NOP
    ctx->pc = 0x2c38b0u;
}

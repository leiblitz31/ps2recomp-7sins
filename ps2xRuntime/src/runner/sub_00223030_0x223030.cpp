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

// Function: sub_00223030
// Address: 0x223030 - 0x2230b0
void sub_00223030_0x223030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223030_0x223030");
#endif

    switch (ctx->pc) {
        case 0x223064u: goto label_223064;
        case 0x223074u: goto label_223074;
        case 0x223094u: goto label_223094;
        default: break;
    }

    ctx->pc = 0x223030u;

    // 0x223030: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x223030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x223034: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x223034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x223038: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x223038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22303c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x22303cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x223040: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x223040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223044: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x223044u;
    {
        const bool branch_taken_0x223044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x223044) {
            ctx->pc = 0x223094u;
            goto label_223094;
        }
    }
    ctx->pc = 0x22304Cu;
    // 0x22304c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x22304cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223050: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x223050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223054: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x223054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x223058: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x223058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22305c: 0xc088c58  jal         func_223160
    ctx->pc = 0x22305Cu;
    SET_GPR_U32(ctx, 31, 0x223064u);
    ctx->pc = 0x223160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223160u, 0x22305Cu, 0x223064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223064u;
label_223064:
    // 0x223064: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x223064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223068: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x223068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22306c: 0xc088c2c  jal         func_2230B0
    ctx->pc = 0x22306Cu;
    SET_GPR_U32(ctx, 31, 0x223074u);
    ctx->pc = 0x2230B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2230B0u, 0x22306Cu, 0x223074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223074u;
label_223074:
    // 0x223074: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x223074u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x223078: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x223078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x22307c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x22307cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x223080: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x223080u;
    {
        const bool branch_taken_0x223080 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x223080) {
            ctx->pc = 0x223094u;
            goto label_223094;
        }
    }
    ctx->pc = 0x223088u;
    // 0x223088: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x223088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22308c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x22308Cu;
    SET_GPR_U32(ctx, 31, 0x223094u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x22308Cu, 0x223094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223094u;
label_223094:
    // 0x223094: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x223094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223098: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x223098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22309c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x22309cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2230a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2230A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2230A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2230A8u;
    // 0x2230a8: 0x0  nop
    ctx->pc = 0x2230a8u;
    // NOP
    // 0x2230ac: 0x0  nop
    ctx->pc = 0x2230acu;
    // NOP
    ctx->pc = 0x2230b0u;
}

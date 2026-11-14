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

// Function: sub_002805D0
// Address: 0x2805d0 - 0x280640
void sub_002805D0_0x2805d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002805D0_0x2805d0");
#endif

    switch (ctx->pc) {
        case 0x280604u: goto label_280604;
        case 0x280624u: goto label_280624;
        default: break;
    }

    ctx->pc = 0x2805d0u;

    // 0x2805d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2805d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2805d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2805d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2805d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2805d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2805dc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2805dcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2805e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2805e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2805e4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2805E4u;
    {
        const bool branch_taken_0x2805e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2805e4) {
            ctx->pc = 0x280624u;
            goto label_280624;
        }
    }
    ctx->pc = 0x2805ECu;
    // 0x2805ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2805ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2805f0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2805f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2805f4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2805f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2805f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2805f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2805fc: 0xc0a07d0  jal         func_281F40
    ctx->pc = 0x2805FCu;
    SET_GPR_U32(ctx, 31, 0x280604u);
    ctx->pc = 0x281F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281F40u, 0x2805FCu, 0x280604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280604u;
label_280604:
    // 0x280604: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x280604u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x280608: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x280608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x28060c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x28060cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x280610: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x280610u;
    {
        const bool branch_taken_0x280610 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x280610) {
            ctx->pc = 0x280624u;
            goto label_280624;
        }
    }
    ctx->pc = 0x280618u;
    // 0x280618: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x280618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28061c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x28061Cu;
    SET_GPR_U32(ctx, 31, 0x280624u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x28061Cu, 0x280624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280624u;
label_280624:
    // 0x280624: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x280624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280628: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x280628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28062c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x28062cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x280630: 0x3e00008  jr          $ra
    ctx->pc = 0x280630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280638u;
    // 0x280638: 0x0  nop
    ctx->pc = 0x280638u;
    // NOP
    // 0x28063c: 0x0  nop
    ctx->pc = 0x28063cu;
    // NOP
    ctx->pc = 0x280640u;
}

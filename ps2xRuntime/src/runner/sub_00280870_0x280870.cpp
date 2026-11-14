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

// Function: sub_00280870
// Address: 0x280870 - 0x2808e0
void sub_00280870_0x280870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280870_0x280870");
#endif

    switch (ctx->pc) {
        case 0x2808a4u: goto label_2808a4;
        case 0x2808c4u: goto label_2808c4;
        default: break;
    }

    ctx->pc = 0x280870u;

    // 0x280870: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x280870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x280874: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x280874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x280878: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x280878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x28087c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x28087cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x280880: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x280880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280884: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x280884u;
    {
        const bool branch_taken_0x280884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x280884) {
            ctx->pc = 0x2808C4u;
            goto label_2808c4;
        }
    }
    ctx->pc = 0x28088Cu;
    // 0x28088c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28088cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280890: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x280890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280894: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x280894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x280898: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x280898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28089c: 0xc0a0790  jal         func_281E40
    ctx->pc = 0x28089Cu;
    SET_GPR_U32(ctx, 31, 0x2808A4u);
    ctx->pc = 0x281E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281E40u, 0x28089Cu, 0x2808A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2808A4u;
label_2808a4:
    // 0x2808a4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2808a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2808a8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2808a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2808ac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2808acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2808b0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2808B0u;
    {
        const bool branch_taken_0x2808b0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2808b0) {
            ctx->pc = 0x2808C4u;
            goto label_2808c4;
        }
    }
    ctx->pc = 0x2808B8u;
    // 0x2808b8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2808b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2808bc: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2808BCu;
    SET_GPR_U32(ctx, 31, 0x2808C4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2808BCu, 0x2808C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2808C4u;
label_2808c4:
    // 0x2808c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2808c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2808c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2808c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2808cc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2808ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2808d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2808D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2808D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2808D8u;
    // 0x2808d8: 0x0  nop
    ctx->pc = 0x2808d8u;
    // NOP
    // 0x2808dc: 0x0  nop
    ctx->pc = 0x2808dcu;
    // NOP
    ctx->pc = 0x2808e0u;
}

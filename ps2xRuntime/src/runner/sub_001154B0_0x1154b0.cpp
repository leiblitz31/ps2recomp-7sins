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

// Function: sub_001154B0
// Address: 0x1154b0 - 0x115520
void sub_001154B0_0x1154b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001154B0_0x1154b0");
#endif

    switch (ctx->pc) {
        case 0x1154e4u: goto label_1154e4;
        case 0x115504u: goto label_115504;
        default: break;
    }

    ctx->pc = 0x1154b0u;

    // 0x1154b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1154b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1154b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1154b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1154b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1154b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1154bc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1154bcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1154c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1154c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1154c4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1154C4u;
    {
        const bool branch_taken_0x1154c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1154c4) {
            ctx->pc = 0x115504u;
            goto label_115504;
        }
    }
    ctx->pc = 0x1154CCu;
    // 0x1154cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1154ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1154d0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1154d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1154d4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1154d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1154d8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1154d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1154dc: 0xc0459e0  jal         func_116780
    ctx->pc = 0x1154DCu;
    SET_GPR_U32(ctx, 31, 0x1154E4u);
    ctx->pc = 0x116780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116780u, 0x1154DCu, 0x1154E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1154E4u;
label_1154e4:
    // 0x1154e4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1154e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1154e8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1154e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1154ec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1154ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1154f0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1154F0u;
    {
        const bool branch_taken_0x1154f0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1154f0) {
            ctx->pc = 0x115504u;
            goto label_115504;
        }
    }
    ctx->pc = 0x1154F8u;
    // 0x1154f8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1154f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1154fc: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1154FCu;
    SET_GPR_U32(ctx, 31, 0x115504u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1154FCu, 0x115504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115504u;
label_115504:
    // 0x115504: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x115504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115508: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x115508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11550c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x11550cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x115510: 0x3e00008  jr          $ra
    ctx->pc = 0x115510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115518u;
    // 0x115518: 0x0  nop
    ctx->pc = 0x115518u;
    // NOP
    // 0x11551c: 0x0  nop
    ctx->pc = 0x11551cu;
    // NOP
    ctx->pc = 0x115520u;
}

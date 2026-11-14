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

// Function: sub_00469B10
// Address: 0x469b10 - 0x469b80
void sub_00469B10_0x469b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00469B10_0x469b10");
#endif

    switch (ctx->pc) {
        case 0x469b38u: goto label_469b38;
        case 0x469b4cu: goto label_469b4c;
        case 0x469b6cu: goto label_469b6c;
        default: break;
    }

    ctx->pc = 0x469b10u;

    // 0x469b10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x469b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x469b14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x469b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x469b18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x469b18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x469b1c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x469b1cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x469b20: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x469b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x469b24: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x469B24u;
    {
        const bool branch_taken_0x469b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x469b24) {
            ctx->pc = 0x469B6Cu;
            goto label_469b6c;
        }
    }
    ctx->pc = 0x469B2Cu;
    // 0x469b2c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x469b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x469b30: 0xc11ac6c  jal         func_46B1B0
    ctx->pc = 0x469B30u;
    SET_GPR_U32(ctx, 31, 0x469B38u);
    ctx->pc = 0x46B1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46B1B0u, 0x469B30u, 0x469B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469B38u;
label_469b38:
    // 0x469b38: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x469b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x469b3c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x469b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x469b40: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x469b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x469b44: 0xc11a6e0  jal         func_469B80
    ctx->pc = 0x469B44u;
    SET_GPR_U32(ctx, 31, 0x469B4Cu);
    ctx->pc = 0x469B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469B80u, 0x469B44u, 0x469B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469B4Cu;
label_469b4c:
    // 0x469b4c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x469b4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x469b50: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x469b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x469b54: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x469b54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x469b58: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x469B58u;
    {
        const bool branch_taken_0x469b58 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x469b58) {
            ctx->pc = 0x469B6Cu;
            goto label_469b6c;
        }
    }
    ctx->pc = 0x469B60u;
    // 0x469b60: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x469b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x469b64: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x469B64u;
    SET_GPR_U32(ctx, 31, 0x469B6Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x469B64u, 0x469B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469B6Cu;
label_469b6c:
    // 0x469b6c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x469b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x469b70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x469b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x469b74: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x469b74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x469b78: 0x3e00008  jr          $ra
    ctx->pc = 0x469B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x469B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x469B80u;
}

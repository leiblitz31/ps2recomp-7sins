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

// Function: sub_001B9470
// Address: 0x1b9470 - 0x1b94f0
void sub_001B9470_0x1b9470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9470_0x1b9470");
#endif

    switch (ctx->pc) {
        case 0x1b94a4u: goto label_1b94a4;
        case 0x1b94b4u: goto label_1b94b4;
        case 0x1b94d4u: goto label_1b94d4;
        default: break;
    }

    ctx->pc = 0x1b9470u;

    // 0x1b9470: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b9470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b9474: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b9474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b9478: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1b9478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1b947c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1b947cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1b9480: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1b9480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9484: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1B9484u;
    {
        const bool branch_taken_0x1b9484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9484) {
            ctx->pc = 0x1B94D4u;
            goto label_1b94d4;
        }
    }
    ctx->pc = 0x1B948Cu;
    // 0x1b948c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1b948cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9490: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1b9490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9494: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1b9494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b9498: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1b9498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b949c: 0xc06e564  jal         func_1B9590
    ctx->pc = 0x1B949Cu;
    SET_GPR_U32(ctx, 31, 0x1B94A4u);
    ctx->pc = 0x1B9590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9590u, 0x1B949Cu, 0x1B94A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B94A4u;
label_1b94a4:
    // 0x1b94a4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1b94a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b94a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b94a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b94ac: 0xc06e53c  jal         func_1B94F0
    ctx->pc = 0x1B94ACu;
    SET_GPR_U32(ctx, 31, 0x1B94B4u);
    ctx->pc = 0x1B94F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B94F0u, 0x1B94ACu, 0x1B94B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B94B4u;
label_1b94b4:
    // 0x1b94b4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1b94b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b94b8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b94b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b94bc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1b94bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1b94c0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B94C0u;
    {
        const bool branch_taken_0x1b94c0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1b94c0) {
            ctx->pc = 0x1B94D4u;
            goto label_1b94d4;
        }
    }
    ctx->pc = 0x1B94C8u;
    // 0x1b94c8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1b94c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b94cc: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1B94CCu;
    SET_GPR_U32(ctx, 31, 0x1B94D4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1B94CCu, 0x1B94D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B94D4u;
label_1b94d4:
    // 0x1b94d4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1b94d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b94d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b94d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b94dc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1b94dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b94e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B94E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B94E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B94E8u;
    // 0x1b94e8: 0x0  nop
    ctx->pc = 0x1b94e8u;
    // NOP
    // 0x1b94ec: 0x0  nop
    ctx->pc = 0x1b94ecu;
    // NOP
    ctx->pc = 0x1b94f0u;
}

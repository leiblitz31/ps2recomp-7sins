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

// Function: sub_00469A50
// Address: 0x469a50 - 0x469ab0
void sub_00469A50_0x469a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00469A50_0x469a50");
#endif

    switch (ctx->pc) {
        case 0x469a7cu: goto label_469a7c;
        case 0x469a9cu: goto label_469a9c;
        default: break;
    }

    ctx->pc = 0x469a50u;

    // 0x469a50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x469a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x469a54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x469a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x469a58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x469a58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x469a5c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x469a5cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x469a60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x469a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x469a64: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x469A64u;
    {
        const bool branch_taken_0x469a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x469a64) {
            ctx->pc = 0x469A9Cu;
            goto label_469a9c;
        }
    }
    ctx->pc = 0x469A6Cu;
    // 0x469a6c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x469a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x469a70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x469a70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x469a74: 0xc11a6ac  jal         func_469AB0
    ctx->pc = 0x469A74u;
    SET_GPR_U32(ctx, 31, 0x469A7Cu);
    ctx->pc = 0x469AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469AB0u, 0x469A74u, 0x469A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469A7Cu;
label_469a7c:
    // 0x469a7c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x469a7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x469a80: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x469a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x469a84: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x469a84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x469a88: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x469A88u;
    {
        const bool branch_taken_0x469a88 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x469a88) {
            ctx->pc = 0x469A9Cu;
            goto label_469a9c;
        }
    }
    ctx->pc = 0x469A90u;
    // 0x469a90: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x469a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x469a94: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x469A94u;
    SET_GPR_U32(ctx, 31, 0x469A9Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x469A94u, 0x469A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469A9Cu;
label_469a9c:
    // 0x469a9c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x469a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x469aa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x469aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x469aa4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x469aa4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x469aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x469AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x469AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x469AB0u;
}

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

// Function: sub_00268C50
// Address: 0x268c50 - 0x268cb0
void sub_00268C50_0x268c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00268C50_0x268c50");
#endif

    switch (ctx->pc) {
        case 0x268c7cu: goto label_268c7c;
        case 0x268c9cu: goto label_268c9c;
        default: break;
    }

    ctx->pc = 0x268c50u;

    // 0x268c50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x268c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x268c54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x268c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x268c58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x268c58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x268c5c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x268c5cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x268c60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x268c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x268c64: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x268C64u;
    {
        const bool branch_taken_0x268c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x268c64) {
            ctx->pc = 0x268C9Cu;
            goto label_268c9c;
        }
    }
    ctx->pc = 0x268C6Cu;
    // 0x268c6c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x268c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x268c70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x268c70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268c74: 0xc09a1ec  jal         func_2687B0
    ctx->pc = 0x268C74u;
    SET_GPR_U32(ctx, 31, 0x268C7Cu);
    ctx->pc = 0x2687B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2687B0u, 0x268C74u, 0x268C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268C7Cu;
label_268c7c:
    // 0x268c7c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x268c7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x268c80: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x268c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x268c84: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x268c84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x268c88: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x268C88u;
    {
        const bool branch_taken_0x268c88 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x268c88) {
            ctx->pc = 0x268C9Cu;
            goto label_268c9c;
        }
    }
    ctx->pc = 0x268C90u;
    // 0x268c90: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x268c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x268c94: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x268C94u;
    SET_GPR_U32(ctx, 31, 0x268C9Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x268C94u, 0x268C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268C9Cu;
label_268c9c:
    // 0x268c9c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x268c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x268ca0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x268ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x268ca4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x268ca4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x268ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x268CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268CA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x268CB0u;
}

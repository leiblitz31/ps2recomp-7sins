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

// Function: sub_00284A60
// Address: 0x284a60 - 0x284ac0
void sub_00284A60_0x284a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00284A60_0x284a60");
#endif

    switch (ctx->pc) {
        case 0x284a8cu: goto label_284a8c;
        case 0x284aacu: goto label_284aac;
        default: break;
    }

    ctx->pc = 0x284a60u;

    // 0x284a60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x284a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x284a64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x284a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x284a68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x284a68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x284a6c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x284a6cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x284a70: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x284a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284a74: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x284A74u;
    {
        const bool branch_taken_0x284a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x284a74) {
            ctx->pc = 0x284AACu;
            goto label_284aac;
        }
    }
    ctx->pc = 0x284A7Cu;
    // 0x284a7c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x284a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284a80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x284a80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284a84: 0xc0a12b0  jal         func_284AC0
    ctx->pc = 0x284A84u;
    SET_GPR_U32(ctx, 31, 0x284A8Cu);
    ctx->pc = 0x284AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284AC0u, 0x284A84u, 0x284A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284A8Cu;
label_284a8c:
    // 0x284a8c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x284a8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x284a90: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x284a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x284a94: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x284a94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x284a98: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x284A98u;
    {
        const bool branch_taken_0x284a98 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x284a98) {
            ctx->pc = 0x284AACu;
            goto label_284aac;
        }
    }
    ctx->pc = 0x284AA0u;
    // 0x284aa0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x284aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284aa4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x284AA4u;
    SET_GPR_U32(ctx, 31, 0x284AACu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x284AA4u, 0x284AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284AACu;
label_284aac:
    // 0x284aac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x284aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284ab0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x284ab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x284ab4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x284ab4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x284ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x284AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284AC0u;
}

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

// Function: sub_002E5A80
// Address: 0x2e5a80 - 0x2e5ae0
void sub_002E5A80_0x2e5a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5A80_0x2e5a80");
#endif

    switch (ctx->pc) {
        case 0x2e5aacu: goto label_2e5aac;
        case 0x2e5accu: goto label_2e5acc;
        default: break;
    }

    ctx->pc = 0x2e5a80u;

    // 0x2e5a80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e5a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e5a84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e5a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e5a88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2e5a88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2e5a8c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2e5a8cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2e5a90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e5a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5a94: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2E5A94u;
    {
        const bool branch_taken_0x2e5a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5a94) {
            ctx->pc = 0x2E5ACCu;
            goto label_2e5acc;
        }
    }
    ctx->pc = 0x2E5A9Cu;
    // 0x2e5a9c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2e5a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5aa0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e5aa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5aa4: 0xc0b96b8  jal         func_2E5AE0
    ctx->pc = 0x2E5AA4u;
    SET_GPR_U32(ctx, 31, 0x2E5AACu);
    ctx->pc = 0x2E5AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5AE0u, 0x2E5AA4u, 0x2E5AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5AACu;
label_2e5aac:
    // 0x2e5aac: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2e5aacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e5ab0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2e5ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2e5ab4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2e5ab4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2e5ab8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E5AB8u;
    {
        const bool branch_taken_0x2e5ab8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2e5ab8) {
            ctx->pc = 0x2E5ACCu;
            goto label_2e5acc;
        }
    }
    ctx->pc = 0x2E5AC0u;
    // 0x2e5ac0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2e5ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5ac4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2E5AC4u;
    SET_GPR_U32(ctx, 31, 0x2E5ACCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2E5AC4u, 0x2E5ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5ACCu;
label_2e5acc:
    // 0x2e5acc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e5accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5ad0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e5ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e5ad4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2e5ad4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e5ad8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E5AE0u;
}

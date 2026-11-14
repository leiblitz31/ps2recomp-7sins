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

// Function: sub_001BCE80
// Address: 0x1bce80 - 0x1bcee0
void sub_001BCE80_0x1bce80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BCE80_0x1bce80");
#endif

    switch (ctx->pc) {
        case 0x1bceacu: goto label_1bceac;
        case 0x1bceccu: goto label_1bcecc;
        default: break;
    }

    ctx->pc = 0x1bce80u;

    // 0x1bce80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bce80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bce84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bce84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bce88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1bce88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1bce8c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1bce8cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1bce90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1bce90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bce94: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1BCE94u;
    {
        const bool branch_taken_0x1bce94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bce94) {
            ctx->pc = 0x1BCECCu;
            goto label_1bcecc;
        }
    }
    ctx->pc = 0x1BCE9Cu;
    // 0x1bce9c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1bce9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bcea0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bcea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcea4: 0xc06f3b8  jal         func_1BCEE0
    ctx->pc = 0x1BCEA4u;
    SET_GPR_U32(ctx, 31, 0x1BCEACu);
    ctx->pc = 0x1BCEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCEE0u, 0x1BCEA4u, 0x1BCEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCEACu;
label_1bceac:
    // 0x1bceac: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1bceacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bceb0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1bceb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1bceb4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1bceb4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1bceb8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BCEB8u;
    {
        const bool branch_taken_0x1bceb8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1bceb8) {
            ctx->pc = 0x1BCECCu;
            goto label_1bcecc;
        }
    }
    ctx->pc = 0x1BCEC0u;
    // 0x1bcec0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1bcec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bcec4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1BCEC4u;
    SET_GPR_U32(ctx, 31, 0x1BCECCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1BCEC4u, 0x1BCECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCECCu;
label_1bcecc:
    // 0x1bcecc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1bceccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bced0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bced0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bced4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1bced4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1bced8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BCED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BCED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BCEE0u;
}

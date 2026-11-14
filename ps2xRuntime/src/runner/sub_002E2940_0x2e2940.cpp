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

// Function: sub_002E2940
// Address: 0x2e2940 - 0x2e29d0
void sub_002E2940_0x2e2940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2940_0x2e2940");
#endif

    switch (ctx->pc) {
        case 0x2e295cu: goto label_2e295c;
        case 0x2e2968u: goto label_2e2968;
        case 0x2e2978u: goto label_2e2978;
        case 0x2e2984u: goto label_2e2984;
        case 0x2e2998u: goto label_2e2998;
        case 0x2e29acu: goto label_2e29ac;
        default: break;
    }

    ctx->pc = 0x2e2940u;

label_2e2940:
    // 0x2e2940: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e2940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e2944: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e2944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e2948: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e2948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e294c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2e294cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2e2950: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2e2950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2e2954: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2E2954u;
    {
        const bool branch_taken_0x2e2954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2954) {
            ctx->pc = 0x2E29B0u;
            goto label_2e29b0;
        }
    }
    ctx->pc = 0x2E295Cu;
label_2e295c:
    // 0x2e295c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2e295cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e2960: 0xc0b81b8  jal         func_2E06E0
    ctx->pc = 0x2E2960u;
    SET_GPR_U32(ctx, 31, 0x2E2968u);
    ctx->pc = 0x2E06E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E06E0u, 0x2E2960u, 0x2E2968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2968u;
label_2e2968:
    // 0x2e2968: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2e2968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e296c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2e296cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e2970: 0xc0b8a50  jal         func_2E2940
    ctx->pc = 0x2E2970u;
    SET_GPR_U32(ctx, 31, 0x2E2978u);
    ctx->pc = 0x2E2940u;
    goto label_2e2940;
    ctx->pc = 0x2E2978u;
label_2e2978:
    // 0x2e2978: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2e2978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e297c: 0xc0b81c0  jal         func_2E0700
    ctx->pc = 0x2E297Cu;
    SET_GPR_U32(ctx, 31, 0x2E2984u);
    ctx->pc = 0x2E0700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0700u, 0x2E297Cu, 0x2E2984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2984u;
label_2e2984:
    // 0x2e2984: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2e2984u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e2988: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2e2988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e298c: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x2e298cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2e2990: 0xc0b8110  jal         func_2E0440
    ctx->pc = 0x2E2990u;
    SET_GPR_U32(ctx, 31, 0x2E2998u);
    ctx->pc = 0x2E0440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0440u, 0x2E2990u, 0x2E2998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2998u;
label_2e2998:
    // 0x2e2998: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2e2998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e299c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2e299cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e29a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2e29a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e29a4: 0xc0b8adc  jal         func_2E2B70
    ctx->pc = 0x2E29A4u;
    SET_GPR_U32(ctx, 31, 0x2E29ACu);
    ctx->pc = 0x2E2B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2B70u, 0x2E29A4u, 0x2E29ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E29ACu;
label_2e29ac:
    // 0x2e29ac: 0xafb00030  sw          $s0, 0x30($sp)
    ctx->pc = 0x2e29acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
label_2e29b0:
    // 0x2e29b0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2e29b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e29b4: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2E29B4u;
    {
        const bool branch_taken_0x2e29b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e29b4) {
            ctx->pc = 0x2E295Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e295c;
        }
    }
    ctx->pc = 0x2E29BCu;
    // 0x2e29bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e29bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e29c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e29c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e29c4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2e29c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e29c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E29C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E29C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E29D0u;
}

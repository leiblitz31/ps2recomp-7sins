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

// Function: sub_0023D030
// Address: 0x23d030 - 0x23d0f0
void sub_0023D030_0x23d030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023D030_0x23d030");
#endif

    switch (ctx->pc) {
        case 0x23d060u: goto label_23d060;
        case 0x23d06cu: goto label_23d06c;
        case 0x23d078u: goto label_23d078;
        case 0x23d090u: goto label_23d090;
        case 0x23d0a8u: goto label_23d0a8;
        case 0x23d0c4u: goto label_23d0c4;
        default: break;
    }

    ctx->pc = 0x23d030u;

    // 0x23d030: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x23d030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x23d034: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x23d034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x23d038: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23d038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x23d03c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23d03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23d040: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23d040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23d044: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x23d044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x23d048: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x23d048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x23d04c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x23d04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23d050: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x23d050u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23d054: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x23d054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23d058: 0xc08f03c  jal         func_23C0F0
    ctx->pc = 0x23D058u;
    SET_GPR_U32(ctx, 31, 0x23D060u);
    ctx->pc = 0x23C0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C0F0u, 0x23D058u, 0x23D060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D060u;
label_23d060:
    // 0x23d060: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x23d060u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23d064: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x23D064u;
    {
        const bool branch_taken_0x23d064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d064) {
            ctx->pc = 0x23D0C8u;
            goto label_23d0c8;
        }
    }
    ctx->pc = 0x23D06Cu;
label_23d06c:
    // 0x23d06c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23d06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d070: 0xc08f44c  jal         func_23D130
    ctx->pc = 0x23D070u;
    SET_GPR_U32(ctx, 31, 0x23D078u);
    ctx->pc = 0x23D130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D130u, 0x23D070u, 0x23D078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D078u;
label_23d078:
    // 0x23d078: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x23d078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23d07c: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x23d07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x23d080: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23d080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d084: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x23d084u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23d088: 0xc0426d8  jal         func_109B60
    ctx->pc = 0x23D088u;
    SET_GPR_U32(ctx, 31, 0x23D090u);
    ctx->pc = 0x109B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109B60u, 0x23D088u, 0x23D090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D090u;
label_23d090:
    // 0x23d090: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23D090u;
    {
        const bool branch_taken_0x23d090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d090) {
            ctx->pc = 0x23D0B8u;
            goto label_23d0b8;
        }
    }
    ctx->pc = 0x23D098u;
    // 0x23d098: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x23d098u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d09c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23d09cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d0a0: 0xc08f444  jal         func_23D110
    ctx->pc = 0x23D0A0u;
    SET_GPR_U32(ctx, 31, 0x23D0A8u);
    ctx->pc = 0x23D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D110u, 0x23D0A0u, 0x23D0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D0A8u;
label_23d0a8:
    // 0x23d0a8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x23d0a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23d0ac: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x23d0acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d0b0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23D0B0u;
    {
        const bool branch_taken_0x23d0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d0b0) {
            ctx->pc = 0x23D0C8u;
            goto label_23d0c8;
        }
    }
    ctx->pc = 0x23D0B8u;
label_23d0b8:
    // 0x23d0b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23d0b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d0bc: 0xc08f43c  jal         func_23D0F0
    ctx->pc = 0x23D0BCu;
    SET_GPR_U32(ctx, 31, 0x23D0C4u);
    ctx->pc = 0x23D0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D0F0u, 0x23D0BCu, 0x23D0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D0C4u;
label_23d0c4:
    // 0x23d0c4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x23d0c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23d0c8:
    // 0x23d0c8: 0x1600ffe8  bnez        $s0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x23D0C8u;
    {
        const bool branch_taken_0x23d0c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d0c8) {
            ctx->pc = 0x23D06Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d06c;
        }
    }
    ctx->pc = 0x23D0D0u;
    // 0x23d0d0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x23d0d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d0d4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x23d0d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23d0d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23d0d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23d0dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23d0dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23d0e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23d0e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d0e4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x23d0e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x23d0e8: 0x3e00008  jr          $ra
    ctx->pc = 0x23D0E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D0E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D0F0u;
}

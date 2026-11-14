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

// Function: sub_0014ADF0
// Address: 0x14adf0 - 0x14aeb0
void sub_0014ADF0_0x14adf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014ADF0_0x14adf0");
#endif

    switch (ctx->pc) {
        case 0x14ae20u: goto label_14ae20;
        case 0x14ae2cu: goto label_14ae2c;
        case 0x14ae38u: goto label_14ae38;
        case 0x14ae50u: goto label_14ae50;
        case 0x14ae68u: goto label_14ae68;
        case 0x14ae84u: goto label_14ae84;
        default: break;
    }

    ctx->pc = 0x14adf0u;

    // 0x14adf0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x14adf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x14adf4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x14adf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x14adf8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14adf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14adfc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14adfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14ae00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14ae00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14ae04: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x14ae04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x14ae08: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x14ae08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x14ae0c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x14ae0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14ae10: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x14ae10u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14ae14: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x14ae14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14ae18: 0xc0528e8  jal         func_14A3A0
    ctx->pc = 0x14AE18u;
    SET_GPR_U32(ctx, 31, 0x14AE20u);
    ctx->pc = 0x14A3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A3A0u, 0x14AE18u, 0x14AE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AE20u;
label_14ae20:
    // 0x14ae20: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x14ae20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14ae24: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x14AE24u;
    {
        const bool branch_taken_0x14ae24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ae24) {
            ctx->pc = 0x14AE88u;
            goto label_14ae88;
        }
    }
    ctx->pc = 0x14AE2Cu;
label_14ae2c:
    // 0x14ae2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14ae2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ae30: 0xc052bbc  jal         func_14AEF0
    ctx->pc = 0x14AE30u;
    SET_GPR_U32(ctx, 31, 0x14AE38u);
    ctx->pc = 0x14AEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AEF0u, 0x14AE30u, 0x14AE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AE38u;
label_14ae38:
    // 0x14ae38: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x14ae38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14ae3c: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x14ae3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x14ae40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14ae40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ae44: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x14ae44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14ae48: 0xc052b28  jal         func_14ACA0
    ctx->pc = 0x14AE48u;
    SET_GPR_U32(ctx, 31, 0x14AE50u);
    ctx->pc = 0x14ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ACA0u, 0x14AE48u, 0x14AE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AE50u;
label_14ae50:
    // 0x14ae50: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14AE50u;
    {
        const bool branch_taken_0x14ae50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ae50) {
            ctx->pc = 0x14AE78u;
            goto label_14ae78;
        }
    }
    ctx->pc = 0x14AE58u;
    // 0x14ae58: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x14ae58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ae5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14ae5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ae60: 0xc052bb4  jal         func_14AED0
    ctx->pc = 0x14AE60u;
    SET_GPR_U32(ctx, 31, 0x14AE68u);
    ctx->pc = 0x14AED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AED0u, 0x14AE60u, 0x14AE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AE68u;
label_14ae68:
    // 0x14ae68: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x14ae68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14ae6c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x14ae6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ae70: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14AE70u;
    {
        const bool branch_taken_0x14ae70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ae70) {
            ctx->pc = 0x14AE88u;
            goto label_14ae88;
        }
    }
    ctx->pc = 0x14AE78u;
label_14ae78:
    // 0x14ae78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14ae78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ae7c: 0xc052bac  jal         func_14AEB0
    ctx->pc = 0x14AE7Cu;
    SET_GPR_U32(ctx, 31, 0x14AE84u);
    ctx->pc = 0x14AEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AEB0u, 0x14AE7Cu, 0x14AE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AE84u;
label_14ae84:
    // 0x14ae84: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x14ae84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14ae88:
    // 0x14ae88: 0x1600ffe8  bnez        $s0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x14AE88u;
    {
        const bool branch_taken_0x14ae88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ae88) {
            ctx->pc = 0x14AE2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14ae2c;
        }
    }
    ctx->pc = 0x14AE90u;
    // 0x14ae90: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x14ae90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ae94: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x14ae94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14ae98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14ae98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14ae9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14ae9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14aea0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14aea0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14aea4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x14aea4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x14aea8: 0x3e00008  jr          $ra
    ctx->pc = 0x14AEA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14AEA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14AEB0u;
}

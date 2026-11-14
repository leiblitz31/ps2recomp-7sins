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

// Function: sub_00218F60
// Address: 0x218f60 - 0x219070
void sub_00218F60_0x218f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218F60_0x218f60");
#endif

    switch (ctx->pc) {
        case 0x218f90u: goto label_218f90;
        case 0x218f9cu: goto label_218f9c;
        case 0x218fa8u: goto label_218fa8;
        case 0x218fc0u: goto label_218fc0;
        case 0x218fd8u: goto label_218fd8;
        case 0x218ff4u: goto label_218ff4;
        case 0x21901cu: goto label_21901c;
        case 0x219034u: goto label_219034;
        default: break;
    }

    ctx->pc = 0x218f60u;

    // 0x218f60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x218f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x218f64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x218f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x218f68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x218f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x218f6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x218f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x218f70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x218f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x218f74: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x218f74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x218f78: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x218f78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x218f7c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x218f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x218f80: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x218f80u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x218f84: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x218f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x218f88: 0xc0863ac  jal         func_218EB0
    ctx->pc = 0x218F88u;
    SET_GPR_U32(ctx, 31, 0x218F90u);
    ctx->pc = 0x218EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218EB0u, 0x218F88u, 0x218F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218F90u;
label_218f90:
    // 0x218f90: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x218f90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x218f94: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x218F94u;
    {
        const bool branch_taken_0x218f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x218f94) {
            ctx->pc = 0x218FF8u;
            goto label_218ff8;
        }
    }
    ctx->pc = 0x218F9Cu;
label_218f9c:
    // 0x218f9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x218f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218fa0: 0xc08638c  jal         func_218E30
    ctx->pc = 0x218FA0u;
    SET_GPR_U32(ctx, 31, 0x218FA8u);
    ctx->pc = 0x218E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E30u, 0x218FA0u, 0x218FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218FA8u;
label_218fa8:
    // 0x218fa8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x218fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x218fac: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x218facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x218fb0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x218fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218fb4: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x218fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x218fb8: 0xc0426d8  jal         func_109B60
    ctx->pc = 0x218FB8u;
    SET_GPR_U32(ctx, 31, 0x218FC0u);
    ctx->pc = 0x109B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109B60u, 0x218FB8u, 0x218FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218FC0u;
label_218fc0:
    // 0x218fc0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x218FC0u;
    {
        const bool branch_taken_0x218fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x218fc0) {
            ctx->pc = 0x218FE8u;
            goto label_218fe8;
        }
    }
    ctx->pc = 0x218FC8u;
    // 0x218fc8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x218fc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218fcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x218fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218fd0: 0xc086384  jal         func_218E10
    ctx->pc = 0x218FD0u;
    SET_GPR_U32(ctx, 31, 0x218FD8u);
    ctx->pc = 0x218E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E10u, 0x218FD0u, 0x218FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218FD8u;
label_218fd8:
    // 0x218fd8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x218fd8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x218fdc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x218fdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218fe0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x218FE0u;
    {
        const bool branch_taken_0x218fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x218fe0) {
            ctx->pc = 0x218FF8u;
            goto label_218ff8;
        }
    }
    ctx->pc = 0x218FE8u;
label_218fe8:
    // 0x218fe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x218fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218fec: 0xc08637c  jal         func_218DF0
    ctx->pc = 0x218FECu;
    SET_GPR_U32(ctx, 31, 0x218FF4u);
    ctx->pc = 0x218DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218DF0u, 0x218FECu, 0x218FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218FF4u;
label_218ff4:
    // 0x218ff4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x218ff4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_218ff8:
    // 0x218ff8: 0x1600ffe8  bnez        $s0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x218FF8u;
    {
        const bool branch_taken_0x218ff8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x218ff8) {
            ctx->pc = 0x218F9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_218f9c;
        }
    }
    ctx->pc = 0x219000u;
    // 0x219000: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x219000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x219004: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x219004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x219008: 0x1222000c  beq         $s1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x219008u;
    {
        const bool branch_taken_0x219008 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x219008) {
            ctx->pc = 0x21903Cu;
            goto label_21903c;
        }
    }
    ctx->pc = 0x219010u;
    // 0x219010: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x219010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219014: 0xc08638c  jal         func_218E30
    ctx->pc = 0x219014u;
    SET_GPR_U32(ctx, 31, 0x21901Cu);
    ctx->pc = 0x218E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E30u, 0x219014u, 0x21901Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21901Cu;
label_21901c:
    // 0x21901c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x21901cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x219020: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x219020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x219024: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x219024u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x219028: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x219028u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21902c: 0xc0426d8  jal         func_109B60
    ctx->pc = 0x21902Cu;
    SET_GPR_U32(ctx, 31, 0x219034u);
    ctx->pc = 0x109B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109B60u, 0x21902Cu, 0x219034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219034u;
label_219034:
    // 0x219034: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x219034u;
    {
        const bool branch_taken_0x219034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x219034) {
            ctx->pc = 0x219044u;
            goto label_219044;
        }
    }
    ctx->pc = 0x21903Cu;
label_21903c:
    // 0x21903c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x21903cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x219040: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x219040u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_219044:
    // 0x219044: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x219044u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219048: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x219048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21904c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21904cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x219050: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x219050u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219054: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x219054u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219058: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x219058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x21905c: 0x3e00008  jr          $ra
    ctx->pc = 0x21905Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21905Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219064u;
    // 0x219064: 0x0  nop
    ctx->pc = 0x219064u;
    // NOP
    // 0x219068: 0x0  nop
    ctx->pc = 0x219068u;
    // NOP
    // 0x21906c: 0x0  nop
    ctx->pc = 0x21906cu;
    // NOP
    ctx->pc = 0x219070u;
}

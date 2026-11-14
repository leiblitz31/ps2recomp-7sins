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

// Function: sub_0023ED70
// Address: 0x23ed70 - 0x23ef80
void sub_0023ED70_0x23ed70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023ED70_0x23ed70");
#endif

    switch (ctx->pc) {
        case 0x23edacu: goto label_23edac;
        case 0x23edc0u: goto label_23edc0;
        case 0x23edd4u: goto label_23edd4;
        case 0x23ede4u: goto label_23ede4;
        case 0x23edfcu: goto label_23edfc;
        case 0x23ee14u: goto label_23ee14;
        case 0x23ee2cu: goto label_23ee2c;
        case 0x23ee4cu: goto label_23ee4c;
        case 0x23ee64u: goto label_23ee64;
        case 0x23ee74u: goto label_23ee74;
        case 0x23ee9cu: goto label_23ee9c;
        case 0x23eeb0u: goto label_23eeb0;
        case 0x23eec4u: goto label_23eec4;
        case 0x23eed0u: goto label_23eed0;
        case 0x23eee4u: goto label_23eee4;
        case 0x23eefcu: goto label_23eefc;
        case 0x23ef24u: goto label_23ef24;
        case 0x23ef38u: goto label_23ef38;
        case 0x23ef54u: goto label_23ef54;
        default: break;
    }

    ctx->pc = 0x23ed70u;

    // 0x23ed70: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x23ed70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x23ed74: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x23ed74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x23ed78: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x23ed78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x23ed7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x23ed7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x23ed80: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23ed80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x23ed84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23ed84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23ed88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23ed88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23ed8c: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x23ed8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x23ed90: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x23ed90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x23ed94: 0xafa600a0  sw          $a2, 0xA0($sp)
    ctx->pc = 0x23ed94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
    // 0x23ed98: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x23ed98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x23ed9c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x23ed9cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23eda0: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x23eda0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x23eda4: 0xc08f03c  jal         func_23C0F0
    ctx->pc = 0x23EDA4u;
    SET_GPR_U32(ctx, 31, 0x23EDACu);
    ctx->pc = 0x23C0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C0F0u, 0x23EDA4u, 0x23EDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EDACu;
label_23edac:
    // 0x23edac: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x23edacu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23edb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23edb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23edb4: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x23edb4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23edb8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x23EDB8u;
    {
        const bool branch_taken_0x23edb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23edb8) {
            ctx->pc = 0x23EE34u;
            goto label_23ee34;
        }
    }
    ctx->pc = 0x23EDC0u;
label_23edc0:
    // 0x23edc0: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x23edc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23edc4: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x23edc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x23edc8: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x23edc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x23edcc: 0xc08f45c  jal         func_23D170
    ctx->pc = 0x23EDCCu;
    SET_GPR_U32(ctx, 31, 0x23EDD4u);
    ctx->pc = 0x23D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D170u, 0x23EDCCu, 0x23EDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EDD4u;
label_23edd4:
    // 0x23edd4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x23edd4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23edd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23edd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23eddc: 0xc08f44c  jal         func_23D130
    ctx->pc = 0x23EDDCu;
    SET_GPR_U32(ctx, 31, 0x23EDE4u);
    ctx->pc = 0x23D130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D130u, 0x23EDDCu, 0x23EDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EDE4u;
label_23ede4:
    // 0x23ede4: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x23ede4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x23ede8: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x23ede8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x23edec: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x23edecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23edf0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x23edf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23edf4: 0xc0426d8  jal         func_109B60
    ctx->pc = 0x23EDF4u;
    SET_GPR_U32(ctx, 31, 0x23EDFCu);
    ctx->pc = 0x109B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109B60u, 0x23EDF4u, 0x23EDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EDFCu;
label_23edfc:
    // 0x23edfc: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x23edfcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23ee00: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x23EE00u;
    {
        const bool branch_taken_0x23ee00 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ee00) {
            ctx->pc = 0x23EE20u;
            goto label_23ee20;
        }
    }
    ctx->pc = 0x23EE08u;
    // 0x23ee08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23ee08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ee0c: 0xc08f444  jal         func_23D110
    ctx->pc = 0x23EE0Cu;
    SET_GPR_U32(ctx, 31, 0x23EE14u);
    ctx->pc = 0x23D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D110u, 0x23EE0Cu, 0x23EE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EE14u;
label_23ee14:
    // 0x23ee14: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x23ee14u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23ee18: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23EE18u;
    {
        const bool branch_taken_0x23ee18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ee18) {
            ctx->pc = 0x23EE30u;
            goto label_23ee30;
        }
    }
    ctx->pc = 0x23EE20u;
label_23ee20:
    // 0x23ee20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23ee20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ee24: 0xc08f43c  jal         func_23D0F0
    ctx->pc = 0x23EE24u;
    SET_GPR_U32(ctx, 31, 0x23EE2Cu);
    ctx->pc = 0x23D0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D0F0u, 0x23EE24u, 0x23EE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EE2Cu;
label_23ee2c:
    // 0x23ee2c: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x23ee2cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23ee30:
    // 0x23ee30: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x23ee30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23ee34:
    // 0x23ee34: 0x1600ffe2  bnez        $s0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x23EE34u;
    {
        const bool branch_taken_0x23ee34 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ee34) {
            ctx->pc = 0x23EDC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23edc0;
        }
    }
    ctx->pc = 0x23EE3Cu;
    // 0x23ee3c: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x23ee3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x23ee40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23ee40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ee44: 0xc08f3dc  jal         func_23CF70
    ctx->pc = 0x23EE44u;
    SET_GPR_U32(ctx, 31, 0x23EE4Cu);
    ctx->pc = 0x23CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF70u, 0x23EE44u, 0x23EE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EE4Cu;
label_23ee4c:
    // 0x23ee4c: 0x1240001d  beqz        $s2, . + 4 + (0x1D << 2)
    ctx->pc = 0x23EE4Cu;
    {
        const bool branch_taken_0x23ee4c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ee4c) {
            ctx->pc = 0x23EEC4u;
            goto label_23eec4;
        }
    }
    ctx->pc = 0x23EE54u;
    // 0x23ee54: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x23ee54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x23ee58: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x23ee58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x23ee5c: 0xc08f858  jal         func_23E160
    ctx->pc = 0x23EE5Cu;
    SET_GPR_U32(ctx, 31, 0x23EE64u);
    ctx->pc = 0x23E160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E160u, 0x23EE5Cu, 0x23EE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EE64u;
label_23ee64:
    // 0x23ee64: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x23ee64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x23ee68: 0x27a50074  addiu       $a1, $sp, 0x74
    ctx->pc = 0x23ee68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x23ee6c: 0xc0426a0  jal         func_109A80
    ctx->pc = 0x23EE6Cu;
    SET_GPR_U32(ctx, 31, 0x23EE74u);
    ctx->pc = 0x109A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109A80u, 0x23EE6Cu, 0x23EE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EE74u;
label_23ee74:
    // 0x23ee74: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x23EE74u;
    {
        const bool branch_taken_0x23ee74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ee74) {
            ctx->pc = 0x23EEB8u;
            goto label_23eeb8;
        }
    }
    ctx->pc = 0x23EE7Cu;
    // 0x23ee7c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x23ee7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x23ee80: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x23ee80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x23ee84: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x23ee84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ee88: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x23ee88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ee8c: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x23ee8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x23ee90: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x23ee90u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ee94: 0xc08fbf4  jal         func_23EFD0
    ctx->pc = 0x23EE94u;
    SET_GPR_U32(ctx, 31, 0x23EE9Cu);
    ctx->pc = 0x23EFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EFD0u, 0x23EE94u, 0x23EE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EE9Cu;
label_23ee9c:
    // 0x23ee9c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x23ee9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23eea0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x23eea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x23eea4: 0x27869dbc  addiu       $a2, $gp, -0x6244
    ctx->pc = 0x23eea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942140));
    // 0x23eea8: 0xc08fbe0  jal         func_23EF80
    ctx->pc = 0x23EEA8u;
    SET_GPR_U32(ctx, 31, 0x23EEB0u);
    ctx->pc = 0x23EF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EF80u, 0x23EEA8u, 0x23EEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EEB0u;
label_23eeb0:
    // 0x23eeb0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x23EEB0u;
    {
        const bool branch_taken_0x23eeb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23eeb0) {
            ctx->pc = 0x23EF54u;
            goto label_23ef54;
        }
    }
    ctx->pc = 0x23EEB8u;
label_23eeb8:
    // 0x23eeb8: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x23eeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x23eebc: 0xc08faec  jal         func_23EBB0
    ctx->pc = 0x23EEBCu;
    SET_GPR_U32(ctx, 31, 0x23EEC4u);
    ctx->pc = 0x23EBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EBB0u, 0x23EEBCu, 0x23EEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EEC4u;
label_23eec4:
    // 0x23eec4: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x23eec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x23eec8: 0xc08fb14  jal         func_23EC50
    ctx->pc = 0x23EEC8u;
    SET_GPR_U32(ctx, 31, 0x23EED0u);
    ctx->pc = 0x23EC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EC50u, 0x23EEC8u, 0x23EED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EED0u;
label_23eed0:
    // 0x23eed0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x23eed0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23eed4: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x23eed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x23eed8: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x23eed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x23eedc: 0xc08f45c  jal         func_23D170
    ctx->pc = 0x23EEDCu;
    SET_GPR_U32(ctx, 31, 0x23EEE4u);
    ctx->pc = 0x23D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D170u, 0x23EEDCu, 0x23EEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EEE4u;
label_23eee4:
    // 0x23eee4: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x23eee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x23eee8: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x23eee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x23eeec: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x23eeecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23eef0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x23eef0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23eef4: 0xc0426d8  jal         func_109B60
    ctx->pc = 0x23EEF4u;
    SET_GPR_U32(ctx, 31, 0x23EEFCu);
    ctx->pc = 0x109B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109B60u, 0x23EEF4u, 0x23EEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EEFCu;
label_23eefc:
    // 0x23eefc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x23EEFCu;
    {
        const bool branch_taken_0x23eefc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23eefc) {
            ctx->pc = 0x23EF40u;
            goto label_23ef40;
        }
    }
    ctx->pc = 0x23EF04u;
    // 0x23ef04: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x23ef04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x23ef08: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x23ef08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x23ef0c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x23ef0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ef10: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x23ef10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ef14: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x23ef14u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x23ef18: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x23ef18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ef1c: 0xc08fbf4  jal         func_23EFD0
    ctx->pc = 0x23EF1Cu;
    SET_GPR_U32(ctx, 31, 0x23EF24u);
    ctx->pc = 0x23EFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EFD0u, 0x23EF1Cu, 0x23EF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EF24u;
label_23ef24:
    // 0x23ef24: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x23ef24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23ef28: 0x27a50068  addiu       $a1, $sp, 0x68
    ctx->pc = 0x23ef28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x23ef2c: 0x27869dc0  addiu       $a2, $gp, -0x6240
    ctx->pc = 0x23ef2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942144));
    // 0x23ef30: 0xc08fbe0  jal         func_23EF80
    ctx->pc = 0x23EF30u;
    SET_GPR_U32(ctx, 31, 0x23EF38u);
    ctx->pc = 0x23EF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EF80u, 0x23EF30u, 0x23EF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EF38u;
label_23ef38:
    // 0x23ef38: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x23EF38u;
    {
        const bool branch_taken_0x23ef38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ef38) {
            ctx->pc = 0x23EF54u;
            goto label_23ef54;
        }
    }
    ctx->pc = 0x23EF40u;
label_23ef40:
    // 0x23ef40: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x23ef40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23ef44: 0x27a5007c  addiu       $a1, $sp, 0x7C
    ctx->pc = 0x23ef44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x23ef48: 0x27869dc4  addiu       $a2, $gp, -0x623C
    ctx->pc = 0x23ef48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942148));
    // 0x23ef4c: 0xc08fbe0  jal         func_23EF80
    ctx->pc = 0x23EF4Cu;
    SET_GPR_U32(ctx, 31, 0x23EF54u);
    ctx->pc = 0x23EF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EF80u, 0x23EF4Cu, 0x23EF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EF54u;
label_23ef54:
    // 0x23ef54: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x23ef54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23ef58: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x23ef58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23ef5c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23ef5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23ef60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23ef60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23ef64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23ef64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ef68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23ef68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ef6c: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x23ef6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x23ef70: 0x3e00008  jr          $ra
    ctx->pc = 0x23EF70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23EF70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23EF78u;
    // 0x23ef78: 0x0  nop
    ctx->pc = 0x23ef78u;
    // NOP
    // 0x23ef7c: 0x0  nop
    ctx->pc = 0x23ef7cu;
    // NOP
    ctx->pc = 0x23ef80u;
}

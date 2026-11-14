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

// Function: sub_0047FE00
// Address: 0x47fe00 - 0x47fff0
void sub_0047FE00_0x47fe00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047FE00_0x47fe00");
#endif

    switch (ctx->pc) {
        case 0x47fe34u: goto label_47fe34;
        case 0x47fe70u: goto label_47fe70;
        case 0x47fe84u: goto label_47fe84;
        case 0x47fea4u: goto label_47fea4;
        case 0x47feb8u: goto label_47feb8;
        case 0x47fec8u: goto label_47fec8;
        case 0x47ff10u: goto label_47ff10;
        case 0x47ff4cu: goto label_47ff4c;
        case 0x47ff60u: goto label_47ff60;
        case 0x47ff80u: goto label_47ff80;
        case 0x47ff94u: goto label_47ff94;
        case 0x47ffa4u: goto label_47ffa4;
        default: break;
    }

    ctx->pc = 0x47fe00u;

    // 0x47fe00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x47fe00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x47fe04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x47fe04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x47fe08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47fe08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x47fe0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47fe0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x47fe10: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x47fe10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x47fe14: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x47fe14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x47fe18: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x47fe18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x47fe1c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x47fe1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x47fe20: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x47FE20u;
    {
        const bool branch_taken_0x47fe20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x47fe20) {
            ctx->pc = 0x47FEF8u;
            goto label_47fef8;
        }
    }
    ctx->pc = 0x47FE28u;
    // 0x47fe28: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x47fe28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x47fe2c: 0xc1200f8  jal         func_4803E0
    ctx->pc = 0x47FE2Cu;
    SET_GPR_U32(ctx, 31, 0x47FE34u);
    ctx->pc = 0x4803E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4803E0u, 0x47FE2Cu, 0x47FE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47FE34u;
label_47fe34:
    // 0x47fe34: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x47FE34u;
    {
        const bool branch_taken_0x47fe34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47fe34) {
            ctx->pc = 0x47FEF8u;
            goto label_47fef8;
        }
    }
    ctx->pc = 0x47FE3Cu;
    // 0x47fe3c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x47fe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x47fe40: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x47fe40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x47fe44: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x47FE44u;
    {
        const bool branch_taken_0x47fe44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47fe44) {
            ctx->pc = 0x47FE78u;
            goto label_47fe78;
        }
    }
    ctx->pc = 0x47FE4Cu;
    // 0x47fe4c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x47fe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x47fe50: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x47fe50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x47fe54: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x47FE54u;
    {
        const bool branch_taken_0x47fe54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47fe54) {
            ctx->pc = 0x47FE78u;
            goto label_47fe78;
        }
    }
    ctx->pc = 0x47FE5Cu;
    // 0x47fe5c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x47fe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x47fe60: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x47fe60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
    // 0x47fe64: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x47fe64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x47fe68: 0xc1200bc  jal         func_4802F0
    ctx->pc = 0x47FE68u;
    SET_GPR_U32(ctx, 31, 0x47FE70u);
    ctx->pc = 0x4802F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4802F0u, 0x47FE68u, 0x47FE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47FE70u;
label_47fe70:
    // 0x47fe70: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x47fe70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x47fe74: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x47fe74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_47fe78:
    // 0x47fe78: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x47fe78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x47fe7c: 0xc1200f8  jal         func_4803E0
    ctx->pc = 0x47FE7Cu;
    SET_GPR_U32(ctx, 31, 0x47FE84u);
    ctx->pc = 0x4803E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4803E0u, 0x47FE7Cu, 0x47FE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47FE84u;
label_47fe84:
    // 0x47fe84: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x47fe84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x47fe88: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x47fe88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x47fe8c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x47fe8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x47fe90: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x47fe90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x47fe94: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x47fe94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
    // 0x47fe98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x47fe98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47fe9c: 0xc120088  jal         func_480220
    ctx->pc = 0x47FE9Cu;
    SET_GPR_U32(ctx, 31, 0x47FEA4u);
    ctx->pc = 0x480220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x480220u, 0x47FE9Cu, 0x47FEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47FEA4u;
label_47fea4:
    // 0x47fea4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x47fea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x47fea8: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x47fea8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x47feac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x47feacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47feb0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x47FEB0u;
    {
        const bool branch_taken_0x47feb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47feb0) {
            ctx->pc = 0x47FEE4u;
            goto label_47fee4;
        }
    }
    ctx->pc = 0x47FEB8u;
label_47feb8:
    // 0x47feb8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x47feb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x47febc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x47febcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47fec0: 0xc120070  jal         func_4801C0
    ctx->pc = 0x47FEC0u;
    SET_GPR_U32(ctx, 31, 0x47FEC8u);
    ctx->pc = 0x4801C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4801C0u, 0x47FEC0u, 0x47FEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47FEC8u;
label_47fec8:
    // 0x47fec8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x47fec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x47fecc: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x47feccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x47fed0: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x47fed0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x47fed4: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x47fed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x47fed8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x47fed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x47fedc: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x47fedcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x47fee0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x47fee0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_47fee4:
    // 0x47fee4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x47fee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x47fee8: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x47fee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x47feec: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x47feecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x47fef0: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x47FEF0u;
    {
        const bool branch_taken_0x47fef0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x47fef0) {
            ctx->pc = 0x47FEB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47feb8;
        }
    }
    ctx->pc = 0x47FEF8u;
label_47fef8:
    // 0x47fef8: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x47fef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x47fefc: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x47FEFCu;
    {
        const bool branch_taken_0x47fefc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x47fefc) {
            ctx->pc = 0x47FFD4u;
            goto label_47ffd4;
        }
    }
    ctx->pc = 0x47FF04u;
    // 0x47ff04: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x47ff04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x47ff08: 0xc120060  jal         func_480180
    ctx->pc = 0x47FF08u;
    SET_GPR_U32(ctx, 31, 0x47FF10u);
    ctx->pc = 0x480180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x480180u, 0x47FF08u, 0x47FF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47FF10u;
label_47ff10:
    // 0x47ff10: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x47FF10u;
    {
        const bool branch_taken_0x47ff10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47ff10) {
            ctx->pc = 0x47FFD4u;
            goto label_47ffd4;
        }
    }
    ctx->pc = 0x47FF18u;
    // 0x47ff18: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x47ff18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x47ff1c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x47ff1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x47ff20: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x47FF20u;
    {
        const bool branch_taken_0x47ff20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47ff20) {
            ctx->pc = 0x47FF54u;
            goto label_47ff54;
        }
    }
    ctx->pc = 0x47FF28u;
    // 0x47ff28: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x47ff28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x47ff2c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x47ff2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x47ff30: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x47FF30u;
    {
        const bool branch_taken_0x47ff30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47ff30) {
            ctx->pc = 0x47FF54u;
            goto label_47ff54;
        }
    }
    ctx->pc = 0x47FF38u;
    // 0x47ff38: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x47ff38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x47ff3c: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x47ff3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
    // 0x47ff40: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x47ff40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x47ff44: 0xc120048  jal         func_480120
    ctx->pc = 0x47FF44u;
    SET_GPR_U32(ctx, 31, 0x47FF4Cu);
    ctx->pc = 0x480120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x480120u, 0x47FF44u, 0x47FF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47FF4Cu;
label_47ff4c:
    // 0x47ff4c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x47ff4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x47ff50: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x47ff50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
label_47ff54:
    // 0x47ff54: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x47ff54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x47ff58: 0xc120060  jal         func_480180
    ctx->pc = 0x47FF58u;
    SET_GPR_U32(ctx, 31, 0x47FF60u);
    ctx->pc = 0x480180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x480180u, 0x47FF58u, 0x47FF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47FF60u;
label_47ff60:
    // 0x47ff60: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x47ff60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x47ff64: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x47ff64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x47ff68: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x47ff68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x47ff6c: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x47ff6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x47ff70: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x47ff70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
    // 0x47ff74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x47ff74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47ff78: 0xc120014  jal         func_480050
    ctx->pc = 0x47FF78u;
    SET_GPR_U32(ctx, 31, 0x47FF80u);
    ctx->pc = 0x480050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x480050u, 0x47FF78u, 0x47FF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47FF80u;
label_47ff80:
    // 0x47ff80: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x47ff80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x47ff84: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x47ff84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x47ff88: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x47ff88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47ff8c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x47FF8Cu;
    {
        const bool branch_taken_0x47ff8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47ff8c) {
            ctx->pc = 0x47FFC0u;
            goto label_47ffc0;
        }
    }
    ctx->pc = 0x47FF94u;
label_47ff94:
    // 0x47ff94: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x47ff94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x47ff98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x47ff98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47ff9c: 0xc11fffc  jal         func_47FFF0
    ctx->pc = 0x47FF9Cu;
    SET_GPR_U32(ctx, 31, 0x47FFA4u);
    ctx->pc = 0x47FFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FFF0u, 0x47FF9Cu, 0x47FFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47FFA4u;
label_47ffa4:
    // 0x47ffa4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x47ffa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x47ffa8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x47ffa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x47ffac: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x47ffacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x47ffb0: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x47ffb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x47ffb4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x47ffb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x47ffb8: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x47ffb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x47ffbc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x47ffbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_47ffc0:
    // 0x47ffc0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x47ffc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x47ffc4: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x47ffc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x47ffc8: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x47ffc8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x47ffcc: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x47FFCCu;
    {
        const bool branch_taken_0x47ffcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x47ffcc) {
            ctx->pc = 0x47FF94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47ff94;
        }
    }
    ctx->pc = 0x47FFD4u;
label_47ffd4:
    // 0x47ffd4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x47ffd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47ffd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47ffd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47ffdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47ffdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47ffe0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x47ffe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x47ffe4: 0x3e00008  jr          $ra
    ctx->pc = 0x47FFE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47FFE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47FFECu;
    // 0x47ffec: 0x0  nop
    ctx->pc = 0x47ffecu;
    // NOP
    ctx->pc = 0x47fff0u;
}

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

// Function: sub_003FEA40
// Address: 0x3fea40 - 0x3feee0
void sub_003FEA40_0x3fea40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FEA40_0x3fea40");
#endif

    switch (ctx->pc) {
        case 0x3fea6cu: goto label_3fea6c;
        case 0x3fea78u: goto label_3fea78;
        case 0x3fea84u: goto label_3fea84;
        case 0x3fea90u: goto label_3fea90;
        case 0x3fea9cu: goto label_3fea9c;
        case 0x3feaa8u: goto label_3feaa8;
        case 0x3feab4u: goto label_3feab4;
        case 0x3feac0u: goto label_3feac0;
        case 0x3feaccu: goto label_3feacc;
        case 0x3fead8u: goto label_3fead8;
        case 0x3feae4u: goto label_3feae4;
        case 0x3feaf0u: goto label_3feaf0;
        case 0x3feafcu: goto label_3feafc;
        case 0x3feb0cu: goto label_3feb0c;
        case 0x3feb50u: goto label_3feb50;
        case 0x3feb68u: goto label_3feb68;
        case 0x3fec24u: goto label_3fec24;
        case 0x3fec44u: goto label_3fec44;
        case 0x3fec64u: goto label_3fec64;
        case 0x3fecbcu: goto label_3fecbc;
        case 0x3fed48u: goto label_3fed48;
        case 0x3fed54u: goto label_3fed54;
        case 0x3fed68u: goto label_3fed68;
        case 0x3fed8cu: goto label_3fed8c;
        case 0x3feda0u: goto label_3feda0;
        case 0x3fedb4u: goto label_3fedb4;
        case 0x3fedccu: goto label_3fedcc;
        case 0x3fede0u: goto label_3fede0;
        case 0x3fedf4u: goto label_3fedf4;
        case 0x3fee08u: goto label_3fee08;
        case 0x3fee24u: goto label_3fee24;
        case 0x3fee38u: goto label_3fee38;
        case 0x3fee50u: goto label_3fee50;
        case 0x3fee60u: goto label_3fee60;
        case 0x3fee8cu: goto label_3fee8c;
        case 0x3feed4u: goto label_3feed4;
        default: break;
    }

    ctx->pc = 0x3fea40u;

    // 0x3fea40: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x3fea40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x3fea44: 0x7fb400f0  sq          $s4, 0xF0($sp)
    ctx->pc = 0x3fea44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 20));
    // 0x3fea48: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3fea48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fea4c: 0x7fb500e0  sq          $s5, 0xE0($sp)
    ctx->pc = 0x3fea4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 21));
    // 0x3fea50: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x3fea50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
    // 0x3fea54: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x3fea54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
    // 0x3fea58: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x3fea58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
    // 0x3fea5c: 0x7fb30100  sq          $s3, 0x100($sp)
    ctx->pc = 0x3fea5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 19));
    // 0x3fea60: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x3fea60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x3fea64: 0xc0f652a  jal         func_3D94A8
    ctx->pc = 0x3FEA64u;
    SET_GPR_U32(ctx, 31, 0x3FEA6Cu);
    ctx->pc = 0x3FEA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FEA64u;
    // 0x3fea68: 0x26840110  addiu       $a0, $s4, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D94A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D94A8u, 0x3FEA64u, 0x3FEA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FEA6Cu;
label_3fea6c:
    // 0x3fea6c: 0x8e850158  lw          $a1, 0x158($s4)
    ctx->pc = 0x3fea6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 344)));
    // 0x3fea70: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3FEA70u;
    SET_GPR_U32(ctx, 31, 0x3FEA78u);
    ctx->pc = 0x3FEA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FEA70u;
    // 0x3fea74: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3FEA70u, 0x3FEA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FEA78u;
label_3fea78:
    // 0x3fea78: 0x8e8501bc  lw          $a1, 0x1BC($s4)
    ctx->pc = 0x3fea78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 444)));
    // 0x3fea7c: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3FEA7Cu;
    SET_GPR_U32(ctx, 31, 0x3FEA84u);
    ctx->pc = 0x3FEA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FEA7Cu;
    // 0x3fea80: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3FEA7Cu, 0x3FEA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FEA84u;
label_3fea84:
    // 0x3fea84: 0x8e8501b8  lw          $a1, 0x1B8($s4)
    ctx->pc = 0x3fea84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 440)));
    // 0x3fea88: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3FEA88u;
    SET_GPR_U32(ctx, 31, 0x3FEA90u);
    ctx->pc = 0x3FEA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FEA88u;
    // 0x3fea8c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3FEA88u, 0x3FEA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FEA90u;
label_3fea90:
    // 0x3fea90: 0x8e8501c0  lw          $a1, 0x1C0($s4)
    ctx->pc = 0x3fea90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 448)));
    // 0x3fea94: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3FEA94u;
    SET_GPR_U32(ctx, 31, 0x3FEA9Cu);
    ctx->pc = 0x3FEA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FEA94u;
    // 0x3fea98: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3FEA94u, 0x3FEA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FEA9Cu;
label_3fea9c:
    // 0x3fea9c: 0x8e8501c4  lw          $a1, 0x1C4($s4)
    ctx->pc = 0x3fea9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 452)));
    // 0x3feaa0: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3FEAA0u;
    SET_GPR_U32(ctx, 31, 0x3FEAA8u);
    ctx->pc = 0x3FEAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FEAA0u;
    // 0x3feaa4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3FEAA0u, 0x3FEAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FEAA8u;
label_3feaa8:
    // 0x3feaa8: 0x8e8501c8  lw          $a1, 0x1C8($s4)
    ctx->pc = 0x3feaa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 456)));
    // 0x3feaac: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3FEAACu;
    SET_GPR_U32(ctx, 31, 0x3FEAB4u);
    ctx->pc = 0x3FEAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FEAACu;
    // 0x3feab0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3FEAACu, 0x3FEAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FEAB4u;
label_3feab4:
    // 0x3feab4: 0x8e8501cc  lw          $a1, 0x1CC($s4)
    ctx->pc = 0x3feab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 460)));
    // 0x3feab8: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3FEAB8u;
    SET_GPR_U32(ctx, 31, 0x3FEAC0u);
    ctx->pc = 0x3FEABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FEAB8u;
    // 0x3feabc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3FEAB8u, 0x3FEAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FEAC0u;
label_3feac0:
    // 0x3feac0: 0x8e8502a0  lw          $a1, 0x2A0($s4)
    ctx->pc = 0x3feac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 672)));
    // 0x3feac4: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3FEAC4u;
    SET_GPR_U32(ctx, 31, 0x3FEACCu);
    ctx->pc = 0x3FEAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FEAC4u;
    // 0x3feac8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3FEAC4u, 0x3FEACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FEACCu;
label_3feacc:
    // 0x3feacc: 0x8e8502a4  lw          $a1, 0x2A4($s4)
    ctx->pc = 0x3feaccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 676)));
    // 0x3fead0: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3FEAD0u;
    SET_GPR_U32(ctx, 31, 0x3FEAD8u);
    ctx->pc = 0x3FEAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FEAD0u;
    // 0x3fead4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3FEAD0u, 0x3FEAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FEAD8u;
label_3fead8:
    // 0x3fead8: 0x8e8502a8  lw          $a1, 0x2A8($s4)
    ctx->pc = 0x3fead8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 680)));
    // 0x3feadc: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3FEADCu;
    SET_GPR_U32(ctx, 31, 0x3FEAE4u);
    ctx->pc = 0x3FEAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FEADCu;
    // 0x3feae0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3FEADCu, 0x3FEAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FEAE4u;
label_3feae4:
    // 0x3feae4: 0x8e8502ac  lw          $a1, 0x2AC($s4)
    ctx->pc = 0x3feae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 684)));
    // 0x3feae8: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3FEAE8u;
    SET_GPR_U32(ctx, 31, 0x3FEAF0u);
    ctx->pc = 0x3FEAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FEAE8u;
    // 0x3feaec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3FEAE8u, 0x3FEAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FEAF0u;
label_3feaf0:
    // 0x3feaf0: 0x8e8502b0  lw          $a1, 0x2B0($s4)
    ctx->pc = 0x3feaf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 688)));
    // 0x3feaf4: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3FEAF4u;
    SET_GPR_U32(ctx, 31, 0x3FEAFCu);
    ctx->pc = 0x3FEAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FEAF4u;
    // 0x3feaf8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3FEAF4u, 0x3FEAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FEAFCu;
label_3feafc:
    // 0x3feafc: 0x268400c0  addiu       $a0, $s4, 0xC0
    ctx->pc = 0x3feafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 192));
    // 0x3feb00: 0x27b500c0  addiu       $s5, $sp, 0xC0
    ctx->pc = 0x3feb00u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3feb04: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x3feb04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3feb08: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3feb08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3feb0c:
    // 0x3feb0c: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x3feb0cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3feb10: 0x78460010  lq          $a2, 0x10($v0)
    ctx->pc = 0x3feb10u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3feb14: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x3feb14u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x3feb18: 0x7c660010  sq          $a2, 0x10($v1)
    ctx->pc = 0x3feb18u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 6));
    // 0x3feb1c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x3feb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x3feb20: 0x1444fffa  bne         $v0, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3FEB20u;
    {
        const bool branch_taken_0x3feb20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x3FEB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEB20u;
        // 0x3feb24: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3feb20) {
            ctx->pc = 0x3FEB0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3feb0c;
        }
    }
    ctx->pc = 0x3FEB28u;
    // 0x3feb28: 0x8e9100d0  lw          $s1, 0xD0($s4)
    ctx->pc = 0x3feb28u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 208)));
    // 0x3feb2c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3feb2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3feb30: 0x8e9200d4  lw          $s2, 0xD4($s4)
    ctx->pc = 0x3feb30u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
    // 0x3feb34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3feb34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3feb38: 0x8e9300d8  lw          $s3, 0xD8($s4)
    ctx->pc = 0x3feb38u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 216)));
    // 0x3feb3c: 0x24060300  addiu       $a2, $zero, 0x300
    ctx->pc = 0x3feb3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x3feb40: 0x8e9002f0  lw          $s0, 0x2F0($s4)
    ctx->pc = 0x3feb40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 752)));
    // 0x3feb44: 0x78490000  lq          $t1, 0x0($v0)
    ctx->pc = 0x3feb44u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3feb48: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x3FEB48u;
    SET_GPR_U32(ctx, 31, 0x3FEB50u);
    ctx->pc = 0x3FEB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FEB48u;
    // 0x3feb4c: 0x7c690000  sq          $t1, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3FEB48u, 0x3FEB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FEB50u;
label_3feb50:
    // 0x3feb50: 0xae9100d0  sw          $s1, 0xD0($s4)
    ctx->pc = 0x3feb50u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 208), GPR_U32(ctx, 17));
    // 0x3feb54: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x3feb54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3feb58: 0xae9200d4  sw          $s2, 0xD4($s4)
    ctx->pc = 0x3feb58u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 212), GPR_U32(ctx, 18));
    // 0x3feb5c: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x3feb5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3feb60: 0xae9300d8  sw          $s3, 0xD8($s4)
    ctx->pc = 0x3feb60u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 216), GPR_U32(ctx, 19));
    // 0x3feb64: 0xae9002f0  sw          $s0, 0x2F0($s4)
    ctx->pc = 0x3feb64u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 752), GPR_U32(ctx, 16));
label_3feb68:
    // 0x3feb68: 0x78490000  lq          $t1, 0x0($v0)
    ctx->pc = 0x3feb68u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3feb6c: 0x784a0010  lq          $t2, 0x10($v0)
    ctx->pc = 0x3feb6cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3feb70: 0x7c690000  sq          $t1, 0x0($v1)
    ctx->pc = 0x3feb70u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 9));
    // 0x3feb74: 0x7c6a0010  sq          $t2, 0x10($v1)
    ctx->pc = 0x3feb74u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 10));
    // 0x3feb78: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x3feb78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x3feb7c: 0x1455fffa  bne         $v0, $s5, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3FEB7Cu;
    {
        const bool branch_taken_0x3feb7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x3FEB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEB7Cu;
        // 0x3feb80: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3feb7c) {
            ctx->pc = 0x3FEB68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3feb68;
        }
    }
    ctx->pc = 0x3FEB84u;
    // 0x3feb84: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x3feb84u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3feb88: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x3feb88u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
    // 0x3feb8c: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x3feb8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x3feb90: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x3feb90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x3feb94: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x3feb94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x3feb98: 0x7bb30100  lq          $s3, 0x100($sp)
    ctx->pc = 0x3feb98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x3feb9c: 0x7bb400f0  lq          $s4, 0xF0($sp)
    ctx->pc = 0x3feb9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x3feba0: 0x7bb500e0  lq          $s5, 0xE0($sp)
    ctx->pc = 0x3feba0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3feba4: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x3feba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3feba8: 0x3e00008  jr          $ra
    ctx->pc = 0x3FEBA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FEBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEBA8u;
        // 0x3febac: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FEBA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FEBB0u;
    // 0x3febb0: 0xdc820100  ld          $v0, 0x100($a0)
    ctx->pc = 0x3febb0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x3febb4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3febb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3febb8: 0xac850160  sw          $a1, 0x160($a0)
    ctx->pc = 0x3febb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 352), GPR_U32(ctx, 5));
    // 0x3febbc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3febbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3febc0: 0x3e00008  jr          $ra
    ctx->pc = 0x3FEBC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FEBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEBC0u;
        // 0x3febc4: 0xfc820100  sd          $v0, 0x100($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 256), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FEBC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FEBC8u;
    // 0x3febc8: 0xdc820100  ld          $v0, 0x100($a0)
    ctx->pc = 0x3febc8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x3febcc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3febccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3febd0: 0xac85016c  sw          $a1, 0x16C($a0)
    ctx->pc = 0x3febd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 364), GPR_U32(ctx, 5));
    // 0x3febd4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3febd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3febd8: 0x3e00008  jr          $ra
    ctx->pc = 0x3FEBD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FEBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEBD8u;
        // 0x3febdc: 0xfc820100  sd          $v0, 0x100($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 256), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FEBD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FEBE0u;
    // 0x3febe0: 0xdc820100  ld          $v0, 0x100($a0)
    ctx->pc = 0x3febe0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x3febe4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3febe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3febe8: 0xac850170  sw          $a1, 0x170($a0)
    ctx->pc = 0x3febe8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 368), GPR_U32(ctx, 5));
    // 0x3febec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3febecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3febf0: 0x3e00008  jr          $ra
    ctx->pc = 0x3FEBF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FEBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEBF0u;
        // 0x3febf4: 0xfc820100  sd          $v0, 0x100($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 256), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FEBF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FEBF8u;
    // 0x3febf8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3febf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3febfc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3febfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3fec00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3fec00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3fec04: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3fec04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fec08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3fec08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3fec0c: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x3fec0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3fec10: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3FEC10u;
    {
        const bool branch_taken_0x3fec10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FEC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEC10u;
        // 0x3fec14: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fec10) {
            ctx->pc = 0x3FEC2Cu;
            goto label_3fec2c;
        }
    }
    ctx->pc = 0x3FEC18u;
    // 0x3fec18: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3fec18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3fec1c: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3FEC1Cu;
    SET_GPR_U32(ctx, 31, 0x3FEC24u);
    ctx->pc = 0x3FEC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FEC1Cu;
    // 0x3fec20: 0x24a5fd20  addiu       $a1, $a1, -0x2E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3FEC1Cu, 0x3FEC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FEC24u;
label_3fec24:
    // 0x3fec24: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3FEC24u;
    {
        const bool branch_taken_0x3fec24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FEC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEC24u;
        // 0x3fec28: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fec24) {
            ctx->pc = 0x3FEC48u;
            goto label_3fec48;
        }
    }
    ctx->pc = 0x3FEC2Cu;
label_3fec2c:
    // 0x3fec2c: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x3fec2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x3fec30: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3FEC30u;
    {
        const bool branch_taken_0x3fec30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FEC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEC30u;
        // 0x3fec34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fec30) {
            ctx->pc = 0x3FEC44u;
            goto label_3fec44;
        }
    }
    ctx->pc = 0x3FEC38u;
    // 0x3fec38: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3fec38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3fec3c: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3FEC3Cu;
    SET_GPR_U32(ctx, 31, 0x3FEC44u);
    ctx->pc = 0x3FEC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FEC3Cu;
    // 0x3fec40: 0x24a5fd58  addiu       $a1, $a1, -0x2A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3FEC3Cu, 0x3FEC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FEC44u;
label_3fec44:
    // 0x3fec44: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3fec44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3fec48:
    // 0x3fec48: 0x56020007  bnel        $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3FEC48u;
    {
        const bool branch_taken_0x3fec48 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x3fec48) {
            ctx->pc = 0x3FEC4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FEC48u;
            // 0x3fec4c: 0xde220100  ld          $v0, 0x100($s1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FEC68u;
            goto label_3fec68;
        }
    }
    ctx->pc = 0x3FEC50u;
    // 0x3fec50: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3fec50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3fec54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3fec54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fec58: 0x24a5fd90  addiu       $a1, $a1, -0x270
    ctx->pc = 0x3fec58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966672));
    // 0x3fec5c: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3FEC5Cu;
    SET_GPR_U32(ctx, 31, 0x3FEC64u);
    ctx->pc = 0x3FEC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FEC5Cu;
    // 0x3fec60: 0x24100009  addiu       $s0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3FEC5Cu, 0x3FEC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FEC64u;
label_3fec64:
    // 0x3fec64: 0xde220100  ld          $v0, 0x100($s1)
    ctx->pc = 0x3fec64u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 256)));
label_3fec68:
    // 0x3fec68: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3fec68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3fec6c: 0xae300168  sw          $s0, 0x168($s1)
    ctx->pc = 0x3fec6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 360), GPR_U32(ctx, 16));
    // 0x3fec70: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3fec70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3fec74: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3fec74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3fec78: 0xfe220100  sd          $v0, 0x100($s1)
    ctx->pc = 0x3fec78u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 256), GPR_U64(ctx, 2));
    // 0x3fec7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3fec7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3fec80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3fec80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3fec84: 0x3e00008  jr          $ra
    ctx->pc = 0x3FEC84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FEC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEC84u;
        // 0x3fec88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FEC84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FEC8Cu;
    // 0x3fec8c: 0x0  nop
    ctx->pc = 0x3fec8cu;
    // NOP
    // 0x3fec90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3fec90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3fec94: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3fec94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3fec98: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3fec98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3fec9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3fec9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3feca0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3feca0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3feca4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3feca4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3feca8: 0x12220004  beq         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3FECA8u;
    {
        const bool branch_taken_0x3feca8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x3FECACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FECA8u;
        // 0x3fecac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3feca8) {
            ctx->pc = 0x3FECBCu;
            goto label_3fecbc;
        }
    }
    ctx->pc = 0x3FECB0u;
    // 0x3fecb0: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3fecb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3fecb4: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3FECB4u;
    SET_GPR_U32(ctx, 31, 0x3FECBCu);
    ctx->pc = 0x3FECB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FECB4u;
    // 0x3fecb8: 0x24a5fdc0  addiu       $a1, $a1, -0x240 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3FECB4u, 0x3FECBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FECBCu;
label_3fecbc:
    // 0x3fecbc: 0xde020100  ld          $v0, 0x100($s0)
    ctx->pc = 0x3fecbcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x3fecc0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3fecc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3fecc4: 0xae110164  sw          $s1, 0x164($s0)
    ctx->pc = 0x3fecc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 17));
    // 0x3fecc8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3fecc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3feccc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3fecccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3fecd0: 0xfe020100  sd          $v0, 0x100($s0)
    ctx->pc = 0x3fecd0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 256), GPR_U64(ctx, 2));
    // 0x3fecd4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3fecd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3fecd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3fecd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3fecdc: 0x3e00008  jr          $ra
    ctx->pc = 0x3FECDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FECE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FECDCu;
        // 0x3fece0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FECDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FECE4u;
    // 0x3fece4: 0x0  nop
    ctx->pc = 0x3fece4u;
    // NOP
    // 0x3fece8: 0x3e00008  jr          $ra
    ctx->pc = 0x3FECE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FECECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FECE8u;
        // 0x3fecec: 0xac85028c  sw          $a1, 0x28C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 652), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FECE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FECF0u;
    // 0x3fecf0: 0xdc820108  ld          $v0, 0x108($a0)
    ctx->pc = 0x3fecf0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 264)));
    // 0x3fecf4: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x3fecf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x3fecf8: 0xac8500ec  sw          $a1, 0xEC($a0)
    ctx->pc = 0x3fecf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 236), GPR_U32(ctx, 5));
    // 0x3fecfc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3fecfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3fed00: 0x3e00008  jr          $ra
    ctx->pc = 0x3FED00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FED04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FED00u;
        // 0x3fed04: 0xfc820108  sd          $v0, 0x108($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 264), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FED00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FED08u;
    // 0x3fed08: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3fed08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3fed0c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3fed0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x3fed10: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3fed10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x3fed14: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3fed14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fed18: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x3fed18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x3fed1c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3fed1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fed20: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3fed20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x3fed24: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x3fed24u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fed28: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3fed28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3fed2c: 0x32020400  andi        $v0, $s0, 0x400
    ctx->pc = 0x3fed2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1024);
    // 0x3fed30: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x3fed30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x3fed34: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x3fed34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x3fed38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3FED38u;
    {
        const bool branch_taken_0x3fed38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FED3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FED38u;
        // 0x3fed3c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fed38) {
            ctx->pc = 0x3FED48u;
            goto label_3fed48;
        }
    }
    ctx->pc = 0x3FED40u;
    // 0x3fed40: 0xc0ff36c  jal         func_3FCDB0
    ctx->pc = 0x3FED40u;
    SET_GPR_U32(ctx, 31, 0x3FED48u);
    ctx->pc = 0x3FCDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FCDB0u, 0x3FED40u, 0x3FED48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FED48u;
label_3fed48:
    // 0x3fed48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3fed48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fed4c: 0xc0ff572  jal         func_3FD5C8
    ctx->pc = 0x3FED4Cu;
    SET_GPR_U32(ctx, 31, 0x3FED54u);
    ctx->pc = 0x3FED50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FED4Cu;
    // 0x3fed50: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD5C8u, 0x3FED4Cu, 0x3FED54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FED54u;
label_3fed54:
    // 0x3fed54: 0x32020020  andi        $v0, $s0, 0x20
    ctx->pc = 0x3fed54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32);
    // 0x3fed58: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3FED58u;
    {
        const bool branch_taken_0x3fed58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FED5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FED58u;
        // 0x3fed5c: 0x32020040  andi        $v0, $s0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fed58) {
            ctx->pc = 0x3FED6Cu;
            goto label_3fed6c;
        }
    }
    ctx->pc = 0x3FED60u;
    // 0x3fed60: 0xc0ff3ca  jal         func_3FCF28
    ctx->pc = 0x3FED60u;
    SET_GPR_U32(ctx, 31, 0x3FED68u);
    ctx->pc = 0x3FED64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FED60u;
    // 0x3fed64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FCF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FCF28u, 0x3FED60u, 0x3FED68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FED68u;
label_3fed68:
    // 0x3fed68: 0x32020040  andi        $v0, $s0, 0x40
    ctx->pc = 0x3fed68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)64);
label_3fed6c:
    // 0x3fed6c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3FED6Cu;
    {
        const bool branch_taken_0x3fed6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FED70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FED6Cu;
        // 0x3fed70: 0x32020004  andi        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fed6c) {
            ctx->pc = 0x3FED90u;
            goto label_3fed90;
        }
    }
    ctx->pc = 0x3FED74u;
    // 0x3fed74: 0xdea20010  ld          $v0, 0x10($s5)
    ctx->pc = 0x3fed74u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x3fed78: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3fed78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3fed7c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3FED7Cu;
    {
        const bool branch_taken_0x3fed7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FED80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FED7Cu;
        // 0x3fed80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fed7c) {
            ctx->pc = 0x3FED8Cu;
            goto label_3fed8c;
        }
    }
    ctx->pc = 0x3FED84u;
    // 0x3fed84: 0xc0ff3b2  jal         func_3FCEC8
    ctx->pc = 0x3FED84u;
    SET_GPR_U32(ctx, 31, 0x3FED8Cu);
    ctx->pc = 0x3FED88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FED84u;
    // 0x3fed88: 0x26a50054  addiu       $a1, $s5, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FCEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FCEC8u, 0x3FED84u, 0x3FED8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FED8Cu;
label_3fed8c:
    // 0x3fed8c: 0x32020004  andi        $v0, $s0, 0x4
    ctx->pc = 0x3fed8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
label_3fed90:
    // 0x3fed90: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3FED90u;
    {
        const bool branch_taken_0x3fed90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FED94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FED90u;
        // 0x3fed94: 0x32020100  andi        $v0, $s0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fed90) {
            ctx->pc = 0x3FEDA4u;
            goto label_3feda4;
        }
    }
    ctx->pc = 0x3FED98u;
    // 0x3fed98: 0xc0ff39c  jal         func_3FCE70
    ctx->pc = 0x3FED98u;
    SET_GPR_U32(ctx, 31, 0x3FEDA0u);
    ctx->pc = 0x3FED9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FED98u;
    // 0x3fed9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FCE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FCE70u, 0x3FED98u, 0x3FEDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FEDA0u;
label_3feda0:
    // 0x3feda0: 0x32020100  andi        $v0, $s0, 0x100
    ctx->pc = 0x3feda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)256);
label_3feda4:
    // 0x3feda4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3FEDA4u;
    {
        const bool branch_taken_0x3feda4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FEDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEDA4u;
        // 0x3feda8: 0x32020800  andi        $v0, $s0, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3feda4) {
            ctx->pc = 0x3FEDB8u;
            goto label_3fedb8;
        }
    }
    ctx->pc = 0x3FEDACu;
    // 0x3fedac: 0xc0ff366  jal         func_3FCD98
    ctx->pc = 0x3FEDACu;
    SET_GPR_U32(ctx, 31, 0x3FEDB4u);
    ctx->pc = 0x3FEDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FEDACu;
    // 0x3fedb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FCD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FCD98u, 0x3FEDACu, 0x3FEDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FEDB4u;
label_3fedb4:
    // 0x3fedb4: 0x32020800  andi        $v0, $s0, 0x800
    ctx->pc = 0x3fedb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2048);
label_3fedb8:
    // 0x3fedb8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3FEDB8u;
    {
        const bool branch_taken_0x3fedb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FEDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEDB8u;
        // 0x3fedbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fedb8) {
            ctx->pc = 0x3FEDCCu;
            goto label_3fedcc;
        }
    }
    ctx->pc = 0x3FEDC0u;
    // 0x3fedc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3fedc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fedc4: 0xc0ff372  jal         func_3FCDC8
    ctx->pc = 0x3FEDC4u;
    SET_GPR_U32(ctx, 31, 0x3FEDCCu);
    ctx->pc = 0x3FEDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FEDC4u;
    // 0x3fedc8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FCDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FCDC8u, 0x3FEDC4u, 0x3FEDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FEDCCu;
label_3fedcc:
    // 0x3fedcc: 0x32020080  andi        $v0, $s0, 0x80
    ctx->pc = 0x3fedccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)128);
    // 0x3fedd0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3FEDD0u;
    {
        const bool branch_taken_0x3fedd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FEDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEDD0u;
        // 0x3fedd4: 0x32020200  andi        $v0, $s0, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fedd0) {
            ctx->pc = 0x3FEDE4u;
            goto label_3fede4;
        }
    }
    ctx->pc = 0x3FEDD8u;
    // 0x3fedd8: 0xc0ff360  jal         func_3FCD80
    ctx->pc = 0x3FEDD8u;
    SET_GPR_U32(ctx, 31, 0x3FEDE0u);
    ctx->pc = 0x3FEDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FEDD8u;
    // 0x3feddc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FCD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FCD80u, 0x3FEDD8u, 0x3FEDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FEDE0u;
label_3fede0:
    // 0x3fede0: 0x32020200  andi        $v0, $s0, 0x200
    ctx->pc = 0x3fede0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)512);
label_3fede4:
    // 0x3fede4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3FEDE4u;
    {
        const bool branch_taken_0x3fede4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FEDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEDE4u;
        // 0x3fede8: 0x32020008  andi        $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fede4) {
            ctx->pc = 0x3FEDF8u;
            goto label_3fedf8;
        }
    }
    ctx->pc = 0x3FEDECu;
    // 0x3fedec: 0xc0ff392  jal         func_3FCE48
    ctx->pc = 0x3FEDECu;
    SET_GPR_U32(ctx, 31, 0x3FEDF4u);
    ctx->pc = 0x3FEDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FEDECu;
    // 0x3fedf0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FCE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FCE48u, 0x3FEDECu, 0x3FEDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FEDF4u;
label_3fedf4:
    // 0x3fedf4: 0x32020008  andi        $v0, $s0, 0x8
    ctx->pc = 0x3fedf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
label_3fedf8:
    // 0x3fedf8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3FEDF8u;
    {
        const bool branch_taken_0x3fedf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fedf8) {
            ctx->pc = 0x3FEDFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FEDF8u;
            // 0x3fedfc: 0xdea20010  ld          $v0, 0x10($s5) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FEE0Cu;
            goto label_3fee0c;
        }
    }
    ctx->pc = 0x3FEE00u;
    // 0x3fee00: 0xc0ff3a8  jal         func_3FCEA0
    ctx->pc = 0x3FEE00u;
    SET_GPR_U32(ctx, 31, 0x3FEE08u);
    ctx->pc = 0x3FEE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FEE00u;
    // 0x3fee04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FCEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FCEA0u, 0x3FEE00u, 0x3FEE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FEE08u;
label_3fee08:
    // 0x3fee08: 0xdea20010  ld          $v0, 0x10($s5)
    ctx->pc = 0x3fee08u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 16)));
label_3fee0c:
    // 0x3fee0c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x3fee0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x3fee10: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3FEE10u;
    {
        const bool branch_taken_0x3fee10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FEE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEE10u;
        // 0x3fee14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fee10) {
            ctx->pc = 0x3FEE84u;
            goto label_3fee84;
        }
    }
    ctx->pc = 0x3FEE18u;
    // 0x3fee18: 0x8eb60140  lw          $s6, 0x140($s5)
    ctx->pc = 0x3fee18u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 320)));
    // 0x3fee1c: 0xc0ff3be  jal         func_3FCEF8
    ctx->pc = 0x3FEE1Cu;
    SET_GPR_U32(ctx, 31, 0x3FEE24u);
    ctx->pc = 0x3FEE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FEE1Cu;
    // 0x3fee20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FCEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FCEF8u, 0x3FEE1Cu, 0x3FEE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FEE24u;
label_3fee24:
    // 0x3fee24: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3fee24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fee28: 0x1a800015  blez        $s4, . + 4 + (0x15 << 2)
    ctx->pc = 0x3FEE28u;
    {
        const bool branch_taken_0x3fee28 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x3FEE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEE28u;
        // 0x3fee2c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fee28) {
            ctx->pc = 0x3FEE80u;
            goto label_3fee80;
        }
    }
    ctx->pc = 0x3FEE30u;
    // 0x3fee30: 0xde420180  ld          $v0, 0x180($s2)
    ctx->pc = 0x3fee30u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 384)));
    // 0x3fee34: 0x0  nop
    ctx->pc = 0x3fee34u;
    // NOP
label_3fee38:
    // 0x3fee38: 0x24730001  addiu       $s3, $v1, 0x1
    ctx->pc = 0x3fee38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3fee3c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3FEE3Cu;
    {
        const bool branch_taken_0x3fee3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FEE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEE3Cu;
        // 0x3fee40: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fee3c) {
            ctx->pc = 0x3FEE70u;
            goto label_3fee70;
        }
    }
    ctx->pc = 0x3FEE44u;
    // 0x3fee44: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x3fee44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fee48: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3fee48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3fee4c: 0x0  nop
    ctx->pc = 0x3fee4cu;
    // NOP
label_3fee50:
    // 0x3fee50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3fee50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fee54: 0x66310001  daddiu      $s1, $s1, 0x1
    ctx->pc = 0x3fee54u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)1);
    // 0x3fee58: 0xc0ff760  jal         func_3FDD80
    ctx->pc = 0x3FEE58u;
    SET_GPR_U32(ctx, 31, 0x3FEE60u);
    ctx->pc = 0x3FEE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FEE58u;
    // 0x3fee5c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FDD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FDD80u, 0x3FEE58u, 0x3FEE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FEE60u;
label_3fee60:
    // 0x3fee60: 0xde420180  ld          $v0, 0x180($s2)
    ctx->pc = 0x3fee60u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 384)));
    // 0x3fee64: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x3fee64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3fee68: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3FEE68u;
    {
        const bool branch_taken_0x3fee68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fee68) {
            ctx->pc = 0x3FEE6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FEE68u;
            // 0x3fee6c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FEE50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3fee50;
        }
    }
    ctx->pc = 0x3FEE70u;
label_3fee70:
    // 0x3fee70: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x3fee70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fee74: 0x74102a  slt         $v0, $v1, $s4
    ctx->pc = 0x3fee74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x3fee78: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x3FEE78u;
    {
        const bool branch_taken_0x3fee78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fee78) {
            ctx->pc = 0x3FEE7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FEE78u;
            // 0x3fee7c: 0xde420180  ld          $v0, 0x180($s2) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FEE38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3fee38;
        }
    }
    ctx->pc = 0x3FEE80u;
label_3fee80:
    // 0x3fee80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3fee80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3fee84:
    // 0x3fee84: 0xc0ff65c  jal         func_3FD970
    ctx->pc = 0x3FEE84u;
    SET_GPR_U32(ctx, 31, 0x3FEE8Cu);
    ctx->pc = 0x3FEE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FEE84u;
    // 0x3fee88: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD970u, 0x3FEE84u, 0x3FEE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FEE8Cu;
label_3fee8c:
    // 0x3fee8c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3fee8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3fee90: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3fee90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3fee94: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3fee94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3fee98: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3fee98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3fee9c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x3fee9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3feea0: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x3feea0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3feea4: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x3feea4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3feea8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3feea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3feeac: 0x3e00008  jr          $ra
    ctx->pc = 0x3FEEACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FEEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEEACu;
        // 0x3feeb0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FEEACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FEEB4u;
    // 0x3feeb4: 0x0  nop
    ctx->pc = 0x3feeb4u;
    // NOP
    // 0x3feeb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3feeb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3feebc: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3feebcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3feec0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3feec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3feec4: 0x24a5faf8  addiu       $a1, $a1, -0x508
    ctx->pc = 0x3feec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966008));
    // 0x3feec8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3feec8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3feecc: 0xc0ffc0e  jal         func_3FF038
    ctx->pc = 0x3FEECCu;
    SET_GPR_U32(ctx, 31, 0x3FEED4u);
    ctx->pc = 0x3FEED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FEECCu;
    // 0x3feed0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FF038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FF038u, 0x3FEECCu, 0x3FEED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FEED4u;
label_3feed4:
    // 0x3feed4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3feed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3feed8: 0x3e00008  jr          $ra
    ctx->pc = 0x3FEED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FEEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEED8u;
        // 0x3feedc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FEED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FEEE0u;
}

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

// Function: sub_002E4F10
// Address: 0x2e4f10 - 0x2e50a0
void sub_002E4F10_0x2e4f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4F10_0x2e4f10");
#endif

    switch (ctx->pc) {
        case 0x2e4f3cu: goto label_2e4f3c;
        case 0x2e4f4cu: goto label_2e4f4c;
        case 0x2e4f60u: goto label_2e4f60;
        case 0x2e4fa4u: goto label_2e4fa4;
        case 0x2e4fb4u: goto label_2e4fb4;
        case 0x2e4fc8u: goto label_2e4fc8;
        case 0x2e4fdcu: goto label_2e4fdc;
        case 0x2e4ffcu: goto label_2e4ffc;
        case 0x2e5008u: goto label_2e5008;
        case 0x2e501cu: goto label_2e501c;
        case 0x2e5028u: goto label_2e5028;
        case 0x2e503cu: goto label_2e503c;
        case 0x2e5050u: goto label_2e5050;
        case 0x2e5068u: goto label_2e5068;
        default: break;
    }

    ctx->pc = 0x2e4f10u;

    // 0x2e4f10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e4f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2e4f14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e4f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e4f18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e4f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e4f1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e4f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e4f20: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2e4f20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2e4f24: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2e4f24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2e4f28: 0xa3a60050  sb          $a2, 0x50($sp)
    ctx->pc = 0x2e4f28u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 6));
    // 0x2e4f2c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2e4f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e4f30: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x2e4f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2e4f34: 0xc0b91dc  jal         func_2E4770
    ctx->pc = 0x2E4F34u;
    SET_GPR_U32(ctx, 31, 0x2E4F3Cu);
    ctx->pc = 0x2E4770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4770u, 0x2E4F34u, 0x2E4F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4F3Cu;
label_2e4f3c:
    // 0x2e4f3c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e4f3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4f40: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e4f40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4f44: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x2E4F44u;
    {
        const bool branch_taken_0x2e4f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4f44) {
            ctx->pc = 0x2E5078u;
            goto label_2e5078;
        }
    }
    ctx->pc = 0x2E4F4Cu;
label_2e4f4c:
    // 0x2e4f4c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2e4f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e4f50: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x2e4f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2e4f54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e4f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4f58: 0xc0b91cc  jal         func_2E4730
    ctx->pc = 0x2E4F58u;
    SET_GPR_U32(ctx, 31, 0x2E4F60u);
    ctx->pc = 0x2E4730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4730u, 0x2E4F58u, 0x2E4F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4F60u;
label_2e4f60:
    // 0x2e4f60: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e4f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e4f64: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2e4f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e4f68: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2e4f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e4f6c: 0x14620041  bne         $v1, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x2E4F6Cu;
    {
        const bool branch_taken_0x2e4f6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e4f6c) {
            ctx->pc = 0x2E5074u;
            goto label_2e5074;
        }
    }
    ctx->pc = 0x2E4F74u;
    // 0x2e4f74: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2e4f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e4f78: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2e4f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2e4f7c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e4f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e4f80: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x2e4f80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x2e4f84: 0x93a20050  lbu         $v0, 0x50($sp)
    ctx->pc = 0x2e4f84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e4f88: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2E4F88u;
    {
        const bool branch_taken_0x2e4f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4f88) {
            ctx->pc = 0x2E4FC8u;
            goto label_2e4fc8;
        }
    }
    ctx->pc = 0x2E4F90u;
    // 0x2e4f90: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2e4f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e4f94: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x2e4f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2e4f98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e4f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4f9c: 0xc0b91cc  jal         func_2E4730
    ctx->pc = 0x2E4F9Cu;
    SET_GPR_U32(ctx, 31, 0x2E4FA4u);
    ctx->pc = 0x2E4730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4730u, 0x2E4F9Cu, 0x2E4FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4FA4u;
label_2e4fa4:
    // 0x2e4fa4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e4fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e4fa8: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2e4fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e4fac: 0xc09138c  jal         func_244E30
    ctx->pc = 0x2E4FACu;
    SET_GPR_U32(ctx, 31, 0x2E4FB4u);
    ctx->pc = 0x244E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E30u, 0x2E4FACu, 0x2E4FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4FB4u;
label_2e4fb4:
    // 0x2e4fb4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2e4fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e4fb8: 0x8c640068  lw          $a0, 0x68($v1)
    ctx->pc = 0x2e4fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x2e4fbc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e4fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4fc0: 0xc0b986c  jal         func_2E61B0
    ctx->pc = 0x2E4FC0u;
    SET_GPR_U32(ctx, 31, 0x2E4FC8u);
    ctx->pc = 0x2E61B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E61B0u, 0x2E4FC0u, 0x2E4FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4FC8u;
label_2e4fc8:
    // 0x2e4fc8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2e4fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e4fcc: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x2e4fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2e4fd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e4fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4fd4: 0xc0b91cc  jal         func_2E4730
    ctx->pc = 0x2E4FD4u;
    SET_GPR_U32(ctx, 31, 0x2E4FDCu);
    ctx->pc = 0x2E4730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4730u, 0x2E4FD4u, 0x2E4FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4FDCu;
label_2e4fdc:
    // 0x2e4fdc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e4fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e4fe0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2E4FE0u;
    {
        const bool branch_taken_0x2e4fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4fe0) {
            ctx->pc = 0x2E5040u;
            goto label_2e5040;
        }
    }
    ctx->pc = 0x2E4FE8u;
    // 0x2e4fe8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2e4fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e4fec: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x2e4fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2e4ff0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e4ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4ff4: 0xc0b91cc  jal         func_2E4730
    ctx->pc = 0x2E4FF4u;
    SET_GPR_U32(ctx, 31, 0x2E4FFCu);
    ctx->pc = 0x2E4730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4730u, 0x2E4FF4u, 0x2E4FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4FFCu;
label_2e4ffc:
    // 0x2e4ffc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2e4ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e5000: 0xc0b93bc  jal         func_2E4EF0
    ctx->pc = 0x2E5000u;
    SET_GPR_U32(ctx, 31, 0x2E5008u);
    ctx->pc = 0x2E4EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4EF0u, 0x2E5000u, 0x2E5008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5008u;
label_2e5008:
    // 0x2e5008: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2e5008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e500c: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x2e500cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2e5010: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e5010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5014: 0xc0b91cc  jal         func_2E4730
    ctx->pc = 0x2E5014u;
    SET_GPR_U32(ctx, 31, 0x2E501Cu);
    ctx->pc = 0x2E4730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4730u, 0x2E5014u, 0x2E501Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E501Cu;
label_2e501c:
    // 0x2e501c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2e501cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e5020: 0xc119c5c  jal         func_467170
    ctx->pc = 0x2E5020u;
    SET_GPR_U32(ctx, 31, 0x2E5028u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2E5020u, 0x2E5028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5028u;
label_2e5028:
    // 0x2e5028: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2e5028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e502c: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x2e502cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2e5030: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e5030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5034: 0xc0b91cc  jal         func_2E4730
    ctx->pc = 0x2E5034u;
    SET_GPR_U32(ctx, 31, 0x2E503Cu);
    ctx->pc = 0x2E4730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4730u, 0x2E5034u, 0x2E503Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E503Cu;
label_2e503c:
    // 0x2e503c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2e503cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2e5040:
    // 0x2e5040: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2e5040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e5044: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x2e5044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2e5048: 0xc0b6700  jal         func_2D9C00
    ctx->pc = 0x2E5048u;
    SET_GPR_U32(ctx, 31, 0x2E5050u);
    ctx->pc = 0x2D9C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9C00u, 0x2E5048u, 0x2E5050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5050u;
label_2e5050:
    // 0x2e5050: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2e5050u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2e5054: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2e5054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e5058: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2e5058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e505c: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x2e505cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2e5060: 0xc0b9428  jal         func_2E50A0
    ctx->pc = 0x2E5060u;
    SET_GPR_U32(ctx, 31, 0x2E5068u);
    ctx->pc = 0x2E50A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E50A0u, 0x2E5060u, 0x2E5068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5068u;
label_2e5068:
    // 0x2e5068: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e5068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e506c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E506Cu;
    {
        const bool branch_taken_0x2e506c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e506c) {
            ctx->pc = 0x2E5088u;
            goto label_2e5088;
        }
    }
    ctx->pc = 0x2E5074u;
label_2e5074:
    // 0x2e5074: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2e5074u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2e5078:
    // 0x2e5078: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x2e5078u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2e507c: 0x1440ffb3  bnez        $v0, . + 4 + (-0x4D << 2)
    ctx->pc = 0x2E507Cu;
    {
        const bool branch_taken_0x2e507c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e507c) {
            ctx->pc = 0x2E4F4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e4f4c;
        }
    }
    ctx->pc = 0x2E5084u;
    // 0x2e5084: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e5084u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e5088:
    // 0x2e5088: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e5088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e508c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e508cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5090: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e5090u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e5094: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2e5094u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e5098: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E50A0u;
}

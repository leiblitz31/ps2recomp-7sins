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

// Function: sub_0026EC00
// Address: 0x26ec00 - 0x26eef0
void sub_0026EC00_0x26ec00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026EC00_0x26ec00");
#endif

    switch (ctx->pc) {
        case 0x26ec2cu: goto label_26ec2c;
        case 0x26ec44u: goto label_26ec44;
        case 0x26ec54u: goto label_26ec54;
        case 0x26ec68u: goto label_26ec68;
        case 0x26ec78u: goto label_26ec78;
        case 0x26ec84u: goto label_26ec84;
        case 0x26ec94u: goto label_26ec94;
        case 0x26eca4u: goto label_26eca4;
        case 0x26ecb4u: goto label_26ecb4;
        case 0x26ecd0u: goto label_26ecd0;
        case 0x26ecdcu: goto label_26ecdc;
        case 0x26ecf4u: goto label_26ecf4;
        case 0x26ed10u: goto label_26ed10;
        case 0x26ed20u: goto label_26ed20;
        case 0x26ed38u: goto label_26ed38;
        case 0x26ed54u: goto label_26ed54;
        case 0x26ed64u: goto label_26ed64;
        case 0x26ed7cu: goto label_26ed7c;
        case 0x26ed98u: goto label_26ed98;
        case 0x26eda8u: goto label_26eda8;
        case 0x26edbcu: goto label_26edbc;
        case 0x26edd4u: goto label_26edd4;
        case 0x26ede0u: goto label_26ede0;
        case 0x26edf8u: goto label_26edf8;
        case 0x26ee14u: goto label_26ee14;
        case 0x26ee24u: goto label_26ee24;
        case 0x26ee3cu: goto label_26ee3c;
        case 0x26ee58u: goto label_26ee58;
        case 0x26ee68u: goto label_26ee68;
        case 0x26ee80u: goto label_26ee80;
        case 0x26ee9cu: goto label_26ee9c;
        case 0x26eeacu: goto label_26eeac;
        case 0x26eec0u: goto label_26eec0;
        default: break;
    }

    ctx->pc = 0x26ec00u;

    // 0x26ec00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x26ec00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x26ec04: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x26ec04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x26ec08: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x26ec08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x26ec0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26ec0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26ec10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26ec10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26ec14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26ec14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26ec18: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x26ec18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x26ec1c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x26ec1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26ec20: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x26ec20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x26ec24: 0xc0905a0  jal         func_241680
    ctx->pc = 0x26EC24u;
    SET_GPR_U32(ctx, 31, 0x26EC2Cu);
    ctx->pc = 0x241680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241680u, 0x26EC24u, 0x26EC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EC2Cu;
label_26ec2c:
    // 0x26ec2c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26ec2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ec30: 0x122000a5  beqz        $s1, . + 4 + (0xA5 << 2)
    ctx->pc = 0x26EC30u;
    {
        const bool branch_taken_0x26ec30 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ec30) {
            ctx->pc = 0x26EEC8u;
            goto label_26eec8;
        }
    }
    ctx->pc = 0x26EC38u;
    // 0x26ec38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26ec38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ec3c: 0xc09a82c  jal         func_26A0B0
    ctx->pc = 0x26EC3Cu;
    SET_GPR_U32(ctx, 31, 0x26EC44u);
    ctx->pc = 0x26A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A0B0u, 0x26EC3Cu, 0x26EC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EC44u;
label_26ec44:
    // 0x26ec44: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x26ec44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ec48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26ec48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ec4c: 0xc04312c  jal         func_10C4B0
    ctx->pc = 0x26EC4Cu;
    SET_GPR_U32(ctx, 31, 0x26EC54u);
    ctx->pc = 0x10C4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C4B0u, 0x26EC4Cu, 0x26EC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EC54u;
label_26ec54:
    // 0x26ec54: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x26EC54u;
    {
        const bool branch_taken_0x26ec54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26ec54) {
            ctx->pc = 0x26ECC0u;
            goto label_26ecc0;
        }
    }
    ctx->pc = 0x26EC5Cu;
    // 0x26ec5c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x26ec5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ec60: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x26EC60u;
    {
        const bool branch_taken_0x26ec60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ec60) {
            ctx->pc = 0x26ECA8u;
            goto label_26eca8;
        }
    }
    ctx->pc = 0x26EC68u;
label_26ec68:
    // 0x26ec68: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26ec68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ec6c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x26ec6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ec70: 0xc042ff0  jal         func_10BFC0
    ctx->pc = 0x26EC70u;
    SET_GPR_U32(ctx, 31, 0x26EC78u);
    ctx->pc = 0x10BFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BFC0u, 0x26EC70u, 0x26EC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EC78u;
label_26ec78:
    // 0x26ec78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26ec78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ec7c: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x26EC7Cu;
    SET_GPR_U32(ctx, 31, 0x26EC84u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x26EC7Cu, 0x26EC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EC84u;
label_26ec84:
    // 0x26ec84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26ec84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ec88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26ec88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ec8c: 0xc09a364  jal         func_268D90
    ctx->pc = 0x26EC8Cu;
    SET_GPR_U32(ctx, 31, 0x26EC94u);
    ctx->pc = 0x268D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D90u, 0x26EC8Cu, 0x26EC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EC94u;
label_26ec94:
    // 0x26ec94: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x26ec94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26ec98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26ec98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ec9c: 0xc09b14c  jal         func_26C530
    ctx->pc = 0x26EC9Cu;
    SET_GPR_U32(ctx, 31, 0x26ECA4u);
    ctx->pc = 0x26C530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C530u, 0x26EC9Cu, 0x26ECA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26ECA4u;
label_26eca4:
    // 0x26eca4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x26eca4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_26eca8:
    // 0x26eca8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26eca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ecac: 0xc043104  jal         func_10C410
    ctx->pc = 0x26ECACu;
    SET_GPR_U32(ctx, 31, 0x26ECB4u);
    ctx->pc = 0x10C410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C410u, 0x26ECACu, 0x26ECB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26ECB4u;
label_26ecb4:
    // 0x26ecb4: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x26ecb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x26ecb8: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x26ECB8u;
    {
        const bool branch_taken_0x26ecb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26ecb8) {
            ctx->pc = 0x26EC68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26ec68;
        }
    }
    ctx->pc = 0x26ECC0u;
label_26ecc0:
    // 0x26ecc0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x26ecc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26ecc4: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x26ecc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x26ecc8: 0xc04809c  jal         func_120270
    ctx->pc = 0x26ECC8u;
    SET_GPR_U32(ctx, 31, 0x26ECD0u);
    ctx->pc = 0x120270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120270u, 0x26ECC8u, 0x26ECD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26ECD0u;
label_26ecd0:
    // 0x26ecd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26ecd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ecd4: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x26ECD4u;
    {
        const bool branch_taken_0x26ecd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ecd4) {
            ctx->pc = 0x26EDACu;
            goto label_26edac;
        }
    }
    ctx->pc = 0x26ECDCu;
label_26ecdc:
    // 0x26ecdc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x26ecdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26ece0: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x26ece0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x26ece4: 0x2785a110  addiu       $a1, $gp, -0x5EF0
    ctx->pc = 0x26ece4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942992));
    // 0x26ece8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x26ece8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26ecec: 0xc0bc66e  jal         func_2F19B8
    ctx->pc = 0x26ECECu;
    SET_GPR_U32(ctx, 31, 0x26ECF4u);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x26ECECu, 0x26ECF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26ECF4u;
label_26ecf4:
    // 0x26ecf4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x26ECF4u;
    {
        const bool branch_taken_0x26ecf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26ecf4) {
            ctx->pc = 0x26ED20u;
            goto label_26ed20;
        }
    }
    ctx->pc = 0x26ECFCu;
    // 0x26ecfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26ecfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ed00: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x26ed00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x26ed04: 0x24a5cf70  addiu       $a1, $a1, -0x3090
    ctx->pc = 0x26ed04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954864));
    // 0x26ed08: 0xc09a714  jal         func_269C50
    ctx->pc = 0x26ED08u;
    SET_GPR_U32(ctx, 31, 0x26ED10u);
    ctx->pc = 0x269C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269C50u, 0x26ED08u, 0x26ED10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26ED10u;
label_26ed10:
    // 0x26ed10: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x26ed10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26ed14: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26ed14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ed18: 0xc09b194  jal         func_26C650
    ctx->pc = 0x26ED18u;
    SET_GPR_U32(ctx, 31, 0x26ED20u);
    ctx->pc = 0x26C650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C650u, 0x26ED18u, 0x26ED20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26ED20u;
label_26ed20:
    // 0x26ed20: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x26ed20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26ed24: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x26ed24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x26ed28: 0x2785a118  addiu       $a1, $gp, -0x5EE8
    ctx->pc = 0x26ed28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943000));
    // 0x26ed2c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x26ed2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x26ed30: 0xc0bc66e  jal         func_2F19B8
    ctx->pc = 0x26ED30u;
    SET_GPR_U32(ctx, 31, 0x26ED38u);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x26ED30u, 0x26ED38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26ED38u;
label_26ed38:
    // 0x26ed38: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x26ED38u;
    {
        const bool branch_taken_0x26ed38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26ed38) {
            ctx->pc = 0x26ED64u;
            goto label_26ed64;
        }
    }
    ctx->pc = 0x26ED40u;
    // 0x26ed40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26ed40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ed44: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x26ed44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x26ed48: 0x24a5cf80  addiu       $a1, $a1, -0x3080
    ctx->pc = 0x26ed48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954880));
    // 0x26ed4c: 0xc09a714  jal         func_269C50
    ctx->pc = 0x26ED4Cu;
    SET_GPR_U32(ctx, 31, 0x26ED54u);
    ctx->pc = 0x269C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269C50u, 0x26ED4Cu, 0x26ED54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26ED54u;
label_26ed54:
    // 0x26ed54: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x26ed54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26ed58: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26ed58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ed5c: 0xc09b194  jal         func_26C650
    ctx->pc = 0x26ED5Cu;
    SET_GPR_U32(ctx, 31, 0x26ED64u);
    ctx->pc = 0x26C650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C650u, 0x26ED5Cu, 0x26ED64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26ED64u;
label_26ed64:
    // 0x26ed64: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x26ed64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26ed68: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x26ed68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x26ed6c: 0x2785a120  addiu       $a1, $gp, -0x5EE0
    ctx->pc = 0x26ed6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943008));
    // 0x26ed70: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x26ed70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x26ed74: 0xc0bc66e  jal         func_2F19B8
    ctx->pc = 0x26ED74u;
    SET_GPR_U32(ctx, 31, 0x26ED7Cu);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x26ED74u, 0x26ED7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26ED7Cu;
label_26ed7c:
    // 0x26ed7c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x26ED7Cu;
    {
        const bool branch_taken_0x26ed7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26ed7c) {
            ctx->pc = 0x26EDA8u;
            goto label_26eda8;
        }
    }
    ctx->pc = 0x26ED84u;
    // 0x26ed84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26ed84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ed88: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x26ed88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x26ed8c: 0x24a5cf90  addiu       $a1, $a1, -0x3070
    ctx->pc = 0x26ed8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954896));
    // 0x26ed90: 0xc09a714  jal         func_269C50
    ctx->pc = 0x26ED90u;
    SET_GPR_U32(ctx, 31, 0x26ED98u);
    ctx->pc = 0x269C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269C50u, 0x26ED90u, 0x26ED98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26ED98u;
label_26ed98:
    // 0x26ed98: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x26ed98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26ed9c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26ed9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eda0: 0xc09b194  jal         func_26C650
    ctx->pc = 0x26EDA0u;
    SET_GPR_U32(ctx, 31, 0x26EDA8u);
    ctx->pc = 0x26C650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C650u, 0x26EDA0u, 0x26EDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EDA8u;
label_26eda8:
    // 0x26eda8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x26eda8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_26edac:
    // 0x26edac: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x26edacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26edb0: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x26edb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x26edb4: 0xc04808c  jal         func_120230
    ctx->pc = 0x26EDB4u;
    SET_GPR_U32(ctx, 31, 0x26EDBCu);
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x26EDB4u, 0x26EDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EDBCu;
label_26edbc:
    // 0x26edbc: 0x1602ffc7  bne         $s0, $v0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x26EDBCu;
    {
        const bool branch_taken_0x26edbc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x26edbc) {
            ctx->pc = 0x26ECDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26ecdc;
        }
    }
    ctx->pc = 0x26EDC4u;
    // 0x26edc4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x26edc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26edc8: 0x244400ac  addiu       $a0, $v0, 0xAC
    ctx->pc = 0x26edc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 172));
    // 0x26edcc: 0xc04809c  jal         func_120270
    ctx->pc = 0x26EDCCu;
    SET_GPR_U32(ctx, 31, 0x26EDD4u);
    ctx->pc = 0x120270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120270u, 0x26EDCCu, 0x26EDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EDD4u;
label_26edd4:
    // 0x26edd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26edd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26edd8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x26EDD8u;
    {
        const bool branch_taken_0x26edd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26edd8) {
            ctx->pc = 0x26EEB0u;
            goto label_26eeb0;
        }
    }
    ctx->pc = 0x26EDE0u;
label_26ede0:
    // 0x26ede0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x26ede0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26ede4: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x26ede4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x26ede8: 0x2785a110  addiu       $a1, $gp, -0x5EF0
    ctx->pc = 0x26ede8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942992));
    // 0x26edec: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x26edecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26edf0: 0xc0bc66e  jal         func_2F19B8
    ctx->pc = 0x26EDF0u;
    SET_GPR_U32(ctx, 31, 0x26EDF8u);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x26EDF0u, 0x26EDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EDF8u;
label_26edf8:
    // 0x26edf8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x26EDF8u;
    {
        const bool branch_taken_0x26edf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26edf8) {
            ctx->pc = 0x26EE24u;
            goto label_26ee24;
        }
    }
    ctx->pc = 0x26EE00u;
    // 0x26ee00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26ee00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ee04: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x26ee04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x26ee08: 0x24a5cf70  addiu       $a1, $a1, -0x3090
    ctx->pc = 0x26ee08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954864));
    // 0x26ee0c: 0xc09a714  jal         func_269C50
    ctx->pc = 0x26EE0Cu;
    SET_GPR_U32(ctx, 31, 0x26EE14u);
    ctx->pc = 0x269C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269C50u, 0x26EE0Cu, 0x26EE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EE14u;
label_26ee14:
    // 0x26ee14: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x26ee14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26ee18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26ee18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ee1c: 0xc09b194  jal         func_26C650
    ctx->pc = 0x26EE1Cu;
    SET_GPR_U32(ctx, 31, 0x26EE24u);
    ctx->pc = 0x26C650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C650u, 0x26EE1Cu, 0x26EE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EE24u;
label_26ee24:
    // 0x26ee24: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x26ee24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26ee28: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x26ee28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x26ee2c: 0x2785a118  addiu       $a1, $gp, -0x5EE8
    ctx->pc = 0x26ee2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943000));
    // 0x26ee30: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x26ee30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x26ee34: 0xc0bc66e  jal         func_2F19B8
    ctx->pc = 0x26EE34u;
    SET_GPR_U32(ctx, 31, 0x26EE3Cu);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x26EE34u, 0x26EE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EE3Cu;
label_26ee3c:
    // 0x26ee3c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x26EE3Cu;
    {
        const bool branch_taken_0x26ee3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26ee3c) {
            ctx->pc = 0x26EE68u;
            goto label_26ee68;
        }
    }
    ctx->pc = 0x26EE44u;
    // 0x26ee44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26ee44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ee48: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x26ee48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x26ee4c: 0x24a5cf80  addiu       $a1, $a1, -0x3080
    ctx->pc = 0x26ee4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954880));
    // 0x26ee50: 0xc09a714  jal         func_269C50
    ctx->pc = 0x26EE50u;
    SET_GPR_U32(ctx, 31, 0x26EE58u);
    ctx->pc = 0x269C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269C50u, 0x26EE50u, 0x26EE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EE58u;
label_26ee58:
    // 0x26ee58: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x26ee58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26ee5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26ee5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ee60: 0xc09b194  jal         func_26C650
    ctx->pc = 0x26EE60u;
    SET_GPR_U32(ctx, 31, 0x26EE68u);
    ctx->pc = 0x26C650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C650u, 0x26EE60u, 0x26EE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EE68u;
label_26ee68:
    // 0x26ee68: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x26ee68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26ee6c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x26ee6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x26ee70: 0x2785a120  addiu       $a1, $gp, -0x5EE0
    ctx->pc = 0x26ee70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943008));
    // 0x26ee74: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x26ee74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x26ee78: 0xc0bc66e  jal         func_2F19B8
    ctx->pc = 0x26EE78u;
    SET_GPR_U32(ctx, 31, 0x26EE80u);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x26EE78u, 0x26EE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EE80u;
label_26ee80:
    // 0x26ee80: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x26EE80u;
    {
        const bool branch_taken_0x26ee80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26ee80) {
            ctx->pc = 0x26EEACu;
            goto label_26eeac;
        }
    }
    ctx->pc = 0x26EE88u;
    // 0x26ee88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26ee88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ee8c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x26ee8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x26ee90: 0x24a5cf90  addiu       $a1, $a1, -0x3070
    ctx->pc = 0x26ee90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954896));
    // 0x26ee94: 0xc09a714  jal         func_269C50
    ctx->pc = 0x26EE94u;
    SET_GPR_U32(ctx, 31, 0x26EE9Cu);
    ctx->pc = 0x269C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269C50u, 0x26EE94u, 0x26EE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EE9Cu;
label_26ee9c:
    // 0x26ee9c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x26ee9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26eea0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26eea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eea4: 0xc09b194  jal         func_26C650
    ctx->pc = 0x26EEA4u;
    SET_GPR_U32(ctx, 31, 0x26EEACu);
    ctx->pc = 0x26C650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C650u, 0x26EEA4u, 0x26EEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EEACu;
label_26eeac:
    // 0x26eeac: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x26eeacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_26eeb0:
    // 0x26eeb0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x26eeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26eeb4: 0x244400ac  addiu       $a0, $v0, 0xAC
    ctx->pc = 0x26eeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 172));
    // 0x26eeb8: 0xc04808c  jal         func_120230
    ctx->pc = 0x26EEB8u;
    SET_GPR_U32(ctx, 31, 0x26EEC0u);
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x26EEB8u, 0x26EEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EEC0u;
label_26eec0:
    // 0x26eec0: 0x1602ffc7  bne         $s0, $v0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x26EEC0u;
    {
        const bool branch_taken_0x26eec0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x26eec0) {
            ctx->pc = 0x26EDE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26ede0;
        }
    }
    ctx->pc = 0x26EEC8u;
label_26eec8:
    // 0x26eec8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x26eec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26eecc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x26eeccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26eed0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26eed0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26eed4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26eed4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26eed8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26eed8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26eedc: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x26eedcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x26eee0: 0x3e00008  jr          $ra
    ctx->pc = 0x26EEE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26EEE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26EEE8u;
    // 0x26eee8: 0x0  nop
    ctx->pc = 0x26eee8u;
    // NOP
    // 0x26eeec: 0x0  nop
    ctx->pc = 0x26eeecu;
    // NOP
    ctx->pc = 0x26eef0u;
}

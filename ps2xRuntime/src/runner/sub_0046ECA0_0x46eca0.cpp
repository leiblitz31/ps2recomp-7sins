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

// Function: sub_0046ECA0
// Address: 0x46eca0 - 0x46ee40
void sub_0046ECA0_0x46eca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046ECA0_0x46eca0");
#endif

    switch (ctx->pc) {
        case 0x46ecc0u: goto label_46ecc0;
        case 0x46ecd4u: goto label_46ecd4;
        case 0x46ece0u: goto label_46ece0;
        case 0x46ececu: goto label_46ecec;
        case 0x46ed00u: goto label_46ed00;
        case 0x46ed08u: goto label_46ed08;
        case 0x46ed14u: goto label_46ed14;
        case 0x46ed20u: goto label_46ed20;
        case 0x46ed30u: goto label_46ed30;
        case 0x46ed40u: goto label_46ed40;
        case 0x46ed54u: goto label_46ed54;
        case 0x46ed64u: goto label_46ed64;
        case 0x46ed74u: goto label_46ed74;
        case 0x46ed88u: goto label_46ed88;
        case 0x46ed98u: goto label_46ed98;
        case 0x46eda8u: goto label_46eda8;
        case 0x46edb8u: goto label_46edb8;
        case 0x46edd8u: goto label_46edd8;
        case 0x46edecu: goto label_46edec;
        case 0x46ee00u: goto label_46ee00;
        case 0x46ee10u: goto label_46ee10;
        case 0x46ee20u: goto label_46ee20;
        default: break;
    }

    ctx->pc = 0x46eca0u;

    // 0x46eca0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x46eca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x46eca4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x46eca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x46eca8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x46eca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x46ecac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46ecacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x46ecb0: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x46ecb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x46ecb4: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x46ecb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x46ecb8: 0xc11bb90  jal         func_46EE40
    ctx->pc = 0x46ECB8u;
    SET_GPR_U32(ctx, 31, 0x46ECC0u);
    ctx->pc = 0x46EE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46EE40u, 0x46ECB8u, 0x46ECC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46ECC0u;
label_46ecc0:
    // 0x46ecc0: 0x14400057  bnez        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x46ECC0u;
    {
        const bool branch_taken_0x46ecc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46ecc0) {
            ctx->pc = 0x46EE20u;
            goto label_46ee20;
        }
    }
    ctx->pc = 0x46ECC8u;
    // 0x46ecc8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x46ecc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x46eccc: 0xc041b48  jal         func_106D20
    ctx->pc = 0x46ECCCu;
    SET_GPR_U32(ctx, 31, 0x46ECD4u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x46ECCCu, 0x46ECD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46ECD4u;
label_46ecd4:
    // 0x46ecd4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x46ecd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x46ecd8: 0xc0514a8  jal         func_1452A0
    ctx->pc = 0x46ECD8u;
    SET_GPR_U32(ctx, 31, 0x46ECE0u);
    ctx->pc = 0x1452A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1452A0u, 0x46ECD8u, 0x46ECE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46ECE0u;
label_46ece0:
    // 0x46ece0: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x46ece0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x46ece4: 0xc11a5e4  jal         func_469790
    ctx->pc = 0x46ECE4u;
    SET_GPR_U32(ctx, 31, 0x46ECECu);
    ctx->pc = 0x469790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469790u, 0x46ECE4u, 0x46ECECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46ECECu;
label_46ecec:
    // 0x46ecec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x46ececu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46ecf0: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x46ecf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x46ecf4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x46ecf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46ecf8: 0xc11a57c  jal         func_4695F0
    ctx->pc = 0x46ECF8u;
    SET_GPR_U32(ctx, 31, 0x46ED00u);
    ctx->pc = 0x4695F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4695F0u, 0x46ECF8u, 0x46ED00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46ED00u;
label_46ed00:
    // 0x46ed00: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x46ED00u;
    {
        const bool branch_taken_0x46ed00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46ed00) {
            ctx->pc = 0x46ED54u;
            goto label_46ed54;
        }
    }
    ctx->pc = 0x46ED08u;
label_46ed08:
    // 0x46ed08: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x46ed08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x46ed0c: 0xc11a568  jal         func_4695A0
    ctx->pc = 0x46ED0Cu;
    SET_GPR_U32(ctx, 31, 0x46ED14u);
    ctx->pc = 0x4695A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4695A0u, 0x46ED0Cu, 0x46ED14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46ED14u;
label_46ed14:
    // 0x46ed14: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x46ed14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x46ed18: 0xc11a5ec  jal         func_4697B0
    ctx->pc = 0x46ED18u;
    SET_GPR_U32(ctx, 31, 0x46ED20u);
    ctx->pc = 0x4697B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4697B0u, 0x46ED18u, 0x46ED20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46ED20u;
label_46ed20:
    // 0x46ed20: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x46ed20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x46ed24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x46ed24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46ed28: 0xc0430e4  jal         func_10C390
    ctx->pc = 0x46ED28u;
    SET_GPR_U32(ctx, 31, 0x46ED30u);
    ctx->pc = 0x10C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C390u, 0x46ED28u, 0x46ED30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46ED30u;
label_46ed30:
    // 0x46ed30: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x46ed30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x46ed34: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x46ed34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x46ed38: 0xc08e79c  jal         func_239E70
    ctx->pc = 0x46ED38u;
    SET_GPR_U32(ctx, 31, 0x46ED40u);
    ctx->pc = 0x239E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239E70u, 0x46ED38u, 0x46ED40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46ED40u;
label_46ed40:
    // 0x46ed40: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x46ed40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x46ed44: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x46ed44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x46ed48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x46ed48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46ed4c: 0xc11a518  jal         func_469460
    ctx->pc = 0x46ED4Cu;
    SET_GPR_U32(ctx, 31, 0x46ED54u);
    ctx->pc = 0x469460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469460u, 0x46ED4Cu, 0x46ED54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46ED54u;
label_46ed54:
    // 0x46ed54: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x46ed54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x46ed58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x46ed58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46ed5c: 0xc11a4d8  jal         func_469360
    ctx->pc = 0x46ED5Cu;
    SET_GPR_U32(ctx, 31, 0x46ED64u);
    ctx->pc = 0x469360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469360u, 0x46ED5Cu, 0x46ED64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46ED64u;
label_46ed64:
    // 0x46ed64: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x46ed64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x46ed68: 0x27a50048  addiu       $a1, $sp, 0x48
    ctx->pc = 0x46ed68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x46ed6c: 0xc11a4cc  jal         func_469330
    ctx->pc = 0x46ED6Cu;
    SET_GPR_U32(ctx, 31, 0x46ED74u);
    ctx->pc = 0x469330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469330u, 0x46ED6Cu, 0x46ED74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46ED74u;
label_46ed74:
    // 0x46ed74: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x46ED74u;
    {
        const bool branch_taken_0x46ed74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46ed74) {
            ctx->pc = 0x46ED08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46ed08;
        }
    }
    ctx->pc = 0x46ED7Cu;
    // 0x46ed7c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x46ed7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46ed80: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x46ED80u;
    {
        const bool branch_taken_0x46ed80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46ed80) {
            ctx->pc = 0x46EDACu;
            goto label_46edac;
        }
    }
    ctx->pc = 0x46ED88u;
label_46ed88:
    // 0x46ed88: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x46ed88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x46ed8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x46ed8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46ed90: 0xc042ff0  jal         func_10BFC0
    ctx->pc = 0x46ED90u;
    SET_GPR_U32(ctx, 31, 0x46ED98u);
    ctx->pc = 0x10BFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BFC0u, 0x46ED90u, 0x46ED98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46ED98u;
label_46ed98:
    // 0x46ed98: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x46ed98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x46ed9c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x46ed9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46eda0: 0xc11a9b0  jal         func_46A6C0
    ctx->pc = 0x46EDA0u;
    SET_GPR_U32(ctx, 31, 0x46EDA8u);
    ctx->pc = 0x46A6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A6C0u, 0x46EDA0u, 0x46EDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46EDA8u;
label_46eda8:
    // 0x46eda8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x46eda8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_46edac:
    // 0x46edac: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x46edacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x46edb0: 0xc043104  jal         func_10C410
    ctx->pc = 0x46EDB0u;
    SET_GPR_U32(ctx, 31, 0x46EDB8u);
    ctx->pc = 0x10C410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C410u, 0x46EDB0u, 0x46EDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46EDB8u;
label_46edb8:
    // 0x46edb8: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x46edb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x46edbc: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x46EDBCu;
    {
        const bool branch_taken_0x46edbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46edbc) {
            ctx->pc = 0x46ED88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46ed88;
        }
    }
    ctx->pc = 0x46EDC4u;
    // 0x46edc4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x46edc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x46edc8: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x46edc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x46edcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x46edccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46edd0: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x46EDD0u;
    SET_GPR_U32(ctx, 31, 0x46EDD8u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x46EDD0u, 0x46EDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46EDD8u;
label_46edd8:
    // 0x46edd8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x46edd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x46eddc: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x46eddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x46ede0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x46ede0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46ede4: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x46EDE4u;
    SET_GPR_U32(ctx, 31, 0x46EDECu);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x46EDE4u, 0x46EDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46EDECu;
label_46edec:
    // 0x46edec: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x46edecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x46edf0: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x46edf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x46edf4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x46edf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46edf8: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x46EDF8u;
    SET_GPR_U32(ctx, 31, 0x46EE00u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x46EDF8u, 0x46EE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46EE00u;
label_46ee00:
    // 0x46ee00: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x46ee00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x46ee04: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46ee04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x46ee08: 0xc051428  jal         func_1450A0
    ctx->pc = 0x46EE08u;
    SET_GPR_U32(ctx, 31, 0x46EE10u);
    ctx->pc = 0x1450A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1450A0u, 0x46EE08u, 0x46EE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46EE10u;
label_46ee10:
    // 0x46ee10: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x46ee10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x46ee14: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46ee14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x46ee18: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x46EE18u;
    SET_GPR_U32(ctx, 31, 0x46EE20u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x46EE18u, 0x46EE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46EE20u;
label_46ee20:
    // 0x46ee20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x46ee20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46ee24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x46ee24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46ee28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46ee28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46ee2c: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x46ee2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x46ee30: 0x3e00008  jr          $ra
    ctx->pc = 0x46EE30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46EE30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46EE38u;
    // 0x46ee38: 0x0  nop
    ctx->pc = 0x46ee38u;
    // NOP
    // 0x46ee3c: 0x0  nop
    ctx->pc = 0x46ee3cu;
    // NOP
    ctx->pc = 0x46ee40u;
}

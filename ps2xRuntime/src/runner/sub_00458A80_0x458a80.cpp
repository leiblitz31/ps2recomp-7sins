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

// Function: sub_00458A80
// Address: 0x458a80 - 0x458c30
void sub_00458A80_0x458a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00458A80_0x458a80");
#endif

    switch (ctx->pc) {
        case 0x458abcu: goto label_458abc;
        case 0x458ae0u: goto label_458ae0;
        case 0x458b0cu: goto label_458b0c;
        case 0x458b24u: goto label_458b24;
        case 0x458b30u: goto label_458b30;
        case 0x458b44u: goto label_458b44;
        case 0x458b50u: goto label_458b50;
        case 0x458b64u: goto label_458b64;
        case 0x458b80u: goto label_458b80;
        case 0x458b94u: goto label_458b94;
        case 0x458bacu: goto label_458bac;
        case 0x458bc4u: goto label_458bc4;
        case 0x458bf4u: goto label_458bf4;
        case 0x458c04u: goto label_458c04;
        default: break;
    }

    ctx->pc = 0x458a80u;

    // 0x458a80: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x458a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x458a84: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x458a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x458a88: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x458a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x458a8c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x458a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x458a90: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x458a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x458a94: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x458a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x458a98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x458a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x458a9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x458a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x458aa0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x458aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x458aa4: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x458aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x458aa8: 0xafa500b0  sw          $a1, 0xB0($sp)
    ctx->pc = 0x458aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
    // 0x458aac: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x458aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x458ab0: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x458ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x458ab4: 0xc04e50c  jal         func_139430
    ctx->pc = 0x458AB4u;
    SET_GPR_U32(ctx, 31, 0x458ABCu);
    ctx->pc = 0x139430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139430u, 0x458AB4u, 0x458ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458ABCu;
label_458abc:
    // 0x458abc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x458abcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458ac0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x458ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x458ac4: 0x263082b  sltu        $at, $s3, $v1
    ctx->pc = 0x458ac4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x458ac8: 0x1020004e  beqz        $at, . + 4 + (0x4E << 2)
    ctx->pc = 0x458AC8u;
    {
        const bool branch_taken_0x458ac8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x458ac8) {
            ctx->pc = 0x458C04u;
            goto label_458c04;
        }
    }
    ctx->pc = 0x458AD0u;
    // 0x458ad0: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x458ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x458ad4: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x458ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x458ad8: 0xc116138  jal         func_4584E0
    ctx->pc = 0x458AD8u;
    SET_GPR_U32(ctx, 31, 0x458AE0u);
    ctx->pc = 0x4584E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4584E0u, 0x458AD8u, 0x458AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458AE0u;
label_458ae0:
    // 0x458ae0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x458ae0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458ae4: 0x272082b  sltu        $at, $s3, $s2
    ctx->pc = 0x458ae4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x458ae8: 0x10200046  beqz        $at, . + 4 + (0x46 << 2)
    ctx->pc = 0x458AE8u;
    {
        const bool branch_taken_0x458ae8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x458ae8) {
            ctx->pc = 0x458C04u;
            goto label_458c04;
        }
    }
    ctx->pc = 0x458AF0u;
    // 0x458af0: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x458af0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
    // 0x458af4: 0x27b5009c  addiu       $s5, $sp, 0x9C
    ctx->pc = 0x458af4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x458af8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x458af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x458afc: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x458afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x458b00: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x458b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x458b04: 0xc04f590  jal         func_13D640
    ctx->pc = 0x458B04u;
    SET_GPR_U32(ctx, 31, 0x458B0Cu);
    ctx->pc = 0x13D640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D640u, 0x458B04u, 0x458B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458B0Cu;
label_458b0c:
    // 0x458b0c: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x458b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x458b10: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x458b10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458b14: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x458b14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458b18: 0x27a70098  addiu       $a3, $sp, 0x98
    ctx->pc = 0x458b18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x458b1c: 0xc04f550  jal         func_13D540
    ctx->pc = 0x458B1Cu;
    SET_GPR_U32(ctx, 31, 0x458B24u);
    ctx->pc = 0x13D540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D540u, 0x458B1Cu, 0x458B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458B24u;
label_458b24:
    // 0x458b24: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x458b24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458b28: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x458B28u;
    {
        const bool branch_taken_0x458b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x458b28) {
            ctx->pc = 0x458BD4u;
            goto label_458bd4;
        }
    }
    ctx->pc = 0x458B30u;
label_458b30:
    // 0x458b30: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x458b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x458b34: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x458b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x458b38: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x458b38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458b3c: 0xc04e51c  jal         func_139470
    ctx->pc = 0x458B3Cu;
    SET_GPR_U32(ctx, 31, 0x458B44u);
    ctx->pc = 0x139470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139470u, 0x458B3Cu, 0x458B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458B44u;
label_458b44:
    // 0x458b44: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x458b44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x458b48: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x458B48u;
    {
        const bool branch_taken_0x458b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x458b48) {
            ctx->pc = 0x458BC8u;
            goto label_458bc8;
        }
    }
    ctx->pc = 0x458B50u;
label_458b50:
    // 0x458b50: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x458b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x458b54: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x458b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x458b58: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x458b58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458b5c: 0xc11630c  jal         func_458C30
    ctx->pc = 0x458B5Cu;
    SET_GPR_U32(ctx, 31, 0x458B64u);
    ctx->pc = 0x458C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x458C30u, 0x458B5Cu, 0x458B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458B64u;
label_458b64:
    // 0x458b64: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x458b64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458b68: 0x8e160000  lw          $s6, 0x0($s0)
    ctx->pc = 0x458b68u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x458b6c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x458b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x458b70: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x458b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x458b74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x458b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458b78: 0xc04e51c  jal         func_139470
    ctx->pc = 0x458B78u;
    SET_GPR_U32(ctx, 31, 0x458B80u);
    ctx->pc = 0x139470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139470u, 0x458B78u, 0x458B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458B80u;
label_458b80:
    // 0x458b80: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x458b80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x458b84: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x458b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x458b88: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x458b88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458b8c: 0xc04e51c  jal         func_139470
    ctx->pc = 0x458B8Cu;
    SET_GPR_U32(ctx, 31, 0x458B94u);
    ctx->pc = 0x139470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139470u, 0x458B8Cu, 0x458B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458B94u;
label_458b94:
    // 0x458b94: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x458b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x458b98: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x458b98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x458b9c: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x458b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x458ba0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x458ba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458ba4: 0xc04e51c  jal         func_139470
    ctx->pc = 0x458BA4u;
    SET_GPR_U32(ctx, 31, 0x458BACu);
    ctx->pc = 0x139470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139470u, 0x458BA4u, 0x458BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458BACu;
label_458bac:
    // 0x458bac: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x458bacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x458bb0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x458bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x458bb4: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x458bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x458bb8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x458bb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458bbc: 0xc04e51c  jal         func_139470
    ctx->pc = 0x458BBCu;
    SET_GPR_U32(ctx, 31, 0x458BC4u);
    ctx->pc = 0x139470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139470u, 0x458BBCu, 0x458BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458BC4u;
label_458bc4:
    // 0x458bc4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x458bc4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_458bc8:
    // 0x458bc8: 0x1600ffe1  bnez        $s0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x458BC8u;
    {
        const bool branch_taken_0x458bc8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x458bc8) {
            ctx->pc = 0x458B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_458b50;
        }
    }
    ctx->pc = 0x458BD0u;
    // 0x458bd0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x458bd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_458bd4:
    // 0x458bd4: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x458bd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x458bd8: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x458BD8u;
    {
        const bool branch_taken_0x458bd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x458bd8) {
            ctx->pc = 0x458B30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_458b30;
        }
    }
    ctx->pc = 0x458BE0u;
    // 0x458be0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x458be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x458be4: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x458be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x458be8: 0x27a50088  addiu       $a1, $sp, 0x88
    ctx->pc = 0x458be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x458bec: 0xc04f4d0  jal         func_13D340
    ctx->pc = 0x458BECu;
    SET_GPR_U32(ctx, 31, 0x458BF4u);
    ctx->pc = 0x13D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D340u, 0x458BECu, 0x458BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458BF4u;
label_458bf4:
    // 0x458bf4: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x458bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x458bf8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x458bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x458bfc: 0xc04dfd4  jal         func_137F50
    ctx->pc = 0x458BFCu;
    SET_GPR_U32(ctx, 31, 0x458C04u);
    ctx->pc = 0x137F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137F50u, 0x458BFCu, 0x458C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458C04u;
label_458c04:
    // 0x458c04: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x458c04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x458c08: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x458c08u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x458c0c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x458c0cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x458c10: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x458c10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x458c14: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x458c14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x458c18: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x458c18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x458c1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x458c1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x458c20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x458c20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x458c24: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x458c24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x458c28: 0x3e00008  jr          $ra
    ctx->pc = 0x458C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x458C28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x458C30u;
}

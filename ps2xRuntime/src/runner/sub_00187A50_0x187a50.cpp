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

// Function: sub_00187A50
// Address: 0x187a50 - 0x187c60
void sub_00187A50_0x187a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187A50_0x187a50");
#endif

    switch (ctx->pc) {
        case 0x187ac0u: goto label_187ac0;
        case 0x187ad0u: goto label_187ad0;
        case 0x187ae8u: goto label_187ae8;
        case 0x187b00u: goto label_187b00;
        case 0x187b10u: goto label_187b10;
        case 0x187b30u: goto label_187b30;
        case 0x187b40u: goto label_187b40;
        case 0x187b58u: goto label_187b58;
        case 0x187b70u: goto label_187b70;
        case 0x187b8cu: goto label_187b8c;
        case 0x187b9cu: goto label_187b9c;
        case 0x187bacu: goto label_187bac;
        case 0x187bc4u: goto label_187bc4;
        case 0x187bd4u: goto label_187bd4;
        case 0x187be4u: goto label_187be4;
        case 0x187bf4u: goto label_187bf4;
        case 0x187c10u: goto label_187c10;
        case 0x187c30u: goto label_187c30;
        default: break;
    }

    ctx->pc = 0x187a50u;

    // 0x187a50: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x187a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x187a54: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x187a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x187a58: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x187a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x187a5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x187a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x187a60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x187a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x187a64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x187a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x187a68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x187a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x187a6c: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x187a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x187a70: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x187a70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x187a74: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x187a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x187a78: 0xafa700a0  sw          $a3, 0xA0($sp)
    ctx->pc = 0x187a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 7));
    // 0x187a7c: 0xafa800b0  sw          $t0, 0xB0($sp)
    ctx->pc = 0x187a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 8));
    // 0x187a80: 0xafa900c0  sw          $t1, 0xC0($sp)
    ctx->pc = 0x187a80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 9));
    // 0x187a84: 0x8fb300c0  lw          $s3, 0xC0($sp)
    ctx->pc = 0x187a84u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x187a88: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x187a88u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x187a8c: 0x8fb100a0  lw          $s1, 0xA0($sp)
    ctx->pc = 0x187a8cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x187a90: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x187a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x187a94: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x187a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x187a98: 0x12220015  beq         $s1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x187A98u;
    {
        const bool branch_taken_0x187a98 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x187a98) {
            ctx->pc = 0x187AF0u;
            goto label_187af0;
        }
    }
    ctx->pc = 0x187AA0u;
    // 0x187aa0: 0x16600036  bnez        $s3, . + 4 + (0x36 << 2)
    ctx->pc = 0x187AA0u;
    {
        const bool branch_taken_0x187aa0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x187aa0) {
            ctx->pc = 0x187B7Cu;
            goto label_187b7c;
        }
    }
    ctx->pc = 0x187AA8u;
    // 0x187aa8: 0x16400011  bnez        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x187AA8u;
    {
        const bool branch_taken_0x187aa8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x187aa8) {
            ctx->pc = 0x187AF0u;
            goto label_187af0;
        }
    }
    ctx->pc = 0x187AB0u;
    // 0x187ab0: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x187ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x187ab4: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x187ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x187ab8: 0xc061df4  jal         func_1877D0
    ctx->pc = 0x187AB8u;
    SET_GPR_U32(ctx, 31, 0x187AC0u);
    ctx->pc = 0x1877D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1877D0u, 0x187AB8u, 0x187AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187AC0u;
label_187ac0:
    // 0x187ac0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x187ac0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187ac4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x187ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187ac8: 0xc061ddc  jal         func_187770
    ctx->pc = 0x187AC8u;
    SET_GPR_U32(ctx, 31, 0x187AD0u);
    ctx->pc = 0x187770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187770u, 0x187AC8u, 0x187AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187AD0u;
label_187ad0:
    // 0x187ad0: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x187ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x187ad4: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x187ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x187ad8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x187ad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187adc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x187adcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187ae0: 0xc061dd0  jal         func_187740
    ctx->pc = 0x187AE0u;
    SET_GPR_U32(ctx, 31, 0x187AE8u);
    ctx->pc = 0x187740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187740u, 0x187AE0u, 0x187AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187AE8u;
label_187ae8:
    // 0x187ae8: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x187AE8u;
    {
        const bool branch_taken_0x187ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187ae8) {
            ctx->pc = 0x187B7Cu;
            goto label_187b7c;
        }
    }
    ctx->pc = 0x187AF0u;
label_187af0:
    // 0x187af0: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x187af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x187af4: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x187af4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x187af8: 0xc061f2c  jal         func_187CB0
    ctx->pc = 0x187AF8u;
    SET_GPR_U32(ctx, 31, 0x187B00u);
    ctx->pc = 0x187CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187CB0u, 0x187AF8u, 0x187B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187B00u;
label_187b00:
    // 0x187b00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x187b00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187b04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x187b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187b08: 0xc061dc8  jal         func_187720
    ctx->pc = 0x187B08u;
    SET_GPR_U32(ctx, 31, 0x187B10u);
    ctx->pc = 0x187720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187720u, 0x187B08u, 0x187B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187B10u;
label_187b10:
    // 0x187b10: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x187b10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x187b14: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x187b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x187b18: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x187b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x187b1c: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x187B1Cu;
    {
        const bool branch_taken_0x187b1c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x187b1c) {
            ctx->pc = 0x187B4Cu;
            goto label_187b4c;
        }
    }
    ctx->pc = 0x187B24u;
    // 0x187b24: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x187b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x187b28: 0xc060fe8  jal         func_183FA0
    ctx->pc = 0x187B28u;
    SET_GPR_U32(ctx, 31, 0x187B30u);
    ctx->pc = 0x183FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183FA0u, 0x187B28u, 0x187B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187B30u;
label_187b30:
    // 0x187b30: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x187b30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x187b34: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x187b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x187b38: 0xc060fd8  jal         func_183F60
    ctx->pc = 0x187B38u;
    SET_GPR_U32(ctx, 31, 0x187B40u);
    ctx->pc = 0x183F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183F60u, 0x187B38u, 0x187B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187B40u;
label_187b40:
    // 0x187b40: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x187b40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x187b44: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x187B44u;
    {
        const bool branch_taken_0x187b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187b44) {
            ctx->pc = 0x187BC8u;
            goto label_187bc8;
        }
    }
    ctx->pc = 0x187B4Cu;
label_187b4c:
    // 0x187b4c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x187b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x187b50: 0xc060fe0  jal         func_183F80
    ctx->pc = 0x187B50u;
    SET_GPR_U32(ctx, 31, 0x187B58u);
    ctx->pc = 0x183F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183F80u, 0x187B50u, 0x187B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187B58u;
label_187b58:
    // 0x187b58: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x187b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x187b5c: 0x1622001a  bne         $s1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x187B5Cu;
    {
        const bool branch_taken_0x187b5c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x187b5c) {
            ctx->pc = 0x187BC8u;
            goto label_187bc8;
        }
    }
    ctx->pc = 0x187B64u;
    // 0x187b64: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x187b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x187b68: 0xc060fe0  jal         func_183F80
    ctx->pc = 0x187B68u;
    SET_GPR_U32(ctx, 31, 0x187B70u);
    ctx->pc = 0x183F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183F80u, 0x187B68u, 0x187B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187B70u;
label_187b70:
    // 0x187b70: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x187b70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x187b74: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x187B74u;
    {
        const bool branch_taken_0x187b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187b74) {
            ctx->pc = 0x187BC8u;
            goto label_187bc8;
        }
    }
    ctx->pc = 0x187B7Cu;
label_187b7c:
    // 0x187b7c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x187b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x187b80: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x187b80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x187b84: 0xc061f2c  jal         func_187CB0
    ctx->pc = 0x187B84u;
    SET_GPR_U32(ctx, 31, 0x187B8Cu);
    ctx->pc = 0x187CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187CB0u, 0x187B84u, 0x187B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187B8Cu;
label_187b8c:
    // 0x187b8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x187b8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187b90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x187b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187b94: 0xc061dc0  jal         func_187700
    ctx->pc = 0x187B94u;
    SET_GPR_U32(ctx, 31, 0x187B9Cu);
    ctx->pc = 0x187700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187700u, 0x187B94u, 0x187B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187B9Cu;
label_187b9c:
    // 0x187b9c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x187b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x187ba0: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x187ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x187ba4: 0xc060fd8  jal         func_183F60
    ctx->pc = 0x187BA4u;
    SET_GPR_U32(ctx, 31, 0x187BACu);
    ctx->pc = 0x183F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183F60u, 0x187BA4u, 0x187BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187BACu;
label_187bac:
    // 0x187bac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x187bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x187bb0: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x187BB0u;
    {
        const bool branch_taken_0x187bb0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x187bb0) {
            ctx->pc = 0x187BC8u;
            goto label_187bc8;
        }
    }
    ctx->pc = 0x187BB8u;
    // 0x187bb8: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x187bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x187bbc: 0xc060fd8  jal         func_183F60
    ctx->pc = 0x187BBCu;
    SET_GPR_U32(ctx, 31, 0x187BC4u);
    ctx->pc = 0x183F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183F60u, 0x187BBCu, 0x187BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187BC4u;
label_187bc4:
    // 0x187bc4: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x187bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_187bc8:
    // 0x187bc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x187bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187bcc: 0xc061f24  jal         func_187C90
    ctx->pc = 0x187BCCu;
    SET_GPR_U32(ctx, 31, 0x187BD4u);
    ctx->pc = 0x187C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187C90u, 0x187BCCu, 0x187BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187BD4u;
label_187bd4:
    // 0x187bd4: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x187bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x187bd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x187bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187bdc: 0xc061dc8  jal         func_187720
    ctx->pc = 0x187BDCu;
    SET_GPR_U32(ctx, 31, 0x187BE4u);
    ctx->pc = 0x187720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187720u, 0x187BDCu, 0x187BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187BE4u;
label_187be4:
    // 0x187be4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x187be4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x187be8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x187be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187bec: 0xc061dc0  jal         func_187700
    ctx->pc = 0x187BECu;
    SET_GPR_U32(ctx, 31, 0x187BF4u);
    ctx->pc = 0x187700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187700u, 0x187BECu, 0x187BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187BF4u;
label_187bf4:
    // 0x187bf4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x187bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x187bf8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x187bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x187bfc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x187bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x187c00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x187c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187c04: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x187c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x187c08: 0xc042858  jal         func_10A160
    ctx->pc = 0x187C08u;
    SET_GPR_U32(ctx, 31, 0x187C10u);
    ctx->pc = 0x10A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A160u, 0x187C08u, 0x187C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187C10u;
label_187c10:
    // 0x187c10: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x187c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x187c14: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x187c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x187c18: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x187c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x187c1c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x187c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x187c20: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x187c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x187c24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x187c24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187c28: 0xc061f18  jal         func_187C60
    ctx->pc = 0x187C28u;
    SET_GPR_U32(ctx, 31, 0x187C30u);
    ctx->pc = 0x187C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187C60u, 0x187C28u, 0x187C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187C30u;
label_187c30:
    // 0x187c30: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x187c30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x187c34: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x187c34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x187c38: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x187c38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x187c3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x187c3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x187c40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x187c40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187c44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x187c44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187c48: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x187c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x187c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x187C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187C54u;
    // 0x187c54: 0x0  nop
    ctx->pc = 0x187c54u;
    // NOP
    // 0x187c58: 0x0  nop
    ctx->pc = 0x187c58u;
    // NOP
    // 0x187c5c: 0x0  nop
    ctx->pc = 0x187c5cu;
    // NOP
    ctx->pc = 0x187c60u;
}

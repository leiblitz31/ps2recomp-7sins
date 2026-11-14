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

// Function: sub_00257A80
// Address: 0x257a80 - 0x257c90
void sub_00257A80_0x257a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257A80_0x257a80");
#endif

    switch (ctx->pc) {
        case 0x257af0u: goto label_257af0;
        case 0x257b00u: goto label_257b00;
        case 0x257b18u: goto label_257b18;
        case 0x257b30u: goto label_257b30;
        case 0x257b40u: goto label_257b40;
        case 0x257b60u: goto label_257b60;
        case 0x257b70u: goto label_257b70;
        case 0x257b88u: goto label_257b88;
        case 0x257ba0u: goto label_257ba0;
        case 0x257bbcu: goto label_257bbc;
        case 0x257bccu: goto label_257bcc;
        case 0x257bdcu: goto label_257bdc;
        case 0x257bf4u: goto label_257bf4;
        case 0x257c04u: goto label_257c04;
        case 0x257c14u: goto label_257c14;
        case 0x257c24u: goto label_257c24;
        case 0x257c40u: goto label_257c40;
        case 0x257c60u: goto label_257c60;
        default: break;
    }

    ctx->pc = 0x257a80u;

    // 0x257a80: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x257a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x257a84: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x257a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x257a88: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x257a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x257a8c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x257a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x257a90: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x257a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x257a94: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x257a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x257a98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x257a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x257a9c: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x257a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x257aa0: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x257aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x257aa4: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x257aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x257aa8: 0xafa700a0  sw          $a3, 0xA0($sp)
    ctx->pc = 0x257aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 7));
    // 0x257aac: 0xafa800b0  sw          $t0, 0xB0($sp)
    ctx->pc = 0x257aacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 8));
    // 0x257ab0: 0xafa900c0  sw          $t1, 0xC0($sp)
    ctx->pc = 0x257ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 9));
    // 0x257ab4: 0x8fb300c0  lw          $s3, 0xC0($sp)
    ctx->pc = 0x257ab4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x257ab8: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x257ab8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x257abc: 0x8fb100a0  lw          $s1, 0xA0($sp)
    ctx->pc = 0x257abcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x257ac0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x257ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x257ac4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x257ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x257ac8: 0x12220015  beq         $s1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x257AC8u;
    {
        const bool branch_taken_0x257ac8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x257ac8) {
            ctx->pc = 0x257B20u;
            goto label_257b20;
        }
    }
    ctx->pc = 0x257AD0u;
    // 0x257ad0: 0x16600036  bnez        $s3, . + 4 + (0x36 << 2)
    ctx->pc = 0x257AD0u;
    {
        const bool branch_taken_0x257ad0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x257ad0) {
            ctx->pc = 0x257BACu;
            goto label_257bac;
        }
    }
    ctx->pc = 0x257AD8u;
    // 0x257ad8: 0x16400011  bnez        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x257AD8u;
    {
        const bool branch_taken_0x257ad8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x257ad8) {
            ctx->pc = 0x257B20u;
            goto label_257b20;
        }
    }
    ctx->pc = 0x257AE0u;
    // 0x257ae0: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x257ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x257ae4: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x257ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x257ae8: 0xc095e6c  jal         func_2579B0
    ctx->pc = 0x257AE8u;
    SET_GPR_U32(ctx, 31, 0x257AF0u);
    ctx->pc = 0x2579B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2579B0u, 0x257AE8u, 0x257AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257AF0u;
label_257af0:
    // 0x257af0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x257af0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257af4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x257af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257af8: 0xc095e5c  jal         func_257970
    ctx->pc = 0x257AF8u;
    SET_GPR_U32(ctx, 31, 0x257B00u);
    ctx->pc = 0x257970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257970u, 0x257AF8u, 0x257B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257B00u;
label_257b00:
    // 0x257b00: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x257b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x257b04: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x257b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x257b08: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x257b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257b0c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x257b0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257b10: 0xc095e50  jal         func_257940
    ctx->pc = 0x257B10u;
    SET_GPR_U32(ctx, 31, 0x257B18u);
    ctx->pc = 0x257940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257940u, 0x257B10u, 0x257B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257B18u;
label_257b18:
    // 0x257b18: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x257B18u;
    {
        const bool branch_taken_0x257b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x257b18) {
            ctx->pc = 0x257BACu;
            goto label_257bac;
        }
    }
    ctx->pc = 0x257B20u;
label_257b20:
    // 0x257b20: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x257b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x257b24: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x257b24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x257b28: 0xc095f2c  jal         func_257CB0
    ctx->pc = 0x257B28u;
    SET_GPR_U32(ctx, 31, 0x257B30u);
    ctx->pc = 0x257CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257CB0u, 0x257B28u, 0x257B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257B30u;
label_257b30:
    // 0x257b30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x257b30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257b34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x257b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257b38: 0xc095e48  jal         func_257920
    ctx->pc = 0x257B38u;
    SET_GPR_U32(ctx, 31, 0x257B40u);
    ctx->pc = 0x257920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257920u, 0x257B38u, 0x257B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257B40u;
label_257b40:
    // 0x257b40: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x257b40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x257b44: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x257b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x257b48: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x257b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x257b4c: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x257B4Cu;
    {
        const bool branch_taken_0x257b4c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x257b4c) {
            ctx->pc = 0x257B7Cu;
            goto label_257b7c;
        }
    }
    ctx->pc = 0x257B54u;
    // 0x257b54: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x257b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x257b58: 0xc095140  jal         func_254500
    ctx->pc = 0x257B58u;
    SET_GPR_U32(ctx, 31, 0x257B60u);
    ctx->pc = 0x254500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254500u, 0x257B58u, 0x257B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257B60u;
label_257b60:
    // 0x257b60: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x257b60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x257b64: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x257b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x257b68: 0xc095130  jal         func_2544C0
    ctx->pc = 0x257B68u;
    SET_GPR_U32(ctx, 31, 0x257B70u);
    ctx->pc = 0x2544C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544C0u, 0x257B68u, 0x257B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257B70u;
label_257b70:
    // 0x257b70: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x257b70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x257b74: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x257B74u;
    {
        const bool branch_taken_0x257b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x257b74) {
            ctx->pc = 0x257BF8u;
            goto label_257bf8;
        }
    }
    ctx->pc = 0x257B7Cu;
label_257b7c:
    // 0x257b7c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x257b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x257b80: 0xc095138  jal         func_2544E0
    ctx->pc = 0x257B80u;
    SET_GPR_U32(ctx, 31, 0x257B88u);
    ctx->pc = 0x2544E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544E0u, 0x257B80u, 0x257B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257B88u;
label_257b88:
    // 0x257b88: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x257b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x257b8c: 0x1622001a  bne         $s1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x257B8Cu;
    {
        const bool branch_taken_0x257b8c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x257b8c) {
            ctx->pc = 0x257BF8u;
            goto label_257bf8;
        }
    }
    ctx->pc = 0x257B94u;
    // 0x257b94: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x257b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x257b98: 0xc095138  jal         func_2544E0
    ctx->pc = 0x257B98u;
    SET_GPR_U32(ctx, 31, 0x257BA0u);
    ctx->pc = 0x2544E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544E0u, 0x257B98u, 0x257BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257BA0u;
label_257ba0:
    // 0x257ba0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x257ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x257ba4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x257BA4u;
    {
        const bool branch_taken_0x257ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x257ba4) {
            ctx->pc = 0x257BF8u;
            goto label_257bf8;
        }
    }
    ctx->pc = 0x257BACu;
label_257bac:
    // 0x257bac: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x257bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x257bb0: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x257bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x257bb4: 0xc095f2c  jal         func_257CB0
    ctx->pc = 0x257BB4u;
    SET_GPR_U32(ctx, 31, 0x257BBCu);
    ctx->pc = 0x257CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257CB0u, 0x257BB4u, 0x257BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257BBCu;
label_257bbc:
    // 0x257bbc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x257bbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257bc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x257bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257bc4: 0xc095e40  jal         func_257900
    ctx->pc = 0x257BC4u;
    SET_GPR_U32(ctx, 31, 0x257BCCu);
    ctx->pc = 0x257900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257900u, 0x257BC4u, 0x257BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257BCCu;
label_257bcc:
    // 0x257bcc: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x257bccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x257bd0: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x257bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x257bd4: 0xc095130  jal         func_2544C0
    ctx->pc = 0x257BD4u;
    SET_GPR_U32(ctx, 31, 0x257BDCu);
    ctx->pc = 0x2544C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544C0u, 0x257BD4u, 0x257BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257BDCu;
label_257bdc:
    // 0x257bdc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x257bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x257be0: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x257BE0u;
    {
        const bool branch_taken_0x257be0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x257be0) {
            ctx->pc = 0x257BF8u;
            goto label_257bf8;
        }
    }
    ctx->pc = 0x257BE8u;
    // 0x257be8: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x257be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x257bec: 0xc095130  jal         func_2544C0
    ctx->pc = 0x257BECu;
    SET_GPR_U32(ctx, 31, 0x257BF4u);
    ctx->pc = 0x2544C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544C0u, 0x257BECu, 0x257BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257BF4u;
label_257bf4:
    // 0x257bf4: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x257bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_257bf8:
    // 0x257bf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x257bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257bfc: 0xc095f24  jal         func_257C90
    ctx->pc = 0x257BFCu;
    SET_GPR_U32(ctx, 31, 0x257C04u);
    ctx->pc = 0x257C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257C90u, 0x257BFCu, 0x257C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257C04u;
label_257c04:
    // 0x257c04: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x257c04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x257c08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x257c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257c0c: 0xc095e48  jal         func_257920
    ctx->pc = 0x257C0Cu;
    SET_GPR_U32(ctx, 31, 0x257C14u);
    ctx->pc = 0x257920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257920u, 0x257C0Cu, 0x257C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257C14u;
label_257c14:
    // 0x257c14: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x257c14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x257c18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x257c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257c1c: 0xc095e40  jal         func_257900
    ctx->pc = 0x257C1Cu;
    SET_GPR_U32(ctx, 31, 0x257C24u);
    ctx->pc = 0x257900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257900u, 0x257C1Cu, 0x257C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257C24u;
label_257c24:
    // 0x257c24: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x257c24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x257c28: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x257c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x257c2c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x257c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x257c30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x257c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257c34: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x257c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x257c38: 0xc042858  jal         func_10A160
    ctx->pc = 0x257C38u;
    SET_GPR_U32(ctx, 31, 0x257C40u);
    ctx->pc = 0x10A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A160u, 0x257C38u, 0x257C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257C40u;
label_257c40:
    // 0x257c40: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x257c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x257c44: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x257c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x257c48: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x257c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x257c4c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x257c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x257c50: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x257c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x257c54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x257c54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257c58: 0xc095e34  jal         func_2578D0
    ctx->pc = 0x257C58u;
    SET_GPR_U32(ctx, 31, 0x257C60u);
    ctx->pc = 0x2578D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2578D0u, 0x257C58u, 0x257C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257C60u;
label_257c60:
    // 0x257c60: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x257c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x257c64: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x257c64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x257c68: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x257c68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257c6c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x257c6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x257c70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x257c70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257c74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x257c74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257c78: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x257c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x257c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x257C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257C84u;
    // 0x257c84: 0x0  nop
    ctx->pc = 0x257c84u;
    // NOP
    // 0x257c88: 0x0  nop
    ctx->pc = 0x257c88u;
    // NOP
    // 0x257c8c: 0x0  nop
    ctx->pc = 0x257c8cu;
    // NOP
    ctx->pc = 0x257c90u;
}

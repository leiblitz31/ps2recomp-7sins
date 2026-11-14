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

// Function: sub_00456BB0
// Address: 0x456bb0 - 0x456d50
void sub_00456BB0_0x456bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00456BB0_0x456bb0");
#endif

    switch (ctx->pc) {
        case 0x456bb0u: goto label_456bb0;
        case 0x456bb4u: goto label_456bb4;
        case 0x456bb8u: goto label_456bb8;
        case 0x456bbcu: goto label_456bbc;
        case 0x456bc0u: goto label_456bc0;
        case 0x456bc4u: goto label_456bc4;
        case 0x456bc8u: goto label_456bc8;
        case 0x456bccu: goto label_456bcc;
        case 0x456bd0u: goto label_456bd0;
        case 0x456bd4u: goto label_456bd4;
        case 0x456bd8u: goto label_456bd8;
        case 0x456bdcu: goto label_456bdc;
        case 0x456be0u: goto label_456be0;
        case 0x456be4u: goto label_456be4;
        case 0x456be8u: goto label_456be8;
        case 0x456becu: goto label_456bec;
        case 0x456bf0u: goto label_456bf0;
        case 0x456bf4u: goto label_456bf4;
        case 0x456bf8u: goto label_456bf8;
        case 0x456bfcu: goto label_456bfc;
        case 0x456c00u: goto label_456c00;
        case 0x456c04u: goto label_456c04;
        case 0x456c08u: goto label_456c08;
        case 0x456c0cu: goto label_456c0c;
        case 0x456c10u: goto label_456c10;
        case 0x456c14u: goto label_456c14;
        case 0x456c18u: goto label_456c18;
        case 0x456c1cu: goto label_456c1c;
        case 0x456c20u: goto label_456c20;
        case 0x456c24u: goto label_456c24;
        case 0x456c28u: goto label_456c28;
        case 0x456c2cu: goto label_456c2c;
        case 0x456c30u: goto label_456c30;
        case 0x456c34u: goto label_456c34;
        case 0x456c38u: goto label_456c38;
        case 0x456c3cu: goto label_456c3c;
        case 0x456c40u: goto label_456c40;
        case 0x456c44u: goto label_456c44;
        case 0x456c48u: goto label_456c48;
        case 0x456c4cu: goto label_456c4c;
        case 0x456c50u: goto label_456c50;
        case 0x456c54u: goto label_456c54;
        case 0x456c58u: goto label_456c58;
        case 0x456c5cu: goto label_456c5c;
        case 0x456c60u: goto label_456c60;
        case 0x456c64u: goto label_456c64;
        case 0x456c68u: goto label_456c68;
        case 0x456c6cu: goto label_456c6c;
        case 0x456c70u: goto label_456c70;
        case 0x456c74u: goto label_456c74;
        case 0x456c78u: goto label_456c78;
        case 0x456c7cu: goto label_456c7c;
        case 0x456c80u: goto label_456c80;
        case 0x456c84u: goto label_456c84;
        case 0x456c88u: goto label_456c88;
        case 0x456c8cu: goto label_456c8c;
        case 0x456c90u: goto label_456c90;
        case 0x456c94u: goto label_456c94;
        case 0x456c98u: goto label_456c98;
        case 0x456c9cu: goto label_456c9c;
        case 0x456ca0u: goto label_456ca0;
        case 0x456ca4u: goto label_456ca4;
        case 0x456ca8u: goto label_456ca8;
        case 0x456cacu: goto label_456cac;
        case 0x456cb0u: goto label_456cb0;
        case 0x456cb4u: goto label_456cb4;
        case 0x456cb8u: goto label_456cb8;
        case 0x456cbcu: goto label_456cbc;
        case 0x456cc0u: goto label_456cc0;
        case 0x456cc4u: goto label_456cc4;
        case 0x456cc8u: goto label_456cc8;
        case 0x456cccu: goto label_456ccc;
        case 0x456cd0u: goto label_456cd0;
        case 0x456cd4u: goto label_456cd4;
        case 0x456cd8u: goto label_456cd8;
        case 0x456cdcu: goto label_456cdc;
        case 0x456ce0u: goto label_456ce0;
        case 0x456ce4u: goto label_456ce4;
        case 0x456ce8u: goto label_456ce8;
        case 0x456cecu: goto label_456cec;
        case 0x456cf0u: goto label_456cf0;
        case 0x456cf4u: goto label_456cf4;
        case 0x456cf8u: goto label_456cf8;
        case 0x456cfcu: goto label_456cfc;
        case 0x456d00u: goto label_456d00;
        case 0x456d04u: goto label_456d04;
        case 0x456d08u: goto label_456d08;
        case 0x456d0cu: goto label_456d0c;
        case 0x456d10u: goto label_456d10;
        case 0x456d14u: goto label_456d14;
        case 0x456d18u: goto label_456d18;
        case 0x456d1cu: goto label_456d1c;
        case 0x456d20u: goto label_456d20;
        case 0x456d24u: goto label_456d24;
        case 0x456d28u: goto label_456d28;
        case 0x456d2cu: goto label_456d2c;
        case 0x456d30u: goto label_456d30;
        case 0x456d34u: goto label_456d34;
        case 0x456d38u: goto label_456d38;
        case 0x456d3cu: goto label_456d3c;
        case 0x456d40u: goto label_456d40;
        case 0x456d44u: goto label_456d44;
        case 0x456d48u: goto label_456d48;
        case 0x456d4cu: goto label_456d4c;
        default: break;
    }

    ctx->pc = 0x456bb0u;

label_456bb0:
    // 0x456bb0: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x456bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_456bb4:
    // 0x456bb4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x456bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_456bb8:
    // 0x456bb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x456bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_456bbc:
    // 0x456bbc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x456bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_456bc0:
    // 0x456bc0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x456bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_456bc4:
    // 0x456bc4: 0x9382bf30  lbu         $v0, -0x40D0($gp)
    ctx->pc = 0x456bc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950704)));
label_456bc8:
    // 0x456bc8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x456bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_456bcc:
    // 0x456bcc: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x456bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_456bd0:
    // 0x456bd0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x456bd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_456bd4:
    // 0x456bd4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x456bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_456bd8:
    // 0x456bd8: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_456bdc:
    if (ctx->pc == 0x456BDCu) {
        ctx->pc = 0x456BE0u;
        goto label_456be0;
    }
    ctx->pc = 0x456BD8u;
    {
        const bool branch_taken_0x456bd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x456bd8) {
            ctx->pc = 0x456C88u;
            goto label_456c88;
        }
    }
    ctx->pc = 0x456BE0u;
label_456be0:
    // 0x456be0: 0x8f82b0a8  lw          $v0, -0x4F58($gp)
    ctx->pc = 0x456be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946984)));
label_456be4:
    // 0x456be4: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_456be8:
    if (ctx->pc == 0x456BE8u) {
        ctx->pc = 0x456BECu;
        goto label_456bec;
    }
    ctx->pc = 0x456BE4u;
    {
        const bool branch_taken_0x456be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x456be4) {
            ctx->pc = 0x456C88u;
            goto label_456c88;
        }
    }
    ctx->pc = 0x456BECu;
label_456bec:
    // 0x456bec: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x456becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_456bf0:
    // 0x456bf0: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x456bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_456bf4:
    // 0x456bf4: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x456bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_456bf8:
    // 0x456bf8: 0xc115ee8  jal         func_457BA0
label_456bfc:
    if (ctx->pc == 0x456BFCu) {
        ctx->pc = 0x456C00u;
        goto label_456c00;
    }
    ctx->pc = 0x456BF8u;
    SET_GPR_U32(ctx, 31, 0x456C00u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x456BF8u, 0x456C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x456C00u;
label_456c00:
    // 0x456c00: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_456c04:
    if (ctx->pc == 0x456C04u) {
        ctx->pc = 0x456C08u;
        goto label_456c08;
    }
    ctx->pc = 0x456C00u;
    {
        const bool branch_taken_0x456c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x456c00) {
            ctx->pc = 0x456C88u;
            goto label_456c88;
        }
    }
    ctx->pc = 0x456C08u;
label_456c08:
    // 0x456c08: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x456c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_456c0c:
    // 0x456c0c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_456c10:
    if (ctx->pc == 0x456C10u) {
        ctx->pc = 0x456C14u;
        goto label_456c14;
    }
    ctx->pc = 0x456C0Cu;
    {
        const bool branch_taken_0x456c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x456c0c) {
            ctx->pc = 0x456C88u;
            goto label_456c88;
        }
    }
    ctx->pc = 0x456C14u;
label_456c14:
    // 0x456c14: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x456c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_456c18:
    // 0x456c18: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x456c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_456c1c:
    // 0x456c1c: 0x8fa60164  lw          $a2, 0x164($sp)
    ctx->pc = 0x456c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
label_456c20:
    // 0x456c20: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x456c20u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_456c24:
    // 0x456c24: 0x24e7e4b0  addiu       $a3, $a3, -0x1B50
    ctx->pc = 0x456c24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960304));
label_456c28:
    // 0x456c28: 0x24080081  addiu       $t0, $zero, 0x81
    ctx->pc = 0x456c28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
label_456c2c:
    // 0x456c2c: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x456c2cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_456c30:
    // 0x456c30: 0x2529e4c0  addiu       $t1, $t1, -0x1B40
    ctx->pc = 0x456c30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294960320));
label_456c34:
    // 0x456c34: 0xc113940  jal         func_44E500
label_456c38:
    if (ctx->pc == 0x456C38u) {
        ctx->pc = 0x456C3Cu;
        goto label_456c3c;
    }
    ctx->pc = 0x456C34u;
    SET_GPR_U32(ctx, 31, 0x456C3Cu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x456C34u, 0x456C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x456C3Cu;
label_456c3c:
    // 0x456c3c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x456c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_456c40:
    // 0x456c40: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x456c40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_456c44:
    // 0x456c44: 0x24a5e4e0  addiu       $a1, $a1, -0x1B20
    ctx->pc = 0x456c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960352));
label_456c48:
    // 0x456c48: 0xc115c24  jal         func_457090
label_456c4c:
    if (ctx->pc == 0x456C4Cu) {
        ctx->pc = 0x456C50u;
        goto label_456c50;
    }
    ctx->pc = 0x456C48u;
    SET_GPR_U32(ctx, 31, 0x456C50u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x456C48u, 0x456C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x456C50u;
label_456c50:
    // 0x456c50: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x456c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_456c54:
    // 0x456c54: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x456c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_456c58:
    // 0x456c58: 0x40f809  jalr        $v0
label_456c5c:
    if (ctx->pc == 0x456C5Cu) {
        ctx->pc = 0x456C60u;
        goto label_456c60;
    }
    ctx->pc = 0x456C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x456C60u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x456C58u, 0x456C60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x456C60u;
label_456c60:
    // 0x456c60: 0xaf82b0a8  sw          $v0, -0x4F58($gp)
    ctx->pc = 0x456c60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946984), GPR_U32(ctx, 2));
label_456c64:
    // 0x456c64: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x456c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_456c68:
    // 0x456c68: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_456c6c:
    if (ctx->pc == 0x456C6Cu) {
        ctx->pc = 0x456C70u;
        goto label_456c70;
    }
    ctx->pc = 0x456C68u;
    {
        const bool branch_taken_0x456c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x456c68) {
            ctx->pc = 0x456C78u;
            goto label_456c78;
        }
    }
    ctx->pc = 0x456C70u;
label_456c70:
    // 0x456c70: 0xd  break       0
    ctx->pc = 0x456c70u;
    runtime->handleBreak(rdram, ctx);
label_456c74:
    // 0x456c74: 0x0  nop
    ctx->pc = 0x456c74u;
    // NOP
label_456c78:
    // 0x456c78: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x456c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_456c7c:
    // 0x456c7c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x456c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_456c80:
    // 0x456c80: 0xc11392c  jal         func_44E4B0
label_456c84:
    if (ctx->pc == 0x456C84u) {
        ctx->pc = 0x456C88u;
        goto label_456c88;
    }
    ctx->pc = 0x456C80u;
    SET_GPR_U32(ctx, 31, 0x456C88u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x456C80u, 0x456C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x456C88u;
label_456c88:
    // 0x456c88: 0x9382bf30  lbu         $v0, -0x40D0($gp)
    ctx->pc = 0x456c88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950704)));
label_456c8c:
    // 0x456c8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_456c90:
    if (ctx->pc == 0x456C90u) {
        ctx->pc = 0x456C94u;
        goto label_456c94;
    }
    ctx->pc = 0x456C8Cu;
    {
        const bool branch_taken_0x456c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x456c8c) {
            ctx->pc = 0x456CA0u;
            goto label_456ca0;
        }
    }
    ctx->pc = 0x456C94u;
label_456c94:
    // 0x456c94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x456c94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_456c98:
    // 0x456c98: 0x10000025  b           . + 4 + (0x25 << 2)
label_456c9c:
    if (ctx->pc == 0x456C9Cu) {
        ctx->pc = 0x456CA0u;
        goto label_456ca0;
    }
    ctx->pc = 0x456C98u;
    {
        const bool branch_taken_0x456c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x456c98) {
            ctx->pc = 0x456D30u;
            goto label_456d30;
        }
    }
    ctx->pc = 0x456CA0u;
label_456ca0:
    // 0x456ca0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x456ca0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_456ca4:
    // 0x456ca4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x456ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_456ca8:
    // 0x456ca8: 0xc119b68  jal         func_466DA0
label_456cac:
    if (ctx->pc == 0x456CACu) {
        ctx->pc = 0x456CB0u;
        goto label_456cb0;
    }
    ctx->pc = 0x456CA8u;
    SET_GPR_U32(ctx, 31, 0x456CB0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x456CA8u, 0x456CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x456CB0u;
label_456cb0:
    // 0x456cb0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x456cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_456cb4:
    // 0x456cb4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x456cb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_456cb8:
    // 0x456cb8: 0xc0400e0  jal         func_100380
label_456cbc:
    if (ctx->pc == 0x456CBCu) {
        ctx->pc = 0x456CC0u;
        goto label_456cc0;
    }
    ctx->pc = 0x456CB8u;
    SET_GPR_U32(ctx, 31, 0x456CC0u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x456CB8u, 0x456CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x456CC0u;
label_456cc0:
    // 0x456cc0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x456cc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_456cc4:
    // 0x456cc4: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_456cc8:
    if (ctx->pc == 0x456CC8u) {
        ctx->pc = 0x456CCCu;
        goto label_456ccc;
    }
    ctx->pc = 0x456CC4u;
    {
        const bool branch_taken_0x456cc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x456cc4) {
            ctx->pc = 0x456CFCu;
            goto label_456cfc;
        }
    }
    ctx->pc = 0x456CCCu;
label_456ccc:
    // 0x456ccc: 0x27a4016c  addiu       $a0, $sp, 0x16C
    ctx->pc = 0x456cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
label_456cd0:
    // 0x456cd0: 0xc07f058  jal         func_1FC160
label_456cd4:
    if (ctx->pc == 0x456CD4u) {
        ctx->pc = 0x456CD8u;
        goto label_456cd8;
    }
    ctx->pc = 0x456CD0u;
    SET_GPR_U32(ctx, 31, 0x456CD8u);
    ctx->pc = 0x1FC160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC160u, 0x456CD0u, 0x456CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x456CD8u;
label_456cd8:
    // 0x456cd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x456cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_456cdc:
    // 0x456cdc: 0x28e3c  dsll32      $s1, $v0, 24
    ctx->pc = 0x456cdcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 24));
label_456ce0:
    // 0x456ce0: 0x118e3f  dsra32      $s1, $s1, 24
    ctx->pc = 0x456ce0u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 24));
label_456ce4:
    // 0x456ce4: 0x27b2016c  addiu       $s2, $sp, 0x16C
    ctx->pc = 0x456ce4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
label_456ce8:
    // 0x456ce8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x456ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_456cec:
    // 0x456cec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x456cecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_456cf0:
    // 0x456cf0: 0xc07f018  jal         func_1FC060
label_456cf4:
    if (ctx->pc == 0x456CF4u) {
        ctx->pc = 0x456CF8u;
        goto label_456cf8;
    }
    ctx->pc = 0x456CF0u;
    SET_GPR_U32(ctx, 31, 0x456CF8u);
    ctx->pc = 0x1FC060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC060u, 0x456CF0u, 0x456CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x456CF8u;
label_456cf8:
    // 0x456cf8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x456cf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_456cfc:
    // 0x456cfc: 0xaf90bf2c  sw          $s0, -0x40D4($gp)
    ctx->pc = 0x456cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950700), GPR_U32(ctx, 16));
label_456d00:
    // 0x456d00: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_456d04:
    if (ctx->pc == 0x456D04u) {
        ctx->pc = 0x456D08u;
        goto label_456d08;
    }
    ctx->pc = 0x456D00u;
    {
        const bool branch_taken_0x456d00 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x456d00) {
            ctx->pc = 0x456D18u;
            goto label_456d18;
        }
    }
    ctx->pc = 0x456D08u;
label_456d08:
    // 0x456d08: 0x27a4016c  addiu       $a0, $sp, 0x16C
    ctx->pc = 0x456d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
label_456d0c:
    // 0x456d0c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x456d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_456d10:
    // 0x456d10: 0xc07f004  jal         func_1FC010
label_456d14:
    if (ctx->pc == 0x456D14u) {
        ctx->pc = 0x456D18u;
        goto label_456d18;
    }
    ctx->pc = 0x456D10u;
    SET_GPR_U32(ctx, 31, 0x456D18u);
    ctx->pc = 0x1FC010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC010u, 0x456D10u, 0x456D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x456D18u;
label_456d18:
    // 0x456d18: 0x8f82bf2c  lw          $v0, -0x40D4($gp)
    ctx->pc = 0x456d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950700)));
label_456d1c:
    // 0x456d1c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_456d20:
    if (ctx->pc == 0x456D20u) {
        ctx->pc = 0x456D24u;
        goto label_456d24;
    }
    ctx->pc = 0x456D1Cu;
    {
        const bool branch_taken_0x456d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x456d1c) {
            ctx->pc = 0x456D2Cu;
            goto label_456d2c;
        }
    }
    ctx->pc = 0x456D24u;
label_456d24:
    // 0x456d24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x456d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_456d28:
    // 0x456d28: 0xa382bf30  sb          $v0, -0x40D0($gp)
    ctx->pc = 0x456d28u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294950704), (uint8_t)GPR_U32(ctx, 2));
label_456d2c:
    // 0x456d2c: 0x9382bf30  lbu         $v0, -0x40D0($gp)
    ctx->pc = 0x456d2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950704)));
label_456d30:
    // 0x456d30: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x456d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_456d34:
    // 0x456d34: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x456d34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_456d38:
    // 0x456d38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x456d38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_456d3c:
    // 0x456d3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x456d3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_456d40:
    // 0x456d40: 0x27bd0170  addiu       $sp, $sp, 0x170
    ctx->pc = 0x456d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_456d44:
    // 0x456d44: 0x3e00008  jr          $ra
label_456d48:
    if (ctx->pc == 0x456D48u) {
        ctx->pc = 0x456D4Cu;
        goto label_456d4c;
    }
    ctx->pc = 0x456D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x456D44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x456D4Cu;
label_456d4c:
    // 0x456d4c: 0x0  nop
    ctx->pc = 0x456d4cu;
    // NOP
    ctx->pc = 0x456d50u;
}

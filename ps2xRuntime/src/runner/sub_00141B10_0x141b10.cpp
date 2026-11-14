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

// Function: sub_00141B10
// Address: 0x141b10 - 0x141cd0
void sub_00141B10_0x141b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141B10_0x141b10");
#endif

    switch (ctx->pc) {
        case 0x141b10u: goto label_141b10;
        case 0x141b14u: goto label_141b14;
        case 0x141b18u: goto label_141b18;
        case 0x141b1cu: goto label_141b1c;
        case 0x141b20u: goto label_141b20;
        case 0x141b24u: goto label_141b24;
        case 0x141b28u: goto label_141b28;
        case 0x141b2cu: goto label_141b2c;
        case 0x141b30u: goto label_141b30;
        case 0x141b34u: goto label_141b34;
        case 0x141b38u: goto label_141b38;
        case 0x141b3cu: goto label_141b3c;
        case 0x141b40u: goto label_141b40;
        case 0x141b44u: goto label_141b44;
        case 0x141b48u: goto label_141b48;
        case 0x141b4cu: goto label_141b4c;
        case 0x141b50u: goto label_141b50;
        case 0x141b54u: goto label_141b54;
        case 0x141b58u: goto label_141b58;
        case 0x141b5cu: goto label_141b5c;
        case 0x141b60u: goto label_141b60;
        case 0x141b64u: goto label_141b64;
        case 0x141b68u: goto label_141b68;
        case 0x141b6cu: goto label_141b6c;
        case 0x141b70u: goto label_141b70;
        case 0x141b74u: goto label_141b74;
        case 0x141b78u: goto label_141b78;
        case 0x141b7cu: goto label_141b7c;
        case 0x141b80u: goto label_141b80;
        case 0x141b84u: goto label_141b84;
        case 0x141b88u: goto label_141b88;
        case 0x141b8cu: goto label_141b8c;
        case 0x141b90u: goto label_141b90;
        case 0x141b94u: goto label_141b94;
        case 0x141b98u: goto label_141b98;
        case 0x141b9cu: goto label_141b9c;
        case 0x141ba0u: goto label_141ba0;
        case 0x141ba4u: goto label_141ba4;
        case 0x141ba8u: goto label_141ba8;
        case 0x141bacu: goto label_141bac;
        case 0x141bb0u: goto label_141bb0;
        case 0x141bb4u: goto label_141bb4;
        case 0x141bb8u: goto label_141bb8;
        case 0x141bbcu: goto label_141bbc;
        case 0x141bc0u: goto label_141bc0;
        case 0x141bc4u: goto label_141bc4;
        case 0x141bc8u: goto label_141bc8;
        case 0x141bccu: goto label_141bcc;
        case 0x141bd0u: goto label_141bd0;
        case 0x141bd4u: goto label_141bd4;
        case 0x141bd8u: goto label_141bd8;
        case 0x141bdcu: goto label_141bdc;
        case 0x141be0u: goto label_141be0;
        case 0x141be4u: goto label_141be4;
        case 0x141be8u: goto label_141be8;
        case 0x141becu: goto label_141bec;
        case 0x141bf0u: goto label_141bf0;
        case 0x141bf4u: goto label_141bf4;
        case 0x141bf8u: goto label_141bf8;
        case 0x141bfcu: goto label_141bfc;
        case 0x141c00u: goto label_141c00;
        case 0x141c04u: goto label_141c04;
        case 0x141c08u: goto label_141c08;
        case 0x141c0cu: goto label_141c0c;
        case 0x141c10u: goto label_141c10;
        case 0x141c14u: goto label_141c14;
        case 0x141c18u: goto label_141c18;
        case 0x141c1cu: goto label_141c1c;
        case 0x141c20u: goto label_141c20;
        case 0x141c24u: goto label_141c24;
        case 0x141c28u: goto label_141c28;
        case 0x141c2cu: goto label_141c2c;
        case 0x141c30u: goto label_141c30;
        case 0x141c34u: goto label_141c34;
        case 0x141c38u: goto label_141c38;
        case 0x141c3cu: goto label_141c3c;
        case 0x141c40u: goto label_141c40;
        case 0x141c44u: goto label_141c44;
        case 0x141c48u: goto label_141c48;
        case 0x141c4cu: goto label_141c4c;
        case 0x141c50u: goto label_141c50;
        case 0x141c54u: goto label_141c54;
        case 0x141c58u: goto label_141c58;
        case 0x141c5cu: goto label_141c5c;
        case 0x141c60u: goto label_141c60;
        case 0x141c64u: goto label_141c64;
        case 0x141c68u: goto label_141c68;
        case 0x141c6cu: goto label_141c6c;
        case 0x141c70u: goto label_141c70;
        case 0x141c74u: goto label_141c74;
        case 0x141c78u: goto label_141c78;
        case 0x141c7cu: goto label_141c7c;
        case 0x141c80u: goto label_141c80;
        case 0x141c84u: goto label_141c84;
        case 0x141c88u: goto label_141c88;
        case 0x141c8cu: goto label_141c8c;
        case 0x141c90u: goto label_141c90;
        case 0x141c94u: goto label_141c94;
        case 0x141c98u: goto label_141c98;
        case 0x141c9cu: goto label_141c9c;
        case 0x141ca0u: goto label_141ca0;
        case 0x141ca4u: goto label_141ca4;
        case 0x141ca8u: goto label_141ca8;
        case 0x141cacu: goto label_141cac;
        case 0x141cb0u: goto label_141cb0;
        case 0x141cb4u: goto label_141cb4;
        case 0x141cb8u: goto label_141cb8;
        case 0x141cbcu: goto label_141cbc;
        case 0x141cc0u: goto label_141cc0;
        case 0x141cc4u: goto label_141cc4;
        case 0x141cc8u: goto label_141cc8;
        case 0x141cccu: goto label_141ccc;
        default: break;
    }

    ctx->pc = 0x141b10u;

label_141b10:
    // 0x141b10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x141b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_141b14:
    // 0x141b14: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x141b14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_141b18:
    // 0x141b18: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x141b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_141b1c:
    // 0x141b1c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x141b1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_141b20:
    // 0x141b20: 0x3e00008  jr          $ra
label_141b24:
    if (ctx->pc == 0x141B24u) {
        ctx->pc = 0x141B28u;
        goto label_141b28;
    }
    ctx->pc = 0x141B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141B20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141B28u;
label_141b28:
    // 0x141b28: 0x0  nop
    ctx->pc = 0x141b28u;
    // NOP
label_141b2c:
    // 0x141b2c: 0x0  nop
    ctx->pc = 0x141b2cu;
    // NOP
label_141b30:
    // 0x141b30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x141b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_141b34:
    // 0x141b34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x141b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_141b38:
    // 0x141b38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x141b38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_141b3c:
    // 0x141b3c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x141b3cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_141b40:
    // 0x141b40: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x141b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_141b44:
    // 0x141b44: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_141b48:
    if (ctx->pc == 0x141B48u) {
        ctx->pc = 0x141B4Cu;
        goto label_141b4c;
    }
    ctx->pc = 0x141B44u;
    {
        const bool branch_taken_0x141b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x141b44) {
            ctx->pc = 0x141BA4u;
            goto label_141ba4;
        }
    }
    ctx->pc = 0x141B4Cu;
label_141b4c:
    // 0x141b4c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x141b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_141b50:
    // 0x141b50: 0x24633840  addiu       $v1, $v1, 0x3840
    ctx->pc = 0x141b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14400));
label_141b54:
    // 0x141b54: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x141b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_141b58:
    // 0x141b58: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x141b58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_141b5c:
    // 0x141b5c: 0xaf80ba84  sw          $zero, -0x457C($gp)
    ctx->pc = 0x141b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949508), GPR_U32(ctx, 0));
label_141b60:
    // 0x141b60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x141b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_141b64:
    // 0x141b64: 0x2444002c  addiu       $a0, $v0, 0x2C
    ctx->pc = 0x141b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
label_141b68:
    // 0x141b68: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x141b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_141b6c:
    // 0x141b6c: 0xc0505ec  jal         func_1417B0
label_141b70:
    if (ctx->pc == 0x141B70u) {
        ctx->pc = 0x141B74u;
        goto label_141b74;
    }
    ctx->pc = 0x141B6Cu;
    SET_GPR_U32(ctx, 31, 0x141B74u);
    ctx->pc = 0x1417B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1417B0u, 0x141B6Cu, 0x141B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141B74u;
label_141b74:
    // 0x141b74: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x141b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_141b78:
    // 0x141b78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x141b78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_141b7c:
    // 0x141b7c: 0xc0ad678  jal         func_2B59E0
label_141b80:
    if (ctx->pc == 0x141B80u) {
        ctx->pc = 0x141B84u;
        goto label_141b84;
    }
    ctx->pc = 0x141B7Cu;
    SET_GPR_U32(ctx, 31, 0x141B84u);
    ctx->pc = 0x2B59E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B59E0u, 0x141B7Cu, 0x141B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141B84u;
label_141b84:
    // 0x141b84: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x141b84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_141b88:
    // 0x141b88: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x141b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_141b8c:
    // 0x141b8c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x141b8cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_141b90:
    // 0x141b90: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_141b94:
    if (ctx->pc == 0x141B94u) {
        ctx->pc = 0x141B98u;
        goto label_141b98;
    }
    ctx->pc = 0x141B90u;
    {
        const bool branch_taken_0x141b90 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x141b90) {
            ctx->pc = 0x141BA4u;
            goto label_141ba4;
        }
    }
    ctx->pc = 0x141B98u;
label_141b98:
    // 0x141b98: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x141b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_141b9c:
    // 0x141b9c: 0xc0ba070  jal         func_2E81C0
label_141ba0:
    if (ctx->pc == 0x141BA0u) {
        ctx->pc = 0x141BA4u;
        goto label_141ba4;
    }
    ctx->pc = 0x141B9Cu;
    SET_GPR_U32(ctx, 31, 0x141BA4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x141B9Cu, 0x141BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141BA4u;
label_141ba4:
    // 0x141ba4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x141ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_141ba8:
    // 0x141ba8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x141ba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_141bac:
    // 0x141bac: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x141bacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_141bb0:
    // 0x141bb0: 0x3e00008  jr          $ra
label_141bb4:
    if (ctx->pc == 0x141BB4u) {
        ctx->pc = 0x141BB8u;
        goto label_141bb8;
    }
    ctx->pc = 0x141BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141BB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141BB8u;
label_141bb8:
    // 0x141bb8: 0x0  nop
    ctx->pc = 0x141bb8u;
    // NOP
label_141bbc:
    // 0x141bbc: 0x0  nop
    ctx->pc = 0x141bbcu;
    // NOP
label_141bc0:
    // 0x141bc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x141bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_141bc4:
    // 0x141bc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x141bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_141bc8:
    // 0x141bc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x141bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_141bcc:
    // 0x141bcc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x141bccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_141bd0:
    // 0x141bd0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x141bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_141bd4:
    // 0x141bd4: 0xc08ec3c  jal         func_23B0F0
label_141bd8:
    if (ctx->pc == 0x141BD8u) {
        ctx->pc = 0x141BDCu;
        goto label_141bdc;
    }
    ctx->pc = 0x141BD4u;
    SET_GPR_U32(ctx, 31, 0x141BDCu);
    ctx->pc = 0x23B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B0F0u, 0x141BD4u, 0x141BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141BDCu;
label_141bdc:
    // 0x141bdc: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x141bdcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_141be0:
    // 0x141be0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x141be0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_141be4:
    // 0x141be4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x141be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_141be8:
    // 0x141be8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x141be8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_141bec:
    // 0x141bec: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x141becu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_141bf0:
    // 0x141bf0: 0x3e00008  jr          $ra
label_141bf4:
    if (ctx->pc == 0x141BF4u) {
        ctx->pc = 0x141BF8u;
        goto label_141bf8;
    }
    ctx->pc = 0x141BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141BF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141BF8u;
label_141bf8:
    // 0x141bf8: 0x0  nop
    ctx->pc = 0x141bf8u;
    // NOP
label_141bfc:
    // 0x141bfc: 0x0  nop
    ctx->pc = 0x141bfcu;
    // NOP
label_141c00:
    // 0x141c00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x141c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_141c04:
    // 0x141c04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x141c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_141c08:
    // 0x141c08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x141c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_141c0c:
    // 0x141c0c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x141c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_141c10:
    // 0x141c10: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x141c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_141c14:
    // 0x141c14: 0xc08ec48  jal         func_23B120
label_141c18:
    if (ctx->pc == 0x141C18u) {
        ctx->pc = 0x141C1Cu;
        goto label_141c1c;
    }
    ctx->pc = 0x141C14u;
    SET_GPR_U32(ctx, 31, 0x141C1Cu);
    ctx->pc = 0x23B120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B120u, 0x141C14u, 0x141C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141C1Cu;
label_141c1c:
    // 0x141c1c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x141c1cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_141c20:
    // 0x141c20: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x141c20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_141c24:
    // 0x141c24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x141c24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_141c28:
    // 0x141c28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x141c28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_141c2c:
    // 0x141c2c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x141c2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_141c30:
    // 0x141c30: 0x3e00008  jr          $ra
label_141c34:
    if (ctx->pc == 0x141C34u) {
        ctx->pc = 0x141C38u;
        goto label_141c38;
    }
    ctx->pc = 0x141C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141C30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141C38u;
label_141c38:
    // 0x141c38: 0x0  nop
    ctx->pc = 0x141c38u;
    // NOP
label_141c3c:
    // 0x141c3c: 0x0  nop
    ctx->pc = 0x141c3cu;
    // NOP
label_141c40:
    // 0x141c40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x141c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_141c44:
    // 0x141c44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x141c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_141c48:
    // 0x141c48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x141c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_141c4c:
    // 0x141c4c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x141c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_141c50:
    // 0x141c50: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x141c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_141c54:
    // 0x141c54: 0xc08ec5c  jal         func_23B170
label_141c58:
    if (ctx->pc == 0x141C58u) {
        ctx->pc = 0x141C5Cu;
        goto label_141c5c;
    }
    ctx->pc = 0x141C54u;
    SET_GPR_U32(ctx, 31, 0x141C5Cu);
    ctx->pc = 0x23B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B170u, 0x141C54u, 0x141C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141C5Cu;
label_141c5c:
    // 0x141c5c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x141c5cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_141c60:
    // 0x141c60: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x141c60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_141c64:
    // 0x141c64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x141c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_141c68:
    // 0x141c68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x141c68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_141c6c:
    // 0x141c6c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x141c6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_141c70:
    // 0x141c70: 0x3e00008  jr          $ra
label_141c74:
    if (ctx->pc == 0x141C74u) {
        ctx->pc = 0x141C78u;
        goto label_141c78;
    }
    ctx->pc = 0x141C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141C70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141C78u;
label_141c78:
    // 0x141c78: 0x0  nop
    ctx->pc = 0x141c78u;
    // NOP
label_141c7c:
    // 0x141c7c: 0x0  nop
    ctx->pc = 0x141c7cu;
    // NOP
label_141c80:
    // 0x141c80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x141c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_141c84:
    // 0x141c84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x141c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_141c88:
    // 0x141c88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x141c88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_141c8c:
    // 0x141c8c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x141c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_141c90:
    // 0x141c90: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x141c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_141c94:
    // 0x141c94: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_141c98:
    if (ctx->pc == 0x141C98u) {
        ctx->pc = 0x141C9Cu;
        goto label_141c9c;
    }
    ctx->pc = 0x141C94u;
    {
        const bool branch_taken_0x141c94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x141c94) {
            ctx->pc = 0x141CB4u;
            goto label_141cb4;
        }
    }
    ctx->pc = 0x141C9Cu;
label_141c9c:
    // 0x141c9c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x141c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_141ca0:
    // 0x141ca0: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x141ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_141ca4:
    // 0x141ca4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x141ca4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_141ca8:
    // 0x141ca8: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x141ca8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_141cac:
    // 0x141cac: 0x320f809  jalr        $t9
label_141cb0:
    if (ctx->pc == 0x141CB0u) {
        ctx->pc = 0x141CB4u;
        goto label_141cb4;
    }
    ctx->pc = 0x141CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x141CB4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141CACu, 0x141CB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x141CB4u;
label_141cb4:
    // 0x141cb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x141cb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_141cb8:
    // 0x141cb8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x141cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_141cbc:
    // 0x141cbc: 0x3e00008  jr          $ra
label_141cc0:
    if (ctx->pc == 0x141CC0u) {
        ctx->pc = 0x141CC4u;
        goto label_141cc4;
    }
    ctx->pc = 0x141CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141CBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141CC4u;
label_141cc4:
    // 0x141cc4: 0x0  nop
    ctx->pc = 0x141cc4u;
    // NOP
label_141cc8:
    // 0x141cc8: 0x0  nop
    ctx->pc = 0x141cc8u;
    // NOP
label_141ccc:
    // 0x141ccc: 0x0  nop
    ctx->pc = 0x141cccu;
    // NOP
    ctx->pc = 0x141cd0u;
}

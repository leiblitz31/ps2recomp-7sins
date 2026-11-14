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

// Function: sub_00233A00
// Address: 0x233a00 - 0x233c80
void sub_00233A00_0x233a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233A00_0x233a00");
#endif

    switch (ctx->pc) {
        case 0x233a00u: goto label_233a00;
        case 0x233a04u: goto label_233a04;
        case 0x233a08u: goto label_233a08;
        case 0x233a0cu: goto label_233a0c;
        case 0x233a10u: goto label_233a10;
        case 0x233a14u: goto label_233a14;
        case 0x233a18u: goto label_233a18;
        case 0x233a1cu: goto label_233a1c;
        case 0x233a20u: goto label_233a20;
        case 0x233a24u: goto label_233a24;
        case 0x233a28u: goto label_233a28;
        case 0x233a2cu: goto label_233a2c;
        case 0x233a30u: goto label_233a30;
        case 0x233a34u: goto label_233a34;
        case 0x233a38u: goto label_233a38;
        case 0x233a3cu: goto label_233a3c;
        case 0x233a40u: goto label_233a40;
        case 0x233a44u: goto label_233a44;
        case 0x233a48u: goto label_233a48;
        case 0x233a4cu: goto label_233a4c;
        case 0x233a50u: goto label_233a50;
        case 0x233a54u: goto label_233a54;
        case 0x233a58u: goto label_233a58;
        case 0x233a5cu: goto label_233a5c;
        case 0x233a60u: goto label_233a60;
        case 0x233a64u: goto label_233a64;
        case 0x233a68u: goto label_233a68;
        case 0x233a6cu: goto label_233a6c;
        case 0x233a70u: goto label_233a70;
        case 0x233a74u: goto label_233a74;
        case 0x233a78u: goto label_233a78;
        case 0x233a7cu: goto label_233a7c;
        case 0x233a80u: goto label_233a80;
        case 0x233a84u: goto label_233a84;
        case 0x233a88u: goto label_233a88;
        case 0x233a8cu: goto label_233a8c;
        case 0x233a90u: goto label_233a90;
        case 0x233a94u: goto label_233a94;
        case 0x233a98u: goto label_233a98;
        case 0x233a9cu: goto label_233a9c;
        case 0x233aa0u: goto label_233aa0;
        case 0x233aa4u: goto label_233aa4;
        case 0x233aa8u: goto label_233aa8;
        case 0x233aacu: goto label_233aac;
        case 0x233ab0u: goto label_233ab0;
        case 0x233ab4u: goto label_233ab4;
        case 0x233ab8u: goto label_233ab8;
        case 0x233abcu: goto label_233abc;
        case 0x233ac0u: goto label_233ac0;
        case 0x233ac4u: goto label_233ac4;
        case 0x233ac8u: goto label_233ac8;
        case 0x233accu: goto label_233acc;
        case 0x233ad0u: goto label_233ad0;
        case 0x233ad4u: goto label_233ad4;
        case 0x233ad8u: goto label_233ad8;
        case 0x233adcu: goto label_233adc;
        case 0x233ae0u: goto label_233ae0;
        case 0x233ae4u: goto label_233ae4;
        case 0x233ae8u: goto label_233ae8;
        case 0x233aecu: goto label_233aec;
        case 0x233af0u: goto label_233af0;
        case 0x233af4u: goto label_233af4;
        case 0x233af8u: goto label_233af8;
        case 0x233afcu: goto label_233afc;
        case 0x233b00u: goto label_233b00;
        case 0x233b04u: goto label_233b04;
        case 0x233b08u: goto label_233b08;
        case 0x233b0cu: goto label_233b0c;
        case 0x233b10u: goto label_233b10;
        case 0x233b14u: goto label_233b14;
        case 0x233b18u: goto label_233b18;
        case 0x233b1cu: goto label_233b1c;
        case 0x233b20u: goto label_233b20;
        case 0x233b24u: goto label_233b24;
        case 0x233b28u: goto label_233b28;
        case 0x233b2cu: goto label_233b2c;
        case 0x233b30u: goto label_233b30;
        case 0x233b34u: goto label_233b34;
        case 0x233b38u: goto label_233b38;
        case 0x233b3cu: goto label_233b3c;
        case 0x233b40u: goto label_233b40;
        case 0x233b44u: goto label_233b44;
        case 0x233b48u: goto label_233b48;
        case 0x233b4cu: goto label_233b4c;
        case 0x233b50u: goto label_233b50;
        case 0x233b54u: goto label_233b54;
        case 0x233b58u: goto label_233b58;
        case 0x233b5cu: goto label_233b5c;
        case 0x233b60u: goto label_233b60;
        case 0x233b64u: goto label_233b64;
        case 0x233b68u: goto label_233b68;
        case 0x233b6cu: goto label_233b6c;
        case 0x233b70u: goto label_233b70;
        case 0x233b74u: goto label_233b74;
        case 0x233b78u: goto label_233b78;
        case 0x233b7cu: goto label_233b7c;
        case 0x233b80u: goto label_233b80;
        case 0x233b84u: goto label_233b84;
        case 0x233b88u: goto label_233b88;
        case 0x233b8cu: goto label_233b8c;
        case 0x233b90u: goto label_233b90;
        case 0x233b94u: goto label_233b94;
        case 0x233b98u: goto label_233b98;
        case 0x233b9cu: goto label_233b9c;
        case 0x233ba0u: goto label_233ba0;
        case 0x233ba4u: goto label_233ba4;
        case 0x233ba8u: goto label_233ba8;
        case 0x233bacu: goto label_233bac;
        case 0x233bb0u: goto label_233bb0;
        case 0x233bb4u: goto label_233bb4;
        case 0x233bb8u: goto label_233bb8;
        case 0x233bbcu: goto label_233bbc;
        case 0x233bc0u: goto label_233bc0;
        case 0x233bc4u: goto label_233bc4;
        case 0x233bc8u: goto label_233bc8;
        case 0x233bccu: goto label_233bcc;
        case 0x233bd0u: goto label_233bd0;
        case 0x233bd4u: goto label_233bd4;
        case 0x233bd8u: goto label_233bd8;
        case 0x233bdcu: goto label_233bdc;
        case 0x233be0u: goto label_233be0;
        case 0x233be4u: goto label_233be4;
        case 0x233be8u: goto label_233be8;
        case 0x233becu: goto label_233bec;
        case 0x233bf0u: goto label_233bf0;
        case 0x233bf4u: goto label_233bf4;
        case 0x233bf8u: goto label_233bf8;
        case 0x233bfcu: goto label_233bfc;
        case 0x233c00u: goto label_233c00;
        case 0x233c04u: goto label_233c04;
        case 0x233c08u: goto label_233c08;
        case 0x233c0cu: goto label_233c0c;
        case 0x233c10u: goto label_233c10;
        case 0x233c14u: goto label_233c14;
        case 0x233c18u: goto label_233c18;
        case 0x233c1cu: goto label_233c1c;
        case 0x233c20u: goto label_233c20;
        case 0x233c24u: goto label_233c24;
        case 0x233c28u: goto label_233c28;
        case 0x233c2cu: goto label_233c2c;
        case 0x233c30u: goto label_233c30;
        case 0x233c34u: goto label_233c34;
        case 0x233c38u: goto label_233c38;
        case 0x233c3cu: goto label_233c3c;
        case 0x233c40u: goto label_233c40;
        case 0x233c44u: goto label_233c44;
        case 0x233c48u: goto label_233c48;
        case 0x233c4cu: goto label_233c4c;
        case 0x233c50u: goto label_233c50;
        case 0x233c54u: goto label_233c54;
        case 0x233c58u: goto label_233c58;
        case 0x233c5cu: goto label_233c5c;
        case 0x233c60u: goto label_233c60;
        case 0x233c64u: goto label_233c64;
        case 0x233c68u: goto label_233c68;
        case 0x233c6cu: goto label_233c6c;
        case 0x233c70u: goto label_233c70;
        case 0x233c74u: goto label_233c74;
        case 0x233c78u: goto label_233c78;
        case 0x233c7cu: goto label_233c7c;
        default: break;
    }

    ctx->pc = 0x233a00u;

label_233a00:
    // 0x233a00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x233a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_233a04:
    // 0x233a04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x233a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_233a08:
    // 0x233a08: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x233a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_233a0c:
    // 0x233a0c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x233a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
label_233a10:
    // 0x233a10: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x233a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_233a14:
    // 0x233a14: 0xc0422b8  jal         func_108AE0
label_233a18:
    if (ctx->pc == 0x233A18u) {
        ctx->pc = 0x233A1Cu;
        goto label_233a1c;
    }
    ctx->pc = 0x233A14u;
    SET_GPR_U32(ctx, 31, 0x233A1Cu);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x233A14u, 0x233A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233A1Cu;
label_233a1c:
    // 0x233a1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x233a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_233a20:
    // 0x233a20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x233a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_233a24:
    // 0x233a24: 0xc08ec98  jal         func_23B260
label_233a28:
    if (ctx->pc == 0x233A28u) {
        ctx->pc = 0x233A2Cu;
        goto label_233a2c;
    }
    ctx->pc = 0x233A24u;
    SET_GPR_U32(ctx, 31, 0x233A2Cu);
    ctx->pc = 0x23B260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B260u, 0x233A24u, 0x233A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233A2Cu;
label_233a2c:
    // 0x233a2c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x233a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_233a30:
    // 0x233a30: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x233a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_233a34:
    // 0x233a34: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x233a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_233a38:
    // 0x233a38: 0xc0422b8  jal         func_108AE0
label_233a3c:
    if (ctx->pc == 0x233A3Cu) {
        ctx->pc = 0x233A40u;
        goto label_233a40;
    }
    ctx->pc = 0x233A38u;
    SET_GPR_U32(ctx, 31, 0x233A40u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x233A38u, 0x233A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233A40u;
label_233a40:
    // 0x233a40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x233a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_233a44:
    // 0x233a44: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x233a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_233a48:
    // 0x233a48: 0xc0422a8  jal         func_108AA0
label_233a4c:
    if (ctx->pc == 0x233A4Cu) {
        ctx->pc = 0x233A50u;
        goto label_233a50;
    }
    ctx->pc = 0x233A48u;
    SET_GPR_U32(ctx, 31, 0x233A50u);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x233A48u, 0x233A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233A50u;
label_233a50:
    // 0x233a50: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x233a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_233a54:
    // 0x233a54: 0xc0422b8  jal         func_108AE0
label_233a58:
    if (ctx->pc == 0x233A58u) {
        ctx->pc = 0x233A5Cu;
        goto label_233a5c;
    }
    ctx->pc = 0x233A54u;
    SET_GPR_U32(ctx, 31, 0x233A5Cu);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x233A54u, 0x233A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233A5Cu;
label_233a5c:
    // 0x233a5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x233a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_233a60:
    // 0x233a60: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x233a60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_233a64:
    // 0x233a64: 0xc08cf20  jal         func_233C80
label_233a68:
    if (ctx->pc == 0x233A68u) {
        ctx->pc = 0x233A6Cu;
        goto label_233a6c;
    }
    ctx->pc = 0x233A64u;
    SET_GPR_U32(ctx, 31, 0x233A6Cu);
    ctx->pc = 0x233C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233C80u, 0x233A64u, 0x233A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233A6Cu;
label_233a6c:
    // 0x233a6c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x233a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_233a70:
    // 0x233a70: 0xc0422b8  jal         func_108AE0
label_233a74:
    if (ctx->pc == 0x233A74u) {
        ctx->pc = 0x233A78u;
        goto label_233a78;
    }
    ctx->pc = 0x233A70u;
    SET_GPR_U32(ctx, 31, 0x233A78u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x233A70u, 0x233A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233A78u;
label_233a78:
    // 0x233a78: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x233a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_233a7c:
    // 0x233a7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x233a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_233a80:
    // 0x233a80: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x233a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_233a84:
    // 0x233a84: 0xc08cf20  jal         func_233C80
label_233a88:
    if (ctx->pc == 0x233A88u) {
        ctx->pc = 0x233A8Cu;
        goto label_233a8c;
    }
    ctx->pc = 0x233A84u;
    SET_GPR_U32(ctx, 31, 0x233A8Cu);
    ctx->pc = 0x233C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233C80u, 0x233A84u, 0x233A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233A8Cu;
label_233a8c:
    // 0x233a8c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x233a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_233a90:
    // 0x233a90: 0xc0422b8  jal         func_108AE0
label_233a94:
    if (ctx->pc == 0x233A94u) {
        ctx->pc = 0x233A98u;
        goto label_233a98;
    }
    ctx->pc = 0x233A90u;
    SET_GPR_U32(ctx, 31, 0x233A98u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x233A90u, 0x233A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233A98u;
label_233a98:
    // 0x233a98: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x233a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_233a9c:
    // 0x233a9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x233a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_233aa0:
    // 0x233aa0: 0x24650008  addiu       $a1, $v1, 0x8
    ctx->pc = 0x233aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_233aa4:
    // 0x233aa4: 0xc08cf20  jal         func_233C80
label_233aa8:
    if (ctx->pc == 0x233AA8u) {
        ctx->pc = 0x233AACu;
        goto label_233aac;
    }
    ctx->pc = 0x233AA4u;
    SET_GPR_U32(ctx, 31, 0x233AACu);
    ctx->pc = 0x233C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233C80u, 0x233AA4u, 0x233AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233AACu;
label_233aac:
    // 0x233aac: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x233aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_233ab0:
    // 0x233ab0: 0x9042000c  lbu         $v0, 0xC($v0)
    ctx->pc = 0x233ab0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
label_233ab4:
    // 0x233ab4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x233ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_233ab8:
    // 0x233ab8: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x233ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
label_233abc:
    // 0x233abc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x233abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_233ac0:
    // 0x233ac0: 0xc0422b8  jal         func_108AE0
label_233ac4:
    if (ctx->pc == 0x233AC4u) {
        ctx->pc = 0x233AC8u;
        goto label_233ac8;
    }
    ctx->pc = 0x233AC0u;
    SET_GPR_U32(ctx, 31, 0x233AC8u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x233AC0u, 0x233AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233AC8u;
label_233ac8:
    // 0x233ac8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x233ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_233acc:
    // 0x233acc: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x233accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_233ad0:
    // 0x233ad0: 0xc042298  jal         func_108A60
label_233ad4:
    if (ctx->pc == 0x233AD4u) {
        ctx->pc = 0x233AD8u;
        goto label_233ad8;
    }
    ctx->pc = 0x233AD0u;
    SET_GPR_U32(ctx, 31, 0x233AD8u);
    ctx->pc = 0x108A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A60u, 0x233AD0u, 0x233AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233AD8u;
label_233ad8:
    // 0x233ad8: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x233ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_233adc:
    // 0x233adc: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x233adcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_233ae0:
    // 0x233ae0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x233ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_233ae4:
    // 0x233ae4: 0xa043000c  sb          $v1, 0xC($v0)
    ctx->pc = 0x233ae4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 12), (uint8_t)GPR_U32(ctx, 3));
label_233ae8:
    // 0x233ae8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x233ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_233aec:
    // 0x233aec: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x233aecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_233af0:
    // 0x233af0: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
label_233af4:
    if (ctx->pc == 0x233AF4u) {
        ctx->pc = 0x233AF8u;
        goto label_233af8;
    }
    ctx->pc = 0x233AF0u;
    {
        const bool branch_taken_0x233af0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x233af0) {
            ctx->pc = 0x233C08u;
            goto label_233c08;
        }
    }
    ctx->pc = 0x233AF8u;
label_233af8:
    // 0x233af8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x233af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_233afc:
    // 0x233afc: 0x9042000d  lbu         $v0, 0xD($v0)
    ctx->pc = 0x233afcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13)));
label_233b00:
    // 0x233b00: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x233b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_233b04:
    // 0x233b04: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x233b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
label_233b08:
    // 0x233b08: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x233b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_233b0c:
    // 0x233b0c: 0xc0422b8  jal         func_108AE0
label_233b10:
    if (ctx->pc == 0x233B10u) {
        ctx->pc = 0x233B14u;
        goto label_233b14;
    }
    ctx->pc = 0x233B0Cu;
    SET_GPR_U32(ctx, 31, 0x233B14u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x233B0Cu, 0x233B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233B14u;
label_233b14:
    // 0x233b14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x233b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_233b18:
    // 0x233b18: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x233b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_233b1c:
    // 0x233b1c: 0xc042298  jal         func_108A60
label_233b20:
    if (ctx->pc == 0x233B20u) {
        ctx->pc = 0x233B24u;
        goto label_233b24;
    }
    ctx->pc = 0x233B1Cu;
    SET_GPR_U32(ctx, 31, 0x233B24u);
    ctx->pc = 0x108A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A60u, 0x233B1Cu, 0x233B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233B24u;
label_233b24:
    // 0x233b24: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x233b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_233b28:
    // 0x233b28: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x233b28u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_233b2c:
    // 0x233b2c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x233b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_233b30:
    // 0x233b30: 0xa043000d  sb          $v1, 0xD($v0)
    ctx->pc = 0x233b30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 13), (uint8_t)GPR_U32(ctx, 3));
label_233b34:
    // 0x233b34: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x233b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_233b38:
    // 0x233b38: 0x9042000f  lbu         $v0, 0xF($v0)
    ctx->pc = 0x233b38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 15)));
label_233b3c:
    // 0x233b3c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x233b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_233b40:
    // 0x233b40: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x233b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
label_233b44:
    // 0x233b44: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x233b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_233b48:
    // 0x233b48: 0xc0422b8  jal         func_108AE0
label_233b4c:
    if (ctx->pc == 0x233B4Cu) {
        ctx->pc = 0x233B50u;
        goto label_233b50;
    }
    ctx->pc = 0x233B48u;
    SET_GPR_U32(ctx, 31, 0x233B50u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x233B48u, 0x233B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233B50u;
label_233b50:
    // 0x233b50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x233b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_233b54:
    // 0x233b54: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x233b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_233b58:
    // 0x233b58: 0xc042298  jal         func_108A60
label_233b5c:
    if (ctx->pc == 0x233B5Cu) {
        ctx->pc = 0x233B60u;
        goto label_233b60;
    }
    ctx->pc = 0x233B58u;
    SET_GPR_U32(ctx, 31, 0x233B60u);
    ctx->pc = 0x108A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A60u, 0x233B58u, 0x233B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233B60u;
label_233b60:
    // 0x233b60: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x233b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_233b64:
    // 0x233b64: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x233b64u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_233b68:
    // 0x233b68: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x233b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_233b6c:
    // 0x233b6c: 0xa043000f  sb          $v1, 0xF($v0)
    ctx->pc = 0x233b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 15), (uint8_t)GPR_U32(ctx, 3));
label_233b70:
    // 0x233b70: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x233b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_233b74:
    // 0x233b74: 0x9042000e  lbu         $v0, 0xE($v0)
    ctx->pc = 0x233b74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 14)));
label_233b78:
    // 0x233b78: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x233b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_233b7c:
    // 0x233b7c: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x233b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
label_233b80:
    // 0x233b80: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x233b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_233b84:
    // 0x233b84: 0xc0422b8  jal         func_108AE0
label_233b88:
    if (ctx->pc == 0x233B88u) {
        ctx->pc = 0x233B8Cu;
        goto label_233b8c;
    }
    ctx->pc = 0x233B84u;
    SET_GPR_U32(ctx, 31, 0x233B8Cu);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x233B84u, 0x233B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233B8Cu;
label_233b8c:
    // 0x233b8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x233b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_233b90:
    // 0x233b90: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x233b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_233b94:
    // 0x233b94: 0xc042298  jal         func_108A60
label_233b98:
    if (ctx->pc == 0x233B98u) {
        ctx->pc = 0x233B9Cu;
        goto label_233b9c;
    }
    ctx->pc = 0x233B94u;
    SET_GPR_U32(ctx, 31, 0x233B9Cu);
    ctx->pc = 0x108A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A60u, 0x233B94u, 0x233B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233B9Cu;
label_233b9c:
    // 0x233b9c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x233b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_233ba0:
    // 0x233ba0: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x233ba0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_233ba4:
    // 0x233ba4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x233ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_233ba8:
    // 0x233ba8: 0xa043000e  sb          $v1, 0xE($v0)
    ctx->pc = 0x233ba8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 14), (uint8_t)GPR_U32(ctx, 3));
label_233bac:
    // 0x233bac: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x233bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_233bb0:
    // 0x233bb0: 0x90420010  lbu         $v0, 0x10($v0)
    ctx->pc = 0x233bb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
label_233bb4:
    // 0x233bb4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x233bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_233bb8:
    // 0x233bb8: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x233bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
label_233bbc:
    // 0x233bbc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x233bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_233bc0:
    // 0x233bc0: 0xc0422b8  jal         func_108AE0
label_233bc4:
    if (ctx->pc == 0x233BC4u) {
        ctx->pc = 0x233BC8u;
        goto label_233bc8;
    }
    ctx->pc = 0x233BC0u;
    SET_GPR_U32(ctx, 31, 0x233BC8u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x233BC0u, 0x233BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233BC8u;
label_233bc8:
    // 0x233bc8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x233bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_233bcc:
    // 0x233bcc: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x233bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_233bd0:
    // 0x233bd0: 0xc042298  jal         func_108A60
label_233bd4:
    if (ctx->pc == 0x233BD4u) {
        ctx->pc = 0x233BD8u;
        goto label_233bd8;
    }
    ctx->pc = 0x233BD0u;
    SET_GPR_U32(ctx, 31, 0x233BD8u);
    ctx->pc = 0x108A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A60u, 0x233BD0u, 0x233BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233BD8u;
label_233bd8:
    // 0x233bd8: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x233bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_233bdc:
    // 0x233bdc: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x233bdcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_233be0:
    // 0x233be0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x233be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_233be4:
    // 0x233be4: 0xa0430010  sb          $v1, 0x10($v0)
    ctx->pc = 0x233be4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 3));
label_233be8:
    // 0x233be8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x233be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_233bec:
    // 0x233bec: 0xc0422b8  jal         func_108AE0
label_233bf0:
    if (ctx->pc == 0x233BF0u) {
        ctx->pc = 0x233BF4u;
        goto label_233bf4;
    }
    ctx->pc = 0x233BECu;
    SET_GPR_U32(ctx, 31, 0x233BF4u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x233BECu, 0x233BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233BF4u;
label_233bf4:
    // 0x233bf4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x233bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_233bf8:
    // 0x233bf8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x233bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_233bfc:
    // 0x233bfc: 0x24650014  addiu       $a1, $v1, 0x14
    ctx->pc = 0x233bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
label_233c00:
    // 0x233c00: 0xc08cf20  jal         func_233C80
label_233c04:
    if (ctx->pc == 0x233C04u) {
        ctx->pc = 0x233C08u;
        goto label_233c08;
    }
    ctx->pc = 0x233C00u;
    SET_GPR_U32(ctx, 31, 0x233C08u);
    ctx->pc = 0x233C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233C80u, 0x233C00u, 0x233C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233C08u;
label_233c08:
    // 0x233c08: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x233c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_233c0c:
    // 0x233c0c: 0xc0422b8  jal         func_108AE0
label_233c10:
    if (ctx->pc == 0x233C10u) {
        ctx->pc = 0x233C14u;
        goto label_233c14;
    }
    ctx->pc = 0x233C0Cu;
    SET_GPR_U32(ctx, 31, 0x233C14u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x233C0Cu, 0x233C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233C14u;
label_233c14:
    // 0x233c14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x233c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_233c18:
    // 0x233c18: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x233c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_233c1c:
    // 0x233c1c: 0xc08ec98  jal         func_23B260
label_233c20:
    if (ctx->pc == 0x233C20u) {
        ctx->pc = 0x233C24u;
        goto label_233c24;
    }
    ctx->pc = 0x233C1Cu;
    SET_GPR_U32(ctx, 31, 0x233C24u);
    ctx->pc = 0x23B260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B260u, 0x233C1Cu, 0x233C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233C24u;
label_233c24:
    // 0x233c24: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x233c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_233c28:
    // 0x233c28: 0xc0422b8  jal         func_108AE0
label_233c2c:
    if (ctx->pc == 0x233C2Cu) {
        ctx->pc = 0x233C30u;
        goto label_233c30;
    }
    ctx->pc = 0x233C28u;
    SET_GPR_U32(ctx, 31, 0x233C30u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x233C28u, 0x233C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233C30u;
label_233c30:
    // 0x233c30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x233c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_233c34:
    // 0x233c34: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x233c34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_233c38:
    // 0x233c38: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x233c38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_233c3c:
    // 0x233c3c: 0x320f809  jalr        $t9
label_233c40:
    if (ctx->pc == 0x233C40u) {
        ctx->pc = 0x233C44u;
        goto label_233c44;
    }
    ctx->pc = 0x233C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x233C44u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233C3Cu, 0x233C44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x233C44u;
label_233c44:
    // 0x233c44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x233c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_233c48:
    // 0x233c48: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_233c4c:
    if (ctx->pc == 0x233C4Cu) {
        ctx->pc = 0x233C50u;
        goto label_233c50;
    }
    ctx->pc = 0x233C48u;
    {
        const bool branch_taken_0x233c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x233c48) {
            ctx->pc = 0x233C60u;
            goto label_233c60;
        }
    }
    ctx->pc = 0x233C50u;
label_233c50:
    // 0x233c50: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x233c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_233c54:
    // 0x233c54: 0x9044000c  lbu         $a0, 0xC($v0)
    ctx->pc = 0x233c54u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
label_233c58:
    // 0x233c58: 0xc125d5c  jal         func_497570
label_233c5c:
    if (ctx->pc == 0x233C5Cu) {
        ctx->pc = 0x233C60u;
        goto label_233c60;
    }
    ctx->pc = 0x233C58u;
    SET_GPR_U32(ctx, 31, 0x233C60u);
    ctx->pc = 0x497570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x497570u, 0x233C58u, 0x233C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233C60u;
label_233c60:
    // 0x233c60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x233c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_233c64:
    // 0x233c64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x233c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_233c68:
    // 0x233c68: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x233c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_233c6c:
    // 0x233c6c: 0x3e00008  jr          $ra
label_233c70:
    if (ctx->pc == 0x233C70u) {
        ctx->pc = 0x233C74u;
        goto label_233c74;
    }
    ctx->pc = 0x233C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233C74u;
label_233c74:
    // 0x233c74: 0x0  nop
    ctx->pc = 0x233c74u;
    // NOP
label_233c78:
    // 0x233c78: 0x0  nop
    ctx->pc = 0x233c78u;
    // NOP
label_233c7c:
    // 0x233c7c: 0x0  nop
    ctx->pc = 0x233c7cu;
    // NOP
    ctx->pc = 0x233c80u;
}

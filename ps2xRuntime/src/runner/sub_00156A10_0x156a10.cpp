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

// Function: sub_00156A10
// Address: 0x156a10 - 0x156b40
void sub_00156A10_0x156a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156A10_0x156a10");
#endif

    switch (ctx->pc) {
        case 0x156a10u: goto label_156a10;
        case 0x156a14u: goto label_156a14;
        case 0x156a18u: goto label_156a18;
        case 0x156a1cu: goto label_156a1c;
        case 0x156a20u: goto label_156a20;
        case 0x156a24u: goto label_156a24;
        case 0x156a28u: goto label_156a28;
        case 0x156a2cu: goto label_156a2c;
        case 0x156a30u: goto label_156a30;
        case 0x156a34u: goto label_156a34;
        case 0x156a38u: goto label_156a38;
        case 0x156a3cu: goto label_156a3c;
        case 0x156a40u: goto label_156a40;
        case 0x156a44u: goto label_156a44;
        case 0x156a48u: goto label_156a48;
        case 0x156a4cu: goto label_156a4c;
        case 0x156a50u: goto label_156a50;
        case 0x156a54u: goto label_156a54;
        case 0x156a58u: goto label_156a58;
        case 0x156a5cu: goto label_156a5c;
        case 0x156a60u: goto label_156a60;
        case 0x156a64u: goto label_156a64;
        case 0x156a68u: goto label_156a68;
        case 0x156a6cu: goto label_156a6c;
        case 0x156a70u: goto label_156a70;
        case 0x156a74u: goto label_156a74;
        case 0x156a78u: goto label_156a78;
        case 0x156a7cu: goto label_156a7c;
        case 0x156a80u: goto label_156a80;
        case 0x156a84u: goto label_156a84;
        case 0x156a88u: goto label_156a88;
        case 0x156a8cu: goto label_156a8c;
        case 0x156a90u: goto label_156a90;
        case 0x156a94u: goto label_156a94;
        case 0x156a98u: goto label_156a98;
        case 0x156a9cu: goto label_156a9c;
        case 0x156aa0u: goto label_156aa0;
        case 0x156aa4u: goto label_156aa4;
        case 0x156aa8u: goto label_156aa8;
        case 0x156aacu: goto label_156aac;
        case 0x156ab0u: goto label_156ab0;
        case 0x156ab4u: goto label_156ab4;
        case 0x156ab8u: goto label_156ab8;
        case 0x156abcu: goto label_156abc;
        case 0x156ac0u: goto label_156ac0;
        case 0x156ac4u: goto label_156ac4;
        case 0x156ac8u: goto label_156ac8;
        case 0x156accu: goto label_156acc;
        case 0x156ad0u: goto label_156ad0;
        case 0x156ad4u: goto label_156ad4;
        case 0x156ad8u: goto label_156ad8;
        case 0x156adcu: goto label_156adc;
        case 0x156ae0u: goto label_156ae0;
        case 0x156ae4u: goto label_156ae4;
        case 0x156ae8u: goto label_156ae8;
        case 0x156aecu: goto label_156aec;
        case 0x156af0u: goto label_156af0;
        case 0x156af4u: goto label_156af4;
        case 0x156af8u: goto label_156af8;
        case 0x156afcu: goto label_156afc;
        case 0x156b00u: goto label_156b00;
        case 0x156b04u: goto label_156b04;
        case 0x156b08u: goto label_156b08;
        case 0x156b0cu: goto label_156b0c;
        case 0x156b10u: goto label_156b10;
        case 0x156b14u: goto label_156b14;
        case 0x156b18u: goto label_156b18;
        case 0x156b1cu: goto label_156b1c;
        case 0x156b20u: goto label_156b20;
        case 0x156b24u: goto label_156b24;
        case 0x156b28u: goto label_156b28;
        case 0x156b2cu: goto label_156b2c;
        case 0x156b30u: goto label_156b30;
        case 0x156b34u: goto label_156b34;
        case 0x156b38u: goto label_156b38;
        case 0x156b3cu: goto label_156b3c;
        default: break;
    }

    ctx->pc = 0x156a10u;

label_156a10:
    // 0x156a10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x156a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_156a14:
    // 0x156a14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x156a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_156a18:
    // 0x156a18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x156a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_156a1c:
    // 0x156a1c: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x156a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_156a20:
    // 0x156a20: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x156a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_156a24:
    // 0x156a24: 0x90630028  lbu         $v1, 0x28($v1)
    ctx->pc = 0x156a24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 40)));
label_156a28:
    // 0x156a28: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x156a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_156a2c:
    // 0x156a2c: 0x1060003e  beqz        $v1, . + 4 + (0x3E << 2)
label_156a30:
    if (ctx->pc == 0x156A30u) {
        ctx->pc = 0x156A34u;
        goto label_156a34;
    }
    ctx->pc = 0x156A2Cu;
    {
        const bool branch_taken_0x156a2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x156a2c) {
            ctx->pc = 0x156B28u;
            goto label_156b28;
        }
    }
    ctx->pc = 0x156A34u;
label_156a34:
    // 0x156a34: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x156a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_156a38:
    // 0x156a38: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x156a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_156a3c:
    // 0x156a3c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x156a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_156a40:
    // 0x156a40: 0x8c42e8a4  lw          $v0, -0x175C($v0)
    ctx->pc = 0x156a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961316)));
label_156a44:
    // 0x156a44: 0x40f809  jalr        $v0
label_156a48:
    if (ctx->pc == 0x156A48u) {
        ctx->pc = 0x156A4Cu;
        goto label_156a4c;
    }
    ctx->pc = 0x156A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x156A4Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156A44u, 0x156A4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x156A4Cu;
label_156a4c:
    // 0x156a4c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x156a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_156a50:
    // 0x156a50: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x156a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_156a54:
    // 0x156a54: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x156a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_156a58:
    // 0x156a58: 0x8c42e8a4  lw          $v0, -0x175C($v0)
    ctx->pc = 0x156a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961316)));
label_156a5c:
    // 0x156a5c: 0x40f809  jalr        $v0
label_156a60:
    if (ctx->pc == 0x156A60u) {
        ctx->pc = 0x156A64u;
        goto label_156a64;
    }
    ctx->pc = 0x156A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x156A64u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156A5Cu, 0x156A64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x156A64u;
label_156a64:
    // 0x156a64: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x156a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_156a68:
    // 0x156a68: 0xc055398  jal         func_154E60
label_156a6c:
    if (ctx->pc == 0x156A6Cu) {
        ctx->pc = 0x156A70u;
        goto label_156a70;
    }
    ctx->pc = 0x156A68u;
    SET_GPR_U32(ctx, 31, 0x156A70u);
    ctx->pc = 0x154E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154E60u, 0x156A68u, 0x156A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156A70u;
label_156a70:
    // 0x156a70: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x156a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_156a74:
    // 0x156a74: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x156a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_156a78:
    // 0x156a78: 0x24450038  addiu       $a1, $v0, 0x38
    ctx->pc = 0x156a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
label_156a7c:
    // 0x156a7c: 0xc055370  jal         func_154DC0
label_156a80:
    if (ctx->pc == 0x156A80u) {
        ctx->pc = 0x156A84u;
        goto label_156a84;
    }
    ctx->pc = 0x156A7Cu;
    SET_GPR_U32(ctx, 31, 0x156A84u);
    ctx->pc = 0x154DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154DC0u, 0x156A7Cu, 0x156A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156A84u;
label_156a84:
    // 0x156a84: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x156a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_156a88:
    // 0x156a88: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x156a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_156a8c:
    // 0x156a8c: 0xc055360  jal         func_154D80
label_156a90:
    if (ctx->pc == 0x156A90u) {
        ctx->pc = 0x156A94u;
        goto label_156a94;
    }
    ctx->pc = 0x156A8Cu;
    SET_GPR_U32(ctx, 31, 0x156A94u);
    ctx->pc = 0x154D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154D80u, 0x156A8Cu, 0x156A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156A94u;
label_156a94:
    // 0x156a94: 0x1000000d  b           . + 4 + (0xD << 2)
label_156a98:
    if (ctx->pc == 0x156A98u) {
        ctx->pc = 0x156A9Cu;
        goto label_156a9c;
    }
    ctx->pc = 0x156A94u;
    {
        const bool branch_taken_0x156a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156a94) {
            ctx->pc = 0x156ACCu;
            goto label_156acc;
        }
    }
    ctx->pc = 0x156A9Cu;
label_156a9c:
    // 0x156a9c: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x156a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_156aa0:
    // 0x156aa0: 0xc055358  jal         func_154D60
label_156aa4:
    if (ctx->pc == 0x156AA4u) {
        ctx->pc = 0x156AA8u;
        goto label_156aa8;
    }
    ctx->pc = 0x156AA0u;
    SET_GPR_U32(ctx, 31, 0x156AA8u);
    ctx->pc = 0x154D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154D60u, 0x156AA0u, 0x156AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156AA8u;
label_156aa8:
    // 0x156aa8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x156aa8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_156aac:
    // 0x156aac: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x156aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_156ab0:
    // 0x156ab0: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x156ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_156ab4:
    // 0x156ab4: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x156ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_156ab8:
    // 0x156ab8: 0xc08c258  jal         func_230960
label_156abc:
    if (ctx->pc == 0x156ABCu) {
        ctx->pc = 0x156AC0u;
        goto label_156ac0;
    }
    ctx->pc = 0x156AB8u;
    SET_GPR_U32(ctx, 31, 0x156AC0u);
    ctx->pc = 0x230960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230960u, 0x156AB8u, 0x156AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156AC0u;
label_156ac0:
    // 0x156ac0: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x156ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_156ac4:
    // 0x156ac4: 0xc055348  jal         func_154D20
label_156ac8:
    if (ctx->pc == 0x156AC8u) {
        ctx->pc = 0x156ACCu;
        goto label_156acc;
    }
    ctx->pc = 0x156AC4u;
    SET_GPR_U32(ctx, 31, 0x156ACCu);
    ctx->pc = 0x154D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154D20u, 0x156AC4u, 0x156ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156ACCu;
label_156acc:
    // 0x156acc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x156accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_156ad0:
    // 0x156ad0: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x156ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_156ad4:
    // 0x156ad4: 0x24450038  addiu       $a1, $v0, 0x38
    ctx->pc = 0x156ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
label_156ad8:
    // 0x156ad8: 0xc05531c  jal         func_154C70
label_156adc:
    if (ctx->pc == 0x156ADCu) {
        ctx->pc = 0x156AE0u;
        goto label_156ae0;
    }
    ctx->pc = 0x156AD8u;
    SET_GPR_U32(ctx, 31, 0x156AE0u);
    ctx->pc = 0x154C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154C70u, 0x156AD8u, 0x156AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156AE0u;
label_156ae0:
    // 0x156ae0: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x156ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_156ae4:
    // 0x156ae4: 0x27a5002c  addiu       $a1, $sp, 0x2C
    ctx->pc = 0x156ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_156ae8:
    // 0x156ae8: 0xc041998  jal         func_106660
label_156aec:
    if (ctx->pc == 0x156AECu) {
        ctx->pc = 0x156AF0u;
        goto label_156af0;
    }
    ctx->pc = 0x156AE8u;
    SET_GPR_U32(ctx, 31, 0x156AF0u);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x156AE8u, 0x156AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156AF0u;
label_156af0:
    // 0x156af0: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_156af4:
    if (ctx->pc == 0x156AF4u) {
        ctx->pc = 0x156AF8u;
        goto label_156af8;
    }
    ctx->pc = 0x156AF0u;
    {
        const bool branch_taken_0x156af0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x156af0) {
            ctx->pc = 0x156A9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_156a9c;
        }
    }
    ctx->pc = 0x156AF8u;
label_156af8:
    // 0x156af8: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x156af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_156afc:
    // 0x156afc: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x156afcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_156b00:
    // 0x156b00: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x156b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_156b04:
    // 0x156b04: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x156b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_156b08:
    // 0x156b08: 0x40f809  jalr        $v0
label_156b0c:
    if (ctx->pc == 0x156B0Cu) {
        ctx->pc = 0x156B10u;
        goto label_156b10;
    }
    ctx->pc = 0x156B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x156B10u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156B08u, 0x156B10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x156B10u;
label_156b10:
    // 0x156b10: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x156b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_156b14:
    // 0x156b14: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x156b14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_156b18:
    // 0x156b18: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x156b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_156b1c:
    // 0x156b1c: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x156b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_156b20:
    // 0x156b20: 0x40f809  jalr        $v0
label_156b24:
    if (ctx->pc == 0x156B24u) {
        ctx->pc = 0x156B28u;
        goto label_156b28;
    }
    ctx->pc = 0x156B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x156B28u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156B20u, 0x156B28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x156B28u;
label_156b28:
    // 0x156b28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x156b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_156b2c:
    // 0x156b2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x156b2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_156b30:
    // 0x156b30: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x156b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_156b34:
    // 0x156b34: 0x3e00008  jr          $ra
label_156b38:
    if (ctx->pc == 0x156B38u) {
        ctx->pc = 0x156B3Cu;
        goto label_156b3c;
    }
    ctx->pc = 0x156B34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156B34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156B3Cu;
label_156b3c:
    // 0x156b3c: 0x0  nop
    ctx->pc = 0x156b3cu;
    // NOP
    ctx->pc = 0x156b40u;
}

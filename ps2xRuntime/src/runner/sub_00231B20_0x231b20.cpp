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

// Function: sub_00231B20
// Address: 0x231b20 - 0x231c10
void sub_00231B20_0x231b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231B20_0x231b20");
#endif

    switch (ctx->pc) {
        case 0x231b20u: goto label_231b20;
        case 0x231b24u: goto label_231b24;
        case 0x231b28u: goto label_231b28;
        case 0x231b2cu: goto label_231b2c;
        case 0x231b30u: goto label_231b30;
        case 0x231b34u: goto label_231b34;
        case 0x231b38u: goto label_231b38;
        case 0x231b3cu: goto label_231b3c;
        case 0x231b40u: goto label_231b40;
        case 0x231b44u: goto label_231b44;
        case 0x231b48u: goto label_231b48;
        case 0x231b4cu: goto label_231b4c;
        case 0x231b50u: goto label_231b50;
        case 0x231b54u: goto label_231b54;
        case 0x231b58u: goto label_231b58;
        case 0x231b5cu: goto label_231b5c;
        case 0x231b60u: goto label_231b60;
        case 0x231b64u: goto label_231b64;
        case 0x231b68u: goto label_231b68;
        case 0x231b6cu: goto label_231b6c;
        case 0x231b70u: goto label_231b70;
        case 0x231b74u: goto label_231b74;
        case 0x231b78u: goto label_231b78;
        case 0x231b7cu: goto label_231b7c;
        case 0x231b80u: goto label_231b80;
        case 0x231b84u: goto label_231b84;
        case 0x231b88u: goto label_231b88;
        case 0x231b8cu: goto label_231b8c;
        case 0x231b90u: goto label_231b90;
        case 0x231b94u: goto label_231b94;
        case 0x231b98u: goto label_231b98;
        case 0x231b9cu: goto label_231b9c;
        case 0x231ba0u: goto label_231ba0;
        case 0x231ba4u: goto label_231ba4;
        case 0x231ba8u: goto label_231ba8;
        case 0x231bacu: goto label_231bac;
        case 0x231bb0u: goto label_231bb0;
        case 0x231bb4u: goto label_231bb4;
        case 0x231bb8u: goto label_231bb8;
        case 0x231bbcu: goto label_231bbc;
        case 0x231bc0u: goto label_231bc0;
        case 0x231bc4u: goto label_231bc4;
        case 0x231bc8u: goto label_231bc8;
        case 0x231bccu: goto label_231bcc;
        case 0x231bd0u: goto label_231bd0;
        case 0x231bd4u: goto label_231bd4;
        case 0x231bd8u: goto label_231bd8;
        case 0x231bdcu: goto label_231bdc;
        case 0x231be0u: goto label_231be0;
        case 0x231be4u: goto label_231be4;
        case 0x231be8u: goto label_231be8;
        case 0x231becu: goto label_231bec;
        case 0x231bf0u: goto label_231bf0;
        case 0x231bf4u: goto label_231bf4;
        case 0x231bf8u: goto label_231bf8;
        case 0x231bfcu: goto label_231bfc;
        case 0x231c00u: goto label_231c00;
        case 0x231c04u: goto label_231c04;
        case 0x231c08u: goto label_231c08;
        case 0x231c0cu: goto label_231c0c;
        default: break;
    }

    ctx->pc = 0x231b20u;

label_231b20:
    // 0x231b20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x231b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_231b24:
    // 0x231b24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x231b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_231b28:
    // 0x231b28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x231b28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_231b2c:
    // 0x231b2c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x231b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_231b30:
    // 0x231b30: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x231b30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
label_231b34:
    // 0x231b34: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x231b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_231b38:
    // 0x231b38: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x231b38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_231b3c:
    // 0x231b3c: 0xc08c200  jal         func_230800
label_231b40:
    if (ctx->pc == 0x231B40u) {
        ctx->pc = 0x231B44u;
        goto label_231b44;
    }
    ctx->pc = 0x231B3Cu;
    SET_GPR_U32(ctx, 31, 0x231B44u);
    ctx->pc = 0x230800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230800u, 0x231B3Cu, 0x231B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231B44u;
label_231b44:
    // 0x231b44: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_231b48:
    if (ctx->pc == 0x231B48u) {
        ctx->pc = 0x231B4Cu;
        goto label_231b4c;
    }
    ctx->pc = 0x231B44u;
    {
        const bool branch_taken_0x231b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x231b44) {
            ctx->pc = 0x231BF4u;
            goto label_231bf4;
        }
    }
    ctx->pc = 0x231B4Cu;
label_231b4c:
    // 0x231b4c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x231b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_231b50:
    // 0x231b50: 0x3064f000  andi        $a0, $v1, 0xF000
    ctx->pc = 0x231b50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61440);
label_231b54:
    // 0x231b54: 0x24032000  addiu       $v1, $zero, 0x2000
    ctx->pc = 0x231b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_231b58:
    // 0x231b58: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
label_231b5c:
    if (ctx->pc == 0x231B5Cu) {
        ctx->pc = 0x231B60u;
        goto label_231b60;
    }
    ctx->pc = 0x231B58u;
    {
        const bool branch_taken_0x231b58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x231b58) {
            ctx->pc = 0x231BB4u;
            goto label_231bb4;
        }
    }
    ctx->pc = 0x231B60u;
label_231b60:
    // 0x231b60: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x231b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_231b64:
    // 0x231b64: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_231b68:
    if (ctx->pc == 0x231B68u) {
        ctx->pc = 0x231B6Cu;
        goto label_231b6c;
    }
    ctx->pc = 0x231B64u;
    {
        const bool branch_taken_0x231b64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x231b64) {
            ctx->pc = 0x231B74u;
            goto label_231b74;
        }
    }
    ctx->pc = 0x231B6Cu;
label_231b6c:
    // 0x231b6c: 0x10000021  b           . + 4 + (0x21 << 2)
label_231b70:
    if (ctx->pc == 0x231B70u) {
        ctx->pc = 0x231B74u;
        goto label_231b74;
    }
    ctx->pc = 0x231B6Cu;
    {
        const bool branch_taken_0x231b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231b6c) {
            ctx->pc = 0x231BF4u;
            goto label_231bf4;
        }
    }
    ctx->pc = 0x231B74u;
label_231b74:
    // 0x231b74: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x231b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_231b78:
    // 0x231b78: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x231b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_231b7c:
    // 0x231b7c: 0x2445f000  addiu       $a1, $v0, -0x1000
    ctx->pc = 0x231b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
label_231b80:
    // 0x231b80: 0x24640028  addiu       $a0, $v1, 0x28
    ctx->pc = 0x231b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_231b84:
    // 0x231b84: 0xc08c248  jal         func_230920
label_231b88:
    if (ctx->pc == 0x231B88u) {
        ctx->pc = 0x231B8Cu;
        goto label_231b8c;
    }
    ctx->pc = 0x231B84u;
    SET_GPR_U32(ctx, 31, 0x231B8Cu);
    ctx->pc = 0x230920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230920u, 0x231B84u, 0x231B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231B8Cu;
label_231b8c:
    // 0x231b8c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x231b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_231b90:
    // 0x231b90: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x231b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_231b94:
    // 0x231b94: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x231b94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_231b98:
    // 0x231b98: 0x24660004  addiu       $a2, $v1, 0x4
    ctx->pc = 0x231b98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_231b9c:
    // 0x231b9c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x231b9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_231ba0:
    // 0x231ba0: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x231ba0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_231ba4:
    // 0x231ba4: 0x320f809  jalr        $t9
label_231ba8:
    if (ctx->pc == 0x231BA8u) {
        ctx->pc = 0x231BACu;
        goto label_231bac;
    }
    ctx->pc = 0x231BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x231BACu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231BA4u, 0x231BACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x231BACu;
label_231bac:
    // 0x231bac: 0x10000011  b           . + 4 + (0x11 << 2)
label_231bb0:
    if (ctx->pc == 0x231BB0u) {
        ctx->pc = 0x231BB4u;
        goto label_231bb4;
    }
    ctx->pc = 0x231BACu;
    {
        const bool branch_taken_0x231bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231bac) {
            ctx->pc = 0x231BF4u;
            goto label_231bf4;
        }
    }
    ctx->pc = 0x231BB4u;
label_231bb4:
    // 0x231bb4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x231bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_231bb8:
    // 0x231bb8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x231bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_231bbc:
    // 0x231bbc: 0x2445e000  addiu       $a1, $v0, -0x2000
    ctx->pc = 0x231bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959104));
label_231bc0:
    // 0x231bc0: 0x24640034  addiu       $a0, $v1, 0x34
    ctx->pc = 0x231bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
label_231bc4:
    // 0x231bc4: 0xc08c1f0  jal         func_2307C0
label_231bc8:
    if (ctx->pc == 0x231BC8u) {
        ctx->pc = 0x231BCCu;
        goto label_231bcc;
    }
    ctx->pc = 0x231BC4u;
    SET_GPR_U32(ctx, 31, 0x231BCCu);
    ctx->pc = 0x2307C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2307C0u, 0x231BC4u, 0x231BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231BCCu;
label_231bcc:
    // 0x231bcc: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x231bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_231bd0:
    // 0x231bd0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x231bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_231bd4:
    // 0x231bd4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x231bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_231bd8:
    // 0x231bd8: 0x24660004  addiu       $a2, $v1, 0x4
    ctx->pc = 0x231bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_231bdc:
    // 0x231bdc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x231bdcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_231be0:
    // 0x231be0: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x231be0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_231be4:
    // 0x231be4: 0x320f809  jalr        $t9
label_231be8:
    if (ctx->pc == 0x231BE8u) {
        ctx->pc = 0x231BECu;
        goto label_231bec;
    }
    ctx->pc = 0x231BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x231BECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231BE4u, 0x231BECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x231BECu;
label_231bec:
    // 0x231bec: 0x10000001  b           . + 4 + (0x1 << 2)
label_231bf0:
    if (ctx->pc == 0x231BF0u) {
        ctx->pc = 0x231BF4u;
        goto label_231bf4;
    }
    ctx->pc = 0x231BECu;
    {
        const bool branch_taken_0x231bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231bec) {
            ctx->pc = 0x231BF4u;
            goto label_231bf4;
        }
    }
    ctx->pc = 0x231BF4u;
label_231bf4:
    // 0x231bf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x231bf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_231bf8:
    // 0x231bf8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x231bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_231bfc:
    // 0x231bfc: 0x3e00008  jr          $ra
label_231c00:
    if (ctx->pc == 0x231C00u) {
        ctx->pc = 0x231C04u;
        goto label_231c04;
    }
    ctx->pc = 0x231BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231BFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231C04u;
label_231c04:
    // 0x231c04: 0x0  nop
    ctx->pc = 0x231c04u;
    // NOP
label_231c08:
    // 0x231c08: 0x0  nop
    ctx->pc = 0x231c08u;
    // NOP
label_231c0c:
    // 0x231c0c: 0x0  nop
    ctx->pc = 0x231c0cu;
    // NOP
    ctx->pc = 0x231c10u;
}

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

// Function: sub_00236B90
// Address: 0x236b90 - 0x236c80
void sub_00236B90_0x236b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236B90_0x236b90");
#endif

    switch (ctx->pc) {
        case 0x236b90u: goto label_236b90;
        case 0x236b94u: goto label_236b94;
        case 0x236b98u: goto label_236b98;
        case 0x236b9cu: goto label_236b9c;
        case 0x236ba0u: goto label_236ba0;
        case 0x236ba4u: goto label_236ba4;
        case 0x236ba8u: goto label_236ba8;
        case 0x236bacu: goto label_236bac;
        case 0x236bb0u: goto label_236bb0;
        case 0x236bb4u: goto label_236bb4;
        case 0x236bb8u: goto label_236bb8;
        case 0x236bbcu: goto label_236bbc;
        case 0x236bc0u: goto label_236bc0;
        case 0x236bc4u: goto label_236bc4;
        case 0x236bc8u: goto label_236bc8;
        case 0x236bccu: goto label_236bcc;
        case 0x236bd0u: goto label_236bd0;
        case 0x236bd4u: goto label_236bd4;
        case 0x236bd8u: goto label_236bd8;
        case 0x236bdcu: goto label_236bdc;
        case 0x236be0u: goto label_236be0;
        case 0x236be4u: goto label_236be4;
        case 0x236be8u: goto label_236be8;
        case 0x236becu: goto label_236bec;
        case 0x236bf0u: goto label_236bf0;
        case 0x236bf4u: goto label_236bf4;
        case 0x236bf8u: goto label_236bf8;
        case 0x236bfcu: goto label_236bfc;
        case 0x236c00u: goto label_236c00;
        case 0x236c04u: goto label_236c04;
        case 0x236c08u: goto label_236c08;
        case 0x236c0cu: goto label_236c0c;
        case 0x236c10u: goto label_236c10;
        case 0x236c14u: goto label_236c14;
        case 0x236c18u: goto label_236c18;
        case 0x236c1cu: goto label_236c1c;
        case 0x236c20u: goto label_236c20;
        case 0x236c24u: goto label_236c24;
        case 0x236c28u: goto label_236c28;
        case 0x236c2cu: goto label_236c2c;
        case 0x236c30u: goto label_236c30;
        case 0x236c34u: goto label_236c34;
        case 0x236c38u: goto label_236c38;
        case 0x236c3cu: goto label_236c3c;
        case 0x236c40u: goto label_236c40;
        case 0x236c44u: goto label_236c44;
        case 0x236c48u: goto label_236c48;
        case 0x236c4cu: goto label_236c4c;
        case 0x236c50u: goto label_236c50;
        case 0x236c54u: goto label_236c54;
        case 0x236c58u: goto label_236c58;
        case 0x236c5cu: goto label_236c5c;
        case 0x236c60u: goto label_236c60;
        case 0x236c64u: goto label_236c64;
        case 0x236c68u: goto label_236c68;
        case 0x236c6cu: goto label_236c6c;
        case 0x236c70u: goto label_236c70;
        case 0x236c74u: goto label_236c74;
        case 0x236c78u: goto label_236c78;
        case 0x236c7cu: goto label_236c7c;
        default: break;
    }

    ctx->pc = 0x236b90u;

label_236b90:
    // 0x236b90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x236b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_236b94:
    // 0x236b94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x236b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_236b98:
    // 0x236b98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x236b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_236b9c:
    // 0x236b9c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x236b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_236ba0:
    // 0x236ba0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x236ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
label_236ba4:
    // 0x236ba4: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x236ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_236ba8:
    // 0x236ba8: 0xc119b68  jal         func_466DA0
label_236bac:
    if (ctx->pc == 0x236BACu) {
        ctx->pc = 0x236BB0u;
        goto label_236bb0;
    }
    ctx->pc = 0x236BA8u;
    SET_GPR_U32(ctx, 31, 0x236BB0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x236BA8u, 0x236BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236BB0u;
label_236bb0:
    // 0x236bb0: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x236bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_236bb4:
    // 0x236bb4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x236bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236bb8:
    // 0x236bb8: 0xc0400e0  jal         func_100380
label_236bbc:
    if (ctx->pc == 0x236BBCu) {
        ctx->pc = 0x236BC0u;
        goto label_236bc0;
    }
    ctx->pc = 0x236BB8u;
    SET_GPR_U32(ctx, 31, 0x236BC0u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x236BB8u, 0x236BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236BC0u;
label_236bc0:
    // 0x236bc0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x236bc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236bc4:
    // 0x236bc4: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_236bc8:
    if (ctx->pc == 0x236BC8u) {
        ctx->pc = 0x236BCCu;
        goto label_236bcc;
    }
    ctx->pc = 0x236BC4u;
    {
        const bool branch_taken_0x236bc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x236bc4) {
            ctx->pc = 0x236BDCu;
            goto label_236bdc;
        }
    }
    ctx->pc = 0x236BCCu;
label_236bcc:
    // 0x236bcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x236bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_236bd0:
    // 0x236bd0: 0xc119f38  jal         func_467CE0
label_236bd4:
    if (ctx->pc == 0x236BD4u) {
        ctx->pc = 0x236BD8u;
        goto label_236bd8;
    }
    ctx->pc = 0x236BD0u;
    SET_GPR_U32(ctx, 31, 0x236BD8u);
    ctx->pc = 0x467CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467CE0u, 0x236BD0u, 0x236BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236BD8u;
label_236bd8:
    // 0x236bd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x236bd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236bdc:
    // 0x236bdc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x236bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_236be0:
    // 0x236be0: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x236be0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
label_236be4:
    // 0x236be4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x236be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_236be8:
    // 0x236be8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x236be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_236bec:
    // 0x236bec: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x236becu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_236bf0:
    // 0x236bf0: 0xc119f5c  jal         func_467D70
label_236bf4:
    if (ctx->pc == 0x236BF4u) {
        ctx->pc = 0x236BF8u;
        goto label_236bf8;
    }
    ctx->pc = 0x236BF0u;
    SET_GPR_U32(ctx, 31, 0x236BF8u);
    ctx->pc = 0x467D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467D70u, 0x236BF0u, 0x236BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236BF8u;
label_236bf8:
    // 0x236bf8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x236bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_236bfc:
    // 0x236bfc: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
label_236c00:
    if (ctx->pc == 0x236C00u) {
        ctx->pc = 0x236C04u;
        goto label_236c04;
    }
    ctx->pc = 0x236BFCu;
    {
        const bool branch_taken_0x236bfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x236bfc) {
            ctx->pc = 0x236C30u;
            goto label_236c30;
        }
    }
    ctx->pc = 0x236C04u;
label_236c04:
    // 0x236c04: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x236c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_236c08:
    // 0x236c08: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x236c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_236c0c:
    // 0x236c0c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x236c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_236c10:
    // 0x236c10: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x236c10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_236c14:
    // 0x236c14: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x236c14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_236c18:
    // 0x236c18: 0x320f809  jalr        $t9
label_236c1c:
    if (ctx->pc == 0x236C1Cu) {
        ctx->pc = 0x236C20u;
        goto label_236c20;
    }
    ctx->pc = 0x236C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x236C20u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236C18u, 0x236C20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x236C20u;
label_236c20:
    // 0x236c20: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x236c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_236c24:
    // 0x236c24: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x236c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_236c28:
    // 0x236c28: 0x10000010  b           . + 4 + (0x10 << 2)
label_236c2c:
    if (ctx->pc == 0x236C2Cu) {
        ctx->pc = 0x236C30u;
        goto label_236c30;
    }
    ctx->pc = 0x236C28u;
    {
        const bool branch_taken_0x236c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x236c28) {
            ctx->pc = 0x236C6Cu;
            goto label_236c6c;
        }
    }
    ctx->pc = 0x236C30u;
label_236c30:
    // 0x236c30: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x236c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_236c34:
    // 0x236c34: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x236c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_236c38:
    // 0x236c38: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_236c3c:
    if (ctx->pc == 0x236C3Cu) {
        ctx->pc = 0x236C40u;
        goto label_236c40;
    }
    ctx->pc = 0x236C38u;
    {
        const bool branch_taken_0x236c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x236c38) {
            ctx->pc = 0x236C68u;
            goto label_236c68;
        }
    }
    ctx->pc = 0x236C40u;
label_236c40:
    // 0x236c40: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x236c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_236c44:
    // 0x236c44: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x236c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_236c48:
    // 0x236c48: 0xc049384  jal         func_124E10
label_236c4c:
    if (ctx->pc == 0x236C4Cu) {
        ctx->pc = 0x236C50u;
        goto label_236c50;
    }
    ctx->pc = 0x236C48u;
    SET_GPR_U32(ctx, 31, 0x236C50u);
    ctx->pc = 0x124E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E10u, 0x236C48u, 0x236C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236C50u;
label_236c50:
    // 0x236c50: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x236c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_236c54:
    // 0x236c54: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x236c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_236c58:
    // 0x236c58: 0xc119c5c  jal         func_467170
label_236c5c:
    if (ctx->pc == 0x236C5Cu) {
        ctx->pc = 0x236C60u;
        goto label_236c60;
    }
    ctx->pc = 0x236C58u;
    SET_GPR_U32(ctx, 31, 0x236C60u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x236C58u, 0x236C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236C60u;
label_236c60:
    // 0x236c60: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x236c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_236c64:
    // 0x236c64: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x236c64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_236c68:
    // 0x236c68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x236c68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_236c6c:
    // 0x236c6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x236c6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_236c70:
    // 0x236c70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x236c70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_236c74:
    // 0x236c74: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x236c74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_236c78:
    // 0x236c78: 0x3e00008  jr          $ra
label_236c7c:
    if (ctx->pc == 0x236C7Cu) {
        ctx->pc = 0x236C80u;
        goto label_fallthrough_0x236c78;
    }
    ctx->pc = 0x236C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x236c78:
    ctx->pc = 0x236C80u;
}

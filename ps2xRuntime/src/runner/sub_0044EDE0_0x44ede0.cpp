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

// Function: sub_0044EDE0
// Address: 0x44ede0 - 0x44ee80
void sub_0044EDE0_0x44ede0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044EDE0_0x44ede0");
#endif

    switch (ctx->pc) {
        case 0x44ede0u: goto label_44ede0;
        case 0x44ede4u: goto label_44ede4;
        case 0x44ede8u: goto label_44ede8;
        case 0x44edecu: goto label_44edec;
        case 0x44edf0u: goto label_44edf0;
        case 0x44edf4u: goto label_44edf4;
        case 0x44edf8u: goto label_44edf8;
        case 0x44edfcu: goto label_44edfc;
        case 0x44ee00u: goto label_44ee00;
        case 0x44ee04u: goto label_44ee04;
        case 0x44ee08u: goto label_44ee08;
        case 0x44ee0cu: goto label_44ee0c;
        case 0x44ee10u: goto label_44ee10;
        case 0x44ee14u: goto label_44ee14;
        case 0x44ee18u: goto label_44ee18;
        case 0x44ee1cu: goto label_44ee1c;
        case 0x44ee20u: goto label_44ee20;
        case 0x44ee24u: goto label_44ee24;
        case 0x44ee28u: goto label_44ee28;
        case 0x44ee2cu: goto label_44ee2c;
        case 0x44ee30u: goto label_44ee30;
        case 0x44ee34u: goto label_44ee34;
        case 0x44ee38u: goto label_44ee38;
        case 0x44ee3cu: goto label_44ee3c;
        case 0x44ee40u: goto label_44ee40;
        case 0x44ee44u: goto label_44ee44;
        case 0x44ee48u: goto label_44ee48;
        case 0x44ee4cu: goto label_44ee4c;
        case 0x44ee50u: goto label_44ee50;
        case 0x44ee54u: goto label_44ee54;
        case 0x44ee58u: goto label_44ee58;
        case 0x44ee5cu: goto label_44ee5c;
        case 0x44ee60u: goto label_44ee60;
        case 0x44ee64u: goto label_44ee64;
        case 0x44ee68u: goto label_44ee68;
        case 0x44ee6cu: goto label_44ee6c;
        case 0x44ee70u: goto label_44ee70;
        case 0x44ee74u: goto label_44ee74;
        case 0x44ee78u: goto label_44ee78;
        case 0x44ee7cu: goto label_44ee7c;
        default: break;
    }

    ctx->pc = 0x44ede0u;

label_44ede0:
    // 0x44ede0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x44ede0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_44ede4:
    // 0x44ede4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x44ede4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_44ede8:
    // 0x44ede8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x44ede8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_44edec:
    // 0x44edec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x44edecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44edf0:
    // 0x44edf0: 0xc113b08  jal         func_44EC20
label_44edf4:
    if (ctx->pc == 0x44EDF4u) {
        ctx->pc = 0x44EDF8u;
        goto label_44edf8;
    }
    ctx->pc = 0x44EDF0u;
    SET_GPR_U32(ctx, 31, 0x44EDF8u);
    ctx->pc = 0x44EC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44EC20u, 0x44EDF0u, 0x44EDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44EDF8u;
label_44edf8:
    // 0x44edf8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x44edf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_44edfc:
    // 0x44edfc: 0x24636b40  addiu       $v1, $v1, 0x6B40
    ctx->pc = 0x44edfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27456));
label_44ee00:
    // 0x44ee00: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44ee00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44ee04:
    // 0x44ee04: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x44ee04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_44ee08:
    // 0x44ee08: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x44ee08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44ee0c:
    // 0x44ee0c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44ee0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44ee10:
    // 0x44ee10: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x44ee10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_44ee14:
    // 0x44ee14: 0x320f809  jalr        $t9
label_44ee18:
    if (ctx->pc == 0x44EE18u) {
        ctx->pc = 0x44EE1Cu;
        goto label_44ee1c;
    }
    ctx->pc = 0x44EE14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44EE1Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44EE14u, 0x44EE1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44EE1Cu;
label_44ee1c:
    // 0x44ee1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44ee1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44ee20:
    // 0x44ee20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x44ee20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_44ee24:
    // 0x44ee24: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x44ee24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_44ee28:
    // 0x44ee28: 0x3e00008  jr          $ra
label_44ee2c:
    if (ctx->pc == 0x44EE2Cu) {
        ctx->pc = 0x44EE30u;
        goto label_44ee30;
    }
    ctx->pc = 0x44EE28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44EE28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44EE30u;
label_44ee30:
    // 0x44ee30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x44ee30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_44ee34:
    // 0x44ee34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x44ee34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_44ee38:
    // 0x44ee38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x44ee38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_44ee3c:
    // 0x44ee3c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x44ee3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44ee40:
    // 0x44ee40: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44ee40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44ee44:
    // 0x44ee44: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x44ee44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_44ee48:
    // 0x44ee48: 0x320f809  jalr        $t9
label_44ee4c:
    if (ctx->pc == 0x44EE4Cu) {
        ctx->pc = 0x44EE50u;
        goto label_44ee50;
    }
    ctx->pc = 0x44EE48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44EE50u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44EE48u, 0x44EE50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44EE50u;
label_44ee50:
    // 0x44ee50: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x44ee50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44ee54:
    // 0x44ee54: 0xa0600004  sb          $zero, 0x4($v1)
    ctx->pc = 0x44ee54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 0));
label_44ee58:
    // 0x44ee58: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x44ee58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44ee5c:
    // 0x44ee5c: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x44ee5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
label_44ee60:
    // 0x44ee60: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x44ee60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44ee64:
    // 0x44ee64: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x44ee64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
label_44ee68:
    // 0x44ee68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x44ee68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_44ee6c:
    // 0x44ee6c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x44ee6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_44ee70:
    // 0x44ee70: 0x3e00008  jr          $ra
label_44ee74:
    if (ctx->pc == 0x44EE74u) {
        ctx->pc = 0x44EE78u;
        goto label_44ee78;
    }
    ctx->pc = 0x44EE70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44EE70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44EE78u;
label_44ee78:
    // 0x44ee78: 0x0  nop
    ctx->pc = 0x44ee78u;
    // NOP
label_44ee7c:
    // 0x44ee7c: 0x0  nop
    ctx->pc = 0x44ee7cu;
    // NOP
    ctx->pc = 0x44ee80u;
}

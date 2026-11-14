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

// Function: sub_00268CE0
// Address: 0x268ce0 - 0x268d80
void sub_00268CE0_0x268ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00268CE0_0x268ce0");
#endif

    switch (ctx->pc) {
        case 0x268ce0u: goto label_268ce0;
        case 0x268ce4u: goto label_268ce4;
        case 0x268ce8u: goto label_268ce8;
        case 0x268cecu: goto label_268cec;
        case 0x268cf0u: goto label_268cf0;
        case 0x268cf4u: goto label_268cf4;
        case 0x268cf8u: goto label_268cf8;
        case 0x268cfcu: goto label_268cfc;
        case 0x268d00u: goto label_268d00;
        case 0x268d04u: goto label_268d04;
        case 0x268d08u: goto label_268d08;
        case 0x268d0cu: goto label_268d0c;
        case 0x268d10u: goto label_268d10;
        case 0x268d14u: goto label_268d14;
        case 0x268d18u: goto label_268d18;
        case 0x268d1cu: goto label_268d1c;
        case 0x268d20u: goto label_268d20;
        case 0x268d24u: goto label_268d24;
        case 0x268d28u: goto label_268d28;
        case 0x268d2cu: goto label_268d2c;
        case 0x268d30u: goto label_268d30;
        case 0x268d34u: goto label_268d34;
        case 0x268d38u: goto label_268d38;
        case 0x268d3cu: goto label_268d3c;
        case 0x268d40u: goto label_268d40;
        case 0x268d44u: goto label_268d44;
        case 0x268d48u: goto label_268d48;
        case 0x268d4cu: goto label_268d4c;
        case 0x268d50u: goto label_268d50;
        case 0x268d54u: goto label_268d54;
        case 0x268d58u: goto label_268d58;
        case 0x268d5cu: goto label_268d5c;
        case 0x268d60u: goto label_268d60;
        case 0x268d64u: goto label_268d64;
        case 0x268d68u: goto label_268d68;
        case 0x268d6cu: goto label_268d6c;
        case 0x268d70u: goto label_268d70;
        case 0x268d74u: goto label_268d74;
        case 0x268d78u: goto label_268d78;
        case 0x268d7cu: goto label_268d7c;
        default: break;
    }

    ctx->pc = 0x268ce0u;

label_268ce0:
    // 0x268ce0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x268ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_268ce4:
    // 0x268ce4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x268ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_268ce8:
    // 0x268ce8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x268ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_268cec:
    // 0x268cec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x268cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_268cf0:
    // 0x268cf0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x268cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_268cf4:
    // 0x268cf4: 0x8c99000c  lw          $t9, 0xC($a0)
    ctx->pc = 0x268cf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_268cf8:
    // 0x268cf8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x268cf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_268cfc:
    // 0x268cfc: 0x320f809  jalr        $t9
label_268d00:
    if (ctx->pc == 0x268D00u) {
        ctx->pc = 0x268D04u;
        goto label_268d04;
    }
    ctx->pc = 0x268CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x268D04u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268CFCu, 0x268D04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x268D04u;
label_268d04:
    // 0x268d04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x268d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_268d08:
    // 0x268d08: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x268d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_268d0c:
    // 0x268d0c: 0x3e00008  jr          $ra
label_268d10:
    if (ctx->pc == 0x268D10u) {
        ctx->pc = 0x268D14u;
        goto label_268d14;
    }
    ctx->pc = 0x268D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x268D14u;
label_268d14:
    // 0x268d14: 0x0  nop
    ctx->pc = 0x268d14u;
    // NOP
label_268d18:
    // 0x268d18: 0x0  nop
    ctx->pc = 0x268d18u;
    // NOP
label_268d1c:
    // 0x268d1c: 0x0  nop
    ctx->pc = 0x268d1cu;
    // NOP
label_268d20:
    // 0x268d20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x268d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_268d24:
    // 0x268d24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x268d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_268d28:
    // 0x268d28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x268d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_268d2c:
    // 0x268d2c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x268d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_268d30:
    // 0x268d30: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x268d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_268d34:
    // 0x268d34: 0xc08ec5c  jal         func_23B170
label_268d38:
    if (ctx->pc == 0x268D38u) {
        ctx->pc = 0x268D3Cu;
        goto label_268d3c;
    }
    ctx->pc = 0x268D34u;
    SET_GPR_U32(ctx, 31, 0x268D3Cu);
    ctx->pc = 0x23B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B170u, 0x268D34u, 0x268D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268D3Cu;
label_268d3c:
    // 0x268d3c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x268d3cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_268d40:
    // 0x268d40: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x268d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_268d44:
    // 0x268d44: 0xc09a9e0  jal         func_26A780
label_268d48:
    if (ctx->pc == 0x268D48u) {
        ctx->pc = 0x268D4Cu;
        goto label_268d4c;
    }
    ctx->pc = 0x268D44u;
    SET_GPR_U32(ctx, 31, 0x268D4Cu);
    ctx->pc = 0x26A780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A780u, 0x268D44u, 0x268D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268D4Cu;
label_268d4c:
    // 0x268d4c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x268d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_268d50:
    // 0x268d50: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x268d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_268d54:
    // 0x268d54: 0xc043114  jal         func_10C450
label_268d58:
    if (ctx->pc == 0x268D58u) {
        ctx->pc = 0x268D5Cu;
        goto label_268d5c;
    }
    ctx->pc = 0x268D54u;
    SET_GPR_U32(ctx, 31, 0x268D5Cu);
    ctx->pc = 0x10C450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C450u, 0x268D54u, 0x268D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268D5Cu;
label_268d5c:
    // 0x268d5c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x268d5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_268d60:
    // 0x268d60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x268d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_268d64:
    // 0x268d64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x268d64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_268d68:
    // 0x268d68: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x268d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_268d6c:
    // 0x268d6c: 0x3e00008  jr          $ra
label_268d70:
    if (ctx->pc == 0x268D70u) {
        ctx->pc = 0x268D74u;
        goto label_268d74;
    }
    ctx->pc = 0x268D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268D6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x268D74u;
label_268d74:
    // 0x268d74: 0x0  nop
    ctx->pc = 0x268d74u;
    // NOP
label_268d78:
    // 0x268d78: 0x0  nop
    ctx->pc = 0x268d78u;
    // NOP
label_268d7c:
    // 0x268d7c: 0x0  nop
    ctx->pc = 0x268d7cu;
    // NOP
    ctx->pc = 0x268d80u;
}

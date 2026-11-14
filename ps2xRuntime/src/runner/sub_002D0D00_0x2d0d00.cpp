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

// Function: sub_002D0D00
// Address: 0x2d0d00 - 0x2d0db0
void sub_002D0D00_0x2d0d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0D00_0x2d0d00");
#endif

    switch (ctx->pc) {
        case 0x2d0d00u: goto label_2d0d00;
        case 0x2d0d04u: goto label_2d0d04;
        case 0x2d0d08u: goto label_2d0d08;
        case 0x2d0d0cu: goto label_2d0d0c;
        case 0x2d0d10u: goto label_2d0d10;
        case 0x2d0d14u: goto label_2d0d14;
        case 0x2d0d18u: goto label_2d0d18;
        case 0x2d0d1cu: goto label_2d0d1c;
        case 0x2d0d20u: goto label_2d0d20;
        case 0x2d0d24u: goto label_2d0d24;
        case 0x2d0d28u: goto label_2d0d28;
        case 0x2d0d2cu: goto label_2d0d2c;
        case 0x2d0d30u: goto label_2d0d30;
        case 0x2d0d34u: goto label_2d0d34;
        case 0x2d0d38u: goto label_2d0d38;
        case 0x2d0d3cu: goto label_2d0d3c;
        case 0x2d0d40u: goto label_2d0d40;
        case 0x2d0d44u: goto label_2d0d44;
        case 0x2d0d48u: goto label_2d0d48;
        case 0x2d0d4cu: goto label_2d0d4c;
        case 0x2d0d50u: goto label_2d0d50;
        case 0x2d0d54u: goto label_2d0d54;
        case 0x2d0d58u: goto label_2d0d58;
        case 0x2d0d5cu: goto label_2d0d5c;
        case 0x2d0d60u: goto label_2d0d60;
        case 0x2d0d64u: goto label_2d0d64;
        case 0x2d0d68u: goto label_2d0d68;
        case 0x2d0d6cu: goto label_2d0d6c;
        case 0x2d0d70u: goto label_2d0d70;
        case 0x2d0d74u: goto label_2d0d74;
        case 0x2d0d78u: goto label_2d0d78;
        case 0x2d0d7cu: goto label_2d0d7c;
        case 0x2d0d80u: goto label_2d0d80;
        case 0x2d0d84u: goto label_2d0d84;
        case 0x2d0d88u: goto label_2d0d88;
        case 0x2d0d8cu: goto label_2d0d8c;
        case 0x2d0d90u: goto label_2d0d90;
        case 0x2d0d94u: goto label_2d0d94;
        case 0x2d0d98u: goto label_2d0d98;
        case 0x2d0d9cu: goto label_2d0d9c;
        case 0x2d0da0u: goto label_2d0da0;
        case 0x2d0da4u: goto label_2d0da4;
        case 0x2d0da8u: goto label_2d0da8;
        case 0x2d0dacu: goto label_2d0dac;
        default: break;
    }

    ctx->pc = 0x2d0d00u;

label_2d0d00:
    // 0x2d0d00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d0d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2d0d04:
    // 0x2d0d04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d0d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2d0d08:
    // 0x2d0d08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2d0d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_2d0d0c:
    // 0x2d0d0c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2d0d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2d0d10:
    // 0x2d0d10: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2d0d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2d0d14:
    // 0x2d0d14: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2d0d14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2d0d18:
    // 0x2d0d18: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2d0d18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2d0d1c:
    // 0x2d0d1c: 0x320f809  jalr        $t9
label_2d0d20:
    if (ctx->pc == 0x2D0D20u) {
        ctx->pc = 0x2D0D24u;
        goto label_2d0d24;
    }
    ctx->pc = 0x2D0D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2D0D24u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0D1Cu, 0x2D0D24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D0D24u;
label_2d0d24:
    // 0x2d0d24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d0d24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d0d28:
    // 0x2d0d28: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d0d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2d0d2c:
    // 0x2d0d2c: 0x3e00008  jr          $ra
label_2d0d30:
    if (ctx->pc == 0x2D0D30u) {
        ctx->pc = 0x2D0D34u;
        goto label_2d0d34;
    }
    ctx->pc = 0x2D0D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0D34u;
label_2d0d34:
    // 0x2d0d34: 0x0  nop
    ctx->pc = 0x2d0d34u;
    // NOP
label_2d0d38:
    // 0x2d0d38: 0x0  nop
    ctx->pc = 0x2d0d38u;
    // NOP
label_2d0d3c:
    // 0x2d0d3c: 0x0  nop
    ctx->pc = 0x2d0d3cu;
    // NOP
label_2d0d40:
    // 0x2d0d40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d0d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2d0d44:
    // 0x2d0d44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d0d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2d0d48:
    // 0x2d0d48: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2d0d48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_2d0d4c:
    // 0x2d0d4c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2d0d4cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_2d0d50:
    // 0x2d0d50: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d0d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2d0d54:
    // 0x2d0d54: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_2d0d58:
    if (ctx->pc == 0x2D0D58u) {
        ctx->pc = 0x2D0D5Cu;
        goto label_2d0d5c;
    }
    ctx->pc = 0x2D0D54u;
    {
        const bool branch_taken_0x2d0d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0d54) {
            ctx->pc = 0x2D0D9Cu;
            goto label_2d0d9c;
        }
    }
    ctx->pc = 0x2D0D5Cu;
label_2d0d5c:
    // 0x2d0d5c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2d0d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_2d0d60:
    // 0x2d0d60: 0x24636808  addiu       $v1, $v1, 0x6808
    ctx->pc = 0x2d0d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26632));
label_2d0d64:
    // 0x2d0d64: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d0d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2d0d68:
    // 0x2d0d68: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2d0d68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2d0d6c:
    // 0x2d0d6c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2d0d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2d0d70:
    // 0x2d0d70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d0d70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d0d74:
    // 0x2d0d74: 0xc0b6260  jal         func_2D8980
label_2d0d78:
    if (ctx->pc == 0x2D0D78u) {
        ctx->pc = 0x2D0D7Cu;
        goto label_2d0d7c;
    }
    ctx->pc = 0x2D0D74u;
    SET_GPR_U32(ctx, 31, 0x2D0D7Cu);
    ctx->pc = 0x2D8980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8980u, 0x2D0D74u, 0x2D0D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0D7Cu;
label_2d0d7c:
    // 0x2d0d7c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2d0d7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_2d0d80:
    // 0x2d0d80: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2d0d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_2d0d84:
    // 0x2d0d84: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d0d84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2d0d88:
    // 0x2d0d88: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_2d0d8c:
    if (ctx->pc == 0x2D0D8Cu) {
        ctx->pc = 0x2D0D90u;
        goto label_2d0d90;
    }
    ctx->pc = 0x2D0D88u;
    {
        const bool branch_taken_0x2d0d88 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d0d88) {
            ctx->pc = 0x2D0D9Cu;
            goto label_2d0d9c;
        }
    }
    ctx->pc = 0x2D0D90u;
label_2d0d90:
    // 0x2d0d90: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2d0d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2d0d94:
    // 0x2d0d94: 0xc0ba070  jal         func_2E81C0
label_2d0d98:
    if (ctx->pc == 0x2D0D98u) {
        ctx->pc = 0x2D0D9Cu;
        goto label_2d0d9c;
    }
    ctx->pc = 0x2D0D94u;
    SET_GPR_U32(ctx, 31, 0x2D0D9Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2D0D94u, 0x2D0D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0D9Cu;
label_2d0d9c:
    // 0x2d0d9c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d0d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2d0da0:
    // 0x2d0da0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d0da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d0da4:
    // 0x2d0da4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2d0da4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2d0da8:
    // 0x2d0da8: 0x3e00008  jr          $ra
label_2d0dac:
    if (ctx->pc == 0x2D0DACu) {
        ctx->pc = 0x2D0DB0u;
        goto label_fallthrough_0x2d0da8;
    }
    ctx->pc = 0x2D0DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0DA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2d0da8:
    ctx->pc = 0x2D0DB0u;
}

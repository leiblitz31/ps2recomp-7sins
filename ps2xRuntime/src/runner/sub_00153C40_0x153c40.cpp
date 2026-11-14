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

// Function: sub_00153C40
// Address: 0x153c40 - 0x153e60
void sub_00153C40_0x153c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153C40_0x153c40");
#endif

    switch (ctx->pc) {
        case 0x153c40u: goto label_153c40;
        case 0x153c44u: goto label_153c44;
        case 0x153c48u: goto label_153c48;
        case 0x153c4cu: goto label_153c4c;
        case 0x153c50u: goto label_153c50;
        case 0x153c54u: goto label_153c54;
        case 0x153c58u: goto label_153c58;
        case 0x153c5cu: goto label_153c5c;
        case 0x153c60u: goto label_153c60;
        case 0x153c64u: goto label_153c64;
        case 0x153c68u: goto label_153c68;
        case 0x153c6cu: goto label_153c6c;
        case 0x153c70u: goto label_153c70;
        case 0x153c74u: goto label_153c74;
        case 0x153c78u: goto label_153c78;
        case 0x153c7cu: goto label_153c7c;
        case 0x153c80u: goto label_153c80;
        case 0x153c84u: goto label_153c84;
        case 0x153c88u: goto label_153c88;
        case 0x153c8cu: goto label_153c8c;
        case 0x153c90u: goto label_153c90;
        case 0x153c94u: goto label_153c94;
        case 0x153c98u: goto label_153c98;
        case 0x153c9cu: goto label_153c9c;
        case 0x153ca0u: goto label_153ca0;
        case 0x153ca4u: goto label_153ca4;
        case 0x153ca8u: goto label_153ca8;
        case 0x153cacu: goto label_153cac;
        case 0x153cb0u: goto label_153cb0;
        case 0x153cb4u: goto label_153cb4;
        case 0x153cb8u: goto label_153cb8;
        case 0x153cbcu: goto label_153cbc;
        case 0x153cc0u: goto label_153cc0;
        case 0x153cc4u: goto label_153cc4;
        case 0x153cc8u: goto label_153cc8;
        case 0x153cccu: goto label_153ccc;
        case 0x153cd0u: goto label_153cd0;
        case 0x153cd4u: goto label_153cd4;
        case 0x153cd8u: goto label_153cd8;
        case 0x153cdcu: goto label_153cdc;
        case 0x153ce0u: goto label_153ce0;
        case 0x153ce4u: goto label_153ce4;
        case 0x153ce8u: goto label_153ce8;
        case 0x153cecu: goto label_153cec;
        case 0x153cf0u: goto label_153cf0;
        case 0x153cf4u: goto label_153cf4;
        case 0x153cf8u: goto label_153cf8;
        case 0x153cfcu: goto label_153cfc;
        case 0x153d00u: goto label_153d00;
        case 0x153d04u: goto label_153d04;
        case 0x153d08u: goto label_153d08;
        case 0x153d0cu: goto label_153d0c;
        case 0x153d10u: goto label_153d10;
        case 0x153d14u: goto label_153d14;
        case 0x153d18u: goto label_153d18;
        case 0x153d1cu: goto label_153d1c;
        case 0x153d20u: goto label_153d20;
        case 0x153d24u: goto label_153d24;
        case 0x153d28u: goto label_153d28;
        case 0x153d2cu: goto label_153d2c;
        case 0x153d30u: goto label_153d30;
        case 0x153d34u: goto label_153d34;
        case 0x153d38u: goto label_153d38;
        case 0x153d3cu: goto label_153d3c;
        case 0x153d40u: goto label_153d40;
        case 0x153d44u: goto label_153d44;
        case 0x153d48u: goto label_153d48;
        case 0x153d4cu: goto label_153d4c;
        case 0x153d50u: goto label_153d50;
        case 0x153d54u: goto label_153d54;
        case 0x153d58u: goto label_153d58;
        case 0x153d5cu: goto label_153d5c;
        case 0x153d60u: goto label_153d60;
        case 0x153d64u: goto label_153d64;
        case 0x153d68u: goto label_153d68;
        case 0x153d6cu: goto label_153d6c;
        case 0x153d70u: goto label_153d70;
        case 0x153d74u: goto label_153d74;
        case 0x153d78u: goto label_153d78;
        case 0x153d7cu: goto label_153d7c;
        case 0x153d80u: goto label_153d80;
        case 0x153d84u: goto label_153d84;
        case 0x153d88u: goto label_153d88;
        case 0x153d8cu: goto label_153d8c;
        case 0x153d90u: goto label_153d90;
        case 0x153d94u: goto label_153d94;
        case 0x153d98u: goto label_153d98;
        case 0x153d9cu: goto label_153d9c;
        case 0x153da0u: goto label_153da0;
        case 0x153da4u: goto label_153da4;
        case 0x153da8u: goto label_153da8;
        case 0x153dacu: goto label_153dac;
        case 0x153db0u: goto label_153db0;
        case 0x153db4u: goto label_153db4;
        case 0x153db8u: goto label_153db8;
        case 0x153dbcu: goto label_153dbc;
        case 0x153dc0u: goto label_153dc0;
        case 0x153dc4u: goto label_153dc4;
        case 0x153dc8u: goto label_153dc8;
        case 0x153dccu: goto label_153dcc;
        case 0x153dd0u: goto label_153dd0;
        case 0x153dd4u: goto label_153dd4;
        case 0x153dd8u: goto label_153dd8;
        case 0x153ddcu: goto label_153ddc;
        case 0x153de0u: goto label_153de0;
        case 0x153de4u: goto label_153de4;
        case 0x153de8u: goto label_153de8;
        case 0x153decu: goto label_153dec;
        case 0x153df0u: goto label_153df0;
        case 0x153df4u: goto label_153df4;
        case 0x153df8u: goto label_153df8;
        case 0x153dfcu: goto label_153dfc;
        case 0x153e00u: goto label_153e00;
        case 0x153e04u: goto label_153e04;
        case 0x153e08u: goto label_153e08;
        case 0x153e0cu: goto label_153e0c;
        case 0x153e10u: goto label_153e10;
        case 0x153e14u: goto label_153e14;
        case 0x153e18u: goto label_153e18;
        case 0x153e1cu: goto label_153e1c;
        case 0x153e20u: goto label_153e20;
        case 0x153e24u: goto label_153e24;
        case 0x153e28u: goto label_153e28;
        case 0x153e2cu: goto label_153e2c;
        case 0x153e30u: goto label_153e30;
        case 0x153e34u: goto label_153e34;
        case 0x153e38u: goto label_153e38;
        case 0x153e3cu: goto label_153e3c;
        case 0x153e40u: goto label_153e40;
        case 0x153e44u: goto label_153e44;
        case 0x153e48u: goto label_153e48;
        case 0x153e4cu: goto label_153e4c;
        case 0x153e50u: goto label_153e50;
        case 0x153e54u: goto label_153e54;
        case 0x153e58u: goto label_153e58;
        case 0x153e5cu: goto label_153e5c;
        default: break;
    }

    ctx->pc = 0x153c40u;

label_153c40:
    // 0x153c40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x153c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_153c44:
    // 0x153c44: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x153c44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_153c48:
    // 0x153c48: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x153c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_153c4c:
    // 0x153c4c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x153c4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_153c50:
    // 0x153c50: 0x3e00008  jr          $ra
label_153c54:
    if (ctx->pc == 0x153C54u) {
        ctx->pc = 0x153C58u;
        goto label_153c58;
    }
    ctx->pc = 0x153C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153C58u;
label_153c58:
    // 0x153c58: 0x0  nop
    ctx->pc = 0x153c58u;
    // NOP
label_153c5c:
    // 0x153c5c: 0x0  nop
    ctx->pc = 0x153c5cu;
    // NOP
label_153c60:
    // 0x153c60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x153c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_153c64:
    // 0x153c64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x153c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_153c68:
    // 0x153c68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x153c68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_153c6c:
    // 0x153c6c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x153c6cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_153c70:
    // 0x153c70: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x153c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_153c74:
    // 0x153c74: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_153c78:
    if (ctx->pc == 0x153C78u) {
        ctx->pc = 0x153C7Cu;
        goto label_153c7c;
    }
    ctx->pc = 0x153C74u;
    {
        const bool branch_taken_0x153c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x153c74) {
            ctx->pc = 0x153CD0u;
            goto label_153cd0;
        }
    }
    ctx->pc = 0x153C7Cu;
label_153c7c:
    // 0x153c7c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x153c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_153c80:
    // 0x153c80: 0x246339c0  addiu       $v1, $v1, 0x39C0
    ctx->pc = 0x153c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14784));
label_153c84:
    // 0x153c84: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x153c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_153c88:
    // 0x153c88: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x153c88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_153c8c:
    // 0x153c8c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x153c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_153c90:
    // 0x153c90: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x153c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_153c94:
    // 0x153c94: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x153c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_153c98:
    // 0x153c98: 0xc054dcc  jal         func_153730
label_153c9c:
    if (ctx->pc == 0x153C9Cu) {
        ctx->pc = 0x153CA0u;
        goto label_153ca0;
    }
    ctx->pc = 0x153C98u;
    SET_GPR_U32(ctx, 31, 0x153CA0u);
    ctx->pc = 0x153730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153730u, 0x153C98u, 0x153CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153CA0u;
label_153ca0:
    // 0x153ca0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x153ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_153ca4:
    // 0x153ca4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x153ca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_153ca8:
    // 0x153ca8: 0xc08d67c  jal         func_2359F0
label_153cac:
    if (ctx->pc == 0x153CACu) {
        ctx->pc = 0x153CB0u;
        goto label_153cb0;
    }
    ctx->pc = 0x153CA8u;
    SET_GPR_U32(ctx, 31, 0x153CB0u);
    ctx->pc = 0x2359F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2359F0u, 0x153CA8u, 0x153CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153CB0u;
label_153cb0:
    // 0x153cb0: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x153cb0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_153cb4:
    // 0x153cb4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x153cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_153cb8:
    // 0x153cb8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x153cb8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_153cbc:
    // 0x153cbc: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_153cc0:
    if (ctx->pc == 0x153CC0u) {
        ctx->pc = 0x153CC4u;
        goto label_153cc4;
    }
    ctx->pc = 0x153CBCu;
    {
        const bool branch_taken_0x153cbc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x153cbc) {
            ctx->pc = 0x153CD0u;
            goto label_153cd0;
        }
    }
    ctx->pc = 0x153CC4u;
label_153cc4:
    // 0x153cc4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x153cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_153cc8:
    // 0x153cc8: 0xc0ba070  jal         func_2E81C0
label_153ccc:
    if (ctx->pc == 0x153CCCu) {
        ctx->pc = 0x153CD0u;
        goto label_153cd0;
    }
    ctx->pc = 0x153CC8u;
    SET_GPR_U32(ctx, 31, 0x153CD0u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x153CC8u, 0x153CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153CD0u;
label_153cd0:
    // 0x153cd0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x153cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_153cd4:
    // 0x153cd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x153cd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_153cd8:
    // 0x153cd8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x153cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_153cdc:
    // 0x153cdc: 0x3e00008  jr          $ra
label_153ce0:
    if (ctx->pc == 0x153CE0u) {
        ctx->pc = 0x153CE4u;
        goto label_153ce4;
    }
    ctx->pc = 0x153CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153CDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153CE4u;
label_153ce4:
    // 0x153ce4: 0x0  nop
    ctx->pc = 0x153ce4u;
    // NOP
label_153ce8:
    // 0x153ce8: 0x0  nop
    ctx->pc = 0x153ce8u;
    // NOP
label_153cec:
    // 0x153cec: 0x0  nop
    ctx->pc = 0x153cecu;
    // NOP
label_153cf0:
    // 0x153cf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x153cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_153cf4:
    // 0x153cf4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x153cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_153cf8:
    // 0x153cf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x153cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_153cfc:
    // 0x153cfc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x153cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_153d00:
    // 0x153d00: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x153d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_153d04:
    // 0x153d04: 0xc08ec3c  jal         func_23B0F0
label_153d08:
    if (ctx->pc == 0x153D08u) {
        ctx->pc = 0x153D0Cu;
        goto label_153d0c;
    }
    ctx->pc = 0x153D04u;
    SET_GPR_U32(ctx, 31, 0x153D0Cu);
    ctx->pc = 0x23B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B0F0u, 0x153D04u, 0x153D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153D0Cu;
label_153d0c:
    // 0x153d0c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x153d0cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_153d10:
    // 0x153d10: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x153d10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_153d14:
    // 0x153d14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x153d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_153d18:
    // 0x153d18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x153d18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_153d1c:
    // 0x153d1c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x153d1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_153d20:
    // 0x153d20: 0x3e00008  jr          $ra
label_153d24:
    if (ctx->pc == 0x153D24u) {
        ctx->pc = 0x153D28u;
        goto label_153d28;
    }
    ctx->pc = 0x153D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153D28u;
label_153d28:
    // 0x153d28: 0x0  nop
    ctx->pc = 0x153d28u;
    // NOP
label_153d2c:
    // 0x153d2c: 0x0  nop
    ctx->pc = 0x153d2cu;
    // NOP
label_153d30:
    // 0x153d30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x153d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_153d34:
    // 0x153d34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x153d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_153d38:
    // 0x153d38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x153d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_153d3c:
    // 0x153d3c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x153d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_153d40:
    // 0x153d40: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x153d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_153d44:
    // 0x153d44: 0xc08ec48  jal         func_23B120
label_153d48:
    if (ctx->pc == 0x153D48u) {
        ctx->pc = 0x153D4Cu;
        goto label_153d4c;
    }
    ctx->pc = 0x153D44u;
    SET_GPR_U32(ctx, 31, 0x153D4Cu);
    ctx->pc = 0x23B120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B120u, 0x153D44u, 0x153D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153D4Cu;
label_153d4c:
    // 0x153d4c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x153d4cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_153d50:
    // 0x153d50: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x153d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_153d54:
    // 0x153d54: 0xc055028  jal         func_1540A0
label_153d58:
    if (ctx->pc == 0x153D58u) {
        ctx->pc = 0x153D5Cu;
        goto label_153d5c;
    }
    ctx->pc = 0x153D54u;
    SET_GPR_U32(ctx, 31, 0x153D5Cu);
    ctx->pc = 0x1540A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1540A0u, 0x153D54u, 0x153D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153D5Cu;
label_153d5c:
    // 0x153d5c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x153d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_153d60:
    // 0x153d60: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x153d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_153d64:
    // 0x153d64: 0x24450028  addiu       $a1, $v0, 0x28
    ctx->pc = 0x153d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_153d68:
    // 0x153d68: 0xc055008  jal         func_154020
label_153d6c:
    if (ctx->pc == 0x153D6Cu) {
        ctx->pc = 0x153D70u;
        goto label_153d70;
    }
    ctx->pc = 0x153D68u;
    SET_GPR_U32(ctx, 31, 0x153D70u);
    ctx->pc = 0x154020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154020u, 0x153D68u, 0x153D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153D70u;
label_153d70:
    // 0x153d70: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x153d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_153d74:
    // 0x153d74: 0x27a50028  addiu       $a1, $sp, 0x28
    ctx->pc = 0x153d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_153d78:
    // 0x153d78: 0xc054ff8  jal         func_153FE0
label_153d7c:
    if (ctx->pc == 0x153D7Cu) {
        ctx->pc = 0x153D80u;
        goto label_153d80;
    }
    ctx->pc = 0x153D78u;
    SET_GPR_U32(ctx, 31, 0x153D80u);
    ctx->pc = 0x153FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153FE0u, 0x153D78u, 0x153D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153D80u;
label_153d80:
    // 0x153d80: 0x10000022  b           . + 4 + (0x22 << 2)
label_153d84:
    if (ctx->pc == 0x153D84u) {
        ctx->pc = 0x153D88u;
        goto label_153d88;
    }
    ctx->pc = 0x153D80u;
    {
        const bool branch_taken_0x153d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153d80) {
            ctx->pc = 0x153E0Cu;
            goto label_153e0c;
        }
    }
    ctx->pc = 0x153D88u;
label_153d88:
    // 0x153d88: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x153d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_153d8c:
    // 0x153d8c: 0xc054ff0  jal         func_153FC0
label_153d90:
    if (ctx->pc == 0x153D90u) {
        ctx->pc = 0x153D94u;
        goto label_153d94;
    }
    ctx->pc = 0x153D8Cu;
    SET_GPR_U32(ctx, 31, 0x153D94u);
    ctx->pc = 0x153FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153FC0u, 0x153D8Cu, 0x153D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153D94u;
label_153d94:
    // 0x153d94: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x153d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_153d98:
    // 0x153d98: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x153d98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_153d9c:
    // 0x153d9c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x153d9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_153da0:
    // 0x153da0: 0x320f809  jalr        $t9
label_153da4:
    if (ctx->pc == 0x153DA4u) {
        ctx->pc = 0x153DA8u;
        goto label_153da8;
    }
    ctx->pc = 0x153DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x153DA8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153DA0u, 0x153DA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x153DA8u;
label_153da8:
    // 0x153da8: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x153da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_153dac:
    // 0x153dac: 0xc054ff0  jal         func_153FC0
label_153db0:
    if (ctx->pc == 0x153DB0u) {
        ctx->pc = 0x153DB4u;
        goto label_153db4;
    }
    ctx->pc = 0x153DACu;
    SET_GPR_U32(ctx, 31, 0x153DB4u);
    ctx->pc = 0x153FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153FC0u, 0x153DACu, 0x153DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153DB4u;
label_153db4:
    // 0x153db4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x153db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_153db8:
    // 0x153db8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_153dbc:
    if (ctx->pc == 0x153DBCu) {
        ctx->pc = 0x153DC0u;
        goto label_153dc0;
    }
    ctx->pc = 0x153DB8u;
    {
        const bool branch_taken_0x153db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x153db8) {
            ctx->pc = 0x153E00u;
            goto label_153e00;
        }
    }
    ctx->pc = 0x153DC0u;
label_153dc0:
    // 0x153dc0: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x153dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_153dc4:
    // 0x153dc4: 0xc054ff0  jal         func_153FC0
label_153dc8:
    if (ctx->pc == 0x153DC8u) {
        ctx->pc = 0x153DCCu;
        goto label_153dcc;
    }
    ctx->pc = 0x153DC4u;
    SET_GPR_U32(ctx, 31, 0x153DCCu);
    ctx->pc = 0x153FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153FC0u, 0x153DC4u, 0x153DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153DCCu;
label_153dcc:
    // 0x153dcc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x153dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_153dd0:
    // 0x153dd0: 0xc054fe0  jal         func_153F80
label_153dd4:
    if (ctx->pc == 0x153DD4u) {
        ctx->pc = 0x153DD8u;
        goto label_153dd8;
    }
    ctx->pc = 0x153DD0u;
    SET_GPR_U32(ctx, 31, 0x153DD8u);
    ctx->pc = 0x153F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153F80u, 0x153DD0u, 0x153DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153DD8u;
label_153dd8:
    // 0x153dd8: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x153dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_153ddc:
    // 0x153ddc: 0xc054ff0  jal         func_153FC0
label_153de0:
    if (ctx->pc == 0x153DE0u) {
        ctx->pc = 0x153DE4u;
        goto label_153de4;
    }
    ctx->pc = 0x153DDCu;
    SET_GPR_U32(ctx, 31, 0x153DE4u);
    ctx->pc = 0x153FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153FC0u, 0x153DDCu, 0x153DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153DE4u;
label_153de4:
    // 0x153de4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x153de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_153de8:
    // 0x153de8: 0xc119c5c  jal         func_467170
label_153dec:
    if (ctx->pc == 0x153DECu) {
        ctx->pc = 0x153DF0u;
        goto label_153df0;
    }
    ctx->pc = 0x153DE8u;
    SET_GPR_U32(ctx, 31, 0x153DF0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x153DE8u, 0x153DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153DF0u;
label_153df0:
    // 0x153df0: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x153df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_153df4:
    // 0x153df4: 0xc054ff0  jal         func_153FC0
label_153df8:
    if (ctx->pc == 0x153DF8u) {
        ctx->pc = 0x153DFCu;
        goto label_153dfc;
    }
    ctx->pc = 0x153DF4u;
    SET_GPR_U32(ctx, 31, 0x153DFCu);
    ctx->pc = 0x153FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153FC0u, 0x153DF4u, 0x153DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153DFCu;
label_153dfc:
    // 0x153dfc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x153dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_153e00:
    // 0x153e00: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x153e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_153e04:
    // 0x153e04: 0xc054fd0  jal         func_153F40
label_153e08:
    if (ctx->pc == 0x153E08u) {
        ctx->pc = 0x153E0Cu;
        goto label_153e0c;
    }
    ctx->pc = 0x153E04u;
    SET_GPR_U32(ctx, 31, 0x153E0Cu);
    ctx->pc = 0x153F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153F40u, 0x153E04u, 0x153E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153E0Cu;
label_153e0c:
    // 0x153e0c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x153e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_153e10:
    // 0x153e10: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x153e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
label_153e14:
    // 0x153e14: 0x24450028  addiu       $a1, $v0, 0x28
    ctx->pc = 0x153e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_153e18:
    // 0x153e18: 0xc054fa4  jal         func_153E90
label_153e1c:
    if (ctx->pc == 0x153E1Cu) {
        ctx->pc = 0x153E20u;
        goto label_153e20;
    }
    ctx->pc = 0x153E18u;
    SET_GPR_U32(ctx, 31, 0x153E20u);
    ctx->pc = 0x153E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153E90u, 0x153E18u, 0x153E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153E20u;
label_153e20:
    // 0x153e20: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x153e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_153e24:
    // 0x153e24: 0x27a50024  addiu       $a1, $sp, 0x24
    ctx->pc = 0x153e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
label_153e28:
    // 0x153e28: 0xc041998  jal         func_106660
label_153e2c:
    if (ctx->pc == 0x153E2Cu) {
        ctx->pc = 0x153E30u;
        goto label_153e30;
    }
    ctx->pc = 0x153E28u;
    SET_GPR_U32(ctx, 31, 0x153E30u);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x153E28u, 0x153E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153E30u;
label_153e30:
    // 0x153e30: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
label_153e34:
    if (ctx->pc == 0x153E34u) {
        ctx->pc = 0x153E38u;
        goto label_153e38;
    }
    ctx->pc = 0x153E30u;
    {
        const bool branch_taken_0x153e30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x153e30) {
            ctx->pc = 0x153D88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_153d88;
        }
    }
    ctx->pc = 0x153E38u;
label_153e38:
    // 0x153e38: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x153e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_153e3c:
    // 0x153e3c: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x153e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_153e40:
    // 0x153e40: 0xc054f98  jal         func_153E60
label_153e44:
    if (ctx->pc == 0x153E44u) {
        ctx->pc = 0x153E48u;
        goto label_153e48;
    }
    ctx->pc = 0x153E40u;
    SET_GPR_U32(ctx, 31, 0x153E48u);
    ctx->pc = 0x153E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153E60u, 0x153E40u, 0x153E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153E48u;
label_153e48:
    // 0x153e48: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x153e48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_153e4c:
    // 0x153e4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x153e4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_153e50:
    // 0x153e50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x153e50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_153e54:
    // 0x153e54: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x153e54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_153e58:
    // 0x153e58: 0x3e00008  jr          $ra
label_153e5c:
    if (ctx->pc == 0x153E5Cu) {
        ctx->pc = 0x153E60u;
        goto label_fallthrough_0x153e58;
    }
    ctx->pc = 0x153E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153E58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x153e58:
    ctx->pc = 0x153E60u;
}

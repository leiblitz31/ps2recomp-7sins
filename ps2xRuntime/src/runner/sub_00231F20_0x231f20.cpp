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

// Function: sub_00231F20
// Address: 0x231f20 - 0x232000
void sub_00231F20_0x231f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231F20_0x231f20");
#endif

    switch (ctx->pc) {
        case 0x231f20u: goto label_231f20;
        case 0x231f24u: goto label_231f24;
        case 0x231f28u: goto label_231f28;
        case 0x231f2cu: goto label_231f2c;
        case 0x231f30u: goto label_231f30;
        case 0x231f34u: goto label_231f34;
        case 0x231f38u: goto label_231f38;
        case 0x231f3cu: goto label_231f3c;
        case 0x231f40u: goto label_231f40;
        case 0x231f44u: goto label_231f44;
        case 0x231f48u: goto label_231f48;
        case 0x231f4cu: goto label_231f4c;
        case 0x231f50u: goto label_231f50;
        case 0x231f54u: goto label_231f54;
        case 0x231f58u: goto label_231f58;
        case 0x231f5cu: goto label_231f5c;
        case 0x231f60u: goto label_231f60;
        case 0x231f64u: goto label_231f64;
        case 0x231f68u: goto label_231f68;
        case 0x231f6cu: goto label_231f6c;
        case 0x231f70u: goto label_231f70;
        case 0x231f74u: goto label_231f74;
        case 0x231f78u: goto label_231f78;
        case 0x231f7cu: goto label_231f7c;
        case 0x231f80u: goto label_231f80;
        case 0x231f84u: goto label_231f84;
        case 0x231f88u: goto label_231f88;
        case 0x231f8cu: goto label_231f8c;
        case 0x231f90u: goto label_231f90;
        case 0x231f94u: goto label_231f94;
        case 0x231f98u: goto label_231f98;
        case 0x231f9cu: goto label_231f9c;
        case 0x231fa0u: goto label_231fa0;
        case 0x231fa4u: goto label_231fa4;
        case 0x231fa8u: goto label_231fa8;
        case 0x231facu: goto label_231fac;
        case 0x231fb0u: goto label_231fb0;
        case 0x231fb4u: goto label_231fb4;
        case 0x231fb8u: goto label_231fb8;
        case 0x231fbcu: goto label_231fbc;
        case 0x231fc0u: goto label_231fc0;
        case 0x231fc4u: goto label_231fc4;
        case 0x231fc8u: goto label_231fc8;
        case 0x231fccu: goto label_231fcc;
        case 0x231fd0u: goto label_231fd0;
        case 0x231fd4u: goto label_231fd4;
        case 0x231fd8u: goto label_231fd8;
        case 0x231fdcu: goto label_231fdc;
        case 0x231fe0u: goto label_231fe0;
        case 0x231fe4u: goto label_231fe4;
        case 0x231fe8u: goto label_231fe8;
        case 0x231fecu: goto label_231fec;
        case 0x231ff0u: goto label_231ff0;
        case 0x231ff4u: goto label_231ff4;
        case 0x231ff8u: goto label_231ff8;
        case 0x231ffcu: goto label_231ffc;
        default: break;
    }

    ctx->pc = 0x231f20u;

label_231f20:
    // 0x231f20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x231f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_231f24:
    // 0x231f24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x231f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_231f28:
    // 0x231f28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x231f28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_231f2c:
    // 0x231f2c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x231f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_231f30:
    // 0x231f30: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x231f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_231f34:
    // 0x231f34: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x231f34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_231f38:
    // 0x231f38: 0xc08c200  jal         func_230800
label_231f3c:
    if (ctx->pc == 0x231F3Cu) {
        ctx->pc = 0x231F40u;
        goto label_231f40;
    }
    ctx->pc = 0x231F38u;
    SET_GPR_U32(ctx, 31, 0x231F40u);
    ctx->pc = 0x230800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230800u, 0x231F38u, 0x231F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231F40u;
label_231f40:
    // 0x231f40: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_231f44:
    if (ctx->pc == 0x231F44u) {
        ctx->pc = 0x231F48u;
        goto label_231f48;
    }
    ctx->pc = 0x231F40u;
    {
        const bool branch_taken_0x231f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x231f40) {
            ctx->pc = 0x231F54u;
            goto label_231f54;
        }
    }
    ctx->pc = 0x231F48u;
label_231f48:
    // 0x231f48: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x231f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_231f4c:
    // 0x231f4c: 0x10000026  b           . + 4 + (0x26 << 2)
label_231f50:
    if (ctx->pc == 0x231F50u) {
        ctx->pc = 0x231F54u;
        goto label_231f54;
    }
    ctx->pc = 0x231F4Cu;
    {
        const bool branch_taken_0x231f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231f4c) {
            ctx->pc = 0x231FE8u;
            goto label_231fe8;
        }
    }
    ctx->pc = 0x231F54u;
label_231f54:
    // 0x231f54: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x231f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_231f58:
    // 0x231f58: 0x3043f000  andi        $v1, $v0, 0xF000
    ctx->pc = 0x231f58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
label_231f5c:
    // 0x231f5c: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x231f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_231f60:
    // 0x231f60: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
label_231f64:
    if (ctx->pc == 0x231F64u) {
        ctx->pc = 0x231F68u;
        goto label_231f68;
    }
    ctx->pc = 0x231F60u;
    {
        const bool branch_taken_0x231f60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x231f60) {
            ctx->pc = 0x231FB0u;
            goto label_231fb0;
        }
    }
    ctx->pc = 0x231F68u;
label_231f68:
    // 0x231f68: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x231f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_231f6c:
    // 0x231f6c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_231f70:
    if (ctx->pc == 0x231F70u) {
        ctx->pc = 0x231F74u;
        goto label_231f74;
    }
    ctx->pc = 0x231F6Cu;
    {
        const bool branch_taken_0x231f6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x231f6c) {
            ctx->pc = 0x231F7Cu;
            goto label_231f7c;
        }
    }
    ctx->pc = 0x231F74u;
label_231f74:
    // 0x231f74: 0x1000001b  b           . + 4 + (0x1B << 2)
label_231f78:
    if (ctx->pc == 0x231F78u) {
        ctx->pc = 0x231F7Cu;
        goto label_231f7c;
    }
    ctx->pc = 0x231F74u;
    {
        const bool branch_taken_0x231f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231f74) {
            ctx->pc = 0x231FE4u;
            goto label_231fe4;
        }
    }
    ctx->pc = 0x231F7Cu;
label_231f7c:
    // 0x231f7c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x231f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_231f80:
    // 0x231f80: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x231f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_231f84:
    // 0x231f84: 0x2445f000  addiu       $a1, $v0, -0x1000
    ctx->pc = 0x231f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
label_231f88:
    // 0x231f88: 0x24640028  addiu       $a0, $v1, 0x28
    ctx->pc = 0x231f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_231f8c:
    // 0x231f8c: 0xc08c248  jal         func_230920
label_231f90:
    if (ctx->pc == 0x231F90u) {
        ctx->pc = 0x231F94u;
        goto label_231f94;
    }
    ctx->pc = 0x231F8Cu;
    SET_GPR_U32(ctx, 31, 0x231F94u);
    ctx->pc = 0x230920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230920u, 0x231F8Cu, 0x231F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231F94u;
label_231f94:
    // 0x231f94: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x231f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_231f98:
    // 0x231f98: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x231f98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_231f9c:
    // 0x231f9c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x231f9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_231fa0:
    // 0x231fa0: 0x320f809  jalr        $t9
label_231fa4:
    if (ctx->pc == 0x231FA4u) {
        ctx->pc = 0x231FA8u;
        goto label_231fa8;
    }
    ctx->pc = 0x231FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x231FA8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231FA0u, 0x231FA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x231FA8u;
label_231fa8:
    // 0x231fa8: 0x1000000f  b           . + 4 + (0xF << 2)
label_231fac:
    if (ctx->pc == 0x231FACu) {
        ctx->pc = 0x231FB0u;
        goto label_231fb0;
    }
    ctx->pc = 0x231FA8u;
    {
        const bool branch_taken_0x231fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231fa8) {
            ctx->pc = 0x231FE8u;
            goto label_231fe8;
        }
    }
    ctx->pc = 0x231FB0u;
label_231fb0:
    // 0x231fb0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x231fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_231fb4:
    // 0x231fb4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x231fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_231fb8:
    // 0x231fb8: 0x2445e000  addiu       $a1, $v0, -0x2000
    ctx->pc = 0x231fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959104));
label_231fbc:
    // 0x231fbc: 0x24640034  addiu       $a0, $v1, 0x34
    ctx->pc = 0x231fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
label_231fc0:
    // 0x231fc0: 0xc08c1f0  jal         func_2307C0
label_231fc4:
    if (ctx->pc == 0x231FC4u) {
        ctx->pc = 0x231FC8u;
        goto label_231fc8;
    }
    ctx->pc = 0x231FC0u;
    SET_GPR_U32(ctx, 31, 0x231FC8u);
    ctx->pc = 0x2307C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2307C0u, 0x231FC0u, 0x231FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231FC8u;
label_231fc8:
    // 0x231fc8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x231fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_231fcc:
    // 0x231fcc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x231fccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_231fd0:
    // 0x231fd0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x231fd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_231fd4:
    // 0x231fd4: 0x320f809  jalr        $t9
label_231fd8:
    if (ctx->pc == 0x231FD8u) {
        ctx->pc = 0x231FDCu;
        goto label_231fdc;
    }
    ctx->pc = 0x231FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x231FDCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231FD4u, 0x231FDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x231FDCu;
label_231fdc:
    // 0x231fdc: 0x10000002  b           . + 4 + (0x2 << 2)
label_231fe0:
    if (ctx->pc == 0x231FE0u) {
        ctx->pc = 0x231FE4u;
        goto label_231fe4;
    }
    ctx->pc = 0x231FDCu;
    {
        const bool branch_taken_0x231fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231fdc) {
            ctx->pc = 0x231FE8u;
            goto label_231fe8;
        }
    }
    ctx->pc = 0x231FE4u;
label_231fe4:
    // 0x231fe4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x231fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_231fe8:
    // 0x231fe8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x231fe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_231fec:
    // 0x231fec: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x231fecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_231ff0:
    // 0x231ff0: 0x3e00008  jr          $ra
label_231ff4:
    if (ctx->pc == 0x231FF4u) {
        ctx->pc = 0x231FF8u;
        goto label_231ff8;
    }
    ctx->pc = 0x231FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231FF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231FF8u;
label_231ff8:
    // 0x231ff8: 0x0  nop
    ctx->pc = 0x231ff8u;
    // NOP
label_231ffc:
    // 0x231ffc: 0x0  nop
    ctx->pc = 0x231ffcu;
    // NOP
    ctx->pc = 0x232000u;
}

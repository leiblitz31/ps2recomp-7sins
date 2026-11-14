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

// Function: sub_00141EE0
// Address: 0x141ee0 - 0x141f80
void sub_00141EE0_0x141ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141EE0_0x141ee0");
#endif

    switch (ctx->pc) {
        case 0x141ee0u: goto label_141ee0;
        case 0x141ee4u: goto label_141ee4;
        case 0x141ee8u: goto label_141ee8;
        case 0x141eecu: goto label_141eec;
        case 0x141ef0u: goto label_141ef0;
        case 0x141ef4u: goto label_141ef4;
        case 0x141ef8u: goto label_141ef8;
        case 0x141efcu: goto label_141efc;
        case 0x141f00u: goto label_141f00;
        case 0x141f04u: goto label_141f04;
        case 0x141f08u: goto label_141f08;
        case 0x141f0cu: goto label_141f0c;
        case 0x141f10u: goto label_141f10;
        case 0x141f14u: goto label_141f14;
        case 0x141f18u: goto label_141f18;
        case 0x141f1cu: goto label_141f1c;
        case 0x141f20u: goto label_141f20;
        case 0x141f24u: goto label_141f24;
        case 0x141f28u: goto label_141f28;
        case 0x141f2cu: goto label_141f2c;
        case 0x141f30u: goto label_141f30;
        case 0x141f34u: goto label_141f34;
        case 0x141f38u: goto label_141f38;
        case 0x141f3cu: goto label_141f3c;
        case 0x141f40u: goto label_141f40;
        case 0x141f44u: goto label_141f44;
        case 0x141f48u: goto label_141f48;
        case 0x141f4cu: goto label_141f4c;
        case 0x141f50u: goto label_141f50;
        case 0x141f54u: goto label_141f54;
        case 0x141f58u: goto label_141f58;
        case 0x141f5cu: goto label_141f5c;
        case 0x141f60u: goto label_141f60;
        case 0x141f64u: goto label_141f64;
        case 0x141f68u: goto label_141f68;
        case 0x141f6cu: goto label_141f6c;
        case 0x141f70u: goto label_141f70;
        case 0x141f74u: goto label_141f74;
        case 0x141f78u: goto label_141f78;
        case 0x141f7cu: goto label_141f7c;
        default: break;
    }

    ctx->pc = 0x141ee0u;

label_141ee0:
    // 0x141ee0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x141ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_141ee4:
    // 0x141ee4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x141ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_141ee8:
    // 0x141ee8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x141ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_141eec:
    // 0x141eec: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x141eecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_141ef0:
    // 0x141ef0: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x141ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
label_141ef4:
    // 0x141ef4: 0x8f82ba84  lw          $v0, -0x457C($gp)
    ctx->pc = 0x141ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949508)));
label_141ef8:
    // 0x141ef8: 0x10020019  beq         $zero, $v0, . + 4 + (0x19 << 2)
label_141efc:
    if (ctx->pc == 0x141EFCu) {
        ctx->pc = 0x141F00u;
        goto label_141f00;
    }
    ctx->pc = 0x141EF8u;
    {
        const bool branch_taken_0x141ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x141ef8) {
            ctx->pc = 0x141F60u;
            goto label_141f60;
        }
    }
    ctx->pc = 0x141F00u;
label_141f00:
    // 0x141f00: 0x8f82ba84  lw          $v0, -0x457C($gp)
    ctx->pc = 0x141f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949508)));
label_141f04:
    // 0x141f04: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x141f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_141f08:
    // 0x141f08: 0x10020015  beq         $zero, $v0, . + 4 + (0x15 << 2)
label_141f0c:
    if (ctx->pc == 0x141F0Cu) {
        ctx->pc = 0x141F10u;
        goto label_141f10;
    }
    ctx->pc = 0x141F08u;
    {
        const bool branch_taken_0x141f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x141f08) {
            ctx->pc = 0x141F60u;
            goto label_141f60;
        }
    }
    ctx->pc = 0x141F10u;
label_141f10:
    // 0x141f10: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x141f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_141f14:
    // 0x141f14: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x141f14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_141f18:
    // 0x141f18: 0xc08de14  jal         func_237850
label_141f1c:
    if (ctx->pc == 0x141F1Cu) {
        ctx->pc = 0x141F20u;
        goto label_141f20;
    }
    ctx->pc = 0x141F18u;
    SET_GPR_U32(ctx, 31, 0x141F20u);
    ctx->pc = 0x237850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237850u, 0x141F18u, 0x141F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141F20u;
label_141f20:
    // 0x141f20: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x141f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_141f24:
    // 0x141f24: 0x8f82ba84  lw          $v0, -0x457C($gp)
    ctx->pc = 0x141f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949508)));
label_141f28:
    // 0x141f28: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x141f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_141f2c:
    // 0x141f2c: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x141f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_141f30:
    // 0x141f30: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x141f30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_141f34:
    // 0x141f34: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x141f34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_141f38:
    // 0x141f38: 0x320f809  jalr        $t9
label_141f3c:
    if (ctx->pc == 0x141F3Cu) {
        ctx->pc = 0x141F40u;
        goto label_141f40;
    }
    ctx->pc = 0x141F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x141F40u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141F38u, 0x141F40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x141F40u;
label_141f40:
    // 0x141f40: 0x8f84ba7c  lw          $a0, -0x4584($gp)
    ctx->pc = 0x141f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949500)));
label_141f44:
    // 0x141f44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x141f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_141f48:
    // 0x141f48: 0xc04fbd0  jal         func_13EF40
label_141f4c:
    if (ctx->pc == 0x141F4Cu) {
        ctx->pc = 0x141F50u;
        goto label_141f50;
    }
    ctx->pc = 0x141F48u;
    SET_GPR_U32(ctx, 31, 0x141F50u);
    ctx->pc = 0x13EF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EF40u, 0x141F48u, 0x141F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141F50u;
label_141f50:
    // 0x141f50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x141f50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_141f54:
    // 0x141f54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x141f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_141f58:
    // 0x141f58: 0xc05043c  jal         func_1410F0
label_141f5c:
    if (ctx->pc == 0x141F5Cu) {
        ctx->pc = 0x141F60u;
        goto label_141f60;
    }
    ctx->pc = 0x141F58u;
    SET_GPR_U32(ctx, 31, 0x141F60u);
    ctx->pc = 0x1410F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1410F0u, 0x141F58u, 0x141F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141F60u;
label_141f60:
    // 0x141f60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x141f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_141f64:
    // 0x141f64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x141f64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_141f68:
    // 0x141f68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x141f68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_141f6c:
    // 0x141f6c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x141f6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_141f70:
    // 0x141f70: 0x3e00008  jr          $ra
label_141f74:
    if (ctx->pc == 0x141F74u) {
        ctx->pc = 0x141F78u;
        goto label_141f78;
    }
    ctx->pc = 0x141F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141F78u;
label_141f78:
    // 0x141f78: 0x0  nop
    ctx->pc = 0x141f78u;
    // NOP
label_141f7c:
    // 0x141f7c: 0x0  nop
    ctx->pc = 0x141f7cu;
    // NOP
    ctx->pc = 0x141f80u;
}

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

// Function: sub_00141F80
// Address: 0x141f80 - 0x142020
void sub_00141F80_0x141f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141F80_0x141f80");
#endif

    switch (ctx->pc) {
        case 0x141f80u: goto label_141f80;
        case 0x141f84u: goto label_141f84;
        case 0x141f88u: goto label_141f88;
        case 0x141f8cu: goto label_141f8c;
        case 0x141f90u: goto label_141f90;
        case 0x141f94u: goto label_141f94;
        case 0x141f98u: goto label_141f98;
        case 0x141f9cu: goto label_141f9c;
        case 0x141fa0u: goto label_141fa0;
        case 0x141fa4u: goto label_141fa4;
        case 0x141fa8u: goto label_141fa8;
        case 0x141facu: goto label_141fac;
        case 0x141fb0u: goto label_141fb0;
        case 0x141fb4u: goto label_141fb4;
        case 0x141fb8u: goto label_141fb8;
        case 0x141fbcu: goto label_141fbc;
        case 0x141fc0u: goto label_141fc0;
        case 0x141fc4u: goto label_141fc4;
        case 0x141fc8u: goto label_141fc8;
        case 0x141fccu: goto label_141fcc;
        case 0x141fd0u: goto label_141fd0;
        case 0x141fd4u: goto label_141fd4;
        case 0x141fd8u: goto label_141fd8;
        case 0x141fdcu: goto label_141fdc;
        case 0x141fe0u: goto label_141fe0;
        case 0x141fe4u: goto label_141fe4;
        case 0x141fe8u: goto label_141fe8;
        case 0x141fecu: goto label_141fec;
        case 0x141ff0u: goto label_141ff0;
        case 0x141ff4u: goto label_141ff4;
        case 0x141ff8u: goto label_141ff8;
        case 0x141ffcu: goto label_141ffc;
        case 0x142000u: goto label_142000;
        case 0x142004u: goto label_142004;
        case 0x142008u: goto label_142008;
        case 0x14200cu: goto label_14200c;
        case 0x142010u: goto label_142010;
        case 0x142014u: goto label_142014;
        case 0x142018u: goto label_142018;
        case 0x14201cu: goto label_14201c;
        default: break;
    }

    ctx->pc = 0x141f80u;

label_141f80:
    // 0x141f80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x141f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_141f84:
    // 0x141f84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x141f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_141f88:
    // 0x141f88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x141f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_141f8c:
    // 0x141f8c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x141f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_141f90:
    // 0x141f90: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x141f90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
label_141f94:
    // 0x141f94: 0x8f82ba84  lw          $v0, -0x457C($gp)
    ctx->pc = 0x141f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949508)));
label_141f98:
    // 0x141f98: 0x10020019  beq         $zero, $v0, . + 4 + (0x19 << 2)
label_141f9c:
    if (ctx->pc == 0x141F9Cu) {
        ctx->pc = 0x141FA0u;
        goto label_141fa0;
    }
    ctx->pc = 0x141F98u;
    {
        const bool branch_taken_0x141f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x141f98) {
            ctx->pc = 0x142000u;
            goto label_142000;
        }
    }
    ctx->pc = 0x141FA0u;
label_141fa0:
    // 0x141fa0: 0x8f82ba84  lw          $v0, -0x457C($gp)
    ctx->pc = 0x141fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949508)));
label_141fa4:
    // 0x141fa4: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x141fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_141fa8:
    // 0x141fa8: 0x10020015  beq         $zero, $v0, . + 4 + (0x15 << 2)
label_141fac:
    if (ctx->pc == 0x141FACu) {
        ctx->pc = 0x141FB0u;
        goto label_141fb0;
    }
    ctx->pc = 0x141FA8u;
    {
        const bool branch_taken_0x141fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x141fa8) {
            ctx->pc = 0x142000u;
            goto label_142000;
        }
    }
    ctx->pc = 0x141FB0u;
label_141fb0:
    // 0x141fb0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x141fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_141fb4:
    // 0x141fb4: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x141fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_141fb8:
    // 0x141fb8: 0xc08de14  jal         func_237850
label_141fbc:
    if (ctx->pc == 0x141FBCu) {
        ctx->pc = 0x141FC0u;
        goto label_141fc0;
    }
    ctx->pc = 0x141FB8u;
    SET_GPR_U32(ctx, 31, 0x141FC0u);
    ctx->pc = 0x237850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237850u, 0x141FB8u, 0x141FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141FC0u;
label_141fc0:
    // 0x141fc0: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x141fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_141fc4:
    // 0x141fc4: 0x8f82ba84  lw          $v0, -0x457C($gp)
    ctx->pc = 0x141fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949508)));
label_141fc8:
    // 0x141fc8: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x141fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_141fcc:
    // 0x141fcc: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x141fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_141fd0:
    // 0x141fd0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x141fd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_141fd4:
    // 0x141fd4: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x141fd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_141fd8:
    // 0x141fd8: 0x320f809  jalr        $t9
label_141fdc:
    if (ctx->pc == 0x141FDCu) {
        ctx->pc = 0x141FE0u;
        goto label_141fe0;
    }
    ctx->pc = 0x141FD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x141FE0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141FD8u, 0x141FE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x141FE0u;
label_141fe0:
    // 0x141fe0: 0x8f84ba7c  lw          $a0, -0x4584($gp)
    ctx->pc = 0x141fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949500)));
label_141fe4:
    // 0x141fe4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x141fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_141fe8:
    // 0x141fe8: 0xc04fbd0  jal         func_13EF40
label_141fec:
    if (ctx->pc == 0x141FECu) {
        ctx->pc = 0x141FF0u;
        goto label_141ff0;
    }
    ctx->pc = 0x141FE8u;
    SET_GPR_U32(ctx, 31, 0x141FF0u);
    ctx->pc = 0x13EF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EF40u, 0x141FE8u, 0x141FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141FF0u;
label_141ff0:
    // 0x141ff0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x141ff0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_141ff4:
    // 0x141ff4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x141ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_141ff8:
    // 0x141ff8: 0xc05043c  jal         func_1410F0
label_141ffc:
    if (ctx->pc == 0x141FFCu) {
        ctx->pc = 0x142000u;
        goto label_142000;
    }
    ctx->pc = 0x141FF8u;
    SET_GPR_U32(ctx, 31, 0x142000u);
    ctx->pc = 0x1410F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1410F0u, 0x141FF8u, 0x142000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142000u;
label_142000:
    // 0x142000: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x142000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_142004:
    // 0x142004: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x142004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_142008:
    // 0x142008: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x142008u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_14200c:
    // 0x14200c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x14200cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_142010:
    // 0x142010: 0x3e00008  jr          $ra
label_142014:
    if (ctx->pc == 0x142014u) {
        ctx->pc = 0x142018u;
        goto label_142018;
    }
    ctx->pc = 0x142010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142018u;
label_142018:
    // 0x142018: 0x0  nop
    ctx->pc = 0x142018u;
    // NOP
label_14201c:
    // 0x14201c: 0x0  nop
    ctx->pc = 0x14201cu;
    // NOP
    ctx->pc = 0x142020u;
}

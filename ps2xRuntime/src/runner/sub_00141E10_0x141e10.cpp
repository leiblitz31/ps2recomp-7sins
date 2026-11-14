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

// Function: sub_00141E10
// Address: 0x141e10 - 0x141ee0
void sub_00141E10_0x141e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141E10_0x141e10");
#endif

    switch (ctx->pc) {
        case 0x141e10u: goto label_141e10;
        case 0x141e14u: goto label_141e14;
        case 0x141e18u: goto label_141e18;
        case 0x141e1cu: goto label_141e1c;
        case 0x141e20u: goto label_141e20;
        case 0x141e24u: goto label_141e24;
        case 0x141e28u: goto label_141e28;
        case 0x141e2cu: goto label_141e2c;
        case 0x141e30u: goto label_141e30;
        case 0x141e34u: goto label_141e34;
        case 0x141e38u: goto label_141e38;
        case 0x141e3cu: goto label_141e3c;
        case 0x141e40u: goto label_141e40;
        case 0x141e44u: goto label_141e44;
        case 0x141e48u: goto label_141e48;
        case 0x141e4cu: goto label_141e4c;
        case 0x141e50u: goto label_141e50;
        case 0x141e54u: goto label_141e54;
        case 0x141e58u: goto label_141e58;
        case 0x141e5cu: goto label_141e5c;
        case 0x141e60u: goto label_141e60;
        case 0x141e64u: goto label_141e64;
        case 0x141e68u: goto label_141e68;
        case 0x141e6cu: goto label_141e6c;
        case 0x141e70u: goto label_141e70;
        case 0x141e74u: goto label_141e74;
        case 0x141e78u: goto label_141e78;
        case 0x141e7cu: goto label_141e7c;
        case 0x141e80u: goto label_141e80;
        case 0x141e84u: goto label_141e84;
        case 0x141e88u: goto label_141e88;
        case 0x141e8cu: goto label_141e8c;
        case 0x141e90u: goto label_141e90;
        case 0x141e94u: goto label_141e94;
        case 0x141e98u: goto label_141e98;
        case 0x141e9cu: goto label_141e9c;
        case 0x141ea0u: goto label_141ea0;
        case 0x141ea4u: goto label_141ea4;
        case 0x141ea8u: goto label_141ea8;
        case 0x141eacu: goto label_141eac;
        case 0x141eb0u: goto label_141eb0;
        case 0x141eb4u: goto label_141eb4;
        case 0x141eb8u: goto label_141eb8;
        case 0x141ebcu: goto label_141ebc;
        case 0x141ec0u: goto label_141ec0;
        case 0x141ec4u: goto label_141ec4;
        case 0x141ec8u: goto label_141ec8;
        case 0x141eccu: goto label_141ecc;
        case 0x141ed0u: goto label_141ed0;
        case 0x141ed4u: goto label_141ed4;
        case 0x141ed8u: goto label_141ed8;
        case 0x141edcu: goto label_141edc;
        default: break;
    }

    ctx->pc = 0x141e10u;

label_141e10:
    // 0x141e10: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x141e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_141e14:
    // 0x141e14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x141e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_141e18:
    // 0x141e18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x141e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_141e1c:
    // 0x141e1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x141e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_141e20:
    // 0x141e20: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x141e20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_141e24:
    // 0x141e24: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x141e24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
label_141e28:
    // 0x141e28: 0x8f82ba84  lw          $v0, -0x457C($gp)
    ctx->pc = 0x141e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949508)));
label_141e2c:
    // 0x141e2c: 0x10020022  beq         $zero, $v0, . + 4 + (0x22 << 2)
label_141e30:
    if (ctx->pc == 0x141E30u) {
        ctx->pc = 0x141E34u;
        goto label_141e34;
    }
    ctx->pc = 0x141E2Cu;
    {
        const bool branch_taken_0x141e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x141e2c) {
            ctx->pc = 0x141EB8u;
            goto label_141eb8;
        }
    }
    ctx->pc = 0x141E34u;
label_141e34:
    // 0x141e34: 0x8f82ba84  lw          $v0, -0x457C($gp)
    ctx->pc = 0x141e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949508)));
label_141e38:
    // 0x141e38: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x141e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_141e3c:
    // 0x141e3c: 0x1002001e  beq         $zero, $v0, . + 4 + (0x1E << 2)
label_141e40:
    if (ctx->pc == 0x141E40u) {
        ctx->pc = 0x141E44u;
        goto label_141e44;
    }
    ctx->pc = 0x141E3Cu;
    {
        const bool branch_taken_0x141e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x141e3c) {
            ctx->pc = 0x141EB8u;
            goto label_141eb8;
        }
    }
    ctx->pc = 0x141E44u;
label_141e44:
    // 0x141e44: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x141e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_141e48:
    // 0x141e48: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x141e48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_141e4c:
    // 0x141e4c: 0xc08de14  jal         func_237850
label_141e50:
    if (ctx->pc == 0x141E50u) {
        ctx->pc = 0x141E54u;
        goto label_141e54;
    }
    ctx->pc = 0x141E4Cu;
    SET_GPR_U32(ctx, 31, 0x141E54u);
    ctx->pc = 0x237850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237850u, 0x141E4Cu, 0x141E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141E54u;
label_141e54:
    // 0x141e54: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x141e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_141e58:
    // 0x141e58: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x141e58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_141e5c:
    // 0x141e5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x141e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_141e60:
    // 0x141e60: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x141e60u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_141e64:
    // 0x141e64: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_141e68:
    if (ctx->pc == 0x141E68u) {
        ctx->pc = 0x141E6Cu;
        goto label_141e6c;
    }
    ctx->pc = 0x141E64u;
    {
        const bool branch_taken_0x141e64 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x141e64) {
            ctx->pc = 0x141E7Cu;
            goto label_141e7c;
        }
    }
    ctx->pc = 0x141E6Cu;
label_141e6c:
    // 0x141e6c: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x141e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_141e70:
    // 0x141e70: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x141e70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_141e74:
    // 0x141e74: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_141e78:
    if (ctx->pc == 0x141E78u) {
        ctx->pc = 0x141E7Cu;
        goto label_141e7c;
    }
    ctx->pc = 0x141E74u;
    {
        const bool branch_taken_0x141e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141e74) {
            ctx->pc = 0x141E98u;
            goto label_141e98;
        }
    }
    ctx->pc = 0x141E7Cu;
label_141e7c:
    // 0x141e7c: 0x8f82ba84  lw          $v0, -0x457C($gp)
    ctx->pc = 0x141e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949508)));
label_141e80:
    // 0x141e80: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x141e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_141e84:
    // 0x141e84: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x141e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_141e88:
    // 0x141e88: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x141e88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_141e8c:
    // 0x141e8c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x141e8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_141e90:
    // 0x141e90: 0x320f809  jalr        $t9
label_141e94:
    if (ctx->pc == 0x141E94u) {
        ctx->pc = 0x141E98u;
        goto label_141e98;
    }
    ctx->pc = 0x141E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x141E98u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141E90u, 0x141E98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x141E98u;
label_141e98:
    // 0x141e98: 0x8f84ba7c  lw          $a0, -0x4584($gp)
    ctx->pc = 0x141e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949500)));
label_141e9c:
    // 0x141e9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x141e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_141ea0:
    // 0x141ea0: 0xc04fbd0  jal         func_13EF40
label_141ea4:
    if (ctx->pc == 0x141EA4u) {
        ctx->pc = 0x141EA8u;
        goto label_141ea8;
    }
    ctx->pc = 0x141EA0u;
    SET_GPR_U32(ctx, 31, 0x141EA8u);
    ctx->pc = 0x13EF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EF40u, 0x141EA0u, 0x141EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141EA8u;
label_141ea8:
    // 0x141ea8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x141ea8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_141eac:
    // 0x141eac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x141eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_141eb0:
    // 0x141eb0: 0xc05043c  jal         func_1410F0
label_141eb4:
    if (ctx->pc == 0x141EB4u) {
        ctx->pc = 0x141EB8u;
        goto label_141eb8;
    }
    ctx->pc = 0x141EB0u;
    SET_GPR_U32(ctx, 31, 0x141EB8u);
    ctx->pc = 0x1410F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1410F0u, 0x141EB0u, 0x141EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141EB8u;
label_141eb8:
    // 0x141eb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x141eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_141ebc:
    // 0x141ebc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x141ebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_141ec0:
    // 0x141ec0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x141ec0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_141ec4:
    // 0x141ec4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x141ec4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_141ec8:
    // 0x141ec8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x141ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_141ecc:
    // 0x141ecc: 0x3e00008  jr          $ra
label_141ed0:
    if (ctx->pc == 0x141ED0u) {
        ctx->pc = 0x141ED4u;
        goto label_141ed4;
    }
    ctx->pc = 0x141ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141ECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141ED4u;
label_141ed4:
    // 0x141ed4: 0x0  nop
    ctx->pc = 0x141ed4u;
    // NOP
label_141ed8:
    // 0x141ed8: 0x0  nop
    ctx->pc = 0x141ed8u;
    // NOP
label_141edc:
    // 0x141edc: 0x0  nop
    ctx->pc = 0x141edcu;
    // NOP
    ctx->pc = 0x141ee0u;
}

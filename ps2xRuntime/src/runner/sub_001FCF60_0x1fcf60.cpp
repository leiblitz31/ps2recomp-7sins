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

// Function: sub_001FCF60
// Address: 0x1fcf60 - 0x1fd0a0
void sub_001FCF60_0x1fcf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FCF60_0x1fcf60");
#endif

    switch (ctx->pc) {
        case 0x1fcf94u: goto label_1fcf94;
        case 0x1fcfacu: goto label_1fcfac;
        case 0x1fcfbcu: goto label_1fcfbc;
        case 0x1fcfd0u: goto label_1fcfd0;
        case 0x1fd004u: goto label_1fd004;
        case 0x1fd018u: goto label_1fd018;
        case 0x1fd030u: goto label_1fd030;
        case 0x1fd050u: goto label_1fd050;
        default: break;
    }

    ctx->pc = 0x1fcf60u;

    // 0x1fcf60: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1fcf60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1fcf64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1fcf64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1fcf68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fcf68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fcf6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fcf6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fcf70: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x1fcf70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x1fcf74: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x1fcf74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x1fcf78: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x1fcf78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
    // 0x1fcf7c: 0xe7ac0070  swc1        $f12, 0x70($sp)
    ctx->pc = 0x1fcf7cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1fcf80: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1fcf80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fcf84: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x1fcf84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1fcf88: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1fcf88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fcf8c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1FCF8Cu;
    SET_GPR_U32(ctx, 31, 0x1FCF94u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1FCF8Cu, 0x1FCF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCF94u;
label_1fcf94:
    // 0x1fcf94: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1fcf94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fcf98: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1fcf98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fcf9c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1fcf9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fcfa0: 0x8fa60060  lw          $a2, 0x60($sp)
    ctx->pc = 0x1fcfa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1fcfa4: 0xc07eeec  jal         func_1FBBB0
    ctx->pc = 0x1FCFA4u;
    SET_GPR_U32(ctx, 31, 0x1FCFACu);
    ctx->pc = 0x1FBBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBBB0u, 0x1FCFA4u, 0x1FCFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCFACu;
label_1fcfac:
    // 0x1fcfac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1fcfacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcfb0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1fcfb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fcfb4: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1FCFB4u;
    SET_GPR_U32(ctx, 31, 0x1FCFBCu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1FCFB4u, 0x1FCFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCFBCu;
label_1fcfbc:
    // 0x1fcfbc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fcfbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcfc0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fcfc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcfc4: 0x27a60038  addiu       $a2, $sp, 0x38
    ctx->pc = 0x1fcfc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1fcfc8: 0xc08c704  jal         func_231C10
    ctx->pc = 0x1FCFC8u;
    SET_GPR_U32(ctx, 31, 0x1FCFD0u);
    ctx->pc = 0x231C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C10u, 0x1FCFC8u, 0x1FCFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCFD0u;
label_1fcfd0:
    // 0x1fcfd0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1fcfd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fcfd4: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1fcfd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fcfd8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1fcfd8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fcfdc: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x1FCFDCu;
    {
        const bool branch_taken_0x1fcfdc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fcfdc) {
            ctx->pc = 0x1FD038u;
            goto label_1fd038;
        }
    }
    ctx->pc = 0x1FCFE4u;
    // 0x1fcfe4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1fcfe4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fcfe8: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x1fcfe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fcfec: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1fcfecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fcff0: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x1FCFF0u;
    {
        const bool branch_taken_0x1fcff0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fcff0) {
            ctx->pc = 0x1FD038u;
            goto label_1fd038;
        }
    }
    ctx->pc = 0x1FCFF8u;
    // 0x1fcff8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1fcff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fcffc: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1FCFFCu;
    SET_GPR_U32(ctx, 31, 0x1FD004u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1FCFFCu, 0x1FD004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD004u;
label_1fd004:
    // 0x1fd004: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fd004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd008: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fd008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd00c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1fd00cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fd010: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1FD010u;
    SET_GPR_U32(ctx, 31, 0x1FD018u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1FD010u, 0x1FD018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD018u;
label_1fd018:
    // 0x1fd018: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1fd018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fd01c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fd01cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd020: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1fd020u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd024: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x1fd024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1fd028: 0xc07f428  jal         func_1FD0A0
    ctx->pc = 0x1FD028u;
    SET_GPR_U32(ctx, 31, 0x1FD030u);
    ctx->pc = 0x1FD0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD0A0u, 0x1FD028u, 0x1FD030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD030u;
label_1fd030:
    // 0x1fd030: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1FD030u;
    {
        const bool branch_taken_0x1fd030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd030) {
            ctx->pc = 0x1FD050u;
            goto label_1fd050;
        }
    }
    ctx->pc = 0x1FD038u;
label_1fd038:
    // 0x1fd038: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1fd038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fd03c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fd03cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd040: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1fd040u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd044: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x1fd044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1fd048: 0xc07f428  jal         func_1FD0A0
    ctx->pc = 0x1FD048u;
    SET_GPR_U32(ctx, 31, 0x1FD050u);
    ctx->pc = 0x1FD0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD0A0u, 0x1FD048u, 0x1FD050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD050u;
label_1fd050:
    // 0x1fd050: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1fd050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fd054: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1fd054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fd058: 0xac6400f0  sw          $a0, 0xF0($v1)
    ctx->pc = 0x1fd058u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 240), GPR_U32(ctx, 4));
    // 0x1fd05c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1fd05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fd060: 0xac6400ec  sw          $a0, 0xEC($v1)
    ctx->pc = 0x1fd060u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 236), GPR_U32(ctx, 4));
    // 0x1fd064: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1fd064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fd068: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1fd068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fd06c: 0xac6400f4  sw          $a0, 0xF4($v1)
    ctx->pc = 0x1fd06cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 244), GPR_U32(ctx, 4));
    // 0x1fd070: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1fd070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1fd074: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1fd074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fd078: 0xac6400f8  sw          $a0, 0xF8($v1)
    ctx->pc = 0x1fd078u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 248), GPR_U32(ctx, 4));
    // 0x1fd07c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fd07cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fd080: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fd080u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fd084: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fd084u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd088: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x1fd088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1fd08c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD08Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD08Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD094u;
    // 0x1fd094: 0x0  nop
    ctx->pc = 0x1fd094u;
    // NOP
    // 0x1fd098: 0x0  nop
    ctx->pc = 0x1fd098u;
    // NOP
    // 0x1fd09c: 0x0  nop
    ctx->pc = 0x1fd09cu;
    // NOP
    ctx->pc = 0x1fd0a0u;
}

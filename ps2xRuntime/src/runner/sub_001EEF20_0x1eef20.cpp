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

// Function: sub_001EEF20
// Address: 0x1eef20 - 0x1ef040
void sub_001EEF20_0x1eef20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EEF20_0x1eef20");
#endif

    switch (ctx->pc) {
        case 0x1eef58u: goto label_1eef58;
        case 0x1eefe4u: goto label_1eefe4;
        case 0x1ef004u: goto label_1ef004;
        default: break;
    }

    ctx->pc = 0x1eef20u;

    // 0x1eef20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1eef20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1eef24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1eef24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1eef28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1eef28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1eef2c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1eef2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1eef30: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1eef30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1eef34: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1eef34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1eef38: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EEF38u;
    {
        const bool branch_taken_0x1eef38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eef38) {
            ctx->pc = 0x1EEF4Cu;
            goto label_1eef4c;
        }
    }
    ctx->pc = 0x1EEF40u;
    // 0x1eef40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1eef40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eef44: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1EEF44u;
    {
        const bool branch_taken_0x1eef44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eef44) {
            ctx->pc = 0x1EF020u;
            goto label_1ef020;
        }
    }
    ctx->pc = 0x1EEF4Cu;
label_1eef4c:
    // 0x1eef4c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1eef4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eef50: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1EEF50u;
    {
        const bool branch_taken_0x1eef50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eef50) {
            ctx->pc = 0x1EEFE8u;
            goto label_1eefe8;
        }
    }
    ctx->pc = 0x1EEF58u;
label_1eef58:
    // 0x1eef58: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1eef58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1eef5c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1eef5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1eef60: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1eef60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1eef64: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1eef64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1eef68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eef68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eef6c: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x1eef6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eef70: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1eef70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1eef74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eef74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eef78: 0x0  nop
    ctx->pc = 0x1eef78u;
    // NOP
    // 0x1eef7c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1eef7cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1eef80: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x1EEF80u;
    {
        const bool branch_taken_0x1eef80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1eef80) {
            ctx->pc = 0x1EEFE4u;
            goto label_1eefe4;
        }
    }
    ctx->pc = 0x1EEF88u;
    // 0x1eef88: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1eef88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1eef8c: 0xc44000a8  lwc1        $f0, 0xA8($v0)
    ctx->pc = 0x1eef8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eef90: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1eef90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1eef94: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1eef94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1eef98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eef98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eef9c: 0xe44000f8  swc1        $f0, 0xF8($v0)
    ctx->pc = 0x1eef9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 248), bits); }
    // 0x1eefa0: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1eefa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1eefa4: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1eefa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1eefa8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1eefa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1eefac: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1eefacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1eefb0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1eefb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eefb4: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1eefb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1eefb8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1eefb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1eefbc: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1eefbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eefc0: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1eefc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1eefc4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1eefc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1eefc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eefc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eefcc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1eefccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eefd0: 0x24a5004c  addiu       $a1, $a1, 0x4C
    ctx->pc = 0x1eefd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 76));
    // 0x1eefd4: 0x24c600f4  addiu       $a2, $a2, 0xF4
    ctx->pc = 0x1eefd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 244));
    // 0x1eefd8: 0x244700f8  addiu       $a3, $v0, 0xF8
    ctx->pc = 0x1eefd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 248));
    // 0x1eefdc: 0xc07c0d4  jal         func_1F0350
    ctx->pc = 0x1EEFDCu;
    SET_GPR_U32(ctx, 31, 0x1EEFE4u);
    ctx->pc = 0x1F0350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0350u, 0x1EEFDCu, 0x1EEFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEFE4u;
label_1eefe4:
    // 0x1eefe4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1eefe4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1eefe8:
    // 0x1eefe8: 0x2e020006  sltiu       $v0, $s0, 0x6
    ctx->pc = 0x1eefe8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1eefec: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x1EEFECu;
    {
        const bool branch_taken_0x1eefec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eefec) {
            ctx->pc = 0x1EEF58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eef58;
        }
    }
    ctx->pc = 0x1EEFF4u;
    // 0x1eeff4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1eeff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eeff8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1eeff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1eeffc: 0xc07be2c  jal         func_1EF8B0
    ctx->pc = 0x1EEFFCu;
    SET_GPR_U32(ctx, 31, 0x1EF004u);
    ctx->pc = 0x1EF8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF8B0u, 0x1EEFFCu, 0x1EF004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF004u;
label_1ef004:
    // 0x1ef004: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ef004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ef008: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF008u;
    {
        const bool branch_taken_0x1ef008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef008) {
            ctx->pc = 0x1EF01Cu;
            goto label_1ef01c;
        }
    }
    ctx->pc = 0x1EF010u;
    // 0x1ef010: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ef010u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef014: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EF014u;
    {
        const bool branch_taken_0x1ef014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef014) {
            ctx->pc = 0x1EF020u;
            goto label_1ef020;
        }
    }
    ctx->pc = 0x1EF01Cu;
label_1ef01c:
    // 0x1ef01c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ef01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ef020:
    // 0x1ef020: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ef020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ef024: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ef024u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef028: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1ef028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ef02c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF02Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF02Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF034u;
    // 0x1ef034: 0x0  nop
    ctx->pc = 0x1ef034u;
    // NOP
    // 0x1ef038: 0x0  nop
    ctx->pc = 0x1ef038u;
    // NOP
    // 0x1ef03c: 0x0  nop
    ctx->pc = 0x1ef03cu;
    // NOP
    ctx->pc = 0x1ef040u;
}

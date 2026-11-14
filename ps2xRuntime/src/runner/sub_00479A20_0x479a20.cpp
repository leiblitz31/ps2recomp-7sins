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

// Function: sub_00479A20
// Address: 0x479a20 - 0x479b20
void sub_00479A20_0x479a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00479A20_0x479a20");
#endif

    switch (ctx->pc) {
        case 0x479aacu: goto label_479aac;
        case 0x479ae8u: goto label_479ae8;
        default: break;
    }

    ctx->pc = 0x479a20u;

    // 0x479a20: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x479a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x479a24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x479a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x479a28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x479a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x479a2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x479a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x479a30: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x479a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x479a34: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x479a34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x479a38: 0xa3a60060  sb          $a2, 0x60($sp)
    ctx->pc = 0x479a38u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 6));
    // 0x479a3c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x479a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x479a40: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x479a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x479a44: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x479a44u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x479a48: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x479a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x479a4c: 0x418c3  sra         $v1, $a0, 3
    ctx->pc = 0x479a4cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
    // 0x479a50: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x479A50u;
    {
        const bool branch_taken_0x479a50 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x479a50) {
            ctx->pc = 0x479A60u;
            goto label_479a60;
        }
    }
    ctx->pc = 0x479A58u;
    // 0x479a58: 0x24830007  addiu       $v1, $a0, 0x7
    ctx->pc = 0x479a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x479a5c: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x479a5cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_479a60:
    // 0x479a60: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x479a60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x479a64: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x479A64u;
    {
        const bool branch_taken_0x479a64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x479a64) {
            ctx->pc = 0x479AFCu;
            goto label_479afc;
        }
    }
    ctx->pc = 0x479A6Cu;
    // 0x479a6c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x479a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x479a70: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x479a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x479a74: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x479a74u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x479a78: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x479a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x479a7c: 0x388c3  sra         $s1, $v1, 3
    ctx->pc = 0x479a7cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 3));
    // 0x479a80: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x479A80u;
    {
        const bool branch_taken_0x479a80 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x479a80) {
            ctx->pc = 0x479A90u;
            goto label_479a90;
        }
    }
    ctx->pc = 0x479A88u;
    // 0x479a88: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x479a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x479a8c: 0x288c3  sra         $s1, $v0, 3
    ctx->pc = 0x479a8cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 3));
label_479a90:
    // 0x479a90: 0x2623fffe  addiu       $v1, $s1, -0x2
    ctx->pc = 0x479a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
    // 0x479a94: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x479a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x479a98: 0x38043  sra         $s0, $v1, 1
    ctx->pc = 0x479a98u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 1));
    // 0x479a9c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x479A9Cu;
    {
        const bool branch_taken_0x479a9c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x479a9c) {
            ctx->pc = 0x479AACu;
            goto label_479aac;
        }
    }
    ctx->pc = 0x479AA4u;
    // 0x479aa4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x479aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x479aa8: 0x28043  sra         $s0, $v0, 1
    ctx->pc = 0x479aa8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 1));
label_479aac:
    // 0x479aac: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x479aacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x479ab0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x479ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x479ab4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x479ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x479ab8: 0x27a20038  addiu       $v0, $sp, 0x38
    ctx->pc = 0x479ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x479abc: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x479abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x479ac0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x479ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x479ac4: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x479ac4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x479ac8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x479ac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x479acc: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x479accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x479ad0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x479ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479ad4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x479ad4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479ad8: 0xdfa70038  ld          $a3, 0x38($sp)
    ctx->pc = 0x479ad8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x479adc: 0x83a80060  lb          $t0, 0x60($sp)
    ctx->pc = 0x479adcu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x479ae0: 0xc11e5c4  jal         func_479710
    ctx->pc = 0x479AE0u;
    SET_GPR_U32(ctx, 31, 0x479AE8u);
    ctx->pc = 0x479710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x479710u, 0x479AE0u, 0x479AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x479AE8u;
label_479ae8:
    // 0x479ae8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x479AE8u;
    {
        const bool branch_taken_0x479ae8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x479ae8) {
            ctx->pc = 0x479AFCu;
            goto label_479afc;
        }
    }
    ctx->pc = 0x479AF0u;
    // 0x479af0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x479af0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x479af4: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x479AF4u;
    {
        const bool branch_taken_0x479af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x479af4) {
            ctx->pc = 0x479AACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_479aac;
        }
    }
    ctx->pc = 0x479AFCu;
label_479afc:
    // 0x479afc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x479afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x479b00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x479b00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x479b04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x479b04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x479b08: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x479b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x479b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x479B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x479B0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x479B14u;
    // 0x479b14: 0x0  nop
    ctx->pc = 0x479b14u;
    // NOP
    // 0x479b18: 0x0  nop
    ctx->pc = 0x479b18u;
    // NOP
    // 0x479b1c: 0x0  nop
    ctx->pc = 0x479b1cu;
    // NOP
    ctx->pc = 0x479b20u;
}

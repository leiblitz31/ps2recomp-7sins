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

// Function: sub_002B0690
// Address: 0x2b0690 - 0x2b07a0
void sub_002B0690_0x2b0690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B0690_0x2b0690");
#endif

    switch (ctx->pc) {
        case 0x2b06e4u: goto label_2b06e4;
        default: break;
    }

    ctx->pc = 0x2b0690u;

    // 0x2b0690: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2b0690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2b0694: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b0694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b0698: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b0698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b069c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b069cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b06a0: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x2b06a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x2b06a4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2b06a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b06a8: 0x90420071  lbu         $v0, 0x71($v0)
    ctx->pc = 0x2b06a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 113)));
    // 0x2b06ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b06acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b06b0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B06B0u;
    {
        const bool branch_taken_0x2b06b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b06b0) {
            ctx->pc = 0x2B06C4u;
            goto label_2b06c4;
        }
    }
    ctx->pc = 0x2B06B8u;
    // 0x2b06b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b06b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b06bc: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2B06BCu;
    {
        const bool branch_taken_0x2b06bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b06bc) {
            ctx->pc = 0x2B077Cu;
            goto label_2b077c;
        }
    }
    ctx->pc = 0x2B06C4u;
label_2b06c4:
    // 0x2b06c4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2b06c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b06c8: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x2b06c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x2b06cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b06ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b06d0: 0x0  nop
    ctx->pc = 0x2b06d0u;
    // NOP
    // 0x2b06d4: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2b06d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2b06d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2b06d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b06dc: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2B06DCu;
    {
        const bool branch_taken_0x2b06dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b06dc) {
            ctx->pc = 0x2B076Cu;
            goto label_2b076c;
        }
    }
    ctx->pc = 0x2B06E4u;
label_2b06e4:
    // 0x2b06e4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2b06e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b06e8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2b06e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2b06ec: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x2b06ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x2b06f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b06f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b06f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2b06f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b06f8: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x2b06f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x2b06fc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2b06fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2b0700: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0700u;
    {
        const bool branch_taken_0x2b0700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0700) {
            ctx->pc = 0x2B0714u;
            goto label_2b0714;
        }
    }
    ctx->pc = 0x2B0708u;
    // 0x2b0708: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2b0708u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b070c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B070Cu;
    {
        const bool branch_taken_0x2b070c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b070c) {
            ctx->pc = 0x2B0718u;
            goto label_2b0718;
        }
    }
    ctx->pc = 0x2B0714u;
label_2b0714:
    // 0x2b0714: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2b0714u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b0718:
    // 0x2b0718: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0718u;
    {
        const bool branch_taken_0x2b0718 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b0718) {
            ctx->pc = 0x2B072Cu;
            goto label_2b072c;
        }
    }
    ctx->pc = 0x2B0720u;
    // 0x2b0720: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b0720u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0724: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2B0724u;
    {
        const bool branch_taken_0x2b0724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0724) {
            ctx->pc = 0x2B077Cu;
            goto label_2b077c;
        }
    }
    ctx->pc = 0x2B072Cu;
label_2b072c:
    // 0x2b072c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2b072cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b0730: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2b0730u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2b0734: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x2b0734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x2b0738: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b0738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b073c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2b073cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b0740: 0xc4400090  lwc1        $f0, 0x90($v0)
    ctx->pc = 0x2b0740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b0744: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2b0744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2b0748: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x2b0748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b074c: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x2b074cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b0750: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2b0750u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b0754: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0754u;
    {
        const bool branch_taken_0x2b0754 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b0754) {
            ctx->pc = 0x2B0768u;
            goto label_2b0768;
        }
    }
    ctx->pc = 0x2B075Cu;
    // 0x2b075c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2b075cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b0760: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2b0760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2b0764: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x2b0764u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b0768:
    // 0x2b0768: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2b0768u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2b076c:
    // 0x2b076c: 0x2e020040  sltiu       $v0, $s0, 0x40
    ctx->pc = 0x2b076cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x2b0770: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x2B0770u;
    {
        const bool branch_taken_0x2b0770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b0770) {
            ctx->pc = 0x2B06E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b06e4;
        }
    }
    ctx->pc = 0x2B0778u;
    // 0x2b0778: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2b0778u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b077c:
    // 0x2b077c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b077cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b0780: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b0780u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b0784: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b0784u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b0788: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2b0788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2b078c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B078Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B078Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0794u;
    // 0x2b0794: 0x0  nop
    ctx->pc = 0x2b0794u;
    // NOP
    // 0x2b0798: 0x0  nop
    ctx->pc = 0x2b0798u;
    // NOP
    // 0x2b079c: 0x0  nop
    ctx->pc = 0x2b079cu;
    // NOP
    ctx->pc = 0x2b07a0u;
}

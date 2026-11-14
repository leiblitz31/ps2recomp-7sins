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

// Function: sub_00145A10
// Address: 0x145a10 - 0x145ae0
void sub_00145A10_0x145a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145A10_0x145a10");
#endif

    switch (ctx->pc) {
        case 0x145a2cu: goto label_145a2c;
        case 0x145a38u: goto label_145a38;
        case 0x145ac4u: goto label_145ac4;
        default: break;
    }

    ctx->pc = 0x145a10u;

    // 0x145a10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x145a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x145a14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x145a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x145a18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x145a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x145a1c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x145a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x145a20: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x145a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x145a24: 0xc047eb8  jal         func_11FAE0
    ctx->pc = 0x145A24u;
    SET_GPR_U32(ctx, 31, 0x145A2Cu);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x145A24u, 0x145A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145A2Cu;
label_145a2c:
    // 0x145a2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x145a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145a30: 0xc047eb0  jal         func_11FAC0
    ctx->pc = 0x145A30u;
    SET_GPR_U32(ctx, 31, 0x145A38u);
    ctx->pc = 0x11FAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAC0u, 0x145A30u, 0x145A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145A38u;
label_145a38:
    // 0x145a38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x145a38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145a3c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x145a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x145a40: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x145a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x145a44: 0x642004  sllv        $a0, $a0, $v1
    ctx->pc = 0x145a44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x145a48: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x145a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x145a4c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x145a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x145a50: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x145A50u;
    {
        const bool branch_taken_0x145a50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x145a50) {
            ctx->pc = 0x145AC4u;
            goto label_145ac4;
        }
    }
    ctx->pc = 0x145A58u;
    // 0x145a58: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x145a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x145a5c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x145a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145a60: 0xc7808ca4  lwc1        $f0, -0x735C($gp)
    ctx->pc = 0x145a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145a64: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x145a64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x145a68: 0xe7808ca4  swc1        $f0, -0x735C($gp)
    ctx->pc = 0x145a68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937764), bits); }
    // 0x145a6c: 0xc7818ca4  lwc1        $f1, -0x735C($gp)
    ctx->pc = 0x145a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145a70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x145a70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145a74: 0x0  nop
    ctx->pc = 0x145a74u;
    // NOP
    // 0x145a78: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x145a78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x145a7c: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x145A7Cu;
    {
        const bool branch_taken_0x145a7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x145a7c) {
            ctx->pc = 0x145AC4u;
            goto label_145ac4;
        }
    }
    ctx->pc = 0x145A84u;
    // 0x145a84: 0xc7818ca4  lwc1        $f1, -0x735C($gp)
    ctx->pc = 0x145a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145a88: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x145a88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x145a8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x145a8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145a90: 0x0  nop
    ctx->pc = 0x145a90u;
    // NOP
    // 0x145a94: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x145a94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x145a98: 0xe7808ca4  swc1        $f0, -0x735C($gp)
    ctx->pc = 0x145a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937764), bits); }
    // 0x145a9c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x145a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x145aa0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x145aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x145aa4: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x145AA4u;
    {
        const bool branch_taken_0x145aa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x145aa4) {
            ctx->pc = 0x145AB4u;
            goto label_145ab4;
        }
    }
    ctx->pc = 0x145AACu;
    // 0x145aac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x145AACu;
    {
        const bool branch_taken_0x145aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145aac) {
            ctx->pc = 0x145AC4u;
            goto label_145ac4;
        }
    }
    ctx->pc = 0x145AB4u;
label_145ab4:
    // 0x145ab4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x145ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x145ab8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x145ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x145abc: 0xc0516b8  jal         func_145AE0
    ctx->pc = 0x145ABCu;
    SET_GPR_U32(ctx, 31, 0x145AC4u);
    ctx->pc = 0x145AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145AE0u, 0x145ABCu, 0x145AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145AC4u;
label_145ac4:
    // 0x145ac4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x145ac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145ac8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x145ac8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145acc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x145accu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x145ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x145AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145AD8u;
    // 0x145ad8: 0x0  nop
    ctx->pc = 0x145ad8u;
    // NOP
    // 0x145adc: 0x0  nop
    ctx->pc = 0x145adcu;
    // NOP
    ctx->pc = 0x145ae0u;
}

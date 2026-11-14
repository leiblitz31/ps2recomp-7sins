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

// Function: sub_0031ECE0
// Address: 0x31ece0 - 0x31edf0
void sub_0031ECE0_0x31ece0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031ECE0_0x31ece0");
#endif

    ctx->pc = 0x31ece0u;

    // 0x31ece0: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x31ece0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31ece4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31ece4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31ece8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x31ece8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31ecec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x31ececu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x31ecf0: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x31ecf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x31ecf4: 0xc4a3000c  lwc1        $f3, 0xC($a1)
    ctx->pc = 0x31ecf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31ecf8: 0x460109c2  mul.s       $f7, $f1, $f1
    ctx->pc = 0x31ecf8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x31ecfc: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x31ecfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31ed00: 0xc4a40014  lwc1        $f4, 0x14($a1)
    ctx->pc = 0x31ed00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x31ed04: 0x46031882  mul.s       $f2, $f3, $f3
    ctx->pc = 0x31ed04u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x31ed08: 0x46000202  mul.s       $f8, $f0, $f0
    ctx->pc = 0x31ed08u;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x31ed0c: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x31ed0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x31ed10: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x31ed10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x31ed14: 0x46002302  mul.s       $f12, $f4, $f0
    ctx->pc = 0x31ed14u;
    ctx->f[12] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x31ed18: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x31ed18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x31ed1c: 0x46001942  mul.s       $f5, $f3, $f0
    ctx->pc = 0x31ed1cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x31ed20: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x31ed20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x31ed24: 0x46012282  mul.s       $f10, $f4, $f1
    ctx->pc = 0x31ed24u;
    ctx->f[10] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x31ed28: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x31ed28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x31ed2c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x31ed2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x31ed30: 0x46023980  add.s       $f6, $f7, $f2
    ctx->pc = 0x31ed30u;
    ctx->f[6] = FPU_ADD_S(ctx->f[7], ctx->f[2]);
    // 0x31ed34: 0xe7a70000  swc1        $f7, 0x0($sp)
    ctx->pc = 0x31ed34u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x31ed38: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x31ed38u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x31ed3c: 0xe7a80008  swc1        $f8, 0x8($sp)
    ctx->pc = 0x31ed3cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x31ed40: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x31ed40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x31ed44: 0xe7a50010  swc1        $f5, 0x10($sp)
    ctx->pc = 0x31ed44u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x31ed48: 0x46081080  add.s       $f2, $f2, $f8
    ctx->pc = 0x31ed48u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[8]);
    // 0x31ed4c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x31ed4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x31ed50: 0x460839c0  add.s       $f7, $f7, $f8
    ctx->pc = 0x31ed50u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[8]);
    // 0x31ed54: 0xe7aa0020  swc1        $f10, 0x20($sp)
    ctx->pc = 0x31ed54u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x31ed58: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x31ed58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x31ed5c: 0x46040240  add.s       $f9, $f0, $f4
    ctx->pc = 0x31ed5cu;
    ctx->f[9] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x31ed60: 0x460c08c1  sub.s       $f3, $f1, $f12
    ctx->pc = 0x31ed60u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
    // 0x31ed64: 0xe7a40024  swc1        $f4, 0x24($sp)
    ctx->pc = 0x31ed64u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x31ed68: 0x460a2a01  sub.s       $f8, $f5, $f10
    ctx->pc = 0x31ed68u;
    ctx->f[8] = FPU_SUB_S(ctx->f[5], ctx->f[10]);
    // 0x31ed6c: 0xe7ac0028  swc1        $f12, 0x28($sp)
    ctx->pc = 0x31ed6cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x31ed70: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x31ed70u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x31ed74: 0x46063180  add.s       $f6, $f6, $f6
    ctx->pc = 0x31ed74u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[6]);
    // 0x31ed78: 0x460739c0  add.s       $f7, $f7, $f7
    ctx->pc = 0x31ed78u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[7]);
    // 0x31ed7c: 0x460c0840  add.s       $f1, $f1, $f12
    ctx->pc = 0x31ed7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[12]);
    // 0x31ed80: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x31ed80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x31ed84: 0x460a2940  add.s       $f5, $f5, $f10
    ctx->pc = 0x31ed84u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[10]);
    // 0x31ed88: 0x46065981  sub.s       $f6, $f11, $f6
    ctx->pc = 0x31ed88u;
    ctx->f[6] = FPU_SUB_S(ctx->f[11], ctx->f[6]);
    // 0x31ed8c: 0x46025881  sub.s       $f2, $f11, $f2
    ctx->pc = 0x31ed8cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[11], ctx->f[2]);
    // 0x31ed90: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x31ed90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x31ed94: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x31ed94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x31ed98: 0xe4860028  swc1        $f6, 0x28($a0)
    ctx->pc = 0x31ed98u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x31ed9c: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x31ed9cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
    // 0x31eda0: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x31eda0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x31eda4: 0x46075ac1  sub.s       $f11, $f11, $f7
    ctx->pc = 0x31eda4u;
    ctx->f[11] = FPU_SUB_S(ctx->f[11], ctx->f[7]);
    // 0x31eda8: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x31eda8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x31edac: 0x46052940  add.s       $f5, $f5, $f5
    ctx->pc = 0x31edacu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
    // 0x31edb0: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x31edb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x31edb4: 0x46094a40  add.s       $f9, $f9, $f9
    ctx->pc = 0x31edb4u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[9]);
    // 0x31edb8: 0xe4830010  swc1        $f3, 0x10($a0)
    ctx->pc = 0x31edb8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x31edbc: 0x46084200  add.s       $f8, $f8, $f8
    ctx->pc = 0x31edbcu;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[8]);
    // 0x31edc0: 0xe48b0014  swc1        $f11, 0x14($a0)
    ctx->pc = 0x31edc0u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x31edc4: 0xe4850018  swc1        $f5, 0x18($a0)
    ctx->pc = 0x31edc4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x31edc8: 0xe4890020  swc1        $f9, 0x20($a0)
    ctx->pc = 0x31edc8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x31edcc: 0xe4880024  swc1        $f8, 0x24($a0)
    ctx->pc = 0x31edccu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x31edd0: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x31edd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31edd4: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x31edd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x31edd8: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x31edd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31eddc: 0xe4810034  swc1        $f1, 0x34($a0)
    ctx->pc = 0x31eddcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x31ede0: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x31ede0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31ede4: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x31ede4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x31ede8: 0x3e00008  jr          $ra
    ctx->pc = 0x31EDE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31EDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EDE8u;
        // 0x31edec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EDE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31EDF0u;
}

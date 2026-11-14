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

// Function: sub_001B6850
// Address: 0x1b6850 - 0x1b6980
void sub_001B6850_0x1b6850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6850_0x1b6850");
#endif

    switch (ctx->pc) {
        case 0x1b6878u: goto label_1b6878;
        default: break;
    }

    ctx->pc = 0x1b6850u;

    // 0x1b6850: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b6850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b6854: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b6854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b6858: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b6858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b685c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1b685cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1b6860: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x1b6860u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1b6864: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1b6864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b6868: 0x24440208  addiu       $a0, $v0, 0x208
    ctx->pc = 0x1b6868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x1b686c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b686cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b6870: 0xc06c53c  jal         func_1B14F0
    ctx->pc = 0x1B6870u;
    SET_GPR_U32(ctx, 31, 0x1B6878u);
    ctx->pc = 0x1B14F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14F0u, 0x1B6870u, 0x1B6878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6878u;
label_1b6878:
    // 0x1b6878: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b6878u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b687c: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x1b687cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6880: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1b6880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6884: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1b6884u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1b6888: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1b6888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b688c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b688cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b6890: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1b6890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1b6894: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1b6894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6898: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b6898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b689c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b689cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b68a0: 0x0  nop
    ctx->pc = 0x1b68a0u;
    // NOP
    // 0x1b68a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b68a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b68a8: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x1B68A8u;
    {
        const bool branch_taken_0x1b68a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b68a8) {
            ctx->pc = 0x1B68F4u;
            goto label_1b68f4;
        }
    }
    ctx->pc = 0x1B68B0u;
    // 0x1b68b0: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x1b68b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b68b4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1b68b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b68b8: 0xc4610180  lwc1        $f1, 0x180($v1)
    ctx->pc = 0x1b68b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b68bc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b68bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b68c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b68c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b68c4: 0x0  nop
    ctx->pc = 0x1b68c4u;
    // NOP
    // 0x1b68c8: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x1b68c8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b68cc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b68ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b68d0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b68d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b68d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b68d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b68d8: 0x0  nop
    ctx->pc = 0x1b68d8u;
    // NOP
    // 0x1b68dc: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1b68dcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1b68e0: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1b68e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1b68e4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1b68e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b68e8: 0xe460017c  swc1        $f0, 0x17C($v1)
    ctx->pc = 0x1b68e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 380), bits); }
    // 0x1b68ec: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1B68ECu;
    {
        const bool branch_taken_0x1b68ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b68ec) {
            ctx->pc = 0x1B6940u;
            goto label_1b6940;
        }
    }
    ctx->pc = 0x1B68F4u;
label_1b68f4:
    // 0x1b68f4: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1b68f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b68f8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b68f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b68fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b68fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6900: 0x0  nop
    ctx->pc = 0x1b6900u;
    // NOP
    // 0x1b6904: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x1b6904u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b6908: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1b6908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b690c: 0xc4610180  lwc1        $f1, 0x180($v1)
    ctx->pc = 0x1b690cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6910: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b6910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b6914: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b6914u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6918: 0x0  nop
    ctx->pc = 0x1b6918u;
    // NOP
    // 0x1b691c: 0x46010081  sub.s       $f2, $f0, $f1
    ctx->pc = 0x1b691cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b6920: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1b6920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b6924: 0xc4610180  lwc1        $f1, 0x180($v1)
    ctx->pc = 0x1b6924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6928: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b6928u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b692c: 0x0  nop
    ctx->pc = 0x1b692cu;
    // NOP
    // 0x1b6930: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1b6930u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1b6934: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1b6934u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1b6938: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1b6938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b693c: 0xe460017c  swc1        $f0, 0x17C($v1)
    ctx->pc = 0x1b693cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 380), bits); }
label_1b6940:
    // 0x1b6940: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1b6940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6944: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1b6944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1b6948: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b6948u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b694c: 0x0  nop
    ctx->pc = 0x1b694cu;
    // NOP
    // 0x1b6950: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b6950u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b6954: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1B6954u;
    {
        const bool branch_taken_0x1b6954 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b6954) {
            ctx->pc = 0x1B696Cu;
            goto label_1b696c;
        }
    }
    ctx->pc = 0x1B695Cu;
    // 0x1b695c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b695cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6960: 0x0  nop
    ctx->pc = 0x1b6960u;
    // NOP
    // 0x1b6964: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1b6964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1b6968: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1b6968u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_1b696c:
    // 0x1b696c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b696cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6970: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b6970u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6974: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1b6974u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b6978: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6980u;
}

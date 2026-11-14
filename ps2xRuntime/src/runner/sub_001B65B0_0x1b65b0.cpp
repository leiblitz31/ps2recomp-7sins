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

// Function: sub_001B65B0
// Address: 0x1b65b0 - 0x1b66d0
void sub_001B65B0_0x1b65b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B65B0_0x1b65b0");
#endif

    switch (ctx->pc) {
        case 0x1b65d8u: goto label_1b65d8;
        default: break;
    }

    ctx->pc = 0x1b65b0u;

    // 0x1b65b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b65b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b65b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b65b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b65b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b65b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b65bc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1b65bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1b65c0: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x1b65c0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1b65c4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1b65c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b65c8: 0x24440208  addiu       $a0, $v0, 0x208
    ctx->pc = 0x1b65c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x1b65cc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b65ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b65d0: 0xc06c53c  jal         func_1B14F0
    ctx->pc = 0x1B65D0u;
    SET_GPR_U32(ctx, 31, 0x1B65D8u);
    ctx->pc = 0x1B14F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14F0u, 0x1B65D0u, 0x1B65D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B65D8u;
label_1b65d8:
    // 0x1b65d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b65d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b65dc: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x1b65dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b65e0: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1b65e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b65e4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1b65e4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1b65e8: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1b65e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b65ec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b65ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b65f0: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1b65f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1b65f4: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1b65f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b65f8: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1b65f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1b65fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b65fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6600: 0x0  nop
    ctx->pc = 0x1b6600u;
    // NOP
    // 0x1b6604: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b6604u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b6608: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1B6608u;
    {
        const bool branch_taken_0x1b6608 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b6608) {
            ctx->pc = 0x1B663Cu;
            goto label_1b663c;
        }
    }
    ctx->pc = 0x1B6610u;
    // 0x1b6610: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1b6610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1b6614: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b6614u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b6618: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1b6618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b661c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1b661cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b6620: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1b6620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b6624: 0xc4600178  lwc1        $f0, 0x178($v1)
    ctx->pc = 0x1b6624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6628: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b6628u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b662c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1b662cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b6630: 0xe4600174  swc1        $f0, 0x174($v1)
    ctx->pc = 0x1b6630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 372), bits); }
    // 0x1b6634: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1B6634u;
    {
        const bool branch_taken_0x1b6634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6634) {
            ctx->pc = 0x1B6684u;
            goto label_1b6684;
        }
    }
    ctx->pc = 0x1B663Cu;
label_1b663c:
    // 0x1b663c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1b663cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6640: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1b6640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1b6644: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b6644u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6648: 0x0  nop
    ctx->pc = 0x1b6648u;
    // NOP
    // 0x1b664c: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x1b664cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b6650: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1b6650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1b6654: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1b6654u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b6658: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b6658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b665c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b665cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b6660: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b6660u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6664: 0x0  nop
    ctx->pc = 0x1b6664u;
    // NOP
    // 0x1b6668: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1b6668u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1b666c: 0x4603105d  msub.s      $f1, $f2, $f3
    ctx->pc = 0x1b666cu;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1b6670: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1b6670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b6674: 0xc4600178  lwc1        $f0, 0x178($v1)
    ctx->pc = 0x1b6674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6678: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b6678u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b667c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1b667cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b6680: 0xe4600174  swc1        $f0, 0x174($v1)
    ctx->pc = 0x1b6680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 372), bits); }
label_1b6684:
    // 0x1b6684: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1b6684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6688: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b6688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b668c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b668cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6690: 0x0  nop
    ctx->pc = 0x1b6690u;
    // NOP
    // 0x1b6694: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b6694u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b6698: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1B6698u;
    {
        const bool branch_taken_0x1b6698 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b6698) {
            ctx->pc = 0x1B66B0u;
            goto label_1b66b0;
        }
    }
    ctx->pc = 0x1B66A0u;
    // 0x1b66a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b66a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b66a4: 0x0  nop
    ctx->pc = 0x1b66a4u;
    // NOP
    // 0x1b66a8: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1b66a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1b66ac: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1b66acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_1b66b0:
    // 0x1b66b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b66b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b66b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b66b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b66b8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1b66b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b66bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B66BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B66BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B66C4u;
    // 0x1b66c4: 0x0  nop
    ctx->pc = 0x1b66c4u;
    // NOP
    // 0x1b66c8: 0x0  nop
    ctx->pc = 0x1b66c8u;
    // NOP
    // 0x1b66cc: 0x0  nop
    ctx->pc = 0x1b66ccu;
    // NOP
    ctx->pc = 0x1b66d0u;
}

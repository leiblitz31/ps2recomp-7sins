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

// Function: sub_00424728
// Address: 0x424728 - 0x424838
void sub_00424728_0x424728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00424728_0x424728");
#endif

    ctx->pc = 0x424728u;

    // 0x424728: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x424728u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42472c: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x42472cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x424730: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x424730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x424734: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x424734u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x424738: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x424738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x42473c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x42473cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x424740: 0xc4c3000c  lwc1        $f3, 0xC($a2)
    ctx->pc = 0x424740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x424744: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x424744u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x424748: 0xc4c10010  lwc1        $f1, 0x10($a2)
    ctx->pc = 0x424748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x42474c: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x42474cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x424750: 0xc4c50000  lwc1        $f5, 0x0($a2)
    ctx->pc = 0x424750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x424754: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x424754u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x424758: 0xc4c20014  lwc1        $f2, 0x14($a2)
    ctx->pc = 0x424758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x42475c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x42475cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x424760: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x424760u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x424764: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x424764u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x424768: 0x46050003  div.s       $f0, $f0, $f5
    ctx->pc = 0x424768u;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[5]); }
    // 0x42476c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x42476cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x424770: 0x46061034  c.lt.s      $f2, $f6
    ctx->pc = 0x424770u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x424774: 0x0  nop
    ctx->pc = 0x424774u;
    // NOP
    // 0x424778: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x424778u;
    {
        const bool branch_taken_0x424778 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x42477Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424778u;
        // 0x42477c: 0xe4c20014  swc1        $f2, 0x14($a2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x424778) {
            ctx->pc = 0x424784u;
            goto label_424784;
        }
    }
    ctx->pc = 0x424780u;
    // 0x424780: 0xe4c60014  swc1        $f6, 0x14($a2)
    ctx->pc = 0x424780u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
label_424784:
    // 0x424784: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x424784u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x424788: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x424788u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x42478c: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x42478cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x424790: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x424790u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x424794: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x424794u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x424798: 0x90a50002  lbu         $a1, 0x2($a1)
    ctx->pc = 0x424798u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x42479c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x42479cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4247a0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x4247a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x4247a4: 0x44842800  mtc1        $a0, $f5
    ctx->pc = 0x4247a4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x4247a8: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x4247a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x4247ac: 0xc7808054  lwc1        $f0, -0x7FAC($gp)
    ctx->pc = 0x4247acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4247b0: 0x44852000  mtc1        $a1, $f4
    ctx->pc = 0x4247b0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x4247b4: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x4247b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x4247b8: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x4247b8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x4247bc: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x4247bcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x4247c0: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x4247c0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x4247c4: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x4247c4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x4247c8: 0xc7818058  lwc1        $f1, -0x7FA8($gp)
    ctx->pc = 0x4247c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4247cc: 0xc783805c  lwc1        $f3, -0x7FA4($gp)
    ctx->pc = 0x4247ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4247d0: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x4247d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x4247d4: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x4247d4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x4247d8: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x4247d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4247dc: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x4247dcu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x4247e0: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x4247e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x4247e4: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x4247e4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x4247e8: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x4247e8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x4247ec: 0xe7a6000c  swc1        $f6, 0xC($sp)
    ctx->pc = 0x4247ecu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x4247f0: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x4247f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x4247f4: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x4247f4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x4247f8: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x4247f8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x4247fc: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x4247fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x424800: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x424800u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x424804: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x424804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x424808: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x424808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x42480c: 0xc4c20010  lwc1        $f2, 0x10($a2)
    ctx->pc = 0x42480cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x424810: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x424810u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x424814: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x424814u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x424818: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x424818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x42481c: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x42481cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x424820: 0xe4c30008  swc1        $f3, 0x8($a2)
    ctx->pc = 0x424820u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x424824: 0xe4c1000c  swc1        $f1, 0xC($a2)
    ctx->pc = 0x424824u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x424828: 0xe4c20010  swc1        $f2, 0x10($a2)
    ctx->pc = 0x424828u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x42482c: 0x3e00008  jr          $ra
    ctx->pc = 0x42482Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x424830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42482Cu;
        // 0x424830: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42482Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x424834u;
    // 0x424834: 0x0  nop
    ctx->pc = 0x424834u;
    // NOP
    ctx->pc = 0x424838u;
}

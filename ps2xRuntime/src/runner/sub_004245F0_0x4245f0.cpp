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

// Function: sub_004245F0
// Address: 0x4245f0 - 0x424728
void sub_004245F0_0x4245f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004245F0_0x4245f0");
#endif

    ctx->pc = 0x4245f0u;

    // 0x4245f0: 0x8f87add0  lw          $a3, -0x5230($gp)
    ctx->pc = 0x4245f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946256)));
    // 0x4245f4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x4245f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4245f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4245f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4245fc: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x4245fcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x424600: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x424600u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x424604: 0x90a80002  lbu         $t0, 0x2($a1)
    ctx->pc = 0x424604u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x424608: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x424608u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x42460c: 0x90a70003  lbu         $a3, 0x3($a1)
    ctx->pc = 0x42460cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x424610: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x424610u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x424614: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x424614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x424618: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x424618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x42461c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x42461cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x424620: 0x463024  and         $a2, $v0, $a2
    ctx->pc = 0x424620u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x424624: 0x473824  and         $a3, $v0, $a3
    ctx->pc = 0x424624u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x424628: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x424628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x42462c: 0xa3a60010  sb          $a2, 0x10($sp)
    ctx->pc = 0x42462cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 6));
    // 0x424630: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x424630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x424634: 0xa3a30011  sb          $v1, 0x11($sp)
    ctx->pc = 0x424634u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x424638: 0xa3a20012  sb          $v0, 0x12($sp)
    ctx->pc = 0x424638u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x42463c: 0xa3a70013  sb          $a3, 0x13($sp)
    ctx->pc = 0x42463cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 19), (uint8_t)GPR_U32(ctx, 7));
    // 0x424640: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x424640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x424644: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x424644u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x424648: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x424648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x42464c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x42464cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x424650: 0x93a30012  lbu         $v1, 0x12($sp)
    ctx->pc = 0x424650u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 18)));
    // 0x424654: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x424654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x424658: 0x44852800  mtc1        $a1, $f5
    ctx->pc = 0x424658u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x42465c: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x42465cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x424660: 0xc7808054  lwc1        $f0, -0x7FAC($gp)
    ctx->pc = 0x424660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x424664: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x424664u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x424668: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x424668u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x42466c: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x42466cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x424670: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x424670u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x424674: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x424674u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x424678: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x424678u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x42467c: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x42467cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x424680: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x424680u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x424684: 0xc7818058  lwc1        $f1, -0x7FA8($gp)
    ctx->pc = 0x424684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x424688: 0xc780805c  lwc1        $f0, -0x7FA4($gp)
    ctx->pc = 0x424688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x42468c: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x42468cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x424690: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x424690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x424694: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x424694u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x424698: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x424698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x42469c: 0x460529c2  mul.s       $f7, $f5, $f5
    ctx->pc = 0x42469cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x4246a0: 0x46021002  mul.s       $f0, $f2, $f2
    ctx->pc = 0x4246a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x4246a4: 0x46042202  mul.s       $f8, $f4, $f4
    ctx->pc = 0x4246a4u;
    ctx->f[8] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x4246a8: 0x46063242  mul.s       $f9, $f6, $f6
    ctx->pc = 0x4246a8u;
    ctx->f[9] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x4246ac: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x4246acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x4246b0: 0x460c18c0  add.s       $f3, $f3, $f12
    ctx->pc = 0x4246b0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[12]);
    // 0x4246b4: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x4246b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x4246b8: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x4246b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x4246bc: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x4246bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x4246c0: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x4246c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x4246c4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x4246c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x4246c8: 0xe4810014  swc1        $f1, 0x14($a0)
    ctx->pc = 0x4246c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x4246cc: 0x460c1082  mul.s       $f2, $f2, $f12
    ctx->pc = 0x4246ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x4246d0: 0x460c3182  mul.s       $f6, $f6, $f12
    ctx->pc = 0x4246d0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[12]);
    // 0x4246d4: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x4246d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x4246d8: 0x460c2942  mul.s       $f5, $f5, $f12
    ctx->pc = 0x4246d8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[12]);
    // 0x4246dc: 0x460c2102  mul.s       $f4, $f4, $f12
    ctx->pc = 0x4246dcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[12]);
    // 0x4246e0: 0xe7a6000c  swc1        $f6, 0xC($sp)
    ctx->pc = 0x4246e0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x4246e4: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x4246e4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x4246e8: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x4246e8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x4246ec: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x4246ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4246f0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x4246f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x4246f4: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x4246f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4246f8: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x4246f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4246fc: 0xc4820010  lwc1        $f2, 0x10($a0)
    ctx->pc = 0x4246fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x424700: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x424700u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x424704: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x424704u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x424708: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x424708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x42470c: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x42470cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x424710: 0xe4830008  swc1        $f3, 0x8($a0)
    ctx->pc = 0x424710u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x424714: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x424714u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x424718: 0xe4820010  swc1        $f2, 0x10($a0)
    ctx->pc = 0x424718u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x42471c: 0x3e00008  jr          $ra
    ctx->pc = 0x42471Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x424720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42471Cu;
        // 0x424720: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42471Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x424724u;
    // 0x424724: 0x0  nop
    ctx->pc = 0x424724u;
    // NOP
    ctx->pc = 0x424728u;
}

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

// Function: sub_0041DE60
// Address: 0x41de60 - 0x41e1a8
void sub_0041DE60_0x41de60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041DE60_0x41de60");
#endif

    switch (ctx->pc) {
        case 0x41df28u: goto label_41df28;
        case 0x41dfa0u: goto label_41dfa0;
        case 0x41e028u: goto label_41e028;
        case 0x41e048u: goto label_41e048;
        case 0x41e0d0u: goto label_41e0d0;
        default: break;
    }

    ctx->pc = 0x41de60u;

    // 0x41de60: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x41de60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x41de64: 0x3c014780  lui         $at, 0x4780
    ctx->pc = 0x41de64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18304 << 16));
    // 0x41de68: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x41de68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x41de6c: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x41de6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x41de70: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x41de70u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41de74: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x41de74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x41de78: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x41de78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x41de7c: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x41de7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x41de80: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x41de80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x41de84: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x41de84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x41de88: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x41de88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x41de8c: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x41de8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x41de90: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x41de90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x41de94: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x41de94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x41de98: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x41de98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x41de9c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x41de9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x41dea0: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x41dea0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x41dea4: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x41dea4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x41dea8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x41dea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x41deac: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x41deacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x41deb0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x41deb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x41deb4: 0xc7a3001c  lwc1        $f3, 0x1C($sp)
    ctx->pc = 0x41deb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x41deb8: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x41deb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x41debc: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x41debcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x41dec0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x41dec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x41dec4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x41dec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x41dec8: 0xc7a40020  lwc1        $f4, 0x20($sp)
    ctx->pc = 0x41dec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x41decc: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x41deccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x41ded0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x41ded0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x41ded4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x41ded4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x41ded8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x41ded8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x41dedc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x41dedcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x41dee0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x41dee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x41dee4: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x41dee4u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
    // 0x41dee8: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x41dee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41deec: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x41deecu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[3]); }
    // 0x41def0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x41def0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x41def4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x41def4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x41def8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x41def8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x41defc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x41defcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x41df00: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x41df00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x41df04: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x41df04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x41df08: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x41df08u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x41df0c: 0x44161000  mfc1        $s6, $f2
    ctx->pc = 0x41df0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
    // 0x41df10: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x41df10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x41df14: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x41df14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x41df18: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x41df18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x41df1c: 0x18400093  blez        $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x41DF1Cu;
    {
        const bool branch_taken_0x41df1c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x41DF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41DF1Cu;
        // 0x41df20: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41df1c) {
            ctx->pc = 0x41E16Cu;
            goto label_41e16c;
        }
    }
    ctx->pc = 0x41DF24u;
    // 0x41df24: 0x0  nop
    ctx->pc = 0x41df24u;
    // NOP
label_41df28:
    // 0x41df28: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x41df28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41df2c: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x41df2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x41df30: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x41df30u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41df34: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x41df34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x41df38: 0xafa50024  sw          $a1, 0x24($sp)
    ctx->pc = 0x41df38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 5));
    // 0x41df3c: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x41df3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x41df40: 0x8fa5001c  lw          $a1, 0x1C($sp)
    ctx->pc = 0x41df40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x41df44: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x41df44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x41df48: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x41df48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x41df4c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x41df4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x41df50: 0x18a00081  blez        $a1, . + 4 + (0x81 << 2)
    ctx->pc = 0x41DF50u;
    {
        const bool branch_taken_0x41df50 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x41DF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41DF50u;
        // 0x41df54: 0x144f021  addu        $fp, $t2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41df50) {
            ctx->pc = 0x41E158u;
            goto label_41e158;
        }
    }
    ctx->pc = 0x41DF58u;
    // 0x41df58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x41df58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41df5c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x41df5cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41df60: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x41df60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x41df64: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x41df64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x41df68: 0x26d1ffff  addiu       $s1, $s6, -0x1
    ctx->pc = 0x41df68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x41df6c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x41df6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x41df70: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x41df70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x41df74: 0x32a20001  andi        $v0, $s5, 0x1
    ctx->pc = 0x41df74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x41df78: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x41DF78u;
    {
        const bool branch_taken_0x41df78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41DF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41DF78u;
        // 0x41df7c: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41df78) {
            ctx->pc = 0x41E018u;
            goto label_41e018;
        }
    }
    ctx->pc = 0x41DF80u;
    // 0x41df80: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x41df80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x41df84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x41df84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41df88: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x41df88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41df8c: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x41df8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41df90: 0x27c8ffff  addiu       $t0, $fp, -0x1
    ctx->pc = 0x41df90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x41df94: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x41df94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41df98: 0xc1076f8  jal         func_41DBE0
    ctx->pc = 0x41DF98u;
    SET_GPR_U32(ctx, 31, 0x41DFA0u);
    ctx->pc = 0x41DF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41DF98u;
    // 0x41df9c: 0x7faa0030  sq          $t2, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41DBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41DBE0u, 0x41DF98u, 0x41DFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41DFA0u;
label_41dfa0:
    // 0x41dfa0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x41dfa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x41dfa4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x41dfa4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x41dfa8: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x41dfa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x41dfac: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x41dfacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x41dfb0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x41dfb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x41dfb4: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x41dfb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x41dfb8: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x41dfb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x41dfbc: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x41dfbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x41dfc0: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x41dfc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x41dfc4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x41dfc4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x41dfc8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x41dfc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x41dfcc: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x41dfccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x41dfd0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x41dfd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x41dfd4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x41dfd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x41dfd8: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x41dfd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x41dfdc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x41dfdcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x41dfe0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x41dfe0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x41dfe4: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x41dfe4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x41dfe8: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x41dfe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x41dfec: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x41dfecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x41dff0: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x41dff0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x41dff4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x41dff4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x41dff8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x41dff8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x41dffc: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x41dffcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x41e000: 0x2368821  addu        $s1, $s1, $s6
    ctx->pc = 0x41e000u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x41e004: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x41e004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x41e008: 0x2c0b82d  daddu       $s7, $s6, $zero
    ctx->pc = 0x41e008u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41e00c: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x41e00cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x41e010: 0x12a00051  beqz        $s5, . + 4 + (0x51 << 2)
    ctx->pc = 0x41E010u;
    {
        const bool branch_taken_0x41e010 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E010u;
        // 0x41e014: 0x7baa0030  lq          $t2, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e010) {
            ctx->pc = 0x41E158u;
            goto label_41e158;
        }
    }
    ctx->pc = 0x41E018u;
label_41e018:
    // 0x41e018: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x41e018u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41e01c: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x41e01cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41e020: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x41e020u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41e024: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x41e024u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41e028:
    // 0x41e028: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x41e028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x41e02c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x41e02cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41e030: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x41e030u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41e034: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x41e034u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41e038: 0x27c8ffff  addiu       $t0, $fp, -0x1
    ctx->pc = 0x41e038u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x41e03c: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x41e03cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41e040: 0xc1076f8  jal         func_41DBE0
    ctx->pc = 0x41E040u;
    SET_GPR_U32(ctx, 31, 0x41E048u);
    ctx->pc = 0x41E044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41E040u;
    // 0x41e044: 0x7faa0030  sq          $t2, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41DBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41DBE0u, 0x41E040u, 0x41E048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41E048u;
label_41e048:
    // 0x41e048: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x41e048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x41e04c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x41e04cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x41e050: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x41e050u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x41e054: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x41e054u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x41e058: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x41e058u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x41e05c: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x41e05cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x41e060: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x41e060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x41e064: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x41e064u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x41e068: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x41e068u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x41e06c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x41e06cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x41e070: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x41e070u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x41e074: 0xa2620001  sb          $v0, 0x1($s3)
    ctx->pc = 0x41e074u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x41e078: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x41e078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x41e07c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x41e07cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x41e080: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x41e080u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x41e084: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x41e084u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x41e088: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x41e088u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x41e08c: 0xa2820002  sb          $v0, 0x2($s4)
    ctx->pc = 0x41e08cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x41e090: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x41e090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x41e094: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x41e094u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x41e098: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x41e098u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x41e09c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x41e09cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x41e0a0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x41e0a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x41e0a4: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x41e0a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x41e0a8: 0x2368821  addu        $s1, $s1, $s6
    ctx->pc = 0x41e0a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x41e0ac: 0x7baa0030  lq          $t2, 0x30($sp)
    ctx->pc = 0x41e0acu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x41e0b0: 0x2f6b821  addu        $s7, $s7, $s6
    ctx->pc = 0x41e0b0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 22)));
    // 0x41e0b4: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x41e0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x41e0b8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x41e0b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41e0bc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x41e0bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41e0c0: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x41e0c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41e0c4: 0x27c8ffff  addiu       $t0, $fp, -0x1
    ctx->pc = 0x41e0c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x41e0c8: 0xc1076f8  jal         func_41DBE0
    ctx->pc = 0x41E0C8u;
    SET_GPR_U32(ctx, 31, 0x41E0D0u);
    ctx->pc = 0x41E0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41E0C8u;
    // 0x41e0cc: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41DBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41DBE0u, 0x41E0C8u, 0x41E0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41E0D0u;
label_41e0d0:
    // 0x41e0d0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x41e0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x41e0d4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x41e0d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x41e0d8: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x41e0d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x41e0dc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x41e0dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x41e0e0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x41e0e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x41e0e4: 0xa2420004  sb          $v0, 0x4($s2)
    ctx->pc = 0x41e0e4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x41e0e8: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x41e0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x41e0ec: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x41e0ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x41e0f0: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x41e0f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x41e0f4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x41e0f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x41e0f8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x41e0f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x41e0fc: 0xa2620005  sb          $v0, 0x5($s3)
    ctx->pc = 0x41e0fcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x41e100: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x41e100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x41e104: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x41e104u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x41e108: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x41e108u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x41e10c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x41e10cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x41e110: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x41e110u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x41e114: 0xa2820006  sb          $v0, 0x6($s4)
    ctx->pc = 0x41e114u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x41e118: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x41e118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x41e11c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x41e11cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x41e120: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x41e120u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x41e124: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x41e124u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x41e128: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x41e128u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x41e12c: 0xa2020007  sb          $v0, 0x7($s0)
    ctx->pc = 0x41e12cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x41e130: 0x2368821  addu        $s1, $s1, $s6
    ctx->pc = 0x41e130u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x41e134: 0x2f6b821  addu        $s7, $s7, $s6
    ctx->pc = 0x41e134u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 22)));
    // 0x41e138: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x41e138u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x41e13c: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x41e13cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x41e140: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x41e140u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x41e144: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x41e144u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x41e148: 0x26b5fffe  addiu       $s5, $s5, -0x2
    ctx->pc = 0x41e148u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967294));
    // 0x41e14c: 0x16a0ffb6  bnez        $s5, . + 4 + (-0x4A << 2)
    ctx->pc = 0x41E14Cu;
    {
        const bool branch_taken_0x41e14c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x41E150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E14Cu;
        // 0x41e150: 0x7baa0030  lq          $t2, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e14c) {
            ctx->pc = 0x41E028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41e028;
        }
    }
    ctx->pc = 0x41E154u;
    // 0x41e154: 0x0  nop
    ctx->pc = 0x41e154u;
    // NOP
label_41e158:
    // 0x41e158: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x41e158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x41e15c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x41e15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x41e160: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x41e160u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x41e164: 0x1440ff70  bnez        $v0, . + 4 + (-0x90 << 2)
    ctx->pc = 0x41E164u;
    {
        const bool branch_taken_0x41e164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41E168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E164u;
        // 0x41e168: 0x3c0502d  daddu       $t2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e164) {
            ctx->pc = 0x41DF28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41df28;
        }
    }
    ctx->pc = 0x41E16Cu;
label_41e16c:
    // 0x41e16c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x41e16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41e170: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x41e170u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x41e174: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x41e174u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x41e178: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x41e178u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x41e17c: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x41e17cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x41e180: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x41e180u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x41e184: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x41e184u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x41e188: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x41e188u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x41e18c: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x41e18cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x41e190: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x41e190u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x41e194: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x41e194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x41e198: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x41e198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x41e19c: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x41e19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x41e1a0: 0x3e00008  jr          $ra
    ctx->pc = 0x41E1A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41E1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E1A0u;
        // 0x41e1a4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41E1A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41E1A8u;
}

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

// Function: sub_0036DEA8
// Address: 0x36dea8 - 0x36e1a8
void sub_0036DEA8_0x36dea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036DEA8_0x36dea8");
#endif

    switch (ctx->pc) {
        case 0x36df30u: goto label_36df30;
        case 0x36df38u: goto label_36df38;
        case 0x36df44u: goto label_36df44;
        default: break;
    }

    ctx->pc = 0x36dea8u;

    // 0x36dea8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x36dea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x36deac: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x36deacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x36deb0: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x36deb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x36deb4: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x36deb4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36deb8: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x36deb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x36debc: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x36debcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36dec0: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x36dec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x36dec4: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x36dec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x36dec8: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x36dec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x36decc: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x36deccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x36ded0: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x36ded0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x36ded4: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x36ded4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x36ded8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x36ded8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x36dedc: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x36dedcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x36dee0: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x36dee0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x36dee4: 0x8d020020  lw          $v0, 0x20($t0)
    ctx->pc = 0x36dee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x36dee8: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x36dee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x36deec: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x36deecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x36def0: 0x8c940004  lw          $s4, 0x4($a0)
    ctx->pc = 0x36def0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x36def4: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x36def4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x36def8: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x36def8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x36defc: 0x8d02001c  lw          $v0, 0x1C($t0)
    ctx->pc = 0x36defcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x36df00: 0x8d050034  lw          $a1, 0x34($t0)
    ctx->pc = 0x36df00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 52)));
    // 0x36df04: 0x8d1e0038  lw          $fp, 0x38($t0)
    ctx->pc = 0x36df04u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 56)));
    // 0x36df08: 0x18e00099  blez        $a3, . + 4 + (0x99 << 2)
    ctx->pc = 0x36DF08u;
    {
        const bool branch_taken_0x36df08 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x36DF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DF08u;
        // 0x36df0c: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36df08) {
            ctx->pc = 0x36E170u;
            goto label_36e170;
        }
    }
    ctx->pc = 0x36DF10u;
    // 0x36df10: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x36df10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x36df14: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x36df14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x36df18: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x36df18u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36df1c: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x36df1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36df20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36df20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36df24: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36df24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36df28: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x36df28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36df2c: 0x0  nop
    ctx->pc = 0x36df2cu;
    // NOP
label_36df30:
    // 0x36df30: 0xc0c3966  jal         func_30E598
    ctx->pc = 0x36DF30u;
    SET_GPR_U32(ctx, 31, 0x36DF38u);
    ctx->pc = 0x36DF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DF30u;
    // 0x36df34: 0xc66c0000  lwc1        $f12, 0x0($s3) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x36DF30u, 0x36DF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DF38u;
label_36df38:
    // 0x36df38: 0xc66c0000  lwc1        $f12, 0x0($s3)
    ctx->pc = 0x36df38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36df3c: 0xc0c38f0  jal         func_30E3C0
    ctx->pc = 0x36DF3Cu;
    SET_GPR_U32(ctx, 31, 0x36DF44u);
    ctx->pc = 0x36DF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DF3Cu;
    // 0x36df40: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x36DF3Cu, 0x36DF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DF44u;
label_36df44:
    // 0x36df44: 0x27e9821  addu        $s3, $s3, $fp
    ctx->pc = 0x36df44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 30)));
    // 0x36df48: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x36df48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36df4c: 0x4600a147  neg.s       $f5, $f20
    ctx->pc = 0x36df4cu;
    ctx->f[5] = FPU_NEG_S(ctx->f[20]);
    // 0x36df50: 0xc6c60000  lwc1        $f6, 0x0($s6)
    ctx->pc = 0x36df50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x36df54: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x36df54u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x36df58: 0xc6e30004  lwc1        $f3, 0x4($s7)
    ctx->pc = 0x36df58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36df5c: 0x4602a102  mul.s       $f4, $f20, $f2
    ctx->pc = 0x36df5cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x36df60: 0xc6c10008  lwc1        $f1, 0x8($s6)
    ctx->pc = 0x36df60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36df64: 0x46060302  mul.s       $f12, $f0, $f6
    ctx->pc = 0x36df64u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x36df68: 0xc6c90004  lwc1        $f9, 0x4($s6)
    ctx->pc = 0x36df68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x36df6c: 0x4603a1c2  mul.s       $f7, $f20, $f3
    ctx->pc = 0x36df6cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x36df70: 0xc6e80008  lwc1        $f8, 0x8($s7)
    ctx->pc = 0x36df70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x36df74: 0x460102c2  mul.s       $f11, $f0, $f1
    ctx->pc = 0x36df74u;
    ctx->f[11] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x36df78: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x36df78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x36df7c: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x36df7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x36df80: 0x46090282  mul.s       $f10, $f0, $f9
    ctx->pc = 0x36df80u;
    ctx->f[10] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x36df84: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x36df84u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x36df88: 0x46062982  mul.s       $f6, $f5, $f6
    ctx->pc = 0x36df88u;
    ctx->f[6] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x36df8c: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x36df8cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x36df90: 0x4608a502  mul.s       $f20, $f20, $f8
    ctx->pc = 0x36df90u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[8]);
    // 0x36df94: 0x46092942  mul.s       $f5, $f5, $f9
    ctx->pc = 0x36df94u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[9]);
    // 0x36df98: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x36df98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x36df9c: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x36df9cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x36dfa0: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x36dfa0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x36dfa4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36dfa4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36dfa8: 0x460c2100  add.s       $f4, $f4, $f12
    ctx->pc = 0x36dfa8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[12]);
    // 0x36dfac: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x36dfacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x36dfb0: 0x460a39c0  add.s       $f7, $f7, $f10
    ctx->pc = 0x36dfb0u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[10]);
    // 0x36dfb4: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x36dfb4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x36dfb8: 0x460ba500  add.s       $f20, $f20, $f11
    ctx->pc = 0x36dfb8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[11]);
    // 0x36dfbc: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x36dfbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x36dfc0: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x36dfc0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x36dfc4: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x36dfc4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x36dfc8: 0xe7a70014  swc1        $f7, 0x14($sp)
    ctx->pc = 0x36dfc8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x36dfcc: 0x461518c2  mul.s       $f3, $f3, $f21
    ctx->pc = 0x36dfccu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[21]);
    // 0x36dfd0: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x36dfd0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x36dfd4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x36dfd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x36dfd8: 0x46152102  mul.s       $f4, $f4, $f21
    ctx->pc = 0x36dfd8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[21]);
    // 0x36dfdc: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x36dfdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36dfe0: 0x461539c2  mul.s       $f7, $f7, $f21
    ctx->pc = 0x36dfe0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[21]);
    // 0x36dfe4: 0x4615a502  mul.s       $f20, $f20, $f21
    ctx->pc = 0x36dfe4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    // 0x36dfe8: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x36dfe8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x36dfec: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x36dfecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x36dff0: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x36dff0u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x36dff4: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x36dff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36dff8: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x36dff8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x36dffc: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x36dffcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x36e000: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x36e000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36e004: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x36e004u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x36e008: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x36e008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x36e00c: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x36e00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36e010: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x36e010u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x36e014: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x36e014u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x36e018: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x36e018u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x36e01c: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x36e01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36e020: 0x460039c2  mul.s       $f7, $f7, $f0
    ctx->pc = 0x36e020u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x36e024: 0xe7a70014  swc1        $f7, 0x14($sp)
    ctx->pc = 0x36e024u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x36e028: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x36e028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36e02c: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x36e02cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x36e030: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x36e030u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x36e034: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x36e034u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x36e038: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x36e038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36e03c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x36e03cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x36e040: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x36e040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x36e044: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x36e044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36e048: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x36e048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36e04c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x36e04cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x36e050: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x36e050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36e054: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x36e054u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x36e058: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36e058u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36e05c: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x36e05cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x36e060: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x36e060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36e064: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x36e064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36e068: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x36e068u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x36e06c: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x36e06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36e070: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x36e070u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x36e074: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36e074u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36e078: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x36e078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x36e07c: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x36e07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36e080: 0x2148021  addu        $s0, $s0, $s4
    ctx->pc = 0x36e080u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x36e084: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x36e084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36e088: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x36e088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36e08c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x36e08cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x36e090: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36e090u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36e094: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x36e094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x36e098: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x36e098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36e09c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x36e09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36e0a0: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x36e0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36e0a4: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x36e0a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x36e0a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36e0a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36e0ac: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x36e0acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x36e0b0: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x36e0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36e0b4: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x36e0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36e0b8: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x36e0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36e0bc: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x36e0bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x36e0c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36e0c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36e0c4: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x36e0c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x36e0c8: 0x2148021  addu        $s0, $s0, $s4
    ctx->pc = 0x36e0c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x36e0cc: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x36e0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36e0d0: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x36e0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36e0d4: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x36e0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36e0d8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x36e0d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x36e0dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36e0dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36e0e0: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x36e0e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x36e0e4: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x36e0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36e0e8: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x36e0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36e0ec: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x36e0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36e0f0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x36e0f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x36e0f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36e0f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36e0f8: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x36e0f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x36e0fc: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x36e0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36e100: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x36e100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36e104: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x36e104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36e108: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x36e108u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x36e10c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36e10cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36e110: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x36e110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x36e114: 0x2148021  addu        $s0, $s0, $s4
    ctx->pc = 0x36e114u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x36e118: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x36e118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36e11c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x36e11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36e120: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x36e120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36e124: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x36e124u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x36e128: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x36e128u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36e12c: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x36e12cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x36e130: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x36e130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36e134: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x36e134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36e138: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x36e138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36e13c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x36e13cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x36e140: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x36e140u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36e144: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x36e144u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x36e148: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x36e148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36e14c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x36e14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36e150: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x36e150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36e154: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x36e154u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x36e158: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x36e158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36e15c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x36e15cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x36e160: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x36e160u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36e164: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x36e164u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x36e168: 0x16a0ff71  bnez        $s5, . + 4 + (-0x8F << 2)
    ctx->pc = 0x36E168u;
    {
        const bool branch_taken_0x36e168 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x36E16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E168u;
        // 0x36e16c: 0x2148021  addu        $s0, $s0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e168) {
            ctx->pc = 0x36DF30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36df30;
        }
    }
    ctx->pc = 0x36E170u;
label_36e170:
    // 0x36e170: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x36e170u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x36e174: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x36e174u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x36e178: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x36e178u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x36e17c: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x36e17cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x36e180: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x36e180u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x36e184: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x36e184u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x36e188: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x36e188u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x36e18c: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x36e18cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36e190: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x36e190u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36e194: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x36e194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36e198: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x36e198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x36e19c: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x36e19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x36e1a0: 0x3e00008  jr          $ra
    ctx->pc = 0x36E1A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E1A0u;
        // 0x36e1a4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E1A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E1A8u;
}

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

// Function: sub_0036DA00
// Address: 0x36da00 - 0x36dcb8
void sub_0036DA00_0x36da00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036DA00_0x36da00");
#endif

    switch (ctx->pc) {
        case 0x36da88u: goto label_36da88;
        case 0x36da90u: goto label_36da90;
        case 0x36da9cu: goto label_36da9c;
        default: break;
    }

    ctx->pc = 0x36da00u;

    // 0x36da00: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x36da00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x36da04: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x36da04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x36da08: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x36da08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x36da0c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x36da0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x36da10: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x36da10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x36da14: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x36da14u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36da18: 0xe7b600d0  swc1        $f22, 0xD0($sp)
    ctx->pc = 0x36da18u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x36da1c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x36da1cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36da20: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x36da20u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x36da24: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x36da24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x36da28: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x36da28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x36da2c: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x36da2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x36da30: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x36da30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x36da34: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x36da34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x36da38: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x36da38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x36da3c: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x36da3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x36da40: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x36da40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x36da44: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x36da44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x36da48: 0xc5000070  lwc1        $f0, 0x70($t0)
    ctx->pc = 0x36da48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36da4c: 0xc5010074  lwc1        $f1, 0x74($t0)
    ctx->pc = 0x36da4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36da50: 0x8c930004  lw          $s3, 0x4($a0)
    ctx->pc = 0x36da50u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x36da54: 0x46020582  mul.s       $f22, $f0, $f2
    ctx->pc = 0x36da54u;
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x36da58: 0x8d1e0038  lw          $fp, 0x38($t0)
    ctx->pc = 0x36da58u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 56)));
    // 0x36da5c: 0x46020d42  mul.s       $f21, $f1, $f2
    ctx->pc = 0x36da5cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x36da60: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x36da60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x36da64: 0x8d170008  lw          $s7, 0x8($t0)
    ctx->pc = 0x36da64u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x36da68: 0x8d020034  lw          $v0, 0x34($t0)
    ctx->pc = 0x36da68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 52)));
    // 0x36da6c: 0x18e00082  blez        $a3, . + 4 + (0x82 << 2)
    ctx->pc = 0x36DA6Cu;
    {
        const bool branch_taken_0x36da6c = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x36DA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DA6Cu;
        // 0x36da70: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36da6c) {
            ctx->pc = 0x36DC78u;
            goto label_36dc78;
        }
    }
    ctx->pc = 0x36DA74u;
    // 0x36da74: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x36da74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36da78: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x36da78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36da7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36da7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36da80: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36da80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36da84: 0x0  nop
    ctx->pc = 0x36da84u;
    // NOP
label_36da88:
    // 0x36da88: 0xc0c3966  jal         func_30E598
    ctx->pc = 0x36DA88u;
    SET_GPR_U32(ctx, 31, 0x36DA90u);
    ctx->pc = 0x36DA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DA88u;
    // 0x36da8c: 0xc64c0000  lwc1        $f12, 0x0($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x36DA88u, 0x36DA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DA90u;
label_36da90:
    // 0x36da90: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x36da90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36da94: 0xc0c38f0  jal         func_30E3C0
    ctx->pc = 0x36DA94u;
    SET_GPR_U32(ctx, 31, 0x36DA9Cu);
    ctx->pc = 0x36DA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DA94u;
    // 0x36da98: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x36DA94u, 0x36DA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DA9Cu;
label_36da9c:
    // 0x36da9c: 0x25e9021  addu        $s2, $s2, $fp
    ctx->pc = 0x36da9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 30)));
    // 0x36daa0: 0xc6c40000  lwc1        $f4, 0x0($s6)
    ctx->pc = 0x36daa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x36daa4: 0x4600a147  neg.s       $f5, $f20
    ctx->pc = 0x36daa4u;
    ctx->f[5] = FPU_NEG_S(ctx->f[20]);
    // 0x36daa8: 0xc6a60000  lwc1        $f6, 0x0($s5)
    ctx->pc = 0x36daa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x36daac: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x36daacu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x36dab0: 0xc6c80008  lwc1        $f8, 0x8($s6)
    ctx->pc = 0x36dab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x36dab4: 0x46040082  mul.s       $f2, $f0, $f4
    ctx->pc = 0x36dab4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x36dab8: 0xc6c30004  lwc1        $f3, 0x4($s6)
    ctx->pc = 0x36dab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36dabc: 0x46062b02  mul.s       $f12, $f5, $f6
    ctx->pc = 0x36dabcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x36dac0: 0xc6a10008  lwc1        $f1, 0x8($s5)
    ctx->pc = 0x36dac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36dac4: 0x4604a102  mul.s       $f4, $f20, $f4
    ctx->pc = 0x36dac4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
    // 0x36dac8: 0xc6a90004  lwc1        $f9, 0x4($s5)
    ctx->pc = 0x36dac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x36dacc: 0x4608a1c2  mul.s       $f7, $f20, $f8
    ctx->pc = 0x36daccu;
    ctx->f[7] = FPU_MUL_S(ctx->f[20], ctx->f[8]);
    // 0x36dad0: 0x460102c2  mul.s       $f11, $f0, $f1
    ctx->pc = 0x36dad0u;
    ctx->f[11] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x36dad4: 0x4603a502  mul.s       $f20, $f20, $f3
    ctx->pc = 0x36dad4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x36dad8: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x36dad8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x36dadc: 0x46060182  mul.s       $f6, $f0, $f6
    ctx->pc = 0x36dadcu;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x36dae0: 0x46090282  mul.s       $f10, $f0, $f9
    ctx->pc = 0x36dae0u;
    ctx->f[10] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x36dae4: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x36dae4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x36dae8: 0x46092942  mul.s       $f5, $f5, $f9
    ctx->pc = 0x36dae8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[9]);
    // 0x36daec: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x36daecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x36daf0: 0x460c1080  add.s       $f2, $f2, $f12
    ctx->pc = 0x36daf0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[12]);
    // 0x36daf4: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x36daf4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x36daf8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36daf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36dafc: 0x46161082  mul.s       $f2, $f2, $f22
    ctx->pc = 0x36dafcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[22]);
    // 0x36db00: 0x46062100  add.s       $f4, $f4, $f6
    ctx->pc = 0x36db00u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[6]);
    // 0x36db04: 0x460aa500  add.s       $f20, $f20, $f10
    ctx->pc = 0x36db04u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[10]);
    // 0x36db08: 0x460b39c0  add.s       $f7, $f7, $f11
    ctx->pc = 0x36db08u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[11]);
    // 0x36db0c: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x36db0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x36db10: 0x46152102  mul.s       $f4, $f4, $f21
    ctx->pc = 0x36db10u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[21]);
    // 0x36db14: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x36db14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x36db18: 0x461618c2  mul.s       $f3, $f3, $f22
    ctx->pc = 0x36db18u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[22]);
    // 0x36db1c: 0x4615a502  mul.s       $f20, $f20, $f21
    ctx->pc = 0x36db1cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    // 0x36db20: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x36db20u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x36db24: 0x461539c2  mul.s       $f7, $f7, $f21
    ctx->pc = 0x36db24u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[21]);
    // 0x36db28: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x36db28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x36db2c: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x36db2cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x36db30: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x36db30u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x36db34: 0xe7b40014  swc1        $f20, 0x14($sp)
    ctx->pc = 0x36db34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x36db38: 0xe7a70018  swc1        $f7, 0x18($sp)
    ctx->pc = 0x36db38u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x36db3c: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x36db3cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x36db40: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x36db40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36db44: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x36db44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x36db48: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x36db48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x36db4c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x36db4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36db50: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x36db50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36db54: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x36db54u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x36db58: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x36db58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36db5c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x36db5cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x36db60: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36db60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36db64: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x36db64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x36db68: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x36db68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36db6c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x36db6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36db70: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x36db70u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x36db74: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x36db74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36db78: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x36db78u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x36db7c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36db7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36db80: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x36db80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x36db84: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x36db84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x36db88: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x36db88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36db8c: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x36db8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36db90: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x36db90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36db94: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x36db94u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x36db98: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36db98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36db9c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x36db9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x36dba0: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x36dba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36dba4: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x36dba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36dba8: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x36dba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36dbac: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x36dbacu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x36dbb0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36dbb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36dbb4: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x36dbb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x36dbb8: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x36dbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36dbbc: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x36dbbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36dbc0: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x36dbc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36dbc4: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x36dbc4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x36dbc8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36dbc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36dbcc: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x36dbccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x36dbd0: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x36dbd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36dbd4: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x36dbd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x36dbd8: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x36dbd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36dbdc: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x36dbdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36dbe0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x36dbe0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x36dbe4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36dbe4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36dbe8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x36dbe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x36dbec: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x36dbecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36dbf0: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x36dbf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36dbf4: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x36dbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36dbf8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x36dbf8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x36dbfc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36dbfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36dc00: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x36dc00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x36dc04: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x36dc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36dc08: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x36dc08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36dc0c: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x36dc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36dc10: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x36dc10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x36dc14: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36dc14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36dc18: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x36dc18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x36dc1c: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x36dc1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x36dc20: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x36dc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36dc24: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x36dc24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36dc28: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x36dc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36dc2c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x36dc2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x36dc30: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x36dc30u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36dc34: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x36dc34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x36dc38: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x36dc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36dc3c: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x36dc3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36dc40: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x36dc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36dc44: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x36dc44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x36dc48: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x36dc48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36dc4c: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x36dc4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x36dc50: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x36dc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36dc54: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x36dc54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36dc58: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x36dc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36dc5c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x36dc5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x36dc60: 0x2378821  addu        $s1, $s1, $s7
    ctx->pc = 0x36dc60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x36dc64: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x36dc64u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36dc68: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x36dc68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x36dc6c: 0x1680ff86  bnez        $s4, . + 4 + (-0x7A << 2)
    ctx->pc = 0x36DC6Cu;
    {
        const bool branch_taken_0x36dc6c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x36DC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DC6Cu;
        // 0x36dc70: 0x2138021  addu        $s0, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36dc6c) {
            ctx->pc = 0x36DA88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36da88;
        }
    }
    ctx->pc = 0x36DC74u;
    // 0x36dc74: 0x0  nop
    ctx->pc = 0x36dc74u;
    // NOP
label_36dc78:
    // 0x36dc78: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x36dc78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x36dc7c: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x36dc7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x36dc80: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x36dc80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x36dc84: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x36dc84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x36dc88: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x36dc88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x36dc8c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x36dc8cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x36dc90: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x36dc90u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36dc94: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x36dc94u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36dc98: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x36dc98u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36dc9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x36dc9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36dca0: 0xc7b600d0  lwc1        $f22, 0xD0($sp)
    ctx->pc = 0x36dca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x36dca4: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x36dca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x36dca8: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x36dca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x36dcac: 0x3e00008  jr          $ra
    ctx->pc = 0x36DCACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DCACu;
        // 0x36dcb0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DCACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DCB4u;
    // 0x36dcb4: 0x0  nop
    ctx->pc = 0x36dcb4u;
    // NOP
    ctx->pc = 0x36dcb8u;
}

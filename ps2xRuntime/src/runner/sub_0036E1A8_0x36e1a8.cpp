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

// Function: sub_0036E1A8
// Address: 0x36e1a8 - 0x36e500
void sub_0036E1A8_0x36e1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036E1A8_0x36e1a8");
#endif

    switch (ctx->pc) {
        case 0x36e238u: goto label_36e238;
        case 0x36e240u: goto label_36e240;
        case 0x36e24cu: goto label_36e24c;
        default: break;
    }

    ctx->pc = 0x36e1a8u;

    // 0x36e1a8: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x36e1a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x36e1ac: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x36e1acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x36e1b0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x36e1b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x36e1b4: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x36e1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x36e1b8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x36e1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x36e1bc: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x36e1bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e1c0: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x36e1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x36e1c4: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x36e1c4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e1c8: 0xe7b600f0  swc1        $f22, 0xF0($sp)
    ctx->pc = 0x36e1c8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x36e1cc: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x36e1ccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e1d0: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x36e1d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x36e1d4: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x36e1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x36e1d8: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x36e1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x36e1dc: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x36e1dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x36e1e0: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x36e1e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x36e1e4: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x36e1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x36e1e8: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x36e1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x36e1ec: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x36e1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x36e1f0: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x36e1f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x36e1f4: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x36e1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x36e1f8: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x36e1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x36e1fc: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x36e1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x36e200: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x36e200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x36e204: 0xc6600070  lwc1        $f0, 0x70($s3)
    ctx->pc = 0x36e204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36e208: 0xc6610074  lwc1        $f1, 0x74($s3)
    ctx->pc = 0x36e208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36e20c: 0x8c940004  lw          $s4, 0x4($a0)
    ctx->pc = 0x36e20cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x36e210: 0x46020582  mul.s       $f22, $f0, $f2
    ctx->pc = 0x36e210u;
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x36e214: 0x8e7e0038  lw          $fp, 0x38($s3)
    ctx->pc = 0x36e214u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x36e218: 0x46020d42  mul.s       $f21, $f1, $f2
    ctx->pc = 0x36e218u;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x36e21c: 0x18e000a8  blez        $a3, . + 4 + (0xA8 << 2)
    ctx->pc = 0x36E21Cu;
    {
        const bool branch_taken_0x36e21c = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x36E220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E21Cu;
        // 0x36e220: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e21c) {
            ctx->pc = 0x36E4C0u;
            goto label_36e4c0;
        }
    }
    ctx->pc = 0x36E224u;
    // 0x36e224: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x36e224u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e228: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x36e228u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e22c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36e22cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e230: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36e230u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e234: 0x0  nop
    ctx->pc = 0x36e234u;
    // NOP
label_36e238:
    // 0x36e238: 0xc0c3966  jal         func_30E598
    ctx->pc = 0x36E238u;
    SET_GPR_U32(ctx, 31, 0x36E240u);
    ctx->pc = 0x36E23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E238u;
    // 0x36e23c: 0xc64c0000  lwc1        $f12, 0x0($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x36E238u, 0x36E240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E240u;
label_36e240:
    // 0x36e240: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x36e240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36e244: 0xc0c38f0  jal         func_30E3C0
    ctx->pc = 0x36E244u;
    SET_GPR_U32(ctx, 31, 0x36E24Cu);
    ctx->pc = 0x36E248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E244u;
    // 0x36e248: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x36E244u, 0x36E24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E24Cu;
label_36e24c:
    // 0x36e24c: 0x25e9021  addu        $s2, $s2, $fp
    ctx->pc = 0x36e24cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 30)));
    // 0x36e250: 0xc6e30000  lwc1        $f3, 0x0($s7)
    ctx->pc = 0x36e250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36e254: 0x4600a107  neg.s       $f4, $f20
    ctx->pc = 0x36e254u;
    ctx->f[4] = FPU_NEG_S(ctx->f[20]);
    // 0x36e258: 0xc6e50004  lwc1        $f5, 0x4($s7)
    ctx->pc = 0x36e258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x36e25c: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x36e25cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x36e260: 0xc6c70000  lwc1        $f7, 0x0($s6)
    ctx->pc = 0x36e260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x36e264: 0x4603a202  mul.s       $f8, $f20, $f3
    ctx->pc = 0x36e264u;
    ctx->f[8] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x36e268: 0xc6cb0004  lwc1        $f11, 0x4($s6)
    ctx->pc = 0x36e268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x36e26c: 0x4605a282  mul.s       $f10, $f20, $f5
    ctx->pc = 0x36e26cu;
    ctx->f[10] = FPU_MUL_S(ctx->f[20], ctx->f[5]);
    // 0x36e270: 0xc6c10008  lwc1        $f1, 0x8($s6)
    ctx->pc = 0x36e270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36e274: 0x46070382  mul.s       $f14, $f0, $f7
    ctx->pc = 0x36e274u;
    ctx->f[14] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x36e278: 0xc6e90008  lwc1        $f9, 0x8($s7)
    ctx->pc = 0x36e278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x36e27c: 0x460b0342  mul.s       $f13, $f0, $f11
    ctx->pc = 0x36e27cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[11]);
    // 0x36e280: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x36e280u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x36e284: 0xc6620068  lwc1        $f2, 0x68($s3)
    ctx->pc = 0x36e284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36e288: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x36e288u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x36e28c: 0xc666006c  lwc1        $f6, 0x6C($s3)
    ctx->pc = 0x36e28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x36e290: 0x46050142  mul.s       $f5, $f0, $f5
    ctx->pc = 0x36e290u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x36e294: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x36e294u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x36e298: 0x460721c2  mul.s       $f7, $f4, $f7
    ctx->pc = 0x36e298u;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x36e29c: 0x4609a502  mul.s       $f20, $f20, $f9
    ctx->pc = 0x36e29cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[9]);
    // 0x36e2a0: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x36e2a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x36e2a4: 0x460b2102  mul.s       $f4, $f4, $f11
    ctx->pc = 0x36e2a4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[11]);
    // 0x36e2a8: 0x460718c0  add.s       $f3, $f3, $f7
    ctx->pc = 0x36e2a8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[7]);
    // 0x36e2ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36e2acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36e2b0: 0x460e4200  add.s       $f8, $f8, $f14
    ctx->pc = 0x36e2b0u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[14]);
    // 0x36e2b4: 0x460ca500  add.s       $f20, $f20, $f12
    ctx->pc = 0x36e2b4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[12]);
    // 0x36e2b8: 0x46042940  add.s       $f5, $f5, $f4
    ctx->pc = 0x36e2b8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x36e2bc: 0x460d5280  add.s       $f10, $f10, $f13
    ctx->pc = 0x36e2bcu;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[13]);
    // 0x36e2c0: 0x46083042  mul.s       $f1, $f6, $f8
    ctx->pc = 0x36e2c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[8]);
    // 0x36e2c4: 0x46001102  mul.s       $f4, $f2, $f0
    ctx->pc = 0x36e2c4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x36e2c8: 0x46031242  mul.s       $f9, $f2, $f3
    ctx->pc = 0x36e2c8u;
    ctx->f[9] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x36e2cc: 0x461431c2  mul.s       $f7, $f6, $f20
    ctx->pc = 0x36e2ccu;
    ctx->f[7] = FPU_MUL_S(ctx->f[6], ctx->f[20]);
    // 0x36e2d0: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x36e2d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x36e2d4: 0x460a3182  mul.s       $f6, $f6, $f10
    ctx->pc = 0x36e2d4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[10]);
    // 0x36e2d8: 0x46014a40  add.s       $f9, $f9, $f1
    ctx->pc = 0x36e2d8u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[1]);
    // 0x36e2dc: 0x461618c2  mul.s       $f3, $f3, $f22
    ctx->pc = 0x36e2dcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[22]);
    // 0x36e2e0: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x36e2e0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x36e2e4: 0x46154202  mul.s       $f8, $f8, $f21
    ctx->pc = 0x36e2e4u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[21]);
    // 0x36e2e8: 0xe7a90020  swc1        $f9, 0x20($sp)
    ctx->pc = 0x36e2e8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x36e2ec: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x36e2ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x36e2f0: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x36e2f0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x36e2f4: 0x46072100  add.s       $f4, $f4, $f7
    ctx->pc = 0x36e2f4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
    // 0x36e2f8: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x36e2f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x36e2fc: 0x46162942  mul.s       $f5, $f5, $f22
    ctx->pc = 0x36e2fcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[22]);
    // 0x36e300: 0xe7a80010  swc1        $f8, 0x10($sp)
    ctx->pc = 0x36e300u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x36e304: 0x46155282  mul.s       $f10, $f10, $f21
    ctx->pc = 0x36e304u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[21]);
    // 0x36e308: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x36e308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x36e30c: 0x4615a502  mul.s       $f20, $f20, $f21
    ctx->pc = 0x36e30cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    // 0x36e310: 0xe7a40028  swc1        $f4, 0x28($sp)
    ctx->pc = 0x36e310u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x36e314: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x36e314u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x36e318: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x36e318u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
    // 0x36e31c: 0xe7aa0014  swc1        $f10, 0x14($sp)
    ctx->pc = 0x36e31cu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x36e320: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x36e320u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x36e324: 0x460818c1  sub.s       $f3, $f3, $f8
    ctx->pc = 0x36e324u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[8]);
    // 0x36e328: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x36e328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36e32c: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x36e32cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x36e330: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x36e330u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x36e334: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x36e334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x36e338: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x36e338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36e33c: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x36e33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36e340: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x36e340u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x36e344: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x36e344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36e348: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x36e348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36e34c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x36e34cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x36e350: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x36e350u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x36e354: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36e354u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36e358: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x36e358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x36e35c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x36e35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36e360: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x36e360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36e364: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x36e364u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x36e368: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x36e368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36e36c: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x36e36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36e370: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x36e370u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x36e374: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x36e374u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x36e378: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36e378u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36e37c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x36e37cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x36e380: 0x2148021  addu        $s0, $s0, $s4
    ctx->pc = 0x36e380u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x36e384: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x36e384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36e388: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x36e388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36e38c: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x36e38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36e390: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x36e390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36e394: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x36e394u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x36e398: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x36e398u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x36e39c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x36e39cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36e3a0: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x36e3a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x36e3a4: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x36e3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36e3a8: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x36e3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36e3ac: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x36e3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36e3b0: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x36e3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36e3b4: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x36e3b4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x36e3b8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x36e3b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x36e3bc: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x36e3bcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x36e3c0: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x36e3c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x36e3c4: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x36e3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36e3c8: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x36e3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36e3cc: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x36e3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36e3d0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x36e3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36e3d4: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x36e3d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x36e3d8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x36e3d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x36e3dc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x36e3dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36e3e0: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x36e3e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x36e3e4: 0x2148021  addu        $s0, $s0, $s4
    ctx->pc = 0x36e3e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x36e3e8: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x36e3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36e3ec: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x36e3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36e3f0: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x36e3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36e3f4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x36e3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36e3f8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x36e3f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x36e3fc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x36e3fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x36e400: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x36e400u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36e404: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x36e404u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x36e408: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x36e408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36e40c: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x36e40cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36e410: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x36e410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36e414: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x36e414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36e418: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x36e418u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x36e41c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36e41cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36e420: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x36e420u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x36e424: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x36e424u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x36e428: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x36e428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36e42c: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x36e42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36e430: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x36e430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36e434: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x36e434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36e438: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x36e438u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x36e43c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x36e43cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x36e440: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x36e440u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36e444: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x36e444u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x36e448: 0x2148021  addu        $s0, $s0, $s4
    ctx->pc = 0x36e448u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x36e44c: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x36e44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36e450: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x36e450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36e454: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x36e454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36e458: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x36e458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36e45c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x36e45cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x36e460: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x36e460u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x36e464: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x36e464u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36e468: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x36e468u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x36e46c: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x36e46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36e470: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x36e470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36e474: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x36e474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36e478: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x36e478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36e47c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x36e47cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x36e480: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x36e480u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x36e484: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x36e484u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x36e488: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x36e488u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x36e48c: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x36e48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36e490: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x36e490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36e494: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x36e494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36e498: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x36e498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36e49c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x36e49cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x36e4a0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x36e4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36e4a4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x36e4a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x36e4a8: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x36e4a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x36e4ac: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x36e4acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36e4b0: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x36e4b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x36e4b4: 0x16a0ff60  bnez        $s5, . + 4 + (-0xA0 << 2)
    ctx->pc = 0x36E4B4u;
    {
        const bool branch_taken_0x36e4b4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x36E4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E4B4u;
        // 0x36e4b8: 0x2148021  addu        $s0, $s0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e4b4) {
            ctx->pc = 0x36E238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36e238;
        }
    }
    ctx->pc = 0x36E4BCu;
    // 0x36e4bc: 0x0  nop
    ctx->pc = 0x36e4bcu;
    // NOP
label_36e4c0:
    // 0x36e4c0: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x36e4c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x36e4c4: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x36e4c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x36e4c8: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x36e4c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x36e4cc: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x36e4ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x36e4d0: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x36e4d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x36e4d4: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x36e4d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x36e4d8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x36e4d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x36e4dc: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x36e4dcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x36e4e0: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x36e4e0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36e4e4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x36e4e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36e4e8: 0xc7b600f0  lwc1        $f22, 0xF0($sp)
    ctx->pc = 0x36e4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x36e4ec: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x36e4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x36e4f0: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x36e4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x36e4f4: 0x3e00008  jr          $ra
    ctx->pc = 0x36E4F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E4F4u;
        // 0x36e4f8: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E4F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E4FCu;
    // 0x36e4fc: 0x0  nop
    ctx->pc = 0x36e4fcu;
    // NOP
    ctx->pc = 0x36e500u;
}

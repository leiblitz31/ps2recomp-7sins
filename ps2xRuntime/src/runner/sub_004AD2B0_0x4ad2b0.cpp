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

// Function: sub_004AD2B0
// Address: 0x4ad2b0 - 0x4ad7d8
void sub_004AD2B0_0x4ad2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AD2B0_0x4ad2b0");
#endif

    switch (ctx->pc) {
        case 0x4ad390u: goto label_4ad390;
        case 0x4ad3d0u: goto label_4ad3d0;
        case 0x4ad4e4u: goto label_4ad4e4;
        case 0x4ad544u: goto label_4ad544;
        default: break;
    }

    ctx->pc = 0x4ad2b0u;

    // 0x4ad2b0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x4ad2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x4ad2b4: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x4ad2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x4ad2b8: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x4ad2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x4ad2bc: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x4ad2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x4ad2c0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x4ad2c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad2c4: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x4ad2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x4ad2c8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x4ad2c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad2cc: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x4ad2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x4ad2d0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4ad2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x4ad2d4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4ad2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x4ad2d8: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x4ad2d8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad2dc: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x4ad2dcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x4ad2e0: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x4ad2e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x4ad2e4: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x4ad2e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x4ad2e8: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x4ad2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x4ad2ec: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x4ad2ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4ad2f0: 0x26300040  addiu       $s0, $s1, 0x40
    ctx->pc = 0x4ad2f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x4ad2f4: 0x2622004c  addiu       $v0, $s1, 0x4C
    ctx->pc = 0x4ad2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    // 0x4ad2f8: 0xc6150044  lwc1        $f21, 0x44($s0)
    ctx->pc = 0x4ad2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x4ad2fc: 0x26340064  addiu       $s4, $s1, 0x64
    ctx->pc = 0x4ad2fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
    // 0x4ad300: 0xc616003c  lwc1        $f22, 0x3C($s0)
    ctx->pc = 0x4ad300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x4ad304: 0x26350070  addiu       $s5, $s1, 0x70
    ctx->pc = 0x4ad304u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x4ad308: 0xc6140040  lwc1        $f20, 0x40($s0)
    ctx->pc = 0x4ad308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4ad30c: 0xc6270040  lwc1        $f7, 0x40($s1)
    ctx->pc = 0x4ad30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x4ad310: 0xc620004c  lwc1        $f0, 0x4C($s1)
    ctx->pc = 0x4ad310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4ad314: 0x460039c1  sub.s       $f7, $f7, $f0
    ctx->pc = 0x4ad314u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
    // 0x4ad318: 0xe7a70030  swc1        $f7, 0x30($sp)
    ctx->pc = 0x4ad318u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x4ad31c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x4ad31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4ad320: 0xc6060004  lwc1        $f6, 0x4($s0)
    ctx->pc = 0x4ad320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x4ad324: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x4ad324u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x4ad328: 0xe7a60034  swc1        $f6, 0x34($sp)
    ctx->pc = 0x4ad328u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x4ad32c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x4ad32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4ad330: 0xc6050008  lwc1        $f5, 0x8($s0)
    ctx->pc = 0x4ad330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4ad334: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x4ad334u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x4ad338: 0xe7a50038  swc1        $f5, 0x38($sp)
    ctx->pc = 0x4ad338u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x4ad33c: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x4ad33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4ad340: 0xc643000c  lwc1        $f3, 0xC($s2)
    ctx->pc = 0x4ad340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4ad344: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x4ad344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4ad348: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x4ad348u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x4ad34c: 0xc6440010  lwc1        $f4, 0x10($s2)
    ctx->pc = 0x4ad34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4ad350: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x4ad350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4ad354: 0xc6430014  lwc1        $f3, 0x14($s2)
    ctx->pc = 0x4ad354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4ad358: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x4ad358u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x4ad35c: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x4ad35cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x4ad360: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x4ad360u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x4ad364: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x4ad364u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x4ad368: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x4ad368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x4ad36c: 0x46070841  sub.s       $f1, $f1, $f7
    ctx->pc = 0x4ad36cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
    // 0x4ad370: 0x46061081  sub.s       $f2, $f2, $f6
    ctx->pc = 0x4ad370u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
    // 0x4ad374: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x4ad374u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x4ad378: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x4ad378u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x4ad37c: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x4ad37cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x4ad380: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x4ad380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x4ad384: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4ad384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4ad388: 0xc12ac64  jal         func_4AB190
    ctx->pc = 0x4AD388u;
    SET_GPR_U32(ctx, 31, 0x4AD390u);
    ctx->pc = 0x4AD38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD388u;
    // 0x4ad38c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB190u, 0x4AD388u, 0x4AD390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD390u;
label_4ad390:
    // 0x4ad390: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x4ad390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4ad394: 0xc6200040  lwc1        $f0, 0x40($s1)
    ctx->pc = 0x4ad394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4ad398: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x4ad398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4ad39c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x4ad39cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x4ad3a0: 0xc6430008  lwc1        $f3, 0x8($s2)
    ctx->pc = 0x4ad3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4ad3a4: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x4ad3a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x4ad3a8: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x4ad3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4ad3ac: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x4ad3acu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x4ad3b0: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x4ad3b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x4ad3b4: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x4ad3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4ad3b8: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x4ad3b8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x4ad3bc: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x4ad3bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x4ad3c0: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x4ad3c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4ad3c4: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x4ad3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x4ad3c8: 0xc12ac64  jal         func_4AB190
    ctx->pc = 0x4AD3C8u;
    SET_GPR_U32(ctx, 31, 0x4AD3D0u);
    ctx->pc = 0x4AD3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD3C8u;
    // 0x4ad3cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB190u, 0x4AD3C8u, 0x4AD3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD3D0u;
label_4ad3d0:
    // 0x4ad3d0: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x4ad3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4ad3d4: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x4ad3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4ad3d8: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x4ad3d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
    // 0x4ad3dc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x4ad3dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4ad3e0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4ad3e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x4ad3e4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x4ad3e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4ad3e8: 0x0  nop
    ctx->pc = 0x4ad3e8u;
    // NOP
    // 0x4ad3ec: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x4AD3ECu;
    {
        const bool branch_taken_0x4ad3ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4AD3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD3ECu;
        // 0x4ad3f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad3ec) {
            ctx->pc = 0x4AD400u;
            goto label_4ad400;
        }
    }
    ctx->pc = 0x4AD3F4u;
    // 0x4ad3f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4AD3F4u;
    {
        const bool branch_taken_0x4ad3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD3F4u;
        // 0x4ad3f8: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad3f4) {
            ctx->pc = 0x4AD418u;
            goto label_4ad418;
        }
    }
    ctx->pc = 0x4AD3FCu;
    // 0x4ad3fc: 0x0  nop
    ctx->pc = 0x4ad3fcu;
    // NOP
label_4ad400:
    // 0x4ad400: 0x3c01c316  lui         $at, 0xC316
    ctx->pc = 0x4ad400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49942 << 16));
    // 0x4ad404: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4ad404u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4ad408: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4ad408u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4ad40c: 0x0  nop
    ctx->pc = 0x4ad40cu;
    // NOP
    // 0x4ad410: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x4AD410u;
    {
        const bool branch_taken_0x4ad410 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ad410) {
            ctx->pc = 0x4AD414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AD410u;
            // 0x4ad414: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AD418u;
            goto label_4ad418;
        }
    }
    ctx->pc = 0x4AD418u;
label_4ad418:
    // 0x4ad418: 0x3c0143aa  lui         $at, 0x43AA
    ctx->pc = 0x4ad418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17322 << 16));
    // 0x4ad41c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4ad41cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4ad420: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x4ad420u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x4ad424: 0xc7a30044  lwc1        $f3, 0x44($sp)
    ctx->pc = 0x4ad424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4ad428: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x4ad428u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x4ad42c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4ad42cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x4ad430: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x4ad430u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x4ad434: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x4ad434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x4ad438: 0xc642001c  lwc1        $f2, 0x1C($s2)
    ctx->pc = 0x4ad438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4ad43c: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x4ad43cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4ad440: 0x0  nop
    ctx->pc = 0x4ad440u;
    // NOP
    // 0x4ad444: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x4AD444u;
    {
        const bool branch_taken_0x4ad444 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ad444) {
            ctx->pc = 0x4AD448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AD444u;
            // 0x4ad448: 0xc6410018  lwc1        $f1, 0x18($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AD454u;
            goto label_4ad454;
        }
    }
    ctx->pc = 0x4AD44Cu;
    // 0x4ad44c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x4AD44Cu;
    {
        const bool branch_taken_0x4ad44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD44Cu;
        // 0x4ad450: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad44c) {
            ctx->pc = 0x4AD488u;
            goto label_4ad488;
        }
    }
    ctx->pc = 0x4AD454u;
label_4ad454:
    // 0x4ad454: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x4ad454u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4ad458: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4ad458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4ad45c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4ad45cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4ad460: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
    ctx->pc = 0x4AD460u;
    {
        const bool branch_taken_0x4ad460 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ad460) {
            ctx->pc = 0x4AD464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AD460u;
            // 0x4ad464: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AD488u;
            goto label_4ad488;
        }
    }
    ctx->pc = 0x4AD468u;
    // 0x4ad468: 0x46011801  sub.s       $f0, $f3, $f1
    ctx->pc = 0x4ad468u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x4ad46c: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x4ad46cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x4ad470: 0x46160042  mul.s       $f1, $f0, $f22
    ctx->pc = 0x4ad470u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x4ad474: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x4ad474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x4ad478: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x4ad478u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x4ad47c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x4ad47cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x4ad480: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x4ad480u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x4ad484: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x4ad484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_4ad488:
    // 0x4ad488: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x4ad488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4ad48c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4ad48cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4ad490: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x4ad490u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4ad494: 0x0  nop
    ctx->pc = 0x4ad494u;
    // NOP
    // 0x4ad498: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x4AD498u;
    {
        const bool branch_taken_0x4ad498 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4AD49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD498u;
        // 0x4ad49c: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad498) {
            ctx->pc = 0x4AD4DCu;
            goto label_4ad4dc;
        }
    }
    ctx->pc = 0x4AD4A0u;
    // 0x4ad4a0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x4ad4a0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4ad4a4: 0x0  nop
    ctx->pc = 0x4ad4a4u;
    // NOP
    // 0x4ad4a8: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x4AD4A8u;
    {
        const bool branch_taken_0x4ad4a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4AD4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD4A8u;
        // 0x4ad4ac: 0xc7a00018  lwc1        $f0, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad4a8) {
            ctx->pc = 0x4AD4DCu;
            goto label_4ad4dc;
        }
    }
    ctx->pc = 0x4AD4B0u;
    // 0x4ad4b0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x4ad4b0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4ad4b4: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x4AD4B4u;
    {
        const bool branch_taken_0x4ad4b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ad4b4) {
            ctx->pc = 0x4AD4DCu;
            goto label_4ad4dc;
        }
    }
    ctx->pc = 0x4AD4BCu;
    // 0x4ad4bc: 0x6a820007  ldl         $v0, 0x7($s4)
    ctx->pc = 0x4ad4bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4ad4c0: 0x6e820000  ldr         $v0, 0x0($s4)
    ctx->pc = 0x4ad4c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4ad4c4: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x4ad4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x4ad4c8: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x4ad4c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ad4cc: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x4ad4ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ad4d0: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x4ad4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x4ad4d4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4AD4D4u;
    {
        const bool branch_taken_0x4ad4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD4D4u;
        // 0x4ad4d8: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad4d4) {
            ctx->pc = 0x4AD4ECu;
            goto label_4ad4ec;
        }
    }
    ctx->pc = 0x4AD4DCu;
label_4ad4dc:
    // 0x4ad4dc: 0xc104cf2  jal         func_4133C8
    ctx->pc = 0x4AD4DCu;
    SET_GPR_U32(ctx, 31, 0x4AD4E4u);
    ctx->pc = 0x4AD4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD4DCu;
    // 0x4ad4e0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4133C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133C8u, 0x4AD4DCu, 0x4AD4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD4E4u;
label_4ad4e4:
    // 0x4ad4e4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x4ad4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4ad4e8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4ad4e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4ad4ec:
    // 0x4ad4ec: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x4ad4ecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4ad4f0: 0x0  nop
    ctx->pc = 0x4ad4f0u;
    // NOP
    // 0x4ad4f4: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x4AD4F4u;
    {
        const bool branch_taken_0x4ad4f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4AD4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD4F4u;
        // 0x4ad4f8: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad4f4) {
            ctx->pc = 0x4AD538u;
            goto label_4ad538;
        }
    }
    ctx->pc = 0x4AD4FCu;
    // 0x4ad4fc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x4ad4fcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4ad500: 0x0  nop
    ctx->pc = 0x4ad500u;
    // NOP
    // 0x4ad504: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x4AD504u;
    {
        const bool branch_taken_0x4ad504 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4AD508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD504u;
        // 0x4ad508: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad504) {
            ctx->pc = 0x4AD538u;
            goto label_4ad538;
        }
    }
    ctx->pc = 0x4AD50Cu;
    // 0x4ad50c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x4ad50cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4ad510: 0x0  nop
    ctx->pc = 0x4ad510u;
    // NOP
    // 0x4ad514: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x4AD514u;
    {
        const bool branch_taken_0x4ad514 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4AD518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD514u;
        // 0x4ad518: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad514) {
            ctx->pc = 0x4AD53Cu;
            goto label_4ad53c;
        }
    }
    ctx->pc = 0x4AD51Cu;
    // 0x4ad51c: 0x6a820007  ldl         $v0, 0x7($s4)
    ctx->pc = 0x4ad51cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4ad520: 0x6e820000  ldr         $v0, 0x0($s4)
    ctx->pc = 0x4ad520u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4ad524: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x4ad524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x4ad528: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x4ad528u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ad52c: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x4ad52cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ad530: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4AD530u;
    {
        const bool branch_taken_0x4ad530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD530u;
        // 0x4ad534: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad530) {
            ctx->pc = 0x4AD544u;
            goto label_4ad544;
        }
    }
    ctx->pc = 0x4AD538u;
label_4ad538:
    // 0x4ad538: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4ad538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4ad53c:
    // 0x4ad53c: 0xc104cf2  jal         func_4133C8
    ctx->pc = 0x4AD53Cu;
    SET_GPR_U32(ctx, 31, 0x4AD544u);
    ctx->pc = 0x4AD540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD53Cu;
    // 0x4ad540: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4133C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133C8u, 0x4AD53Cu, 0x4AD544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD544u;
label_4ad544:
    // 0x4ad544: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x4ad544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4ad548: 0xc6a40004  lwc1        $f4, 0x4($s5)
    ctx->pc = 0x4ad548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4ad54c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x4ad54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4ad550: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x4ad550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4ad554: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4ad554u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4ad558: 0xc6a30008  lwc1        $f3, 0x8($s5)
    ctx->pc = 0x4ad558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4ad55c: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x4ad55cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x4ad560: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x4ad560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4ad564: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x4ad564u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x4ad568: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x4ad568u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x4ad56c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x4ad56cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x4ad570: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x4ad570u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x4ad574: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x4ad574u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4ad578: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4ad578u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4ad57c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x4ad57cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x4ad580: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x4ad580u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x4ad584: 0x46022034  c.lt.s      $f4, $f2
    ctx->pc = 0x4ad584u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4ad588: 0x0  nop
    ctx->pc = 0x4ad588u;
    // NOP
    // 0x4ad58c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x4AD58Cu;
    {
        const bool branch_taken_0x4ad58c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4AD590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD58Cu;
        // 0x4ad590: 0xe6640008  swc1        $f4, 0x8($s3) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad58c) {
            ctx->pc = 0x4AD59Cu;
            goto label_4ad59c;
        }
    }
    ctx->pc = 0x4AD594u;
    // 0x4ad594: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4AD594u;
    {
        const bool branch_taken_0x4ad594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD594u;
        // 0x4ad598: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad594) {
            ctx->pc = 0x4AD5B4u;
            goto label_4ad5b4;
        }
    }
    ctx->pc = 0x4AD59Cu;
label_4ad59c:
    // 0x4ad59c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4ad59cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4ad5a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4ad5a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4ad5a4: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x4ad5a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4ad5a8: 0x0  nop
    ctx->pc = 0x4ad5a8u;
    // NOP
    // 0x4ad5ac: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x4AD5ACu;
    {
        const bool branch_taken_0x4ad5ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ad5ac) {
            ctx->pc = 0x4AD5B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AD5ACu;
            // 0x4ad5b0: 0x46002006  mov.s       $f0, $f4 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AD5B4u;
            goto label_4ad5b4;
        }
    }
    ctx->pc = 0x4AD5B4u;
label_4ad5b4:
    // 0x4ad5b4: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x4ad5b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x4ad5b8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x4ad5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4ad5bc: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x4ad5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4ad5c0: 0xc6830004  lwc1        $f3, 0x4($s4)
    ctx->pc = 0x4ad5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4ad5c4: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x4ad5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4ad5c8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4ad5c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4ad5cc: 0xc6840008  lwc1        $f4, 0x8($s4)
    ctx->pc = 0x4ad5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4ad5d0: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x4ad5d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x4ad5d4: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x4ad5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4ad5d8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x4ad5d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x4ad5dc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x4ad5dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x4ad5e0: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x4ad5e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x4ad5e4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x4ad5e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x4ad5e8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x4ad5e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4ad5ec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4ad5ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4ad5f0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x4ad5f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x4ad5f4: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x4ad5f4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x4ad5f8: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x4ad5f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4ad5fc: 0x0  nop
    ctx->pc = 0x4ad5fcu;
    // NOP
    // 0x4ad600: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x4AD600u;
    {
        const bool branch_taken_0x4ad600 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4AD604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD600u;
        // 0x4ad604: 0xe663000c  swc1        $f3, 0xC($s3) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad600) {
            ctx->pc = 0x4AD610u;
            goto label_4ad610;
        }
    }
    ctx->pc = 0x4AD608u;
    // 0x4ad608: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4AD608u;
    {
        const bool branch_taken_0x4ad608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD608u;
        // 0x4ad60c: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad608) {
            ctx->pc = 0x4AD628u;
            goto label_4ad628;
        }
    }
    ctx->pc = 0x4AD610u;
label_4ad610:
    // 0x4ad610: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4ad610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4ad614: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4ad614u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4ad618: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x4ad618u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4ad61c: 0x0  nop
    ctx->pc = 0x4ad61cu;
    // NOP
    // 0x4ad620: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x4AD620u;
    {
        const bool branch_taken_0x4ad620 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ad620) {
            ctx->pc = 0x4AD624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AD620u;
            // 0x4ad624: 0x46001806  mov.s       $f0, $f3 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AD628u;
            goto label_4ad628;
        }
    }
    ctx->pc = 0x4AD628u;
label_4ad628:
    // 0x4ad628: 0xe660000c  swc1        $f0, 0xC($s3)
    ctx->pc = 0x4ad628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x4ad62c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x4ad62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4ad630: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x4ad630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4ad634: 0xc6a30004  lwc1        $f3, 0x4($s5)
    ctx->pc = 0x4ad634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4ad638: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x4ad638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4ad63c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4ad63cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4ad640: 0xc6a40008  lwc1        $f4, 0x8($s5)
    ctx->pc = 0x4ad640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4ad644: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x4ad644u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x4ad648: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x4ad648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4ad64c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x4ad64cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x4ad650: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x4ad650u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x4ad654: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x4ad654u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x4ad658: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x4ad658u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x4ad65c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x4ad65cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4ad660: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4ad660u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4ad664: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x4ad664u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x4ad668: 0x46001841  sub.s       $f1, $f3, $f0
    ctx->pc = 0x4ad668u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x4ad66c: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x4ad66cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4ad670: 0x0  nop
    ctx->pc = 0x4ad670u;
    // NOP
    // 0x4ad674: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x4AD674u;
    {
        const bool branch_taken_0x4ad674 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4AD678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD674u;
        // 0x4ad678: 0xe6610010  swc1        $f1, 0x10($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad674) {
            ctx->pc = 0x4AD684u;
            goto label_4ad684;
        }
    }
    ctx->pc = 0x4AD67Cu;
    // 0x4ad67c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4AD67Cu;
    {
        const bool branch_taken_0x4ad67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD67Cu;
        // 0x4ad680: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad67c) {
            ctx->pc = 0x4AD69Cu;
            goto label_4ad69c;
        }
    }
    ctx->pc = 0x4AD684u;
label_4ad684:
    // 0x4ad684: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4ad684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4ad688: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4ad688u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4ad68c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4ad68cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4ad690: 0x0  nop
    ctx->pc = 0x4ad690u;
    // NOP
    // 0x4ad694: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x4AD694u;
    {
        const bool branch_taken_0x4ad694 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ad694) {
            ctx->pc = 0x4AD698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AD694u;
            // 0x4ad698: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AD69Cu;
            goto label_4ad69c;
        }
    }
    ctx->pc = 0x4AD69Cu;
label_4ad69c:
    // 0x4ad69c: 0xe6600010  swc1        $f0, 0x10($s3)
    ctx->pc = 0x4ad69cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
    // 0x4ad6a0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x4ad6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4ad6a4: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x4ad6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4ad6a8: 0xc6830004  lwc1        $f3, 0x4($s4)
    ctx->pc = 0x4ad6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4ad6ac: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x4ad6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4ad6b0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4ad6b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4ad6b4: 0xc6840008  lwc1        $f4, 0x8($s4)
    ctx->pc = 0x4ad6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4ad6b8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x4ad6b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x4ad6bc: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x4ad6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4ad6c0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x4ad6c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x4ad6c4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x4ad6c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x4ad6c8: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x4ad6c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x4ad6cc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x4ad6ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x4ad6d0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x4ad6d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4ad6d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4ad6d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4ad6d8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x4ad6d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x4ad6dc: 0x46001841  sub.s       $f1, $f3, $f0
    ctx->pc = 0x4ad6dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x4ad6e0: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x4ad6e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4ad6e4: 0x0  nop
    ctx->pc = 0x4ad6e4u;
    // NOP
    // 0x4ad6e8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x4AD6E8u;
    {
        const bool branch_taken_0x4ad6e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4AD6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD6E8u;
        // 0x4ad6ec: 0xe6610014  swc1        $f1, 0x14($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad6e8) {
            ctx->pc = 0x4AD6F8u;
            goto label_4ad6f8;
        }
    }
    ctx->pc = 0x4AD6F0u;
    // 0x4ad6f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4AD6F0u;
    {
        const bool branch_taken_0x4ad6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD6F0u;
        // 0x4ad6f4: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad6f0) {
            ctx->pc = 0x4AD710u;
            goto label_4ad710;
        }
    }
    ctx->pc = 0x4AD6F8u;
label_4ad6f8:
    // 0x4ad6f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4ad6f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4ad6fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4ad6fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4ad700: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4ad700u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4ad704: 0x0  nop
    ctx->pc = 0x4ad704u;
    // NOP
    // 0x4ad708: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x4AD708u;
    {
        const bool branch_taken_0x4ad708 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ad708) {
            ctx->pc = 0x4AD70Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AD708u;
            // 0x4ad70c: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AD710u;
            goto label_4ad710;
        }
    }
    ctx->pc = 0x4AD710u;
label_4ad710:
    // 0x4ad710: 0x26c3ffff  addiu       $v1, $s6, -0x1
    ctx->pc = 0x4ad710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x4ad714: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x4ad714u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x4ad718: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x4AD718u;
    {
        const bool branch_taken_0x4ad718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD718u;
        // 0x4ad71c: 0xe6600014  swc1        $f0, 0x14($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad718) {
            ctx->pc = 0x4AD7A4u;
            goto label_4ad7a4;
        }
    }
    ctx->pc = 0x4AD720u;
    // 0x4ad720: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x4ad720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x4ad724: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4ad724u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4ad728: 0x24422c30  addiu       $v0, $v0, 0x2C30
    ctx->pc = 0x4ad728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11312));
    // 0x4ad72c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4ad72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4ad730: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4ad730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4ad734: 0x800008  jr          $a0
    ctx->pc = 0x4AD734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4AD73Cu: goto label_4ad73c;
            case 0x4AD770u: goto label_4ad770;
            case 0x4AD7A4u: goto label_4ad7a4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AD734u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4AD73Cu;
label_4ad73c:
    // 0x4ad73c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x4ad73cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x4ad740: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4ad740u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4ad744: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x4ad744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4ad748: 0xc6620010  lwc1        $f2, 0x10($s3)
    ctx->pc = 0x4ad748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4ad74c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x4ad74cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x4ad750: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x4ad750u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x4ad754: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x4ad754u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x4ad758: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x4ad758u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x4ad75c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x4ad75cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x4ad760: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x4ad760u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x4ad764: 0xe6610008  swc1        $f1, 0x8($s3)
    ctx->pc = 0x4ad764u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x4ad768: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x4AD768u;
    {
        const bool branch_taken_0x4ad768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD768u;
        // 0x4ad76c: 0xe6620010  swc1        $f2, 0x10($s3) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad768) {
            ctx->pc = 0x4AD7A4u;
            goto label_4ad7a4;
        }
    }
    ctx->pc = 0x4AD770u;
label_4ad770:
    // 0x4ad770: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x4ad770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x4ad774: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x4ad774u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x4ad778: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x4ad778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4ad77c: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x4ad77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4ad780: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x4ad780u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x4ad784: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x4ad784u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x4ad788: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x4ad788u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4ad78c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x4ad78cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x4ad790: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x4ad790u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x4ad794: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x4ad794u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x4ad798: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x4ad798u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x4ad79c: 0xe6600010  swc1        $f0, 0x10($s3)
    ctx->pc = 0x4ad79cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
    // 0x4ad7a0: 0xe6610008  swc1        $f1, 0x8($s3)
    ctx->pc = 0x4ad7a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_4ad7a4:
    // 0x4ad7a4: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x4ad7a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x4ad7a8: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x4ad7a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x4ad7ac: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x4ad7acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4ad7b0: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x4ad7b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4ad7b4: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x4ad7b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4ad7b8: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x4ad7b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4ad7bc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4ad7bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4ad7c0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4ad7c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4ad7c4: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x4ad7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x4ad7c8: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x4ad7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x4ad7cc: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x4ad7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4ad7d0: 0x3e00008  jr          $ra
    ctx->pc = 0x4AD7D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AD7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD7D0u;
        // 0x4ad7d4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AD7D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AD7D8u;
}

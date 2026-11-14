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

// Function: sub_001C3230
// Address: 0x1c3230 - 0x1c35b0
void sub_001C3230_0x1c3230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3230_0x1c3230");
#endif

    switch (ctx->pc) {
        case 0x1c32a8u: goto label_1c32a8;
        case 0x1c32b8u: goto label_1c32b8;
        case 0x1c32ccu: goto label_1c32cc;
        case 0x1c32f0u: goto label_1c32f0;
        case 0x1c33d4u: goto label_1c33d4;
        case 0x1c33e0u: goto label_1c33e0;
        case 0x1c3490u: goto label_1c3490;
        case 0x1c356cu: goto label_1c356c;
        default: break;
    }

    ctx->pc = 0x1c3230u;

    // 0x1c3230: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1c3230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1c3234: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c3234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c3238: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c3238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c323c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c323cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c3240: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c3240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c3244: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x1c3244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x1c3248: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x1c3248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x1c324c: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x1c324cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x1c3250: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1c3250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c3254: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3254u;
    {
        const bool branch_taken_0x1c3254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3254) {
            ctx->pc = 0x1C3268u;
            goto label_1c3268;
        }
    }
    ctx->pc = 0x1C325Cu;
    // 0x1c325c: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1c325cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c3260: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3260u;
    {
        const bool branch_taken_0x1c3260 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3260) {
            ctx->pc = 0x1C3270u;
            goto label_1c3270;
        }
    }
    ctx->pc = 0x1C3268u;
label_1c3268:
    // 0x1c3268: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x1C3268u;
    {
        const bool branch_taken_0x1c3268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3268) {
            ctx->pc = 0x1C358Cu;
            goto label_1c358c;
        }
    }
    ctx->pc = 0x1C3270u;
label_1c3270:
    // 0x1c3270: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1c3270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c3274: 0x27a20048  addiu       $v0, $sp, 0x48
    ctx->pc = 0x1c3274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1c3278: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1c3278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c327c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1c327cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c3280: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x1c3280u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1c3284: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1c3284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1c3288: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x1c3288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x1c328c: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x1c328cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x1c3290: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1c3290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c3294: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c3294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3298: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c3298u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c329c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c329cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c32a0: 0xc070240  jal         func_1C0900
    ctx->pc = 0x1C32A0u;
    SET_GPR_U32(ctx, 31, 0x1C32A8u);
    ctx->pc = 0x1C0900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0900u, 0x1C32A0u, 0x1C32A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C32A8u;
label_1c32a8:
    // 0x1c32a8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c32a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c32ac: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1c32acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c32b0: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1C32B0u;
    SET_GPR_U32(ctx, 31, 0x1C32B8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1C32B0u, 0x1C32B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C32B8u;
label_1c32b8:
    // 0x1c32b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c32b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c32bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c32bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c32c0: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x1c32c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x1c32c4: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x1C32C4u;
    SET_GPR_U32(ctx, 31, 0x1C32CCu);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x1C32C4u, 0x1C32CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C32CCu;
label_1c32cc:
    // 0x1c32cc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c32ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c32d0: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1c32d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c32d4: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x1c32d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1c32d8: 0x27a6006c  addiu       $a2, $sp, 0x6C
    ctx->pc = 0x1c32d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1c32dc: 0x27a70068  addiu       $a3, $sp, 0x68
    ctx->pc = 0x1c32dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1c32e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c32e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c32e4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c32e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c32e8: 0xc0700c0  jal         func_1C0300
    ctx->pc = 0x1C32E8u;
    SET_GPR_U32(ctx, 31, 0x1C32F0u);
    ctx->pc = 0x1C0300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0300u, 0x1C32E8u, 0x1C32F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C32F0u;
label_1c32f0:
    // 0x1c32f0: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1c32f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c32f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c32f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c32f8: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C32F8u;
    {
        const bool branch_taken_0x1c32f8 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1c32f8) {
            ctx->pc = 0x1C3314u;
            goto label_1c3314;
        }
    }
    ctx->pc = 0x1C3300u;
    // 0x1c3300: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c3300u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3304: 0x0  nop
    ctx->pc = 0x1c3304u;
    // NOP
    // 0x1c3308: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1c3308u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c330c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C330Cu;
    {
        const bool branch_taken_0x1c330c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c330c) {
            ctx->pc = 0x1C3330u;
            goto label_1c3330;
        }
    }
    ctx->pc = 0x1C3314u;
label_1c3314:
    // 0x1c3314: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x1c3314u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1c3318: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1c3318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1c331c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1c331cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c3320: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1c3320u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3324: 0x0  nop
    ctx->pc = 0x1c3324u;
    // NOP
    // 0x1c3328: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1c3328u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c332c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1c332cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1c3330:
    // 0x1c3330: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1c3330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c3334: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c3334u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c3338: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x1c3338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1c333c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1c333cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c3340: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c3340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c3344: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C3344u;
    {
        const bool branch_taken_0x1c3344 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1c3344) {
            ctx->pc = 0x1C3360u;
            goto label_1c3360;
        }
    }
    ctx->pc = 0x1C334Cu;
    // 0x1c334c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c334cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3350: 0x0  nop
    ctx->pc = 0x1c3350u;
    // NOP
    // 0x1c3354: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1c3354u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c3358: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C3358u;
    {
        const bool branch_taken_0x1c3358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3358) {
            ctx->pc = 0x1C337Cu;
            goto label_1c337c;
        }
    }
    ctx->pc = 0x1C3360u;
label_1c3360:
    // 0x1c3360: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x1c3360u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1c3364: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1c3364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1c3368: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1c3368u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c336c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1c336cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3370: 0x0  nop
    ctx->pc = 0x1c3370u;
    // NOP
    // 0x1c3374: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1c3374u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c3378: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1c3378u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1c337c:
    // 0x1c337c: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1c337cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c3380: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c3380u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c3384: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1c3384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1c3388: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1c3388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c338c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1c338cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c3390: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c3390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c3394: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c3394u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c3398: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x1c3398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c339c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1c339cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1c33a0: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1c33a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1c33a4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1c33a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1c33a8: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1c33a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c33ac: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x1c33acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c33b0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c33b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c33b4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c33b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c33b8: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1c33b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c33bc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1c33bcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1c33c0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1c33c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1c33c4: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1c33c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1c33c8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c33c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c33cc: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x1C33CCu;
    {
        const bool branch_taken_0x1c33cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c33cc) {
            ctx->pc = 0x1C3580u;
            goto label_1c3580;
        }
    }
    ctx->pc = 0x1C33D4u;
label_1c33d4:
    // 0x1c33d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c33d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c33d8: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x1C33D8u;
    {
        const bool branch_taken_0x1c33d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c33d8) {
            ctx->pc = 0x1C3570u;
            goto label_1c3570;
        }
    }
    ctx->pc = 0x1C33E0u;
label_1c33e0:
    // 0x1c33e0: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x1c33e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1c33e4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1c33e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1c33e8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1c33e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1c33ec: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1c33ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c33f0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1c33f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c33f4: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1c33f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1c33f8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1c33f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1c33fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c33fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c3400: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1c3400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1c3404: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x1c3404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1c3408: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c3408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c340c: 0x14830057  bne         $a0, $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x1C340Cu;
    {
        const bool branch_taken_0x1c340c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c340c) {
            ctx->pc = 0x1C356Cu;
            goto label_1c356c;
        }
    }
    ctx->pc = 0x1C3414u;
    // 0x1c3414: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c3414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c3418: 0x80420003  lb          $v0, 0x3($v0)
    ctx->pc = 0x1c3418u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1c341c: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x1c341cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1c3420: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x1c3420u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x1c3424: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1c3424u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1c3428: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1c3428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1c342c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1c342cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c3430: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c3430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c3434: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1c3434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c3438: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1c3438u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1c343c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1c343cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c3440: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c3440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c3444: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1c3444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c3448: 0x80420018  lb          $v0, 0x18($v0)
    ctx->pc = 0x1c3448u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1c344c: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x1c344cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1c3450: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x1c3450u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x1c3454: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1c3454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1c3458: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1c3458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1c345c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1c345cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c3460: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c3460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c3464: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1c3464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c3468: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1c3468u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1c346c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1c346cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c3470: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c3470u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c3474: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1c3474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c3478: 0x80420019  lb          $v0, 0x19($v0)
    ctx->pc = 0x1c3478u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 25)));
    // 0x1c347c: 0x23e3c  dsll32      $a3, $v0, 24
    ctx->pc = 0x1c347cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1c3480: 0x73e3f  dsra32      $a3, $a3, 24
    ctx->pc = 0x1c3480u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 24));
    // 0x1c3484: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1c3484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c3488: 0xc070240  jal         func_1C0900
    ctx->pc = 0x1C3488u;
    SET_GPR_U32(ctx, 31, 0x1C3490u);
    ctx->pc = 0x1C0900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0900u, 0x1C3488u, 0x1C3490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3490u;
label_1c3490:
    // 0x1c3490: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c3490u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3494: 0xc7a30058  lwc1        $f3, 0x58($sp)
    ctx->pc = 0x1c3494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c3498: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C3498u;
    {
        const bool branch_taken_0x1c3498 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x1c3498) {
            ctx->pc = 0x1C34B4u;
            goto label_1c34b4;
        }
    }
    ctx->pc = 0x1C34A0u;
    // 0x1c34a0: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1c34a0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c34a4: 0x0  nop
    ctx->pc = 0x1c34a4u;
    // NOP
    // 0x1c34a8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1c34a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1c34ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C34ACu;
    {
        const bool branch_taken_0x1c34ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c34ac) {
            ctx->pc = 0x1C34D0u;
            goto label_1c34d0;
        }
    }
    ctx->pc = 0x1C34B4u;
label_1c34b4:
    // 0x1c34b4: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x1c34b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x1c34b8: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x1c34b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1c34bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1c34bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c34c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c34c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c34c4: 0x0  nop
    ctx->pc = 0x1c34c4u;
    // NOP
    // 0x1c34c8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1c34c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1c34cc: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1c34ccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1c34d0:
    // 0x1c34d0: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x1c34d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c34d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c34d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c34d8: 0x0  nop
    ctx->pc = 0x1c34d8u;
    // NOP
    // 0x1c34dc: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1c34dcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1c34e0: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1c34e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1c34e4: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1c34e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1c34e8: 0xc7a3005c  lwc1        $f3, 0x5C($sp)
    ctx->pc = 0x1c34e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c34ec: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C34ECu;
    {
        const bool branch_taken_0x1c34ec = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x1c34ec) {
            ctx->pc = 0x1C3508u;
            goto label_1c3508;
        }
    }
    ctx->pc = 0x1C34F4u;
    // 0x1c34f4: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1c34f4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c34f8: 0x0  nop
    ctx->pc = 0x1c34f8u;
    // NOP
    // 0x1c34fc: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1c34fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1c3500: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C3500u;
    {
        const bool branch_taken_0x1c3500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3500) {
            ctx->pc = 0x1C3524u;
            goto label_1c3524;
        }
    }
    ctx->pc = 0x1C3508u;
label_1c3508:
    // 0x1c3508: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x1c3508u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x1c350c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1c350cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1c3510: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1c3510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c3514: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c3514u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3518: 0x0  nop
    ctx->pc = 0x1c3518u;
    // NOP
    // 0x1c351c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1c351cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1c3520: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1c3520u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1c3524:
    // 0x1c3524: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x1c3524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c3528: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c3528u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c352c: 0x0  nop
    ctx->pc = 0x1c352cu;
    // NOP
    // 0x1c3530: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1c3530u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1c3534: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x1c3534u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1c3538: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1c3538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1c353c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c353cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c3540: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c3540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c3544: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1c3544u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c3548: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c3548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c354c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1c354cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1c3550: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c3550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c3554: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1c3554u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1c3558: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1c3558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c355c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c355cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3560: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1c3560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c3564: 0xc0705c4  jal         func_1C1710
    ctx->pc = 0x1C3564u;
    SET_GPR_U32(ctx, 31, 0x1C356Cu);
    ctx->pc = 0x1C1710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1710u, 0x1C3564u, 0x1C356Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C356Cu;
label_1c356c:
    // 0x1c356c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c356cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1c3570:
    // 0x1c3570: 0x2e030004  sltiu       $v1, $s0, 0x4
    ctx->pc = 0x1c3570u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1c3574: 0x1460ff9a  bnez        $v1, . + 4 + (-0x66 << 2)
    ctx->pc = 0x1C3574u;
    {
        const bool branch_taken_0x1c3574 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3574) {
            ctx->pc = 0x1C33E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c33e0;
        }
    }
    ctx->pc = 0x1C357Cu;
    // 0x1c357c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c357cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c3580:
    // 0x1c3580: 0x2e230004  sltiu       $v1, $s1, 0x4
    ctx->pc = 0x1c3580u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1c3584: 0x1460ff93  bnez        $v1, . + 4 + (-0x6D << 2)
    ctx->pc = 0x1C3584u;
    {
        const bool branch_taken_0x1c3584 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3584) {
            ctx->pc = 0x1C33D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c33d4;
        }
    }
    ctx->pc = 0x1C358Cu;
label_1c358c:
    // 0x1c358c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c358cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c3590: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c3590u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c3594: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c3594u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3598: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c3598u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c359c: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x1c359cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c35a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C35A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C35A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C35A8u;
    // 0x1c35a8: 0x0  nop
    ctx->pc = 0x1c35a8u;
    // NOP
    // 0x1c35ac: 0x0  nop
    ctx->pc = 0x1c35acu;
    // NOP
    ctx->pc = 0x1c35b0u;
}

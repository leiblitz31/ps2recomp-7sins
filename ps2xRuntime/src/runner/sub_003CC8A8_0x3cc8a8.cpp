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

// Function: sub_003CC8A8
// Address: 0x3cc8a8 - 0x3ccd20
void sub_003CC8A8_0x3cc8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CC8A8_0x3cc8a8");
#endif

    switch (ctx->pc) {
        case 0x3cc930u: goto label_3cc930;
        case 0x3cc940u: goto label_3cc940;
        case 0x3cc980u: goto label_3cc980;
        case 0x3cc9d0u: goto label_3cc9d0;
        case 0x3cca5cu: goto label_3cca5c;
        case 0x3cca70u: goto label_3cca70;
        case 0x3cca88u: goto label_3cca88;
        case 0x3cca94u: goto label_3cca94;
        case 0x3ccaa0u: goto label_3ccaa0;
        case 0x3ccaacu: goto label_3ccaac;
        case 0x3ccac0u: goto label_3ccac0;
        case 0x3ccb40u: goto label_3ccb40;
        case 0x3ccbb0u: goto label_3ccbb0;
        case 0x3ccc20u: goto label_3ccc20;
        default: break;
    }

    ctx->pc = 0x3cc8a8u;

    // 0x3cc8a8: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x3cc8a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x3cc8ac: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x3cc8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x3cc8b0: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x3cc8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x3cc8b4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3cc8b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cc8b8: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x3cc8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x3cc8bc: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x3cc8bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cc8c0: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x3cc8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x3cc8c4: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x3cc8c4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cc8c8: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x3cc8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x3cc8cc: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x3cc8ccu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cc8d0: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x3cc8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x3cc8d4: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x3cc8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x3cc8d8: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x3cc8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x3cc8dc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3cc8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3cc8e0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3cc8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3cc8e4: 0xe7b900f8  swc1        $f25, 0xF8($sp)
    ctx->pc = 0x3cc8e4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x3cc8e8: 0xe7b800f0  swc1        $f24, 0xF0($sp)
    ctx->pc = 0x3cc8e8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x3cc8ec: 0xe7b700e8  swc1        $f23, 0xE8($sp)
    ctx->pc = 0x3cc8ecu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x3cc8f0: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x3cc8f0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x3cc8f4: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x3cc8f4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x3cc8f8: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x3cc8f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x3cc8fc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x3cc8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x3cc900: 0xafa80024  sw          $t0, 0x24($sp)
    ctx->pc = 0x3cc900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 8));
    // 0x3cc904: 0x12e000f3  beqz        $s7, . + 4 + (0xF3 << 2)
    ctx->pc = 0x3CC904u;
    {
        const bool branch_taken_0x3cc904 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC904u;
        // 0x3cc908: 0xafaa0028  sw          $t2, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc904) {
            ctx->pc = 0x3CCCD4u;
            goto label_3cccd4;
        }
    }
    ctx->pc = 0x3CC90Cu;
    // 0x3cc90c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3cc90cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3cc910: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x3cc910u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x3cc914: 0x27b60010  addiu       $s6, $sp, 0x10
    ctx->pc = 0x3cc914u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3cc918: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x3cc918u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x3cc91c: 0xc7998148  lwc1        $f25, -0x7EB8($gp)
    ctx->pc = 0x3cc91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x3cc920: 0xc797814c  lwc1        $f23, -0x7EB4($gp)
    ctx->pc = 0x3cc920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x3cc924: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x3cc924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x3cc928: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3cc928u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x3cc92c: 0x0  nop
    ctx->pc = 0x3cc92cu;
    // NOP
label_3cc930:
    // 0x3cc930: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3cc930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cc934: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3cc934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cc938: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x3CC938u;
    SET_GPR_U32(ctx, 31, 0x3CC940u);
    ctx->pc = 0x3CC93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC938u;
    // 0x3cc93c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3CC938u, 0x3CC940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC940u;
label_3cc940:
    // 0x3cc940: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x3cc940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3cc944: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x3cc944u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
    // 0x3cc948: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x3cc948u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3cc94c: 0x24a5b298  addiu       $a1, $a1, -0x4D68
    ctx->pc = 0x3cc94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947480));
    // 0x3cc950: 0x8ca400b0  lw          $a0, 0xB0($a1)
    ctx->pc = 0x3cc950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 176)));
    // 0x3cc954: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x3cc954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3cc958: 0xe7b8001c  swc1        $f24, 0x1C($sp)
    ctx->pc = 0x3cc958u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x3cc95c: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x3cc95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3cc960: 0xafb60008  sw          $s6, 0x8($sp)
    ctx->pc = 0x3cc960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 22));
    // 0x3cc964: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x3cc964u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3cc968: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x3cc968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x3cc96c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x3cc96cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3cc970: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3CC970u;
    {
        const bool branch_taken_0x3cc970 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC970u;
        // 0x3cc974: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc970) {
            ctx->pc = 0x3CC980u;
            goto label_3cc980;
        }
    }
    ctx->pc = 0x3CC978u;
    // 0x3cc978: 0xc0f25be  jal         func_3C96F8
    ctx->pc = 0x3CC978u;
    SET_GPR_U32(ctx, 31, 0x3CC980u);
    ctx->pc = 0x3CC97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC978u;
    // 0x3cc97c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C96F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C96F8u, 0x3CC978u, 0x3CC980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC980u;
label_3cc980:
    // 0x3cc980: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x3cc980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3cc984: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x3cc984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3cc988: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x3cc988u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3cc98c: 0x0  nop
    ctx->pc = 0x3cc98cu;
    // NOP
    // 0x3cc990: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3CC990u;
    {
        const bool branch_taken_0x3cc990 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3cc990) {
            ctx->pc = 0x3CC994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CC990u;
            // 0x3cc994: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CC998u;
            goto label_3cc998;
        }
    }
    ctx->pc = 0x3CC998u;
label_3cc998:
    // 0x3cc998: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x3cc998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3cc99c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x3cc99cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3cc9a0: 0x0  nop
    ctx->pc = 0x3cc9a0u;
    // NOP
    // 0x3cc9a4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3CC9A4u;
    {
        const bool branch_taken_0x3cc9a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3cc9a4) {
            ctx->pc = 0x3CC9A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CC9A4u;
            // 0x3cc9a8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CC9ACu;
            goto label_3cc9ac;
        }
    }
    ctx->pc = 0x3CC9ACu;
label_3cc9ac:
    // 0x3cc9ac: 0x4618a036  c.le.s      $f20, $f24
    ctx->pc = 0x3cc9acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3cc9b0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x3CC9B0u;
    {
        const bool branch_taken_0x3cc9b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3cc9b0) {
            ctx->pc = 0x3CC9C8u;
            goto label_3cc9c8;
        }
    }
    ctx->pc = 0x3CC9B8u;
    // 0x3cc9b8: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x3cc9b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x3cc9bc: 0xe7b50014  swc1        $f21, 0x14($sp)
    ctx->pc = 0x3cc9bcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x3cc9c0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3CC9C0u;
    {
        const bool branch_taken_0x3cc9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC9C0u;
        // 0x3cc9c4: 0xe7b50010  swc1        $f21, 0x10($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc9c0) {
            ctx->pc = 0x3CCA08u;
            goto label_3cca08;
        }
    }
    ctx->pc = 0x3CC9C8u;
label_3cc9c8:
    // 0x3cc9c8: 0xc0c39e8  jal         func_30E7A0
    ctx->pc = 0x3CC9C8u;
    SET_GPR_U32(ctx, 31, 0x3CC9D0u);
    ctx->pc = 0x3CC9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC9C8u;
    // 0x3cc9cc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E7A0u, 0x3CC9C8u, 0x3CC9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC9D0u;
label_3cc9d0:
    // 0x3cc9d0: 0x46190002  mul.s       $f0, $f0, $f25
    ctx->pc = 0x3cc9d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[25]);
    // 0x3cc9d4: 0x46140503  div.s       $f20, $f0, $f20
    ctx->pc = 0x3cc9d4u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x3cc9d8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x3cc9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3cc9dc: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x3cc9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3cc9e0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3cc9e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x3cc9e4: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x3cc9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3cc9e8: 0xc7a2001c  lwc1        $f2, 0x1C($sp)
    ctx->pc = 0x3cc9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3cc9ec: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x3cc9ecu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x3cc9f0: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x3cc9f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x3cc9f4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x3cc9f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3cc9f8: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x3cc9f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x3cc9fc: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x3cc9fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x3cca00: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x3cca00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x3cca04: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x3cca04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_3cca08:
    // 0x3cca08: 0x26150001  addiu       $s5, $s0, 0x1
    ctx->pc = 0x3cca08u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3cca0c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3cca0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cca10: 0x1260002e  beqz        $s3, . + 4 + (0x2E << 2)
    ctx->pc = 0x3CCA10u;
    {
        const bool branch_taken_0x3cca10 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CCA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCA10u;
        // 0x3cca14: 0x10a080  sll         $s4, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cca10) {
            ctx->pc = 0x3CCACCu;
            goto label_3ccacc;
        }
    }
    ctx->pc = 0x3CCA18u;
    // 0x3cca18: 0x8fb20024  lw          $s2, 0x24($sp)
    ctx->pc = 0x3cca18u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x3cca1c: 0x32630003  andi        $v1, $s3, 0x3
    ctx->pc = 0x3cca1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)3);
    // 0x3cca20: 0x1a600013  blez        $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x3CCA20u;
    {
        const bool branch_taken_0x3cca20 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x3CCA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCA20u;
        // 0x3cca24: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cca20) {
            ctx->pc = 0x3CCA70u;
            goto label_3cca70;
        }
    }
    ctx->pc = 0x3CCA28u;
    // 0x3cca28: 0x50600017  beql        $v1, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x3CCA28u;
    {
        const bool branch_taken_0x3cca28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cca28) {
            ctx->pc = 0x3CCA2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CCA28u;
            // 0x3cca2c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CCA88u;
            goto label_3cca88;
        }
    }
    ctx->pc = 0x3CCA30u;
    // 0x3cca30: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x3cca30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3cca34: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x3CCA34u;
    {
        const bool branch_taken_0x3cca34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cca34) {
            ctx->pc = 0x3CCA38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CCA34u;
            // 0x3cca38: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CCA74u;
            goto label_3cca74;
        }
    }
    ctx->pc = 0x3CCA3Cu;
    // 0x3cca3c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3cca3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3cca40: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3CCA40u;
    {
        const bool branch_taken_0x3cca40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cca40) {
            ctx->pc = 0x3CCA44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CCA40u;
            // 0x3cca44: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CCA60u;
            goto label_3cca60;
        }
    }
    ctx->pc = 0x3CCA48u;
    // 0x3cca48: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x3cca48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3cca4c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3cca4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cca50: 0x26500004  addiu       $s0, $s2, 0x4
    ctx->pc = 0x3cca50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x3cca54: 0xc0f269a  jal         func_3C9A68
    ctx->pc = 0x3CCA54u;
    SET_GPR_U32(ctx, 31, 0x3CCA5Cu);
    ctx->pc = 0x3CCA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCA54u;
    // 0x3cca58: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9A68u, 0x3CCA54u, 0x3CCA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCA5Cu;
label_3cca5c:
    // 0x3cca5c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3cca5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3cca60:
    // 0x3cca60: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3cca60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cca64: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x3cca64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x3cca68: 0xc0f269a  jal         func_3C9A68
    ctx->pc = 0x3CCA68u;
    SET_GPR_U32(ctx, 31, 0x3CCA70u);
    ctx->pc = 0x3CCA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCA68u;
    // 0x3cca6c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9A68u, 0x3CCA68u, 0x3CCA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCA70u;
label_3cca70:
    // 0x3cca70: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3cca70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3cca74:
    // 0x3cca74: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3cca74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cca78: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3cca78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3cca7c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3CCA7Cu;
    {
        const bool branch_taken_0x3cca7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CCA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCA7Cu;
        // 0x3cca80: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cca7c) {
            ctx->pc = 0x3CCAB8u;
            goto label_3ccab8;
        }
    }
    ctx->pc = 0x3CCA84u;
    // 0x3cca84: 0x0  nop
    ctx->pc = 0x3cca84u;
    // NOP
label_3cca88:
    // 0x3cca88: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3cca88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cca8c: 0xc0f269a  jal         func_3C9A68
    ctx->pc = 0x3CCA8Cu;
    SET_GPR_U32(ctx, 31, 0x3CCA94u);
    ctx->pc = 0x3CCA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCA8Cu;
    // 0x3cca90: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9A68u, 0x3CCA8Cu, 0x3CCA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCA94u;
label_3cca94:
    // 0x3cca94: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x3cca94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3cca98: 0xc0f269a  jal         func_3C9A68
    ctx->pc = 0x3CCA98u;
    SET_GPR_U32(ctx, 31, 0x3CCAA0u);
    ctx->pc = 0x3CCA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCA98u;
    // 0x3cca9c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9A68u, 0x3CCA98u, 0x3CCAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCAA0u;
label_3ccaa0:
    // 0x3ccaa0: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x3ccaa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3ccaa4: 0xc0f269a  jal         func_3C9A68
    ctx->pc = 0x3CCAA4u;
    SET_GPR_U32(ctx, 31, 0x3CCAACu);
    ctx->pc = 0x3CCAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCAA4u;
    // 0x3ccaa8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9A68u, 0x3CCAA4u, 0x3CCAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCAACu;
label_3ccaac:
    // 0x3ccaac: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x3ccaacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3ccab0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3ccab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ccab4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x3ccab4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_3ccab8:
    // 0x3ccab8: 0xc0f269a  jal         func_3C9A68
    ctx->pc = 0x3CCAB8u;
    SET_GPR_U32(ctx, 31, 0x3CCAC0u);
    ctx->pc = 0x3C9A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9A68u, 0x3CCAB8u, 0x3CCAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCAC0u;
label_3ccac0:
    // 0x3ccac0: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x3ccac0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3ccac4: 0x5440fff0  bnel        $v0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x3CCAC4u;
    {
        const bool branch_taken_0x3ccac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ccac4) {
            ctx->pc = 0x3CCAC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CCAC4u;
            // 0x3ccac8: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CCA88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cca88;
        }
    }
    ctx->pc = 0x3CCACCu;
label_3ccacc:
    // 0x3ccacc: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x3ccaccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3ccad0: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x3ccad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3ccad4: 0x4603a034  c.lt.s      $f20, $f3
    ctx->pc = 0x3ccad4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ccad8: 0x0  nop
    ctx->pc = 0x3ccad8u;
    // NOP
    // 0x3ccadc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3CCADCu;
    {
        const bool branch_taken_0x3ccadc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ccadc) {
            ctx->pc = 0x3CCAE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CCADCu;
            // 0x3ccae0: 0x46001d06  mov.s       $f20, $f3 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CCAE4u;
            goto label_3ccae4;
        }
    }
    ctx->pc = 0x3CCAE4u;
label_3ccae4:
    // 0x3ccae4: 0xc7a40018  lwc1        $f4, 0x18($sp)
    ctx->pc = 0x3ccae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3ccae8: 0x4604a034  c.lt.s      $f20, $f4
    ctx->pc = 0x3ccae8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ccaec: 0x0  nop
    ctx->pc = 0x3ccaecu;
    // NOP
    // 0x3ccaf0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3CCAF0u;
    {
        const bool branch_taken_0x3ccaf0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ccaf0) {
            ctx->pc = 0x3CCAF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CCAF0u;
            // 0x3ccaf4: 0x46002506  mov.s       $f20, $f4 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CCAF8u;
            goto label_3ccaf8;
        }
    }
    ctx->pc = 0x3CCAF8u;
label_3ccaf8:
    // 0x3ccaf8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3ccaf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3ccafc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3ccafcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ccb00: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x3ccb00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ccb04: 0x0  nop
    ctx->pc = 0x3ccb04u;
    // NOP
    // 0x3ccb08: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x3CCB08u;
    {
        const bool branch_taken_0x3ccb08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3CCB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCB08u;
        // 0x3ccb0c: 0xc7a20010  lwc1        $f2, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccb08) {
            ctx->pc = 0x3CCB38u;
            goto label_3ccb38;
        }
    }
    ctx->pc = 0x3CCB10u;
    // 0x3ccb10: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x3ccb10u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x3ccb14: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x3ccb14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ccb18: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x3ccb18u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3ccb1c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3ccb1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3ccb20: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x3ccb20u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x3ccb24: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x3ccb24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x3ccb28: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x3ccb28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3ccb2c: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x3ccb2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x3ccb30: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x3ccb30u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x3ccb34: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x3ccb34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_3ccb38:
    // 0x3ccb38: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x3CCB38u;
    SET_GPR_U32(ctx, 31, 0x3CCB40u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x3CCB38u, 0x3CCB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCB40u;
label_3ccb40:
    // 0x3ccb40: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3CCB40u;
    {
        const bool branch_taken_0x3ccb40 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3CCB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCB40u;
        // 0x3ccb44: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccb40) {
            ctx->pc = 0x3CCB58u;
            goto label_3ccb58;
        }
    }
    ctx->pc = 0x3CCB48u;
    // 0x3ccb48: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3ccb48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ccb4c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3ccb4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3ccb50: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3CCB50u;
    {
        const bool branch_taken_0x3ccb50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CCB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCB50u;
        // 0x3ccb54: 0x46170842  mul.s       $f1, $f1, $f23 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccb50) {
            ctx->pc = 0x3CCB70u;
            goto label_3ccb70;
        }
    }
    ctx->pc = 0x3CCB58u;
label_3ccb58:
    // 0x3ccb58: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3ccb58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3ccb5c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3ccb5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3ccb60: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3ccb60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ccb64: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3ccb64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3ccb68: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3ccb68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x3ccb6c: 0x46170842  mul.s       $f1, $f1, $f23
    ctx->pc = 0x3ccb6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
label_3ccb70:
    // 0x3ccb70: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x3ccb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ccb74: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3ccb74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3ccb78: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x3ccb78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ccb7c: 0x0  nop
    ctx->pc = 0x3ccb7cu;
    // NOP
    // 0x3ccb80: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3CCB80u;
    {
        const bool branch_taken_0x3ccb80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3CCB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCB80u;
        // 0x3ccb84: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccb80) {
            ctx->pc = 0x3CCB8Cu;
            goto label_3ccb8c;
        }
    }
    ctx->pc = 0x3CCB88u;
    // 0x3ccb88: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x3ccb88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_3ccb8c:
    // 0x3ccb8c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x3ccb8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ccb90: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3ccb90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3ccb94: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3ccb94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ccb98: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3ccb98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ccb9c: 0x0  nop
    ctx->pc = 0x3ccb9cu;
    // NOP
    // 0x3ccba0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3CCBA0u;
    {
        const bool branch_taken_0x3ccba0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ccba0) {
            ctx->pc = 0x3CCBA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CCBA0u;
            // 0x3ccba4: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CCBA8u;
            goto label_3ccba8;
        }
    }
    ctx->pc = 0x3CCBA8u;
label_3ccba8:
    // 0x3ccba8: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x3CCBA8u;
    SET_GPR_U32(ctx, 31, 0x3CCBB0u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x3CCBA8u, 0x3CCBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCBB0u;
label_3ccbb0:
    // 0x3ccbb0: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3CCBB0u;
    {
        const bool branch_taken_0x3ccbb0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3CCBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCBB0u;
        // 0x3ccbb4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccbb0) {
            ctx->pc = 0x3CCBC8u;
            goto label_3ccbc8;
        }
    }
    ctx->pc = 0x3CCBB8u;
    // 0x3ccbb8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3ccbb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ccbbc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3ccbbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3ccbc0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3CCBC0u;
    {
        const bool branch_taken_0x3ccbc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CCBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCBC0u;
        // 0x3ccbc4: 0x46170842  mul.s       $f1, $f1, $f23 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccbc0) {
            ctx->pc = 0x3CCBE0u;
            goto label_3ccbe0;
        }
    }
    ctx->pc = 0x3CCBC8u;
label_3ccbc8:
    // 0x3ccbc8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3ccbc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3ccbcc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3ccbccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3ccbd0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3ccbd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ccbd4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3ccbd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3ccbd8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3ccbd8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x3ccbdc: 0x46170842  mul.s       $f1, $f1, $f23
    ctx->pc = 0x3ccbdcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
label_3ccbe0:
    // 0x3ccbe0: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x3ccbe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ccbe4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3ccbe4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3ccbe8: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x3ccbe8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ccbec: 0x0  nop
    ctx->pc = 0x3ccbecu;
    // NOP
    // 0x3ccbf0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3CCBF0u;
    {
        const bool branch_taken_0x3ccbf0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3CCBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCBF0u;
        // 0x3ccbf4: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccbf0) {
            ctx->pc = 0x3CCBFCu;
            goto label_3ccbfc;
        }
    }
    ctx->pc = 0x3CCBF8u;
    // 0x3ccbf8: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x3ccbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_3ccbfc:
    // 0x3ccbfc: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x3ccbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ccc00: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3ccc00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3ccc04: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3ccc04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ccc08: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3ccc08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ccc0c: 0x0  nop
    ctx->pc = 0x3ccc0cu;
    // NOP
    // 0x3ccc10: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3CCC10u;
    {
        const bool branch_taken_0x3ccc10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ccc10) {
            ctx->pc = 0x3CCC14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CCC10u;
            // 0x3ccc14: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CCC18u;
            goto label_3ccc18;
        }
    }
    ctx->pc = 0x3CCC18u;
label_3ccc18:
    // 0x3ccc18: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x3CCC18u;
    SET_GPR_U32(ctx, 31, 0x3CCC20u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x3CCC18u, 0x3CCC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCC20u;
label_3ccc20:
    // 0x3ccc20: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3CCC20u;
    {
        const bool branch_taken_0x3ccc20 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3CCC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCC20u;
        // 0x3ccc24: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccc20) {
            ctx->pc = 0x3CCC38u;
            goto label_3ccc38;
        }
    }
    ctx->pc = 0x3CCC28u;
    // 0x3ccc28: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3ccc28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ccc2c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3ccc2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3ccc30: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3CCC30u;
    {
        const bool branch_taken_0x3ccc30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CCC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCC30u;
        // 0x3ccc34: 0x46170842  mul.s       $f1, $f1, $f23 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccc30) {
            ctx->pc = 0x3CCC50u;
            goto label_3ccc50;
        }
    }
    ctx->pc = 0x3CCC38u;
label_3ccc38:
    // 0x3ccc38: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3ccc38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3ccc3c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3ccc3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3ccc40: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3ccc40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ccc44: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3ccc44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3ccc48: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3ccc48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x3ccc4c: 0x46170842  mul.s       $f1, $f1, $f23
    ctx->pc = 0x3ccc4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
label_3ccc50:
    // 0x3ccc50: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x3ccc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ccc54: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3ccc54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3ccc58: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x3ccc58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ccc5c: 0x0  nop
    ctx->pc = 0x3ccc5cu;
    // NOP
    // 0x3ccc60: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3CCC60u;
    {
        const bool branch_taken_0x3ccc60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3CCC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCC60u;
        // 0x3ccc64: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccc60) {
            ctx->pc = 0x3CCC6Cu;
            goto label_3ccc6c;
        }
    }
    ctx->pc = 0x3CCC68u;
    // 0x3ccc68: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x3ccc68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_3ccc6c:
    // 0x3ccc6c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x3ccc6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ccc70: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3ccc70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3ccc74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3ccc74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ccc78: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3ccc78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ccc7c: 0x0  nop
    ctx->pc = 0x3ccc7cu;
    // NOP
    // 0x3ccc80: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3CCC80u;
    {
        const bool branch_taken_0x3ccc80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ccc80) {
            ctx->pc = 0x3CCC84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CCC80u;
            // 0x3ccc84: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CCC88u;
            goto label_3ccc88;
        }
    }
    ctx->pc = 0x3CCC88u;
label_3ccc88:
    // 0x3ccc88: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x3ccc88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ccc8c: 0x29e2021  addu        $a0, $s4, $fp
    ctx->pc = 0x3ccc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 30)));
    // 0x3ccc90: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x3ccc90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ccc94: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x3ccc94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ccc98: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x3ccc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ccc9c: 0x46160842  mul.s       $f1, $f1, $f22
    ctx->pc = 0x3ccc9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
    // 0x3ccca0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ccca0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ccca4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3ccca4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3ccca8: 0x46161082  mul.s       $f2, $f2, $f22
    ctx->pc = 0x3ccca8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[22]);
    // 0x3cccac: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x3cccacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x3cccb0: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cccb0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x3cccb4: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x3cccb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3cccb8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cccb8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3cccbc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3cccbcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3cccc0: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3cccc0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3cccc4: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x3cccc4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3cccc8: 0x217182b  sltu        $v1, $s0, $s7
    ctx->pc = 0x3cccc8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x3ccccc: 0x1460ff18  bnez        $v1, . + 4 + (-0xE8 << 2)
    ctx->pc = 0x3CCCCCu;
    {
        const bool branch_taken_0x3ccccc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CCCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCCCCu;
        // 0x3cccd0: 0xa0850001  sb          $a1, 0x1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccccc) {
            ctx->pc = 0x3CC930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cc930;
        }
    }
    ctx->pc = 0x3CCCD4u;
label_3cccd4:
    // 0x3cccd4: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x3cccd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cccd8: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x3cccd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3cccdc: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x3cccdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3ccce0: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x3ccce0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3ccce4: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x3ccce4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3ccce8: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x3ccce8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3cccec: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x3cccecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3cccf0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3cccf0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3cccf4: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x3cccf4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3cccf8: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x3cccf8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3cccfc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3cccfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ccd00: 0xc7b900f8  lwc1        $f25, 0xF8($sp)
    ctx->pc = 0x3ccd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x3ccd04: 0xc7b800f0  lwc1        $f24, 0xF0($sp)
    ctx->pc = 0x3ccd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x3ccd08: 0xc7b700e8  lwc1        $f23, 0xE8($sp)
    ctx->pc = 0x3ccd08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x3ccd0c: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x3ccd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3ccd10: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x3ccd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3ccd14: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x3ccd14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3ccd18: 0x3e00008  jr          $ra
    ctx->pc = 0x3CCD18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CCD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCD18u;
        // 0x3ccd1c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CCD18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CCD20u;
}

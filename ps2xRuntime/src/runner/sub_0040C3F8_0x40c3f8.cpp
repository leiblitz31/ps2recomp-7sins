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

// Function: sub_0040C3F8
// Address: 0x40c3f8 - 0x40c550
void sub_0040C3F8_0x40c3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040C3F8_0x40c3f8");
#endif

    switch (ctx->pc) {
        case 0x40c4e0u: goto label_40c4e0;
        case 0x40c4f0u: goto label_40c4f0;
        case 0x40c504u: goto label_40c504;
        default: break;
    }

    ctx->pc = 0x40c3f8u;

    // 0x40c3f8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x40c3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x40c3fc: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x40c3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x40c400: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x40c400u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c404: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x40c404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x40c408: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x40c408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x40c40c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x40c40cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x40c410: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x40c410u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x40c414: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x40c414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x40c418: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x40c418u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x40c41c: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x40c41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x40c420: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x40c420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x40c424: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x40c424u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x40c428: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x40c428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x40c42c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x40c42cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x40c430: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x40c430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x40c434: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x40c434u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x40c438: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x40c438u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x40c43c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x40c43cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x40c440: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x40c440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x40c444: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x40c444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x40c448: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x40c448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x40c44c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x40c44cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x40c450: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x40c450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x40c454: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x40c454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x40c458: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x40c458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x40c45c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x40c45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x40c460: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x40c460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x40c464: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x40C464u;
    {
        const bool branch_taken_0x40c464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x40c464) {
            ctx->pc = 0x40C468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40C464u;
            // 0x40c468: 0x78a20000  lq          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40C478u;
            goto label_40c478;
        }
    }
    ctx->pc = 0x40C46Cu;
    // 0x40c46c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x40C46Cu;
    {
        const bool branch_taken_0x40c46c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40C470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C46Cu;
        // 0x40c470: 0xae250004  sw          $a1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c46c) {
            ctx->pc = 0x40C498u;
            goto label_40c498;
        }
    }
    ctx->pc = 0x40C474u;
    // 0x40c474: 0x0  nop
    ctx->pc = 0x40c474u;
    // NOP
label_40c478:
    // 0x40c478: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x40c478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x40c47c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x40c47cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x40c480: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x40c480u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x40c484: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x40c484u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x40c488: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x40c488u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x40c48c: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x40c48cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x40c490: 0x78a30030  lq          $v1, 0x30($a1)
    ctx->pc = 0x40c490u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x40c494: 0x7c830030  sq          $v1, 0x30($a0)
    ctx->pc = 0x40c494u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 3));
label_40c498:
    // 0x40c498: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x40c498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x40c49c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x40c49cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x40c4a0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x40C4A0u;
    {
        const bool branch_taken_0x40c4a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x40c4a0) {
            ctx->pc = 0x40C4A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40C4A0u;
            // 0x40c4a4: 0x78c20000  lq          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40C4B0u;
            goto label_40c4b0;
        }
    }
    ctx->pc = 0x40C4A8u;
    // 0x40c4a8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x40C4A8u;
    {
        const bool branch_taken_0x40c4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40C4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C4A8u;
        // 0x40c4ac: 0xae260008  sw          $a2, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c4a8) {
            ctx->pc = 0x40C4D0u;
            goto label_40c4d0;
        }
    }
    ctx->pc = 0x40C4B0u;
label_40c4b0:
    // 0x40c4b0: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x40c4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x40c4b4: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x40c4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x40c4b8: 0x78c30010  lq          $v1, 0x10($a2)
    ctx->pc = 0x40c4b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x40c4bc: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x40c4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x40c4c0: 0x78c20020  lq          $v0, 0x20($a2)
    ctx->pc = 0x40c4c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x40c4c4: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x40c4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x40c4c8: 0x78c30030  lq          $v1, 0x30($a2)
    ctx->pc = 0x40c4c8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x40c4cc: 0x7c830030  sq          $v1, 0x30($a0)
    ctx->pc = 0x40c4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 3));
label_40c4d0:
    // 0x40c4d0: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x40c4d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x40c4d4: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x40c4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x40c4d8: 0xc103c28  jal         func_40F0A0
    ctx->pc = 0x40C4D8u;
    SET_GPR_U32(ctx, 31, 0x40C4E0u);
    ctx->pc = 0x40C4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C4D8u;
    // 0x40c4dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F0A0u, 0x40C4D8u, 0x40C4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C4E0u;
label_40c4e0:
    // 0x40c4e0: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x40c4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x40c4e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40c4e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c4e8: 0xc103df4  jal         func_40F7D0
    ctx->pc = 0x40C4E8u;
    SET_GPR_U32(ctx, 31, 0x40C4F0u);
    ctx->pc = 0x40C4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C4E8u;
    // 0x40c4ec: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F7D0u, 0x40C4E8u, 0x40C4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C4F0u;
label_40c4f0:
    // 0x40c4f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40c4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c4f4: 0x2625000c  addiu       $a1, $s1, 0xC
    ctx->pc = 0x40c4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x40c4f8: 0x26260018  addiu       $a2, $s1, 0x18
    ctx->pc = 0x40c4f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x40c4fc: 0xc103eaa  jal         func_40FAA8
    ctx->pc = 0x40C4FCu;
    SET_GPR_U32(ctx, 31, 0x40C504u);
    ctx->pc = 0x40C500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C4FCu;
    // 0x40c500: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40FAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40FAA8u, 0x40C4FCu, 0x40C504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C504u;
label_40c504:
    // 0x40c504: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x40c504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40c508: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x40c508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x40c50c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x40c50cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x40c510: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x40c510u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x40c514: 0x0  nop
    ctx->pc = 0x40c514u;
    // NOP
    // 0x40c518: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x40C518u;
    {
        const bool branch_taken_0x40c518 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x40C51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C518u;
        // 0x40c51c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c518) {
            ctx->pc = 0x40C524u;
            goto label_40c524;
        }
    }
    ctx->pc = 0x40C520u;
    // 0x40c520: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x40c520u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40c524:
    // 0x40c524: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x40c524u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x40c528: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x40c528u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c52c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x40c52cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x40c530: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x40c530u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x40c534: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x40c534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x40c538: 0x3e00008  jr          $ra
    ctx->pc = 0x40C538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40C53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C538u;
        // 0x40c53c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40C538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40C540u;
    // 0x40c540: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x40c540u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c544: 0x3e00008  jr          $ra
    ctx->pc = 0x40C544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40C548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C544u;
        // 0x40c548: 0xac45001c  sw          $a1, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40C544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40C54Cu;
    // 0x40c54c: 0x0  nop
    ctx->pc = 0x40c54cu;
    // NOP
    ctx->pc = 0x40c550u;
}

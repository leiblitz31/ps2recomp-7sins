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

// Function: sub_00202490
// Address: 0x202490 - 0x202820
void sub_00202490_0x202490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202490_0x202490");
#endif

    switch (ctx->pc) {
        case 0x202518u: goto label_202518;
        case 0x20254cu: goto label_20254c;
        case 0x202590u: goto label_202590;
        case 0x202644u: goto label_202644;
        case 0x202678u: goto label_202678;
        case 0x202698u: goto label_202698;
        case 0x2026b8u: goto label_2026b8;
        case 0x2026f8u: goto label_2026f8;
        case 0x20274cu: goto label_20274c;
        case 0x20278cu: goto label_20278c;
        case 0x2027ccu: goto label_2027cc;
        case 0x20280cu: goto label_20280c;
        default: break;
    }

    ctx->pc = 0x202490u;

label_202490:
    // 0x202490: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x202490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x202494: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x202494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x202498: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x202498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x20249c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20249cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2024a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2024a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2024a4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x2024a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x2024a8: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x2024a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x2024ac: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2024acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2024b0: 0xc4610108  lwc1        $f1, 0x108($v1)
    ctx->pc = 0x2024b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2024b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2024b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2024b8: 0x0  nop
    ctx->pc = 0x2024b8u;
    // NOP
    // 0x2024bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2024bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2024c0: 0x4500008d  bc1f        . + 4 + (0x8D << 2)
    ctx->pc = 0x2024C0u;
    {
        const bool branch_taken_0x2024c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2024c0) {
            ctx->pc = 0x2026F8u;
            goto label_2026f8;
        }
    }
    ctx->pc = 0x2024C8u;
    // 0x2024c8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2024c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2024cc: 0x8c430100  lw          $v1, 0x100($v0)
    ctx->pc = 0x2024ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x2024d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2024d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2024d4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2024d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2024d8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2024D8u;
    {
        const bool branch_taken_0x2024d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2024d8) {
            ctx->pc = 0x202520u;
            goto label_202520;
        }
    }
    ctx->pc = 0x2024E0u;
    // 0x2024e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2024e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2024e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2024e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2024e8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2024e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2024ec: 0xe4400108  swc1        $f0, 0x108($v0)
    ctx->pc = 0x2024ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 264), bits); }
    // 0x2024f0: 0xc780832c  lwc1        $f0, -0x7CD4($gp)
    ctx->pc = 0x2024f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2024f4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2024f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2024f8: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x2024f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x2024fc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2024fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x202500: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x202500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x202504: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x202504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x202508: 0xac43012c  sw          $v1, 0x12C($v0)
    ctx->pc = 0x202508u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 300), GPR_U32(ctx, 3));
    // 0x20250c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x20250cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x202510: 0xc080a08  jal         func_202820
    ctx->pc = 0x202510u;
    SET_GPR_U32(ctx, 31, 0x202518u);
    ctx->pc = 0x202820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202820u, 0x202510u, 0x202518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202518u;
label_202518:
    // 0x202518: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x202518u;
    {
        const bool branch_taken_0x202518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202518) {
            ctx->pc = 0x2026F8u;
            goto label_2026f8;
        }
    }
    ctx->pc = 0x202520u;
label_202520:
    // 0x202520: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x202520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x202524: 0x8c420100  lw          $v0, 0x100($v0)
    ctx->pc = 0x202524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x202528: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x202528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x20252c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20252cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x202530: 0x38842  srl         $s1, $v1, 1
    ctx->pc = 0x202530u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x202534: 0x8fb20050  lw          $s2, 0x50($sp)
    ctx->pc = 0x202534u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x202538: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x202538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20253c: 0x244400f4  addiu       $a0, $v0, 0xF4
    ctx->pc = 0x20253cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 244));
    // 0x202540: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x202540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202544: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x202544u;
    SET_GPR_U32(ctx, 31, 0x20254Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x202544u, 0x20254Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20254Cu;
label_20254c:
    // 0x20254c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x20254cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x202550: 0x12420011  beq         $s2, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x202550u;
    {
        const bool branch_taken_0x202550 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x202550) {
            ctx->pc = 0x202598u;
            goto label_202598;
        }
    }
    ctx->pc = 0x202558u;
    // 0x202558: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x202558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x20255c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20255cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202560: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x202560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x202564: 0xe4400108  swc1        $f0, 0x108($v0)
    ctx->pc = 0x202564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 264), bits); }
    // 0x202568: 0xc780832c  lwc1        $f0, -0x7CD4($gp)
    ctx->pc = 0x202568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20256c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x20256cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x202570: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x202570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x202574: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x202574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x202578: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x202578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x20257c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x20257cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x202580: 0xac43012c  sw          $v1, 0x12C($v0)
    ctx->pc = 0x202580u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 300), GPR_U32(ctx, 3));
    // 0x202584: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x202584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x202588: 0xc080a08  jal         func_202820
    ctx->pc = 0x202588u;
    SET_GPR_U32(ctx, 31, 0x202590u);
    ctx->pc = 0x202820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202820u, 0x202588u, 0x202590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202590u;
label_202590:
    // 0x202590: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x202590u;
    {
        const bool branch_taken_0x202590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202590) {
            ctx->pc = 0x2026F8u;
            goto label_2026f8;
        }
    }
    ctx->pc = 0x202598u;
label_202598:
    // 0x202598: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x202598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20259c: 0x8c420104  lw          $v0, 0x104($v0)
    ctx->pc = 0x20259cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x2025a0: 0x16220047  bne         $s1, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x2025A0u;
    {
        const bool branch_taken_0x2025a0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2025a0) {
            ctx->pc = 0x2026C0u;
            goto label_2026c0;
        }
    }
    ctx->pc = 0x2025A8u;
    // 0x2025a8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2025a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2025ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2025acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2025b0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2025b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2025b4: 0xe440011c  swc1        $f0, 0x11C($v0)
    ctx->pc = 0x2025b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 284), bits); }
    // 0x2025b8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2025b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2025bc: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x2025bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x2025c0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2025c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2025c4: 0xac430128  sw          $v1, 0x128($v0)
    ctx->pc = 0x2025c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 3));
    // 0x2025c8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2025c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2025cc: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x2025ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x2025d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2025d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2025d4: 0xac620104  sw          $v0, 0x104($v1)
    ctx->pc = 0x2025d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 260), GPR_U32(ctx, 2));
    // 0x2025d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2025d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2025dc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2025dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2025e0: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x2025e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2025e4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2025e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2025e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2025e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2025ec: 0x0  nop
    ctx->pc = 0x2025ecu;
    // NOP
    // 0x2025f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2025f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2025f4: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x2025F4u;
    {
        const bool branch_taken_0x2025f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2025f4) {
            ctx->pc = 0x202630u;
            goto label_202630;
        }
    }
    ctx->pc = 0x2025FCu;
    // 0x2025fc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2025fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x202600: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x202600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x202604: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x202604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x202608: 0xc4400160  lwc1        $f0, 0x160($v0)
    ctx->pc = 0x202608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20260c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x20260cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x202610: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x202610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x202614: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x202614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202618: 0x0  nop
    ctx->pc = 0x202618u;
    // NOP
    // 0x20261c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20261cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x202620: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x202620u;
    {
        const bool branch_taken_0x202620 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x202620) {
            ctx->pc = 0x202630u;
            goto label_202630;
        }
    }
    ctx->pc = 0x202628u;
    // 0x202628: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x202628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20262c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x20262cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_202630:
    // 0x202630: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x202630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x202634: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x202634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x202638: 0xc44c0160  lwc1        $f12, 0x160($v0)
    ctx->pc = 0x202638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20263c: 0xc064d10  jal         func_193440
    ctx->pc = 0x20263Cu;
    SET_GPR_U32(ctx, 31, 0x202644u);
    ctx->pc = 0x193440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193440u, 0x20263Cu, 0x202644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202644u;
label_202644:
    // 0x202644: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x202644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x202648: 0x8c63005c  lw          $v1, 0x5C($v1)
    ctx->pc = 0x202648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x20264c: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x20264Cu;
    {
        const bool branch_taken_0x20264c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20264c) {
            ctx->pc = 0x202680u;
            goto label_202680;
        }
    }
    ctx->pc = 0x202654u;
    // 0x202654: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x202654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x202658: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x202658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20265c: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x20265cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x202660: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x202660u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x202664: 0x24a58da8  addiu       $a1, $a1, -0x7258
    ctx->pc = 0x202664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938024));
    // 0x202668: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x202668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20266c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x20266cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x202670: 0xc08f558  jal         func_23D560
    ctx->pc = 0x202670u;
    SET_GPR_U32(ctx, 31, 0x202678u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x202670u, 0x202678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202678u;
label_202678:
    // 0x202678: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x202678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20267c: 0xac62005c  sw          $v0, 0x5C($v1)
    ctx->pc = 0x20267cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 2));
label_202680:
    // 0x202680: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x202680u;
    {
        const bool branch_taken_0x202680 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x202680) {
            ctx->pc = 0x2026F8u;
            goto label_2026f8;
        }
    }
    ctx->pc = 0x202688u;
    // 0x202688: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x202688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20268c: 0x278599f8  addiu       $a1, $gp, -0x6608
    ctx->pc = 0x20268cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941176));
    // 0x202690: 0xc064d48  jal         func_193520
    ctx->pc = 0x202690u;
    SET_GPR_U32(ctx, 31, 0x202698u);
    ctx->pc = 0x193520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193520u, 0x202690u, 0x202698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202698u;
label_202698:
    // 0x202698: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x202698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x20269c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20269cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2026a0: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x2026a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x2026a4: 0x27859a00  addiu       $a1, $gp, -0x6600
    ctx->pc = 0x2026a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941184));
    // 0x2026a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2026a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2026ac: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2026acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2026b0: 0xc08f558  jal         func_23D560
    ctx->pc = 0x2026B0u;
    SET_GPR_U32(ctx, 31, 0x2026B8u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x2026B0u, 0x2026B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2026B8u;
label_2026b8:
    // 0x2026b8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2026B8u;
    {
        const bool branch_taken_0x2026b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2026b8) {
            ctx->pc = 0x2026F8u;
            goto label_2026f8;
        }
    }
    ctx->pc = 0x2026C0u;
label_2026c0:
    // 0x2026c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2026c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2026c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2026c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2026c8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2026c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2026cc: 0xe4400108  swc1        $f0, 0x108($v0)
    ctx->pc = 0x2026ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 264), bits); }
    // 0x2026d0: 0xc780832c  lwc1        $f0, -0x7CD4($gp)
    ctx->pc = 0x2026d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2026d4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2026d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2026d8: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x2026d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x2026dc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2026dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2026e0: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x2026e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x2026e4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2026e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2026e8: 0xac43012c  sw          $v1, 0x12C($v0)
    ctx->pc = 0x2026e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 300), GPR_U32(ctx, 3));
    // 0x2026ec: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2026ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2026f0: 0xc080a08  jal         func_202820
    ctx->pc = 0x2026F0u;
    SET_GPR_U32(ctx, 31, 0x2026F8u);
    ctx->pc = 0x202820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202820u, 0x2026F0u, 0x2026F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2026F8u;
label_2026f8:
    // 0x2026f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2026f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2026fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2026fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x202700: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x202700u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202704: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x202704u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202708: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x202708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x20270c: 0x3e00008  jr          $ra
    ctx->pc = 0x20270Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20270Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202714u;
    // 0x202714: 0x0  nop
    ctx->pc = 0x202714u;
    // NOP
    // 0x202718: 0x0  nop
    ctx->pc = 0x202718u;
    // NOP
    // 0x20271c: 0x0  nop
    ctx->pc = 0x20271cu;
    // NOP
    // 0x202720: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x202720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x202724: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x202724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x202728: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x202728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x20272c: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x20272cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x202730: 0x93a30020  lbu         $v1, 0x20($sp)
    ctx->pc = 0x202730u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x202734: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x202734u;
    {
        const bool branch_taken_0x202734 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x202734) {
            ctx->pc = 0x20274Cu;
            goto label_20274c;
        }
    }
    ctx->pc = 0x20273Cu;
    // 0x20273c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x20273cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202740: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x202740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x202744: 0xc080924  jal         func_202490
    ctx->pc = 0x202744u;
    SET_GPR_U32(ctx, 31, 0x20274Cu);
    ctx->pc = 0x202490u;
    goto label_202490;
    ctx->pc = 0x20274Cu;
label_20274c:
    // 0x20274c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20274cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202750: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x202750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x202754: 0x3e00008  jr          $ra
    ctx->pc = 0x202754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20275Cu;
    // 0x20275c: 0x0  nop
    ctx->pc = 0x20275cu;
    // NOP
    // 0x202760: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x202760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x202764: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x202764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x202768: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x202768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x20276c: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x20276cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x202770: 0x93a30020  lbu         $v1, 0x20($sp)
    ctx->pc = 0x202770u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x202774: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x202774u;
    {
        const bool branch_taken_0x202774 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x202774) {
            ctx->pc = 0x20278Cu;
            goto label_20278c;
        }
    }
    ctx->pc = 0x20277Cu;
    // 0x20277c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x20277cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202780: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x202780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x202784: 0xc080924  jal         func_202490
    ctx->pc = 0x202784u;
    SET_GPR_U32(ctx, 31, 0x20278Cu);
    ctx->pc = 0x202490u;
    goto label_202490;
    ctx->pc = 0x20278Cu;
label_20278c:
    // 0x20278c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20278cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202790: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x202790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x202794: 0x3e00008  jr          $ra
    ctx->pc = 0x202794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20279Cu;
    // 0x20279c: 0x0  nop
    ctx->pc = 0x20279cu;
    // NOP
    // 0x2027a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2027a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2027a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2027a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2027a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2027a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2027ac: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x2027acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x2027b0: 0x93a30020  lbu         $v1, 0x20($sp)
    ctx->pc = 0x2027b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2027b4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2027B4u;
    {
        const bool branch_taken_0x2027b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2027b4) {
            ctx->pc = 0x2027CCu;
            goto label_2027cc;
        }
    }
    ctx->pc = 0x2027BCu;
    // 0x2027bc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2027bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2027c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2027c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2027c4: 0xc080924  jal         func_202490
    ctx->pc = 0x2027C4u;
    SET_GPR_U32(ctx, 31, 0x2027CCu);
    ctx->pc = 0x202490u;
    goto label_202490;
    ctx->pc = 0x2027CCu;
label_2027cc:
    // 0x2027cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2027ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2027d0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2027d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2027d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2027D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2027D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2027DCu;
    // 0x2027dc: 0x0  nop
    ctx->pc = 0x2027dcu;
    // NOP
    // 0x2027e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2027e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2027e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2027e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2027e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2027e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2027ec: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x2027ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x2027f0: 0x93a30020  lbu         $v1, 0x20($sp)
    ctx->pc = 0x2027f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2027f4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2027F4u;
    {
        const bool branch_taken_0x2027f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2027f4) {
            ctx->pc = 0x20280Cu;
            goto label_20280c;
        }
    }
    ctx->pc = 0x2027FCu;
    // 0x2027fc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2027fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202800: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x202800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x202804: 0xc080924  jal         func_202490
    ctx->pc = 0x202804u;
    SET_GPR_U32(ctx, 31, 0x20280Cu);
    ctx->pc = 0x202490u;
    goto label_202490;
    ctx->pc = 0x20280Cu;
label_20280c:
    // 0x20280c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20280cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202810: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x202810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x202814: 0x3e00008  jr          $ra
    ctx->pc = 0x202814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20281Cu;
    // 0x20281c: 0x0  nop
    ctx->pc = 0x20281cu;
    // NOP
    ctx->pc = 0x202820u;
}

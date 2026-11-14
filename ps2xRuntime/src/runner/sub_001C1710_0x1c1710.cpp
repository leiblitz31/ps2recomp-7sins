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

// Function: sub_001C1710
// Address: 0x1c1710 - 0x1c1960
void sub_001C1710_0x1c1710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1710_0x1c1710");
#endif

    switch (ctx->pc) {
        case 0x1c1748u: goto label_1c1748;
        case 0x1c1770u: goto label_1c1770;
        case 0x1c1784u: goto label_1c1784;
        case 0x1c1790u: goto label_1c1790;
        case 0x1c17a4u: goto label_1c17a4;
        case 0x1c17b0u: goto label_1c17b0;
        case 0x1c17ccu: goto label_1c17cc;
        case 0x1c17d8u: goto label_1c17d8;
        case 0x1c17ecu: goto label_1c17ec;
        case 0x1c17f8u: goto label_1c17f8;
        case 0x1c181cu: goto label_1c181c;
        case 0x1c1828u: goto label_1c1828;
        case 0x1c183cu: goto label_1c183c;
        case 0x1c185cu: goto label_1c185c;
        case 0x1c1870u: goto label_1c1870;
        case 0x1c18a8u: goto label_1c18a8;
        case 0x1c18c4u: goto label_1c18c4;
        case 0x1c18d0u: goto label_1c18d0;
        case 0x1c18f4u: goto label_1c18f4;
        case 0x1c1938u: goto label_1c1938;
        case 0x1c1948u: goto label_1c1948;
        default: break;
    }

    ctx->pc = 0x1c1710u;

    // 0x1c1710: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1c1710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1c1714: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c1714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c1718: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1c1718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1c171c: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1c171cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1c1720: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1c1720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x1c1724: 0xe7ac0060  swc1        $f12, 0x60($sp)
    ctx->pc = 0x1c1724u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1c1728: 0xe7ad0070  swc1        $f13, 0x70($sp)
    ctx->pc = 0x1c1728u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1c172c: 0xe7ae0080  swc1        $f14, 0x80($sp)
    ctx->pc = 0x1c172cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1c1730: 0xe7af0090  swc1        $f15, 0x90($sp)
    ctx->pc = 0x1c1730u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1c1734: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1c1734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c1738: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1c1738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c173c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C173Cu;
    {
        const bool branch_taken_0x1c173c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c173c) {
            ctx->pc = 0x1C1764u;
            goto label_1c1764;
        }
    }
    ctx->pc = 0x1C1744u;
    // 0x1c1744: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x1c1744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_1c1748:
    // 0x1c1748: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1c1748u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c174c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1c174cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1c1750: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c1750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c1754: 0x0  nop
    ctx->pc = 0x1c1754u;
    // NOP
    // 0x1c1758: 0x0  nop
    ctx->pc = 0x1c1758u;
    // NOP
    // 0x1c175c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C175Cu;
    {
        const bool branch_taken_0x1c175c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c175c) {
            ctx->pc = 0x1C1748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1748;
        }
    }
    ctx->pc = 0x1C1764u;
label_1c1764:
    // 0x1c1764: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1c1764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c1768: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1C1768u;
    SET_GPR_U32(ctx, 31, 0x1C1770u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1C1768u, 0x1C1770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1770u;
label_1c1770:
    // 0x1c1770: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c1770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1774: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1c1774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c1778: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c1778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c177c: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1C177Cu;
    SET_GPR_U32(ctx, 31, 0x1C1784u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1C177Cu, 0x1C1784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1784u;
label_1c1784:
    // 0x1c1784: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1c1784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c1788: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1C1788u;
    SET_GPR_U32(ctx, 31, 0x1C1790u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1C1788u, 0x1C1790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1790u;
label_1c1790:
    // 0x1c1790: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c1790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1794: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1c1794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c1798: 0xc7ac0090  lwc1        $f12, 0x90($sp)
    ctx->pc = 0x1c1798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c179c: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1C179Cu;
    SET_GPR_U32(ctx, 31, 0x1C17A4u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1C179Cu, 0x1C17A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C17A4u;
label_1c17a4:
    // 0x1c17a4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1c17a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c17a8: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1C17A8u;
    SET_GPR_U32(ctx, 31, 0x1C17B0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1C17A8u, 0x1C17B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C17B0u;
label_1c17b0:
    // 0x1c17b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c17b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c17b4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1c17b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c17b8: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x1c17b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c17bc: 0xc7ad0024  lwc1        $f13, 0x24($sp)
    ctx->pc = 0x1c17bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c17c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c17c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c17c4: 0xc08c208  jal         func_230820
    ctx->pc = 0x1C17C4u;
    SET_GPR_U32(ctx, 31, 0x1C17CCu);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1C17C4u, 0x1C17CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C17CCu;
label_1c17cc:
    // 0x1c17cc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1c17ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c17d0: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1C17D0u;
    SET_GPR_U32(ctx, 31, 0x1C17D8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1C17D0u, 0x1C17D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C17D8u;
label_1c17d8:
    // 0x1c17d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c17d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c17dc: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1c17dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c17e0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1c17e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c17e4: 0xc08c704  jal         func_231C10
    ctx->pc = 0x1C17E4u;
    SET_GPR_U32(ctx, 31, 0x1C17ECu);
    ctx->pc = 0x231C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C10u, 0x1C17E4u, 0x1C17ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C17ECu;
label_1c17ec:
    // 0x1c17ec: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1c17ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c17f0: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1C17F0u;
    SET_GPR_U32(ctx, 31, 0x1C17F8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1C17F0u, 0x1C17F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C17F8u;
label_1c17f8:
    // 0x1c17f8: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1c17f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c17fc: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x1c17fcu;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x1c1800: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x1c1800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c1804: 0x46000347  neg.s       $f13, $f0
    ctx->pc = 0x1c1804u;
    ctx->f[13] = FPU_NEG_S(ctx->f[0]);
    // 0x1c1808: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c1808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c180c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1c180cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c1810: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c1810u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1814: 0xc08c208  jal         func_230820
    ctx->pc = 0x1C1814u;
    SET_GPR_U32(ctx, 31, 0x1C181Cu);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1C1814u, 0x1C181Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C181Cu;
label_1c181c:
    // 0x1c181c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1c181cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c1820: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1C1820u;
    SET_GPR_U32(ctx, 31, 0x1C1828u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1C1820u, 0x1C1828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1828u;
label_1c1828:
    // 0x1c1828: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c1828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c182c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1c182cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c1830: 0x27a60028  addiu       $a2, $sp, 0x28
    ctx->pc = 0x1c1830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1c1834: 0xc08c704  jal         func_231C10
    ctx->pc = 0x1C1834u;
    SET_GPR_U32(ctx, 31, 0x1C183Cu);
    ctx->pc = 0x231C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C10u, 0x1C1834u, 0x1C183Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C183Cu;
label_1c183c:
    // 0x1c183c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c183cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c1840: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1c1840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c1844: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1c1844u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c1848: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x1C1848u;
    {
        const bool branch_taken_0x1c1848 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c1848) {
            ctx->pc = 0x1C18C4u;
            goto label_1c18c4;
        }
    }
    ctx->pc = 0x1C1850u;
    // 0x1c1850: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1c1850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c1854: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1C1854u;
    SET_GPR_U32(ctx, 31, 0x1C185Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1C1854u, 0x1C185Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C185Cu;
label_1c185c:
    // 0x1c185c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c185cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1860: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1c1860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c1864: 0x27a60018  addiu       $a2, $sp, 0x18
    ctx->pc = 0x1c1864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1c1868: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x1C1868u;
    SET_GPR_U32(ctx, 31, 0x1C1870u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x1C1868u, 0x1C1870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1870u;
label_1c1870:
    // 0x1c1870: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c1870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c1874: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c1874u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c1878: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1c1878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c187c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1c187cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1c1880: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1c1880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1c1884: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c1884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c1888: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c1888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c188c: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x1c188cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c1890: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1c1890u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1c1894: 0x0  nop
    ctx->pc = 0x1c1894u;
    // NOP
    // 0x1c1898: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1c1898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1c189c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1c189cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c18a0: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1C18A0u;
    SET_GPR_U32(ctx, 31, 0x1C18A8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1C18A0u, 0x1C18A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C18A8u;
label_1c18a8:
    // 0x1c18a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c18a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c18ac: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1c18acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c18b0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1c18b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c18b4: 0xc7ac0060  lwc1        $f12, 0x60($sp)
    ctx->pc = 0x1c18b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c18b8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c18b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c18bc: 0xc08c64c  jal         func_231930
    ctx->pc = 0x1C18BCu;
    SET_GPR_U32(ctx, 31, 0x1C18C4u);
    ctx->pc = 0x231930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231930u, 0x1C18BCu, 0x1C18C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C18C4u;
label_1c18c4:
    // 0x1c18c4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1c18c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c18c8: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1C18C8u;
    SET_GPR_U32(ctx, 31, 0x1C18D0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1C18C8u, 0x1C18D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C18D0u;
label_1c18d0:
    // 0x1c18d0: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x1c18d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c18d4: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1c18d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c18d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c18d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c18dc: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1c18dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c18e0: 0xc4cc0000  lwc1        $f12, 0x0($a2)
    ctx->pc = 0x1c18e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c18e4: 0xc46d0004  lwc1        $f13, 0x4($v1)
    ctx->pc = 0x1c18e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c18e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c18e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c18ec: 0xc08c208  jal         func_230820
    ctx->pc = 0x1C18ECu;
    SET_GPR_U32(ctx, 31, 0x1C18F4u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1C18ECu, 0x1C18F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C18F4u;
label_1c18f4:
    // 0x1c18f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c18f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c18f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c18f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c18fc: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1c18fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c1900: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1c1900u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c1904: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1C1904u;
    {
        const bool branch_taken_0x1c1904 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c1904) {
            ctx->pc = 0x1C192Cu;
            goto label_1c192c;
        }
    }
    ctx->pc = 0x1C190Cu;
    // 0x1c190c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c190cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c1910: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c1910u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c1914: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x1c1914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c1918: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1c1918u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c191c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c191cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1920: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1C1920u;
    {
        const bool branch_taken_0x1c1920 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c1920) {
            ctx->pc = 0x1C192Cu;
            goto label_1c192c;
        }
    }
    ctx->pc = 0x1C1928u;
    // 0x1c1928: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c1928u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c192c:
    // 0x1c192c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1c192cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c1930: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1C1930u;
    SET_GPR_U32(ctx, 31, 0x1C1938u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1C1930u, 0x1C1938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1938u;
label_1c1938:
    // 0x1c1938: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c1938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c193c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1c193cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c1940: 0xc08c258  jal         func_230960
    ctx->pc = 0x1C1940u;
    SET_GPR_U32(ctx, 31, 0x1C1948u);
    ctx->pc = 0x230960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230960u, 0x1C1940u, 0x1C1948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1948u;
label_1c1948:
    // 0x1c1948: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c1948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c194c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c194cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1950: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x1c1950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c1954: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C195Cu;
    // 0x1c195c: 0x0  nop
    ctx->pc = 0x1c195cu;
    // NOP
    ctx->pc = 0x1c1960u;
}

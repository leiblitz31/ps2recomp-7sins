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

// Function: sub_003A1740
// Address: 0x3a1740 - 0x3a1b48
void sub_003A1740_0x3a1740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A1740_0x3a1740");
#endif

    switch (ctx->pc) {
        case 0x3a195cu: goto label_3a195c;
        default: break;
    }

    ctx->pc = 0x3a1740u;

    // 0x3a1740: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3a1740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3a1744: 0x8f83bd74  lw          $v1, -0x428C($gp)
    ctx->pc = 0x3a1744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950260)));
    // 0x3a1748: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3a1748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3a174c: 0xa0782d  daddu       $t7, $a1, $zero
    ctx->pc = 0x3a174cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1750: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3a1750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3a1754: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a1754u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1758: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3a1758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3a175c: 0x26320018  addiu       $s2, $s1, 0x18
    ctx->pc = 0x3a175cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x3a1760: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a1760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a1764: 0x2c62007c  sltiu       $v0, $v1, 0x7C
    ctx->pc = 0x3a1764u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)124) ? 1 : 0);
    // 0x3a1768: 0x92300001  lbu         $s0, 0x1($s1)
    ctx->pc = 0x3a1768u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x3a176c: 0x104000f0  beqz        $v0, . + 4 + (0xF0 << 2)
    ctx->pc = 0x3A176Cu;
    {
        const bool branch_taken_0x3a176c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A176Cu;
        // 0x3a1770: 0x8e380004  lw          $t8, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a176c) {
            ctx->pc = 0x3A1B30u;
            goto label_3a1b30;
        }
    }
    ctx->pc = 0x3A1774u;
    // 0x3a1774: 0x14600075  bnez        $v1, . + 4 + (0x75 << 2)
    ctx->pc = 0x3A1774u;
    {
        const bool branch_taken_0x3a1774 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a1774) {
            ctx->pc = 0x3A194Cu;
            goto label_3a194c;
        }
    }
    ctx->pc = 0x3A177Cu;
    // 0x3a177c: 0x11e0003e  beqz        $t7, . + 4 + (0x3E << 2)
    ctx->pc = 0x3A177Cu;
    {
        const bool branch_taken_0x3a177c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A177Cu;
        // 0x3a1780: 0x8f82bd70  lw          $v0, -0x4290($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a177c) {
            ctx->pc = 0x3A1878u;
            goto label_3a1878;
        }
    }
    ctx->pc = 0x3A1784u;
    // 0x3a1784: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x3a1784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a1788: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x3a1788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x3a178c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x3a178cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x3a1790: 0xc5e00004  lwc1        $f0, 0x4($t7)
    ctx->pc = 0x3a1790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a1794: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x3a1794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x3a1798: 0xaf82bd70  sw          $v0, -0x4290($gp)
    ctx->pc = 0x3a1798u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 2));
    // 0x3a179c: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x3a179cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x3a17a0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x3a17a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x3a17a4: 0x2445000c  addiu       $a1, $v0, 0xC
    ctx->pc = 0x3a17a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x3a17a8: 0xaf83bd70  sw          $v1, -0x4290($gp)
    ctx->pc = 0x3a17a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 3));
    // 0x3a17ac: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x3a17acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3a17b0: 0xc5e00008  lwc1        $f0, 0x8($t7)
    ctx->pc = 0x3a17b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a17b4: 0x24430014  addiu       $v1, $v0, 0x14
    ctx->pc = 0x3a17b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x3a17b8: 0x24470018  addiu       $a3, $v0, 0x18
    ctx->pc = 0x3a17b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x3a17bc: 0x2448001c  addiu       $t0, $v0, 0x1C
    ctx->pc = 0x3a17bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x3a17c0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x3a17c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x3a17c4: 0x24490020  addiu       $t1, $v0, 0x20
    ctx->pc = 0x3a17c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x3a17c8: 0xaf84bd70  sw          $a0, -0x4290($gp)
    ctx->pc = 0x3a17c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 4));
    // 0x3a17cc: 0x244a0024  addiu       $t2, $v0, 0x24
    ctx->pc = 0x3a17ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x3a17d0: 0xe44c0008  swc1        $f12, 0x8($v0)
    ctx->pc = 0x3a17d0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x3a17d4: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x3a17d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x3a17d8: 0xaf85bd70  sw          $a1, -0x4290($gp)
    ctx->pc = 0x3a17d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 5));
    // 0x3a17dc: 0x244b002c  addiu       $t3, $v0, 0x2C
    ctx->pc = 0x3a17dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x3a17e0: 0xc5e00010  lwc1        $f0, 0x10($t7)
    ctx->pc = 0x3a17e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a17e4: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x3a17e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x3a17e8: 0x244c0034  addiu       $t4, $v0, 0x34
    ctx->pc = 0x3a17e8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x3a17ec: 0x244d0038  addiu       $t5, $v0, 0x38
    ctx->pc = 0x3a17ecu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x3a17f0: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x3a17f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x3a17f4: 0x244e003c  addiu       $t6, $v0, 0x3C
    ctx->pc = 0x3a17f4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x3a17f8: 0xaf86bd70  sw          $a2, -0x4290($gp)
    ctx->pc = 0x3a17f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 6));
    // 0x3a17fc: 0xc5e00014  lwc1        $f0, 0x14($t7)
    ctx->pc = 0x3a17fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a1800: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x3a1800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x3a1804: 0xaf83bd70  sw          $v1, -0x4290($gp)
    ctx->pc = 0x3a1804u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 3));
    // 0x3a1808: 0xc5e00018  lwc1        $f0, 0x18($t7)
    ctx->pc = 0x3a1808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a180c: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x3a180cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x3a1810: 0xaf87bd70  sw          $a3, -0x4290($gp)
    ctx->pc = 0x3a1810u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 7));
    // 0x3a1814: 0xe44c0018  swc1        $f12, 0x18($v0)
    ctx->pc = 0x3a1814u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x3a1818: 0xaf88bd70  sw          $t0, -0x4290($gp)
    ctx->pc = 0x3a1818u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 8));
    // 0x3a181c: 0xc5e00020  lwc1        $f0, 0x20($t7)
    ctx->pc = 0x3a181cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a1820: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x3a1820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x3a1824: 0xaf89bd70  sw          $t1, -0x4290($gp)
    ctx->pc = 0x3a1824u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 9));
    // 0x3a1828: 0xc5e00024  lwc1        $f0, 0x24($t7)
    ctx->pc = 0x3a1828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a182c: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x3a182cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x3a1830: 0xaf8abd70  sw          $t2, -0x4290($gp)
    ctx->pc = 0x3a1830u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 10));
    // 0x3a1834: 0xc5e00028  lwc1        $f0, 0x28($t7)
    ctx->pc = 0x3a1834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a1838: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x3a1838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x3a183c: 0xaf84bd70  sw          $a0, -0x4290($gp)
    ctx->pc = 0x3a183cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 4));
    // 0x3a1840: 0xe44c0028  swc1        $f12, 0x28($v0)
    ctx->pc = 0x3a1840u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x3a1844: 0xaf8bbd70  sw          $t3, -0x4290($gp)
    ctx->pc = 0x3a1844u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 11));
    // 0x3a1848: 0xc5e00030  lwc1        $f0, 0x30($t7)
    ctx->pc = 0x3a1848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a184c: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x3a184cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
    // 0x3a1850: 0xaf85bd70  sw          $a1, -0x4290($gp)
    ctx->pc = 0x3a1850u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 5));
    // 0x3a1854: 0xc5e00034  lwc1        $f0, 0x34($t7)
    ctx->pc = 0x3a1854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a1858: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x3a1858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x3a185c: 0xaf8cbd70  sw          $t4, -0x4290($gp)
    ctx->pc = 0x3a185cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 12));
    // 0x3a1860: 0xc5e00038  lwc1        $f0, 0x38($t7)
    ctx->pc = 0x3a1860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a1864: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x3a1864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x3a1868: 0xaf8dbd70  sw          $t5, -0x4290($gp)
    ctx->pc = 0x3a1868u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 13));
    // 0x3a186c: 0xe44d0038  swc1        $f13, 0x38($v0)
    ctx->pc = 0x3a186cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x3a1870: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x3A1870u;
    {
        const bool branch_taken_0x3a1870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1870u;
        // 0x3a1874: 0xaf8ebd70  sw          $t6, -0x4290($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1870) {
            ctx->pc = 0x3A1940u;
            goto label_3a1940;
        }
    }
    ctx->pc = 0x3A1878u;
label_3a1878:
    // 0x3a1878: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3a1878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3a187c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a187cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a1880: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x3a1880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x3a1884: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x3a1884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x3a1888: 0xaf82bd70  sw          $v0, -0x4290($gp)
    ctx->pc = 0x3a1888u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 2));
    // 0x3a188c: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x3a188cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x3a1890: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3a1890u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3a1894: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x3a1894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x3a1898: 0xaf83bd70  sw          $v1, -0x4290($gp)
    ctx->pc = 0x3a1898u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 3));
    // 0x3a189c: 0x2445000c  addiu       $a1, $v0, 0xC
    ctx->pc = 0x3a189cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x3a18a0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3a18a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3a18a4: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x3a18a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3a18a8: 0xaf84bd70  sw          $a0, -0x4290($gp)
    ctx->pc = 0x3a18a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 4));
    // 0x3a18ac: 0x24460014  addiu       $a2, $v0, 0x14
    ctx->pc = 0x3a18acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x3a18b0: 0xe44c0008  swc1        $f12, 0x8($v0)
    ctx->pc = 0x3a18b0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x3a18b4: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x3a18b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x3a18b8: 0xaf85bd70  sw          $a1, -0x4290($gp)
    ctx->pc = 0x3a18b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 5));
    // 0x3a18bc: 0x2447001c  addiu       $a3, $v0, 0x1C
    ctx->pc = 0x3a18bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x3a18c0: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x3a18c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x3a18c4: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x3a18c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x3a18c8: 0xaf83bd70  sw          $v1, -0x4290($gp)
    ctx->pc = 0x3a18c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 3));
    // 0x3a18cc: 0x24480024  addiu       $t0, $v0, 0x24
    ctx->pc = 0x3a18ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x3a18d0: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x3a18d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x3a18d4: 0x24430028  addiu       $v1, $v0, 0x28
    ctx->pc = 0x3a18d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x3a18d8: 0xaf86bd70  sw          $a2, -0x4290($gp)
    ctx->pc = 0x3a18d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 6));
    // 0x3a18dc: 0x2449002c  addiu       $t1, $v0, 0x2C
    ctx->pc = 0x3a18dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x3a18e0: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x3a18e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x3a18e4: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x3a18e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x3a18e8: 0xaf84bd70  sw          $a0, -0x4290($gp)
    ctx->pc = 0x3a18e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 4));
    // 0x3a18ec: 0x244a0034  addiu       $t2, $v0, 0x34
    ctx->pc = 0x3a18ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x3a18f0: 0xe44c0018  swc1        $f12, 0x18($v0)
    ctx->pc = 0x3a18f0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x3a18f4: 0x24440038  addiu       $a0, $v0, 0x38
    ctx->pc = 0x3a18f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x3a18f8: 0xaf87bd70  sw          $a3, -0x4290($gp)
    ctx->pc = 0x3a18f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 7));
    // 0x3a18fc: 0x244b003c  addiu       $t3, $v0, 0x3C
    ctx->pc = 0x3a18fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x3a1900: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x3a1900u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x3a1904: 0xaf85bd70  sw          $a1, -0x4290($gp)
    ctx->pc = 0x3a1904u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 5));
    // 0x3a1908: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x3a1908u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x3a190c: 0xaf88bd70  sw          $t0, -0x4290($gp)
    ctx->pc = 0x3a190cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 8));
    // 0x3a1910: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x3a1910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x3a1914: 0xaf83bd70  sw          $v1, -0x4290($gp)
    ctx->pc = 0x3a1914u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 3));
    // 0x3a1918: 0xe44c0028  swc1        $f12, 0x28($v0)
    ctx->pc = 0x3a1918u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x3a191c: 0xaf89bd70  sw          $t1, -0x4290($gp)
    ctx->pc = 0x3a191cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 9));
    // 0x3a1920: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x3a1920u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x3a1924: 0xaf86bd70  sw          $a2, -0x4290($gp)
    ctx->pc = 0x3a1924u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 6));
    // 0x3a1928: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x3a1928u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x3a192c: 0xaf8abd70  sw          $t2, -0x4290($gp)
    ctx->pc = 0x3a192cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 10));
    // 0x3a1930: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x3a1930u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x3a1934: 0xaf84bd70  sw          $a0, -0x4290($gp)
    ctx->pc = 0x3a1934u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 4));
    // 0x3a1938: 0xe44d0038  swc1        $f13, 0x38($v0)
    ctx->pc = 0x3a1938u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x3a193c: 0xaf8bbd70  sw          $t3, -0x4290($gp)
    ctx->pc = 0x3a193cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 11));
label_3a1940:
    // 0x3a1940: 0x8f82bd74  lw          $v0, -0x428C($gp)
    ctx->pc = 0x3a1940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950260)));
    // 0x3a1944: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x3a1944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x3a1948: 0xaf82bd74  sw          $v0, -0x428C($gp)
    ctx->pc = 0x3a1948u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950260), GPR_U32(ctx, 2));
label_3a194c:
    // 0x3a194c: 0x13000006  beqz        $t8, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A194Cu;
    {
        const bool branch_taken_0x3a194c = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A194Cu;
        // 0x3a1950: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a194c) {
            ctx->pc = 0x3A1968u;
            goto label_3a1968;
        }
    }
    ctx->pc = 0x3A1954u;
    // 0x3a1954: 0xc106784  jal         func_419E10
    ctx->pc = 0x3A1954u;
    SET_GPR_U32(ctx, 31, 0x3A195Cu);
    ctx->pc = 0x3A1958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1954u;
    // 0x3a1958: 0x300202d  daddu       $a0, $t8, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x3A1954u, 0x3A195Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A195Cu;
label_3a195c:
    // 0x3a195c: 0x244a0030  addiu       $t2, $v0, 0x30
    ctx->pc = 0x3a195cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x3a1960: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3A1960u;
    {
        const bool branch_taken_0x3a1960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1960u;
        // 0x3a1964: 0x244b0020  addiu       $t3, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1960) {
            ctx->pc = 0x3A196Cu;
            goto label_3a196c;
        }
    }
    ctx->pc = 0x3A1968u;
label_3a1968:
    // 0x3a1968: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3a1968u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a196c:
    // 0x3a196c: 0x8f86bd70  lw          $a2, -0x4290($gp)
    ctx->pc = 0x3a196cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950256)));
    // 0x3a1970: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a1970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a1974: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x3a1974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a1978: 0xacd0000c  sw          $s0, 0xC($a2)
    ctx->pc = 0x3a1978u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 16));
    // 0x3a197c: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x3a197cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x3a1980: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x3a1980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a1984: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x3a1984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x3a1988: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x3a1988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a198c: 0x12020028  beq         $s0, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x3A198Cu;
    {
        const bool branch_taken_0x3a198c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A1990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A198Cu;
        // 0x3a1990: 0xe4c10008  swc1        $f1, 0x8($a2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a198c) {
            ctx->pc = 0x3A1A30u;
            goto label_3a1a30;
        }
    }
    ctx->pc = 0x3A1994u;
    // 0x3a1994: 0x2e020003  sltiu       $v0, $s0, 0x3
    ctx->pc = 0x3a1994u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x3a1998: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A1998u;
    {
        const bool branch_taken_0x3a1998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A199Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1998u;
        // 0x3a199c: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1998) {
            ctx->pc = 0x3A19B8u;
            goto label_3a19b8;
        }
    }
    ctx->pc = 0x3A19A0u;
    // 0x3a19a0: 0x12000063  beqz        $s0, . + 4 + (0x63 << 2)
    ctx->pc = 0x3A19A0u;
    {
        const bool branch_taken_0x3a19a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A19A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A19A0u;
        // 0x3a19a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a19a0) {
            ctx->pc = 0x3A1B30u;
            goto label_3a1b30;
        }
    }
    ctx->pc = 0x3A19A8u;
    // 0x3a19a8: 0x1202000c  beq         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3A19A8u;
    {
        const bool branch_taken_0x3a19a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A19ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A19A8u;
        // 0x3a19ac: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a19a8) {
            ctx->pc = 0x3A19DCu;
            goto label_3a19dc;
        }
    }
    ctx->pc = 0x3A19B0u;
    // 0x3a19b0: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x3A19B0u;
    {
        const bool branch_taken_0x3a19b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A19B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A19B0u;
        // 0x3a19b4: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a19b0) {
            ctx->pc = 0x3A1B38u;
            goto label_3a1b38;
        }
    }
    ctx->pc = 0x3A19B8u;
label_3a19b8:
    // 0x3a19b8: 0x12020023  beq         $s0, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x3A19B8u;
    {
        const bool branch_taken_0x3a19b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A19BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A19B8u;
        // 0x3a19bc: 0x2e020080  sltiu       $v0, $s0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a19b8) {
            ctx->pc = 0x3A1A48u;
            goto label_3a1a48;
        }
    }
    ctx->pc = 0x3A19C0u;
    // 0x3a19c0: 0x5440005c  bnel        $v0, $zero, . + 4 + (0x5C << 2)
    ctx->pc = 0x3A19C0u;
    {
        const bool branch_taken_0x3a19c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a19c0) {
            ctx->pc = 0x3A19C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A19C0u;
            // 0x3a19c4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A1B34u;
            goto label_3a1b34;
        }
    }
    ctx->pc = 0x3A19C8u;
    // 0x3a19c8: 0x2e020083  sltiu       $v0, $s0, 0x83
    ctx->pc = 0x3a19c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)131) ? 1 : 0);
    // 0x3a19cc: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x3A19CCu;
    {
        const bool branch_taken_0x3a19cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A19D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A19CCu;
        // 0x3a19d0: 0x8f82bd70  lw          $v0, -0x4290($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a19cc) {
            ctx->pc = 0x3A1B30u;
            goto label_3a1b30;
        }
    }
    ctx->pc = 0x3A19D4u;
    // 0x3a19d4: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x3A19D4u;
    {
        const bool branch_taken_0x3a19d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A19D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A19D4u;
        // 0x3a19d8: 0xc5400000  lwc1        $f0, 0x0($t2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a19d4) {
            ctx->pc = 0x3A1AA0u;
            goto label_3a1aa0;
        }
    }
    ctx->pc = 0x3A19DCu;
label_3a19dc:
    // 0x3a19dc: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x3a19dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a19e0: 0x24c20010  addiu       $v0, $a2, 0x10
    ctx->pc = 0x3a19e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x3a19e4: 0xaf82bd70  sw          $v0, -0x4290($gp)
    ctx->pc = 0x3a19e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 2));
    // 0x3a19e8: 0x24c30014  addiu       $v1, $a2, 0x14
    ctx->pc = 0x3a19e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    // 0x3a19ec: 0xe4c00010  swc1        $f0, 0x10($a2)
    ctx->pc = 0x3a19ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x3a19f0: 0x24c40018  addiu       $a0, $a2, 0x18
    ctx->pc = 0x3a19f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
    // 0x3a19f4: 0xaf83bd70  sw          $v1, -0x4290($gp)
    ctx->pc = 0x3a19f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 3));
    // 0x3a19f8: 0x24c5001c  addiu       $a1, $a2, 0x1C
    ctx->pc = 0x3a19f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 28));
    // 0x3a19fc: 0xc5600004  lwc1        $f0, 0x4($t3)
    ctx->pc = 0x3a19fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a1a00: 0x24c30020  addiu       $v1, $a2, 0x20
    ctx->pc = 0x3a1a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x3a1a04: 0x8f82bd74  lw          $v0, -0x428C($gp)
    ctx->pc = 0x3a1a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950260)));
    // 0x3a1a08: 0xe4c00014  swc1        $f0, 0x14($a2)
    ctx->pc = 0x3a1a08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x3a1a0c: 0xaf84bd70  sw          $a0, -0x4290($gp)
    ctx->pc = 0x3a1a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 4));
    // 0x3a1a10: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x3a1a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x3a1a14: 0xc5600008  lwc1        $f0, 0x8($t3)
    ctx->pc = 0x3a1a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a1a18: 0xaf82bd74  sw          $v0, -0x428C($gp)
    ctx->pc = 0x3a1a18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950260), GPR_U32(ctx, 2));
    // 0x3a1a1c: 0xe4c00018  swc1        $f0, 0x18($a2)
    ctx->pc = 0x3a1a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
    // 0x3a1a20: 0xaf85bd70  sw          $a1, -0x4290($gp)
    ctx->pc = 0x3a1a20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 5));
    // 0x3a1a24: 0xacc0001c  sw          $zero, 0x1C($a2)
    ctx->pc = 0x3a1a24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 0));
    // 0x3a1a28: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x3A1A28u;
    {
        const bool branch_taken_0x3a1a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1A28u;
        // 0x3a1a2c: 0xaf83bd70  sw          $v1, -0x4290($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1a28) {
            ctx->pc = 0x3A1B30u;
            goto label_3a1b30;
        }
    }
    ctx->pc = 0x3A1A30u;
label_3a1a30:
    // 0x3a1a30: 0x8f82bd74  lw          $v0, -0x428C($gp)
    ctx->pc = 0x3a1a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950260)));
    // 0x3a1a34: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x3a1a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x3a1a38: 0xaf83bd70  sw          $v1, -0x4290($gp)
    ctx->pc = 0x3a1a38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 3));
    // 0x3a1a3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a1a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3a1a40: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x3A1A40u;
    {
        const bool branch_taken_0x3a1a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1A40u;
        // 0x3a1a44: 0xaf82bd74  sw          $v0, -0x428C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950260), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1a40) {
            ctx->pc = 0x3A1B30u;
            goto label_3a1b30;
        }
    }
    ctx->pc = 0x3A1A48u;
label_3a1a48:
    // 0x3a1a48: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x3a1a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a1a4c: 0x24c20010  addiu       $v0, $a2, 0x10
    ctx->pc = 0x3a1a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x3a1a50: 0xaf82bd70  sw          $v0, -0x4290($gp)
    ctx->pc = 0x3a1a50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 2));
    // 0x3a1a54: 0x24c30014  addiu       $v1, $a2, 0x14
    ctx->pc = 0x3a1a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    // 0x3a1a58: 0xe4c00010  swc1        $f0, 0x10($a2)
    ctx->pc = 0x3a1a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x3a1a5c: 0x24c40018  addiu       $a0, $a2, 0x18
    ctx->pc = 0x3a1a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
    // 0x3a1a60: 0xaf83bd70  sw          $v1, -0x4290($gp)
    ctx->pc = 0x3a1a60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 3));
    // 0x3a1a64: 0x24c5001c  addiu       $a1, $a2, 0x1C
    ctx->pc = 0x3a1a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 28));
    // 0x3a1a68: 0xc5400004  lwc1        $f0, 0x4($t2)
    ctx->pc = 0x3a1a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a1a6c: 0x24c30020  addiu       $v1, $a2, 0x20
    ctx->pc = 0x3a1a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x3a1a70: 0x8f82bd74  lw          $v0, -0x428C($gp)
    ctx->pc = 0x3a1a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950260)));
    // 0x3a1a74: 0xe4c00014  swc1        $f0, 0x14($a2)
    ctx->pc = 0x3a1a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x3a1a78: 0xaf84bd70  sw          $a0, -0x4290($gp)
    ctx->pc = 0x3a1a78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 4));
    // 0x3a1a7c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x3a1a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x3a1a80: 0xc5400008  lwc1        $f0, 0x8($t2)
    ctx->pc = 0x3a1a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a1a84: 0xaf82bd74  sw          $v0, -0x428C($gp)
    ctx->pc = 0x3a1a84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950260), GPR_U32(ctx, 2));
    // 0x3a1a88: 0xe4c00018  swc1        $f0, 0x18($a2)
    ctx->pc = 0x3a1a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
    // 0x3a1a8c: 0xaf85bd70  sw          $a1, -0x4290($gp)
    ctx->pc = 0x3a1a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 5));
    // 0x3a1a90: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x3a1a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a1a94: 0xe4c0001c  swc1        $f0, 0x1C($a2)
    ctx->pc = 0x3a1a94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
    // 0x3a1a98: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x3A1A98u;
    {
        const bool branch_taken_0x3a1a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1A98u;
        // 0x3a1a9c: 0xaf83bd70  sw          $v1, -0x4290($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1a98) {
            ctx->pc = 0x3A1B30u;
            goto label_3a1b30;
        }
    }
    ctx->pc = 0x3A1AA0u;
label_3a1aa0:
    // 0x3a1aa0: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x3a1aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3a1aa4: 0x24440014  addiu       $a0, $v0, 0x14
    ctx->pc = 0x3a1aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x3a1aa8: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x3a1aa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x3a1aac: 0x24450018  addiu       $a1, $v0, 0x18
    ctx->pc = 0x3a1aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x3a1ab0: 0xaf83bd70  sw          $v1, -0x4290($gp)
    ctx->pc = 0x3a1ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 3));
    // 0x3a1ab4: 0x2446001c  addiu       $a2, $v0, 0x1C
    ctx->pc = 0x3a1ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x3a1ab8: 0xc5400004  lwc1        $f0, 0x4($t2)
    ctx->pc = 0x3a1ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a1abc: 0x24470020  addiu       $a3, $v0, 0x20
    ctx->pc = 0x3a1abcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x3a1ac0: 0xaf84bd70  sw          $a0, -0x4290($gp)
    ctx->pc = 0x3a1ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 4));
    // 0x3a1ac4: 0x24480024  addiu       $t0, $v0, 0x24
    ctx->pc = 0x3a1ac4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x3a1ac8: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x3a1ac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x3a1acc: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x3a1accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x3a1ad0: 0xaf85bd70  sw          $a1, -0x4290($gp)
    ctx->pc = 0x3a1ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 5));
    // 0x3a1ad4: 0x2449002c  addiu       $t1, $v0, 0x2C
    ctx->pc = 0x3a1ad4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x3a1ad8: 0xc5400008  lwc1        $f0, 0x8($t2)
    ctx->pc = 0x3a1ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a1adc: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x3a1adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x3a1ae0: 0x8f83bd74  lw          $v1, -0x428C($gp)
    ctx->pc = 0x3a1ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950260)));
    // 0x3a1ae4: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x3a1ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x3a1ae8: 0xaf86bd70  sw          $a2, -0x4290($gp)
    ctx->pc = 0x3a1ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 6));
    // 0x3a1aec: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x3a1aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x3a1af0: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x3a1af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a1af4: 0xaf83bd74  sw          $v1, -0x428C($gp)
    ctx->pc = 0x3a1af4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950260), GPR_U32(ctx, 3));
    // 0x3a1af8: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x3a1af8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x3a1afc: 0xaf87bd70  sw          $a3, -0x4290($gp)
    ctx->pc = 0x3a1afcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 7));
    // 0x3a1b00: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x3a1b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a1b04: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x3a1b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x3a1b08: 0xaf88bd70  sw          $t0, -0x4290($gp)
    ctx->pc = 0x3a1b08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 8));
    // 0x3a1b0c: 0xc5600004  lwc1        $f0, 0x4($t3)
    ctx->pc = 0x3a1b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a1b10: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x3a1b10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x3a1b14: 0xaf84bd70  sw          $a0, -0x4290($gp)
    ctx->pc = 0x3a1b14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 4));
    // 0x3a1b18: 0xc5600008  lwc1        $f0, 0x8($t3)
    ctx->pc = 0x3a1b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a1b1c: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x3a1b1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x3a1b20: 0xaf89bd70  sw          $t1, -0x4290($gp)
    ctx->pc = 0x3a1b20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 9));
    // 0x3a1b24: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x3a1b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a1b28: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x3a1b28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
    // 0x3a1b2c: 0xaf85bd70  sw          $a1, -0x4290($gp)
    ctx->pc = 0x3a1b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 5));
label_3a1b30:
    // 0x3a1b30: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3a1b30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3a1b34:
    // 0x3a1b34: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3a1b34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a1b38:
    // 0x3a1b38: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3a1b38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a1b3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a1b3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a1b40: 0x3e00008  jr          $ra
    ctx->pc = 0x3A1B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A1B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1B40u;
        // 0x3a1b44: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1B40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A1B48u;
}

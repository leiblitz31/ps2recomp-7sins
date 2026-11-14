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

// Function: sub_003E7858
// Address: 0x3e7858 - 0x3e7ae8
void sub_003E7858_0x3e7858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E7858_0x3e7858");
#endif

    switch (ctx->pc) {
        case 0x3e7accu: goto label_3e7acc;
        default: break;
    }

    ctx->pc = 0x3e7858u;

    // 0x3e7858: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e7858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e785c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3e785cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3e7860: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e7860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e7864: 0xdc820108  ld          $v0, 0x108($a0)
    ctx->pc = 0x3e7864u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 264)));
    // 0x3e7868: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x3e7868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x3e786c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3E786Cu;
    {
        const bool branch_taken_0x3e786c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E786Cu;
        // 0x3e7870: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e786c) {
            ctx->pc = 0x3E78C8u;
            goto label_3e78c8;
        }
    }
    ctx->pc = 0x3E7874u;
    // 0x3e7874: 0x92030029  lbu         $v1, 0x29($s0)
    ctx->pc = 0x3e7874u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
    // 0x3e7878: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3e7878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3e787c: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3E787Cu;
    {
        const bool branch_taken_0x3e787c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E7880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E787Cu;
        // 0x3e7880: 0x948201fe  lhu         $v0, 0x1FE($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 510)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e787c) {
            ctx->pc = 0x3E78A4u;
            goto label_3e78a4;
        }
    }
    ctx->pc = 0x3E7884u;
    // 0x3e7884: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3E7884u;
    {
        const bool branch_taken_0x3e7884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E7888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7884u;
        // 0x3e7888: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7884) {
            ctx->pc = 0x3E7890u;
            goto label_3e7890;
        }
    }
    ctx->pc = 0x3E788Cu;
    // 0x3e788c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e788cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3e7890:
    // 0x3e7890: 0xa2020029  sb          $v0, 0x29($s0)
    ctx->pc = 0x3e7890u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e7894: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3e7894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3e7898: 0xa6000026  sh          $zero, 0x26($s0)
    ctx->pc = 0x3e7898u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 0));
    // 0x3e789c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3E789Cu;
    {
        const bool branch_taken_0x3e789c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E78A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E789Cu;
        // 0x3e78a0: 0xa2020028  sb          $v0, 0x28($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e789c) {
            ctx->pc = 0x3E78C8u;
            goto label_3e78c8;
        }
    }
    ctx->pc = 0x3E78A4u;
label_3e78a4:
    // 0x3e78a4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3E78A4u;
    {
        const bool branch_taken_0x3e78a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E78A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E78A4u;
        // 0x3e78a8: 0x34620004  ori         $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e78a4) {
            ctx->pc = 0x3E78B0u;
            goto label_3e78b0;
        }
    }
    ctx->pc = 0x3E78ACu;
    // 0x3e78ac: 0xa2020029  sb          $v0, 0x29($s0)
    ctx->pc = 0x3e78acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 2));
label_3e78b0:
    // 0x3e78b0: 0x92020028  lbu         $v0, 0x28($s0)
    ctx->pc = 0x3e78b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x3e78b4: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x3e78b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3e78b8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3E78B8u;
    {
        const bool branch_taken_0x3e78b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E78BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E78B8u;
        // 0x3e78bc: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e78b8) {
            ctx->pc = 0x3E78C4u;
            goto label_3e78c4;
        }
    }
    ctx->pc = 0x3E78C0u;
    // 0x3e78c0: 0xa2020028  sb          $v0, 0x28($s0)
    ctx->pc = 0x3e78c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 2));
label_3e78c4:
    // 0x3e78c4: 0xa6000026  sh          $zero, 0x26($s0)
    ctx->pc = 0x3e78c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 0));
label_3e78c8:
    // 0x3e78c8: 0xdc820108  ld          $v0, 0x108($a0)
    ctx->pc = 0x3e78c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 264)));
    // 0x3e78cc: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x3e78ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x3e78d0: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x3E78D0u;
    {
        const bool branch_taken_0x3e78d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e78d0) {
            ctx->pc = 0x3E78D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E78D0u;
            // 0x3e78d4: 0xdc820108  ld          $v0, 0x108($a0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E7904u;
            goto label_3e7904;
        }
    }
    ctx->pc = 0x3E78D8u;
    // 0x3e78d8: 0x92020029  lbu         $v0, 0x29($s0)
    ctx->pc = 0x3e78d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
    // 0x3e78dc: 0xa6000026  sh          $zero, 0x26($s0)
    ctx->pc = 0x3e78dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 0));
    // 0x3e78e0: 0x304200fb  andi        $v0, $v0, 0xFB
    ctx->pc = 0x3e78e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)251);
    // 0x3e78e4: 0xa2020029  sb          $v0, 0x29($s0)
    ctx->pc = 0x3e78e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e78e8: 0x68820223  ldl         $v0, 0x223($a0)
    ctx->pc = 0x3e78e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 547); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3e78ec: 0x6c82021c  ldr         $v0, 0x21C($a0)
    ctx->pc = 0x3e78ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 540); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3e78f0: 0x84830224  lh          $v1, 0x224($a0)
    ctx->pc = 0x3e78f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x3e78f4: 0xb2020071  sdl         $v0, 0x71($s0)
    ctx->pc = 0x3e78f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 113); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3e78f8: 0xb602006a  sdr         $v0, 0x6A($s0)
    ctx->pc = 0x3e78f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 106); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3e78fc: 0xa6030072  sh          $v1, 0x72($s0)
    ctx->pc = 0x3e78fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 114), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e7900: 0xdc820108  ld          $v0, 0x108($a0)
    ctx->pc = 0x3e7900u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 264)));
label_3e7904:
    // 0x3e7904: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x3e7904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x3e7908: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E7908u;
    {
        const bool branch_taken_0x3e7908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e7908) {
            ctx->pc = 0x3E790Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E7908u;
            // 0x3e790c: 0xdc820108  ld          $v0, 0x108($a0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E7924u;
            goto label_3e7924;
        }
    }
    ctx->pc = 0x3E7910u;
    // 0x3e7910: 0xc480024c  lwc1        $f0, 0x24C($a0)
    ctx->pc = 0x3e7910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e7914: 0xdc8202e0  ld          $v0, 0x2E0($a0)
    ctx->pc = 0x3e7914u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 736)));
    // 0x3e7918: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x3e7918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x3e791c: 0xfe020148  sd          $v0, 0x148($s0)
    ctx->pc = 0x3e791cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 328), GPR_U64(ctx, 2));
    // 0x3e7920: 0xdc820108  ld          $v0, 0x108($a0)
    ctx->pc = 0x3e7920u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 264)));
label_3e7924:
    // 0x3e7924: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3e7924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x3e7928: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E7928u;
    {
        const bool branch_taken_0x3e7928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E792Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7928u;
        // 0x3e792c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7928) {
            ctx->pc = 0x3E7944u;
            goto label_3e7944;
        }
    }
    ctx->pc = 0x3E7930u;
    // 0x3e7930: 0x92030028  lbu         $v1, 0x28($s0)
    ctx->pc = 0x3e7930u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x3e7934: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E7934u;
    {
        const bool branch_taken_0x3e7934 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e7934) {
            ctx->pc = 0x3E7938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E7934u;
            // 0x3e7938: 0xdc820108  ld          $v0, 0x108($a0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E7948u;
            goto label_3e7948;
        }
    }
    ctx->pc = 0x3E793Cu;
    // 0x3e793c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3e793cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3e7940: 0xa2020028  sb          $v0, 0x28($s0)
    ctx->pc = 0x3e7940u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 2));
label_3e7944:
    // 0x3e7944: 0xdc820108  ld          $v0, 0x108($a0)
    ctx->pc = 0x3e7944u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 264)));
label_3e7948:
    // 0x3e7948: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x3e7948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x3e794c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3E794Cu;
    {
        const bool branch_taken_0x3e794c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E794Cu;
        // 0x3e7950: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e794c) {
            ctx->pc = 0x3E7988u;
            goto label_3e7988;
        }
    }
    ctx->pc = 0x3E7954u;
    // 0x3e7954: 0x92030029  lbu         $v1, 0x29($s0)
    ctx->pc = 0x3e7954u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
    // 0x3e7958: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E7958u;
    {
        const bool branch_taken_0x3e7958 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E795Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7958u;
        // 0x3e795c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7958) {
            ctx->pc = 0x3E7968u;
            goto label_3e7968;
        }
    }
    ctx->pc = 0x3E7960u;
    // 0x3e7960: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3E7960u;
    {
        const bool branch_taken_0x3e7960 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e7960) {
            ctx->pc = 0x3E7964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E7960u;
            // 0x3e7964: 0xdc820108  ld          $v0, 0x108($a0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E798Cu;
            goto label_3e798c;
        }
    }
    ctx->pc = 0x3E7968u;
label_3e7968:
    // 0x3e7968: 0x8c820290  lw          $v0, 0x290($a0)
    ctx->pc = 0x3e7968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 656)));
    // 0x3e796c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E796Cu;
    {
        const bool branch_taken_0x3e796c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E796Cu;
        // 0x3e7970: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e796c) {
            ctx->pc = 0x3E7988u;
            goto label_3e7988;
        }
    }
    ctx->pc = 0x3E7974u;
    // 0x3e7974: 0x92030028  lbu         $v1, 0x28($s0)
    ctx->pc = 0x3e7974u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x3e7978: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E7978u;
    {
        const bool branch_taken_0x3e7978 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e7978) {
            ctx->pc = 0x3E797Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E7978u;
            // 0x3e797c: 0xdc820108  ld          $v0, 0x108($a0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E798Cu;
            goto label_3e798c;
        }
    }
    ctx->pc = 0x3E7980u;
    // 0x3e7980: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3e7980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3e7984: 0xa2020029  sb          $v0, 0x29($s0)
    ctx->pc = 0x3e7984u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 2));
label_3e7988:
    // 0x3e7988: 0xdc820108  ld          $v0, 0x108($a0)
    ctx->pc = 0x3e7988u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 264)));
label_3e798c:
    // 0x3e798c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3e798cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3e7990: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E7990u;
    {
        const bool branch_taken_0x3e7990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e7990) {
            ctx->pc = 0x3E7994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E7990u;
            // 0x3e7994: 0xdc820108  ld          $v0, 0x108($a0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E79B0u;
            goto label_3e79b0;
        }
    }
    ctx->pc = 0x3E7998u;
    // 0x3e7998: 0x92020028  lbu         $v0, 0x28($s0)
    ctx->pc = 0x3e7998u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x3e799c: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x3e799cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3e79a0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3E79A0u;
    {
        const bool branch_taken_0x3e79a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E79A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E79A0u;
        // 0x3e79a4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e79a0) {
            ctx->pc = 0x3E79ACu;
            goto label_3e79ac;
        }
    }
    ctx->pc = 0x3E79A8u;
    // 0x3e79a8: 0xa2020028  sb          $v0, 0x28($s0)
    ctx->pc = 0x3e79a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 2));
label_3e79ac:
    // 0x3e79ac: 0xdc820108  ld          $v0, 0x108($a0)
    ctx->pc = 0x3e79acu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 264)));
label_3e79b0:
    // 0x3e79b0: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x3e79b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x3e79b4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E79B4u;
    {
        const bool branch_taken_0x3e79b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e79b4) {
            ctx->pc = 0x3E79B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E79B4u;
            // 0x3e79b8: 0xdc820108  ld          $v0, 0x108($a0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E79CCu;
            goto label_3e79cc;
        }
    }
    ctx->pc = 0x3E79BCu;
    // 0x3e79bc: 0x92020029  lbu         $v0, 0x29($s0)
    ctx->pc = 0x3e79bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
    // 0x3e79c0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x3e79c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x3e79c4: 0xa2020029  sb          $v0, 0x29($s0)
    ctx->pc = 0x3e79c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e79c8: 0xdc820108  ld          $v0, 0x108($a0)
    ctx->pc = 0x3e79c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 264)));
label_3e79cc:
    // 0x3e79cc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x3e79ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x3e79d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3e79d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3e79d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E79D4u;
    {
        const bool branch_taken_0x3e79d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E79D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E79D4u;
        // 0x3e79d8: 0x92020029  lbu         $v0, 0x29($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e79d4) {
            ctx->pc = 0x3E79E8u;
            goto label_3e79e8;
        }
    }
    ctx->pc = 0x3E79DCu;
    // 0x3e79dc: 0x304200fd  andi        $v0, $v0, 0xFD
    ctx->pc = 0x3e79dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)253);
    // 0x3e79e0: 0xa2020029  sb          $v0, 0x29($s0)
    ctx->pc = 0x3e79e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e79e4: 0x92020029  lbu         $v0, 0x29($s0)
    ctx->pc = 0x3e79e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
label_3e79e8:
    // 0x3e79e8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3e79e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3e79ec: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E79ECu;
    {
        const bool branch_taken_0x3e79ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3E79F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E79ECu;
        // 0x3e79f0: 0x30420002  andi        $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e79ec) {
            ctx->pc = 0x3E7A04u;
            goto label_3e7a04;
        }
    }
    ctx->pc = 0x3E79F4u;
    // 0x3e79f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E79F4u;
    {
        const bool branch_taken_0x3e79f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E79F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E79F4u;
        // 0x3e79f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e79f4) {
            ctx->pc = 0x3E7A08u;
            goto label_3e7a08;
        }
    }
    ctx->pc = 0x3E79FCu;
    // 0x3e79fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3E79FCu;
    {
        const bool branch_taken_0x3e79fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E79FCu;
        // 0x3e7a00: 0xa203002d  sb          $v1, 0x2D($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 45), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e79fc) {
            ctx->pc = 0x3E7A0Cu;
            goto label_3e7a0c;
        }
    }
    ctx->pc = 0x3E7A04u;
label_3e7a04:
    // 0x3e7a04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e7a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e7a08:
    // 0x3e7a08: 0xa202002d  sb          $v0, 0x2D($s0)
    ctx->pc = 0x3e7a08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 45), (uint8_t)GPR_U32(ctx, 2));
label_3e7a0c:
    // 0x3e7a0c: 0xdc820108  ld          $v0, 0x108($a0)
    ctx->pc = 0x3e7a0cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 264)));
    // 0x3e7a10: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x3e7a10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x3e7a14: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3e7a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3e7a18: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E7A18u;
    {
        const bool branch_taken_0x3e7a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7A18u;
        // 0x3e7a1c: 0x92020029  lbu         $v0, 0x29($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7a18) {
            ctx->pc = 0x3E7A2Cu;
            goto label_3e7a2c;
        }
    }
    ctx->pc = 0x3E7A20u;
    // 0x3e7a20: 0x304200fb  andi        $v0, $v0, 0xFB
    ctx->pc = 0x3e7a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)251);
    // 0x3e7a24: 0xa2020029  sb          $v0, 0x29($s0)
    ctx->pc = 0x3e7a24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e7a28: 0x92020029  lbu         $v0, 0x29($s0)
    ctx->pc = 0x3e7a28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
label_3e7a2c:
    // 0x3e7a2c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3e7a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3e7a30: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E7A30u;
    {
        const bool branch_taken_0x3e7a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e7a30) {
            ctx->pc = 0x3E7A34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E7A30u;
            // 0x3e7a34: 0xdc820108  ld          $v0, 0x108($a0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E7A48u;
            goto label_3e7a48;
        }
    }
    ctx->pc = 0x3E7A38u;
    // 0x3e7a38: 0x9202002d  lbu         $v0, 0x2D($s0)
    ctx->pc = 0x3e7a38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 45)));
    // 0x3e7a3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e7a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3e7a40: 0xa202002d  sb          $v0, 0x2D($s0)
    ctx->pc = 0x3e7a40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 45), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e7a44: 0xdc820108  ld          $v0, 0x108($a0)
    ctx->pc = 0x3e7a44u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 264)));
label_3e7a48:
    // 0x3e7a48: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x3e7a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x3e7a4c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3E7A4Cu;
    {
        const bool branch_taken_0x3e7a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7A4Cu;
        // 0x3e7a50: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7a4c) {
            ctx->pc = 0x3E7A74u;
            goto label_3e7a74;
        }
    }
    ctx->pc = 0x3E7A54u;
    // 0x3e7a54: 0x92030029  lbu         $v1, 0x29($s0)
    ctx->pc = 0x3e7a54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
    // 0x3e7a58: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E7A58u;
    {
        const bool branch_taken_0x3e7a58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3e7a58) {
            ctx->pc = 0x3E7A5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E7A58u;
            // 0x3e7a5c: 0x9202002d  lbu         $v0, 0x2D($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 45)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E7A6Cu;
            goto label_3e7a6c;
        }
    }
    ctx->pc = 0x3E7A60u;
    // 0x3e7a60: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E7A60u;
    {
        const bool branch_taken_0x3e7a60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e7a60) {
            ctx->pc = 0x3E7A64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E7A60u;
            // 0x3e7a64: 0xdc820108  ld          $v0, 0x108($a0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E7A78u;
            goto label_3e7a78;
        }
    }
    ctx->pc = 0x3E7A68u;
    // 0x3e7a68: 0x9202002d  lbu         $v0, 0x2D($s0)
    ctx->pc = 0x3e7a68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 45)));
label_3e7a6c:
    // 0x3e7a6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e7a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3e7a70: 0xa202002d  sb          $v0, 0x2D($s0)
    ctx->pc = 0x3e7a70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 45), (uint8_t)GPR_U32(ctx, 2));
label_3e7a74:
    // 0x3e7a74: 0xdc820108  ld          $v0, 0x108($a0)
    ctx->pc = 0x3e7a74u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 264)));
label_3e7a78:
    // 0x3e7a78: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x3e7a78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x3e7a7c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3e7a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3e7a80: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x3E7A80u;
    {
        const bool branch_taken_0x3e7a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e7a80) {
            ctx->pc = 0x3E7A84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E7A80u;
            // 0x3e7a84: 0x92030028  lbu         $v1, 0x28($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E7AB4u;
            goto label_3e7ab4;
        }
    }
    ctx->pc = 0x3E7A88u;
    // 0x3e7a88: 0x908300f4  lbu         $v1, 0xF4($a0)
    ctx->pc = 0x3e7a88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x3e7a8c: 0x92020028  lbu         $v0, 0x28($s0)
    ctx->pc = 0x3e7a8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x3e7a90: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3e7a90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3e7a94: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3E7A94u;
    {
        const bool branch_taken_0x3e7a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e7a94) {
            ctx->pc = 0x3E7A98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E7A94u;
            // 0x3e7a98: 0xa2030028  sb          $v1, 0x28($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E7A9Cu;
            goto label_3e7a9c;
        }
    }
    ctx->pc = 0x3E7A9Cu;
label_3e7a9c:
    // 0x3e7a9c: 0x908400f5  lbu         $a0, 0xF5($a0)
    ctx->pc = 0x3e7a9cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 245)));
    // 0x3e7aa0: 0x9202002d  lbu         $v0, 0x2D($s0)
    ctx->pc = 0x3e7aa0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 45)));
    // 0x3e7aa4: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x3e7aa4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3e7aa8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3E7AA8u;
    {
        const bool branch_taken_0x3e7aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e7aa8) {
            ctx->pc = 0x3E7AACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E7AA8u;
            // 0x3e7aac: 0xa204002d  sb          $a0, 0x2D($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 45), (uint8_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E7AB0u;
            goto label_3e7ab0;
        }
    }
    ctx->pc = 0x3E7AB0u;
label_3e7ab0:
    // 0x3e7ab0: 0x92030028  lbu         $v1, 0x28($s0)
    ctx->pc = 0x3e7ab0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
label_3e7ab4:
    // 0x3e7ab4: 0x9202002d  lbu         $v0, 0x2D($s0)
    ctx->pc = 0x3e7ab4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 45)));
    // 0x3e7ab8: 0xde040000  ld          $a0, 0x0($s0)
    ctx->pc = 0x3e7ab8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3e7abc: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x3e7abcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3e7ac0: 0xa202002e  sb          $v0, 0x2E($s0)
    ctx->pc = 0x3e7ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 46), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e7ac4: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3E7AC4u;
    SET_GPR_U32(ctx, 31, 0x3E7ACCu);
    ctx->pc = 0x3E7AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7AC4u;
    // 0x3e7ac8: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3E7AC4u, 0x3E7ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7ACCu;
label_3e7acc:
    // 0x3e7acc: 0x64420007  daddiu      $v0, $v0, 0x7
    ctx->pc = 0x3e7accu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)7);
    // 0x3e7ad0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e7ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e7ad4: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x3e7ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x3e7ad8: 0xfe020018  sd          $v0, 0x18($s0)
    ctx->pc = 0x3e7ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 2));
    // 0x3e7adc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3e7adcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e7ae0: 0x3e00008  jr          $ra
    ctx->pc = 0x3E7AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E7AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7AE0u;
        // 0x3e7ae4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E7AE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E7AE8u;
}

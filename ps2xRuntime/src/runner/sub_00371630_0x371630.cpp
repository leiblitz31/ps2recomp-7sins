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

// Function: sub_00371630
// Address: 0x371630 - 0x3719b8
void sub_00371630_0x371630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371630_0x371630");
#endif

    switch (ctx->pc) {
        case 0x371780u: goto label_371780;
        case 0x371868u: goto label_371868;
        case 0x371890u: goto label_371890;
        case 0x3718c0u: goto label_3718c0;
        default: break;
    }

    ctx->pc = 0x371630u;

    // 0x371630: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x371630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x371634: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x371634u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371638: 0x2444c430  addiu       $a0, $v0, -0x3BD0
    ctx->pc = 0x371638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951984));
    // 0x37163c: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x37163cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x371640: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x371640u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61C438u));
    // 0x371644: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x371644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371648: 0x1835821  addu        $t3, $t4, $v1
    ctx->pc = 0x371648u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x37164c: 0x8d620018  lw          $v0, 0x18($t3)
    ctx->pc = 0x37164cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 24)));
    // 0x371650: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x371650u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x371654: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x371654u;
    {
        const bool branch_taken_0x371654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x371658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371654u;
        // 0x371658: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371654) {
            ctx->pc = 0x371664u;
            goto label_371664;
        }
    }
    ctx->pc = 0x37165Cu;
    // 0x37165c: 0x100000d2  b           . + 4 + (0xD2 << 2)
    ctx->pc = 0x37165Cu;
    {
        const bool branch_taken_0x37165c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x371660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37165Cu;
        // 0x371660: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37165c) {
            ctx->pc = 0x3719A8u;
            goto label_3719a8;
        }
    }
    ctx->pc = 0x371664u;
label_371664:
    // 0x371664: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x371664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x371668: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x371668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x37166c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x37166cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x371670: 0x428c3  sra         $a1, $a0, 3
    ctx->pc = 0x371670u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 3));
    // 0x371674: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x371674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x371678: 0x30840007  andi        $a0, $a0, 0x7
    ctx->pc = 0x371678u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x37167c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x37167cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x371680: 0x821007  srav        $v0, $v0, $a0
    ctx->pc = 0x371680u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x371684: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x371684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x371688: 0x144000c7  bnez        $v0, . + 4 + (0xC7 << 2)
    ctx->pc = 0x371688u;
    {
        const bool branch_taken_0x371688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37168Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371688u;
        // 0x37168c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371688) {
            ctx->pc = 0x3719A8u;
            goto label_3719a8;
        }
    }
    ctx->pc = 0x371690u;
    // 0x371690: 0x8cc2002c  lw          $v0, 0x2C($a2)
    ctx->pc = 0x371690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x371694: 0x144c0003  bne         $v0, $t4, . + 4 + (0x3 << 2)
    ctx->pc = 0x371694u;
    {
        const bool branch_taken_0x371694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 12));
        ctx->pc = 0x371698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371694u;
        // 0x371698: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371694) {
            ctx->pc = 0x3716A4u;
            goto label_3716a4;
        }
    }
    ctx->pc = 0x37169Cu;
    // 0x37169c: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x37169Cu;
    {
        const bool branch_taken_0x37169c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3716A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37169Cu;
        // 0x3716a0: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37169c) {
            ctx->pc = 0x3719A8u;
            goto label_3719a8;
        }
    }
    ctx->pc = 0x3716A4u;
label_3716a4:
    // 0x3716a4: 0x6962003b  ldl         $v0, 0x3B($t3)
    ctx->pc = 0x3716a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 59); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3716a8: 0x6d620034  ldr         $v0, 0x34($t3)
    ctx->pc = 0x3716a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 52); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3716ac: 0x8d63003c  lw          $v1, 0x3C($t3)
    ctx->pc = 0x3716acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 60)));
    // 0x3716b0: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x3716b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3716b4: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x3716b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3716b8: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x3716b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x3716bc: 0x69670047  ldl         $a3, 0x47($t3)
    ctx->pc = 0x3716bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x3716c0: 0x6d670040  ldr         $a3, 0x40($t3)
    ctx->pc = 0x3716c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x3716c4: 0x8d620048  lw          $v0, 0x48($t3)
    ctx->pc = 0x3716c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 72)));
    // 0x3716c8: 0xb3a70017  sdl         $a3, 0x17($sp)
    ctx->pc = 0x3716c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3716cc: 0xb7a70010  sdr         $a3, 0x10($sp)
    ctx->pc = 0x3716ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3716d0: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x3716d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x3716d4: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x3716d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x3716d8: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x3716d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3716dc: 0xc7898110  lwc1        $f9, -0x7EF0($gp)
    ctx->pc = 0x3716dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x3716e0: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x3716e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3716e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3716e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3716e8: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x3716e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3716ec: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x3716ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3716f0: 0xc7a50014  lwc1        $f5, 0x14($sp)
    ctx->pc = 0x3716f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3716f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3716f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3716f8: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x3716f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3716fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3716fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371700: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x371700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x371704: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x371704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x371708: 0xe7a40060  swc1        $f4, 0x60($sp)
    ctx->pc = 0x371708u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x37170c: 0xe7a30070  swc1        $f3, 0x70($sp)
    ctx->pc = 0x37170cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x371710: 0xe7a50078  swc1        $f5, 0x78($sp)
    ctx->pc = 0x371710u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x371714: 0xe7a40024  swc1        $f4, 0x24($sp)
    ctx->pc = 0x371714u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x371718: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x371718u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x37171c: 0xe7a40030  swc1        $f4, 0x30($sp)
    ctx->pc = 0x37171cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x371720: 0xe7a5003c  swc1        $f5, 0x3C($sp)
    ctx->pc = 0x371720u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x371724: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x371724u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x371728: 0xe7a50048  swc1        $f5, 0x48($sp)
    ctx->pc = 0x371728u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x37172c: 0xe7a40054  swc1        $f4, 0x54($sp)
    ctx->pc = 0x37172cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x371730: 0xe7a30058  swc1        $f3, 0x58($sp)
    ctx->pc = 0x371730u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x371734: 0xe7a5006c  swc1        $f5, 0x6C($sp)
    ctx->pc = 0x371734u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x371738: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x371738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x37173c: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x37173cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x371740: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x371740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x371744: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x371744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x371748: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x371748u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x37174c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x37174cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x371750: 0xe7a2004c  swc1        $f2, 0x4C($sp)
    ctx->pc = 0x371750u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x371754: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x371754u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x371758: 0xe7a1005c  swc1        $f1, 0x5C($sp)
    ctx->pc = 0x371758u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x37175c: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x37175cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x371760: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x371760u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x371764: 0xe7a2007c  swc1        $f2, 0x7C($sp)
    ctx->pc = 0x371764u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x371768: 0xc4670010  lwc1        $f7, 0x10($v1)
    ctx->pc = 0x371768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x37176c: 0xc4c60010  lwc1        $f6, 0x10($a2)
    ctx->pc = 0x37176cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x371770: 0xc4650004  lwc1        $f5, 0x4($v1)
    ctx->pc = 0x371770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x371774: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x371774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x371778: 0xc463000c  lwc1        $f3, 0xC($v1)
    ctx->pc = 0x371778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x37177c: 0xc7888114  lwc1        $f8, -0x7EEC($gp)
    ctx->pc = 0x37177cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_371780:
    // 0x371780: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x371780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x371784: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x371784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x371788: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x371788u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x37178c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x37178cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x371790: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x371790u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x371794: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x371794u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x371798: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x371798u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x37179c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x37179cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3717a0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x3717a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x3717a4: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x3717a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x3717a8: 0x46004836  c.le.s      $f9, $f0
    ctx->pc = 0x3717a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[9], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3717ac: 0x0  nop
    ctx->pc = 0x3717acu;
    // NOP
    // 0x3717b0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x3717B0u;
    {
        const bool branch_taken_0x3717b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3717B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3717B0u;
        // 0x3717b4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3717b0) {
            ctx->pc = 0x3717CCu;
            goto label_3717cc;
        }
    }
    ctx->pc = 0x3717B8u;
    // 0x3717b8: 0x46080036  c.le.s      $f0, $f8
    ctx->pc = 0x3717b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3717bc: 0x0  nop
    ctx->pc = 0x3717bcu;
    // NOP
    // 0x3717c0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3717C0u;
    {
        const bool branch_taken_0x3717c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3717C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3717C0u;
        // 0x3717c4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3717c0) {
            ctx->pc = 0x3717CCu;
            goto label_3717cc;
        }
    }
    ctx->pc = 0x3717C8u;
    // 0x3717c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3717c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3717cc:
    // 0x3717cc: 0x546a0002  bnel        $v1, $t2, . + 4 + (0x2 << 2)
    ctx->pc = 0x3717CCu;
    {
        const bool branch_taken_0x3717cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 10));
        if (branch_taken_0x3717cc) {
            ctx->pc = 0x3717D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3717CCu;
            // 0x3717d0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3717D8u;
            goto label_3717d8;
        }
    }
    ctx->pc = 0x3717D4u;
    // 0x3717d4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3717d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3717d8:
    // 0x3717d8: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x3717d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3717dc: 0xc4a20010  lwc1        $f2, 0x10($a1)
    ctx->pc = 0x3717dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3717e0: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x3717e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x3717e4: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x3717e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3717e8: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x3717e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x3717ec: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x3717ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x3717f0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3717f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3717f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3717f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3717f8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x3717f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x3717fc: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x3717fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x371800: 0x46004836  c.le.s      $f9, $f0
    ctx->pc = 0x371800u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[9], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x371804: 0x0  nop
    ctx->pc = 0x371804u;
    // NOP
    // 0x371808: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x371808u;
    {
        const bool branch_taken_0x371808 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x37180Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371808u;
        // 0x37180c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371808) {
            ctx->pc = 0x371824u;
            goto label_371824;
        }
    }
    ctx->pc = 0x371810u;
    // 0x371810: 0x46080036  c.le.s      $f0, $f8
    ctx->pc = 0x371810u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x371814: 0x0  nop
    ctx->pc = 0x371814u;
    // NOP
    // 0x371818: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x371818u;
    {
        const bool branch_taken_0x371818 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x37181Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371818u;
        // 0x37181c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371818) {
            ctx->pc = 0x371824u;
            goto label_371824;
        }
    }
    ctx->pc = 0x371820u;
    // 0x371820: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x371820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_371824:
    // 0x371824: 0x546a0002  bnel        $v1, $t2, . + 4 + (0x2 << 2)
    ctx->pc = 0x371824u;
    {
        const bool branch_taken_0x371824 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 10));
        if (branch_taken_0x371824) {
            ctx->pc = 0x371828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x371824u;
            // 0x371828: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x371830u;
            goto label_371830;
        }
    }
    ctx->pc = 0x37182Cu;
    // 0x37182c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x37182cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_371830:
    // 0x371830: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x371830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x371834: 0x24a50018  addiu       $a1, $a1, 0x18
    ctx->pc = 0x371834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x371838: 0x2508fffe  addiu       $t0, $t0, -0x2
    ctx->pc = 0x371838u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967294));
    // 0x37183c: 0x501ffd0  bgez        $t0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x37183Cu;
    {
        const bool branch_taken_0x37183c = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x371840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37183Cu;
        // 0x371840: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37183c) {
            ctx->pc = 0x371780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_371780;
        }
    }
    ctx->pc = 0x371844u;
    // 0x371844: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x371844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x371848: 0x54e20009  bnel        $a3, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x371848u;
    {
        const bool branch_taken_0x371848 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x371848) {
            ctx->pc = 0x37184Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x371848u;
            // 0x37184c: 0x8cc5000c  lw          $a1, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x371870u;
            goto label_371870;
        }
    }
    ctx->pc = 0x371850u;
    // 0x371850: 0x51200005  beql        $t1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x371850u;
    {
        const bool branch_taken_0x371850 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x371850) {
            ctx->pc = 0x371854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x371850u;
            // 0x371854: 0xad670014  sw          $a3, 0x14($t3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 11), 20), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x371868u;
            goto label_371868;
        }
    }
    ctx->pc = 0x371858u;
    // 0x371858: 0x55270005  bnel        $t1, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x371858u;
    {
        const bool branch_taken_0x371858 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 7));
        if (branch_taken_0x371858) {
            ctx->pc = 0x37185Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x371858u;
            // 0x37185c: 0x8cc5000c  lw          $a1, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x371870u;
            goto label_371870;
        }
    }
    ctx->pc = 0x371860u;
    // 0x371860: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x371860u;
    {
        const bool branch_taken_0x371860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x371864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371860u;
        // 0x371864: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371860) {
            ctx->pc = 0x3719A8u;
            goto label_3719a8;
        }
    }
    ctx->pc = 0x371868u;
label_371868:
    // 0x371868: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x371868u;
    {
        const bool branch_taken_0x371868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37186Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371868u;
        // 0x37186c: 0x180102d  daddu       $v0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371868) {
            ctx->pc = 0x3719B0u;
            goto label_3719b0;
        }
    }
    ctx->pc = 0x371870u;
label_371870:
    // 0x371870: 0x10a0004d  beqz        $a1, . + 4 + (0x4D << 2)
    ctx->pc = 0x371870u;
    {
        const bool branch_taken_0x371870 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x371874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371870u;
        // 0x371874: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371870) {
            ctx->pc = 0x3719A8u;
            goto label_3719a8;
        }
    }
    ctx->pc = 0x371878u;
    // 0x371878: 0xc7898110  lwc1        $f9, -0x7EF0($gp)
    ctx->pc = 0x371878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x37187c: 0x240d0002  addiu       $t5, $zero, 0x2
    ctx->pc = 0x37187cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x371880: 0xc7888114  lwc1        $f8, -0x7EEC($gp)
    ctx->pc = 0x371880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x371884: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x371884u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x371888: 0x24a30018  addiu       $v1, $a1, 0x18
    ctx->pc = 0x371888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x37188c: 0x0  nop
    ctx->pc = 0x37188cu;
    // NOP
label_371890:
    // 0x371890: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x371890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x371894: 0xc4670010  lwc1        $f7, 0x10($v1)
    ctx->pc = 0x371894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x371898: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x371898u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37189c: 0xc4660004  lwc1        $f6, 0x4($v1)
    ctx->pc = 0x37189cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3718a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3718a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3718a4: 0xc4650008  lwc1        $f5, 0x8($v1)
    ctx->pc = 0x3718a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3718a8: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x3718a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3718ac: 0xc464000c  lwc1        $f4, 0xC($v1)
    ctx->pc = 0x3718acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3718b0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3718b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3718b4: 0xc4a30018  lwc1        $f3, 0x18($a1)
    ctx->pc = 0x3718b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3718b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3718b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3718bc: 0x8caa000c  lw          $t2, 0xC($a1)
    ctx->pc = 0x3718bcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_3718c0:
    // 0x3718c0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3718c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3718c4: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x3718c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3718c8: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x3718c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x3718cc: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x3718ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3718d0: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x3718d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x3718d4: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x3718d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x3718d8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3718d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3718dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3718dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3718e0: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x3718e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x3718e4: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x3718e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x3718e8: 0x46004836  c.le.s      $f9, $f0
    ctx->pc = 0x3718e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[9], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3718ec: 0x0  nop
    ctx->pc = 0x3718ecu;
    // NOP
    // 0x3718f0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x3718F0u;
    {
        const bool branch_taken_0x3718f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3718F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3718F0u;
        // 0x3718f4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3718f0) {
            ctx->pc = 0x37190Cu;
            goto label_37190c;
        }
    }
    ctx->pc = 0x3718F8u;
    // 0x3718f8: 0x46080036  c.le.s      $f0, $f8
    ctx->pc = 0x3718f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3718fc: 0x0  nop
    ctx->pc = 0x3718fcu;
    // NOP
    // 0x371900: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x371900u;
    {
        const bool branch_taken_0x371900 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x371904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371900u;
        // 0x371904: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371900) {
            ctx->pc = 0x37190Cu;
            goto label_37190c;
        }
    }
    ctx->pc = 0x371908u;
    // 0x371908: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x371908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_37190c:
    // 0x37190c: 0x546d0002  bnel        $v1, $t5, . + 4 + (0x2 << 2)
    ctx->pc = 0x37190Cu;
    {
        const bool branch_taken_0x37190c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 13));
        if (branch_taken_0x37190c) {
            ctx->pc = 0x371910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37190Cu;
            // 0x371910: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x371918u;
            goto label_371918;
        }
    }
    ctx->pc = 0x371914u;
    // 0x371914: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x371914u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_371918:
    // 0x371918: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x371918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37191c: 0xc4c20010  lwc1        $f2, 0x10($a2)
    ctx->pc = 0x37191cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x371920: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x371920u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x371924: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x371924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x371928: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x371928u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x37192c: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x37192cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x371930: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x371930u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x371934: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x371934u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x371938: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x371938u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x37193c: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x37193cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x371940: 0x46004836  c.le.s      $f9, $f0
    ctx->pc = 0x371940u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[9], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x371944: 0x0  nop
    ctx->pc = 0x371944u;
    // NOP
    // 0x371948: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x371948u;
    {
        const bool branch_taken_0x371948 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x37194Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371948u;
        // 0x37194c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371948) {
            ctx->pc = 0x371964u;
            goto label_371964;
        }
    }
    ctx->pc = 0x371950u;
    // 0x371950: 0x46080036  c.le.s      $f0, $f8
    ctx->pc = 0x371950u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x371954: 0x0  nop
    ctx->pc = 0x371954u;
    // NOP
    // 0x371958: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x371958u;
    {
        const bool branch_taken_0x371958 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x37195Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371958u;
        // 0x37195c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371958) {
            ctx->pc = 0x371964u;
            goto label_371964;
        }
    }
    ctx->pc = 0x371960u;
    // 0x371960: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x371960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_371964:
    // 0x371964: 0x546d0002  bnel        $v1, $t5, . + 4 + (0x2 << 2)
    ctx->pc = 0x371964u;
    {
        const bool branch_taken_0x371964 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 13));
        if (branch_taken_0x371964) {
            ctx->pc = 0x371968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x371964u;
            // 0x371968: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x371970u;
            goto label_371970;
        }
    }
    ctx->pc = 0x37196Cu;
    // 0x37196c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x37196cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_371970:
    // 0x371970: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x371970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x371974: 0x24c60018  addiu       $a2, $a2, 0x18
    ctx->pc = 0x371974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
    // 0x371978: 0x2508fffe  addiu       $t0, $t0, -0x2
    ctx->pc = 0x371978u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967294));
    // 0x37197c: 0x501ffd0  bgez        $t0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x37197Cu;
    {
        const bool branch_taken_0x37197c = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x371980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37197Cu;
        // 0x371980: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37197c) {
            ctx->pc = 0x3718C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3718c0;
        }
    }
    ctx->pc = 0x371984u;
    // 0x371984: 0x14ee0005  bne         $a3, $t6, . + 4 + (0x5 << 2)
    ctx->pc = 0x371984u;
    {
        const bool branch_taken_0x371984 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 14));
        ctx->pc = 0x371988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371984u;
        // 0x371988: 0x140282d  daddu       $a1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371984) {
            ctx->pc = 0x37199Cu;
            goto label_37199c;
        }
    }
    ctx->pc = 0x37198Cu;
    // 0x37198c: 0x5120ffb6  beql        $t1, $zero, . + 4 + (-0x4A << 2)
    ctx->pc = 0x37198Cu;
    {
        const bool branch_taken_0x37198c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x37198c) {
            ctx->pc = 0x371990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37198Cu;
            // 0x371990: 0xad670014  sw          $a3, 0x14($t3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 11), 20), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x371868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_371868;
        }
    }
    ctx->pc = 0x371994u;
    // 0x371994: 0x11270004  beq         $t1, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x371994u;
    {
        const bool branch_taken_0x371994 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 7));
        ctx->pc = 0x371998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371994u;
        // 0x371998: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371994) {
            ctx->pc = 0x3719A8u;
            goto label_3719a8;
        }
    }
    ctx->pc = 0x37199Cu;
label_37199c:
    // 0x37199c: 0x1540ffbc  bnez        $t2, . + 4 + (-0x44 << 2)
    ctx->pc = 0x37199Cu;
    {
        const bool branch_taken_0x37199c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x3719A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37199Cu;
        // 0x3719a0: 0x24a30018  addiu       $v1, $a1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37199c) {
            ctx->pc = 0x371890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_371890;
        }
    }
    ctx->pc = 0x3719A4u;
    // 0x3719a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3719a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3719a8:
    // 0x3719a8: 0x180102d  daddu       $v0, $t4, $zero
    ctx->pc = 0x3719a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3719ac: 0xad630014  sw          $v1, 0x14($t3)
    ctx->pc = 0x3719acu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 20), GPR_U32(ctx, 3));
label_3719b0:
    // 0x3719b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3719B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3719B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3719B0u;
        // 0x3719b4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3719B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3719B8u;
}

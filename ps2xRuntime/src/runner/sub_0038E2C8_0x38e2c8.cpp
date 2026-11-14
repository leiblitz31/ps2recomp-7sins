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

// Function: sub_0038E2C8
// Address: 0x38e2c8 - 0x38e408
void sub_0038E2C8_0x38e2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038E2C8_0x38e2c8");
#endif

    switch (ctx->pc) {
        case 0x38e2fcu: goto label_38e2fc;
        case 0x38e314u: goto label_38e314;
        case 0x38e334u: goto label_38e334;
        case 0x38e354u: goto label_38e354;
        case 0x38e35cu: goto label_38e35c;
        case 0x38e3b4u: goto label_38e3b4;
        case 0x38e3d0u: goto label_38e3d0;
        case 0x38e3e4u: goto label_38e3e4;
        default: break;
    }

    ctx->pc = 0x38e2c8u;

    // 0x38e2c8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x38e2c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x38e2cc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x38e2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x38e2d0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x38e2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x38e2d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38e2d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e2d8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x38e2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x38e2dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x38e2dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e2e0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x38e2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x38e2e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x38e2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x38e2e8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x38e2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38e2ec: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38E2ECu;
    {
        const bool branch_taken_0x38e2ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E2ECu;
        // 0x38e2f0: 0x24120028  addiu       $s2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e2ec) {
            ctx->pc = 0x38E300u;
            goto label_38e300;
        }
    }
    ctx->pc = 0x38E2F4u;
    // 0x38e2f4: 0xc10598e  jal         func_416638
    ctx->pc = 0x38E2F4u;
    SET_GPR_U32(ctx, 31, 0x38E2FCu);
    ctx->pc = 0x416638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x416638u, 0x38E2F4u, 0x38E2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E2FCu;
label_38e2fc:
    // 0x38e2fc: 0x24520034  addiu       $s2, $v0, 0x34
    ctx->pc = 0x38e2fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
label_38e300:
    // 0x38e300: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x38e300u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x38e304: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38e304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e308: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x38e308u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e30c: 0xc104aec  jal         func_412BB0
    ctx->pc = 0x38E30Cu;
    SET_GPR_U32(ctx, 31, 0x38E314u);
    ctx->pc = 0x38E310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E30Cu;
    // 0x38e310: 0x2484ae00  addiu       $a0, $a0, -0x5200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412BB0u, 0x38E30Cu, 0x38E314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E314u;
label_38e314:
    // 0x38e314: 0x2646000c  addiu       $a2, $s2, 0xC
    ctx->pc = 0x38e314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x38e318: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x38e318u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x38e31c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x38e31cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x38e320: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38e320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e324: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x38e324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x38e328: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x38e328u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x38e32c: 0xc103404  jal         func_40D010
    ctx->pc = 0x38E32Cu;
    SET_GPR_U32(ctx, 31, 0x38E334u);
    ctx->pc = 0x38E330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E32Cu;
    // 0x38e330: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x38E32Cu, 0x38E334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E334u;
label_38e334:
    // 0x38e334: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x38E334u;
    {
        const bool branch_taken_0x38e334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E334u;
        // 0x38e338: 0x3c070003  lui         $a3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e334) {
            ctx->pc = 0x38E35Cu;
            goto label_38e35c;
        }
    }
    ctx->pc = 0x38E33Cu;
    // 0x38e33c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38e33cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e340: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x38e340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38e344: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x38e344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x38e348: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x38e348u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x38e34c: 0xc103404  jal         func_40D010
    ctx->pc = 0x38E34Cu;
    SET_GPR_U32(ctx, 31, 0x38E354u);
    ctx->pc = 0x38E350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E34Cu;
    // 0x38e350: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x38E34Cu, 0x38E354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E354u;
label_38e354:
    // 0x38e354: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x38E354u;
    {
        const bool branch_taken_0x38e354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38e354) {
            ctx->pc = 0x38E358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38E354u;
            // 0x38e358: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38E364u;
            goto label_38e364;
        }
    }
    ctx->pc = 0x38E35Cu;
label_38e35c:
    // 0x38e35c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x38E35Cu;
    {
        const bool branch_taken_0x38e35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E35Cu;
        // 0x38e360: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e35c) {
            ctx->pc = 0x38E3ECu;
            goto label_38e3ec;
        }
    }
    ctx->pc = 0x38E364u;
label_38e364:
    // 0x38e364: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38E364u;
    {
        const bool branch_taken_0x38e364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E364u;
        // 0x38e368: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e364) {
            ctx->pc = 0x38E378u;
            goto label_38e378;
        }
    }
    ctx->pc = 0x38E36Cu;
    // 0x38e36c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38e36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38e370: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x38E370u;
    {
        const bool branch_taken_0x38e370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E370u;
        // 0x38e374: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e370) {
            ctx->pc = 0x38E37Cu;
            goto label_38e37c;
        }
    }
    ctx->pc = 0x38E378u;
label_38e378:
    // 0x38e378: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x38e378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_38e37c:
    // 0x38e37c: 0x6a020013  ldl         $v0, 0x13($s0)
    ctx->pc = 0x38e37cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x38e380: 0x6e02000c  ldr         $v0, 0xC($s0)
    ctx->pc = 0x38e380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x38e384: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x38e384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x38e388: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x38e388u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x38e38c: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x38e38cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x38e390: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x38e390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x38e394: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x38e394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x38e398: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38e398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e39c: 0x8a070007  lwl         $a3, 0x7($s0)
    ctx->pc = 0x38e39cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x38e3a0: 0x9a070004  lwr         $a3, 0x4($s0)
    ctx->pc = 0x38e3a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x38e3a4: 0xaba70007  swl         $a3, 0x7($sp)
    ctx->pc = 0x38e3a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x38e3a8: 0xbba70004  swr         $a3, 0x4($sp)
    ctx->pc = 0x38e3a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x38e3ac: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x38E3ACu;
    SET_GPR_U32(ctx, 31, 0x38E3B4u);
    ctx->pc = 0x38E3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E3ACu;
    // 0x38e3b0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x38E3ACu, 0x38E3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E3B4u;
label_38e3b4:
    // 0x38e3b4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x38E3B4u;
    {
        const bool branch_taken_0x38e3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E3B4u;
        // 0x38e3b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e3b4) {
            ctx->pc = 0x38E3ECu;
            goto label_38e3ec;
        }
    }
    ctx->pc = 0x38E3BCu;
    // 0x38e3bc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x38e3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38e3c0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x38E3C0u;
    {
        const bool branch_taken_0x38e3c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E3C0u;
        // 0x38e3c4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e3c0) {
            ctx->pc = 0x38E3D8u;
            goto label_38e3d8;
        }
    }
    ctx->pc = 0x38E3C8u;
    // 0x38e3c8: 0xc105778  jal         func_415DE0
    ctx->pc = 0x38E3C8u;
    SET_GPR_U32(ctx, 31, 0x38E3D0u);
    ctx->pc = 0x38E3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E3C8u;
    // 0x38e3cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415DE0u, 0x38E3C8u, 0x38E3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E3D0u;
label_38e3d0:
    // 0x38e3d0: 0x1040ffe2  beqz        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x38E3D0u;
    {
        const bool branch_taken_0x38e3d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E3D0u;
        // 0x38e3d4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e3d0) {
            ctx->pc = 0x38E35Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38e35c;
        }
    }
    ctx->pc = 0x38E3D8u;
label_38e3d8:
    // 0x38e3d8: 0x2664ae00  addiu       $a0, $s3, -0x5200
    ctx->pc = 0x38e3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946304));
    // 0x38e3dc: 0xc104a72  jal         func_4129C8
    ctx->pc = 0x38E3DCu;
    SET_GPR_U32(ctx, 31, 0x38E3E4u);
    ctx->pc = 0x38E3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E3DCu;
    // 0x38e3e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4129C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4129C8u, 0x38E3DCu, 0x38E3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E3E4u;
label_38e3e4:
    // 0x38e3e4: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x38e3e4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x38e3e8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38e3e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38e3ec:
    // 0x38e3ec: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x38e3ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x38e3f0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x38e3f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x38e3f4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x38e3f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38e3f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x38e3f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38e3fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x38e3fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38e400: 0x3e00008  jr          $ra
    ctx->pc = 0x38E400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38E404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E400u;
        // 0x38e404: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38E408u;
}

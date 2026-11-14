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

// Function: sub_00432168
// Address: 0x432168 - 0x4322a0
void sub_00432168_0x432168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00432168_0x432168");
#endif

    ctx->pc = 0x432168u;

    // 0x432168: 0x8f82bee0  lw          $v0, -0x4120($gp)
    ctx->pc = 0x432168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950624)));
    // 0x43216c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x43216Cu;
    {
        const bool branch_taken_0x43216c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x432170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43216Cu;
        // 0x432170: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43216c) {
            ctx->pc = 0x432184u;
            goto label_432184;
        }
    }
    ctx->pc = 0x432174u;
    // 0x432174: 0x2882005a  slti        $v0, $a0, 0x5A
    ctx->pc = 0x432174u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)90) ? 1 : 0);
    // 0x432178: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x432178u;
    {
        const bool branch_taken_0x432178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43217Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432178u;
        // 0x43217c: 0x2882ffff  slti        $v0, $a0, -0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967295) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x432178) {
            ctx->pc = 0x432184u;
            goto label_432184;
        }
    }
    ctx->pc = 0x432180u;
    // 0x432180: 0x38470001  xori        $a3, $v0, 0x1
    ctx->pc = 0x432180u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_432184:
    // 0x432184: 0x10e00043  beqz        $a3, . + 4 + (0x43 << 2)
    ctx->pc = 0x432184u;
    {
        const bool branch_taken_0x432184 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x432188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432184u;
        // 0x432188: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432184) {
            ctx->pc = 0x432294u;
            goto label_432294;
        }
    }
    ctx->pc = 0x43218Cu;
    // 0x43218c: 0xaf84bed8  sw          $a0, -0x4128($gp)
    ctx->pc = 0x43218cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950616), GPR_U32(ctx, 4));
    // 0x432190: 0x10820039  beq         $a0, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x432190u;
    {
        const bool branch_taken_0x432190 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x432194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432190u;
        // 0x432194: 0x3c060062  lui         $a2, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432190) {
            ctx->pc = 0x432278u;
            goto label_432278;
        }
    }
    ctx->pc = 0x432198u;
    // 0x432198: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x432198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x43219c: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x43219cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x4321a0: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x4321a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4321a4: 0x2463cac0  addiu       $v1, $v1, -0x3540
    ctx->pc = 0x4321a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953664));
    // 0x4321a8: 0x24c53b90  addiu       $a1, $a2, 0x3B90
    ctx->pc = 0x4321a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 15248));
    // 0x4321ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4321acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4321b0: 0x24c93b90  addiu       $t1, $a2, 0x3B90
    ctx->pc = 0x4321b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 15248));
    // 0x4321b4: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x4321b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4321b8: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x4321b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4321bc: 0x6844000f  ldl         $a0, 0xF($v0)
    ctx->pc = 0x4321bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x4321c0: 0x6c440008  ldr         $a0, 0x8($v0)
    ctx->pc = 0x4321c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x4321c4: 0x68480017  ldl         $t0, 0x17($v0)
    ctx->pc = 0x4321c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x4321c8: 0x6c480010  ldr         $t0, 0x10($v0)
    ctx->pc = 0x4321c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x4321cc: 0xb1230007  sdl         $v1, 0x7($t1)
    ctx->pc = 0x4321ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4321d0: 0xb5230000  sdr         $v1, 0x0($t1)
    ctx->pc = 0x4321d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4321d4: 0xb124000f  sdl         $a0, 0xF($t1)
    ctx->pc = 0x4321d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4321d8: 0xb5240008  sdr         $a0, 0x8($t1)
    ctx->pc = 0x4321d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4321dc: 0xb1280017  sdl         $t0, 0x17($t1)
    ctx->pc = 0x4321dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4321e0: 0xb5280010  sdr         $t0, 0x10($t1)
    ctx->pc = 0x4321e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4321e4: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x4321e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4321e8: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x4321e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4321ec: 0x6844000f  ldl         $a0, 0xF($v0)
    ctx->pc = 0x4321ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x4321f0: 0x6c440008  ldr         $a0, 0x8($v0)
    ctx->pc = 0x4321f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x4321f4: 0x68480017  ldl         $t0, 0x17($v0)
    ctx->pc = 0x4321f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x4321f8: 0x6c480010  ldr         $t0, 0x10($v0)
    ctx->pc = 0x4321f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x4321fc: 0xb0a3001f  sdl         $v1, 0x1F($a1)
    ctx->pc = 0x4321fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x432200: 0xb4a30018  sdr         $v1, 0x18($a1)
    ctx->pc = 0x432200u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x432204: 0xb0a40027  sdl         $a0, 0x27($a1)
    ctx->pc = 0x432204u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x432208: 0xb4a40020  sdr         $a0, 0x20($a1)
    ctx->pc = 0x432208u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x43220c: 0xb0a8002f  sdl         $t0, 0x2F($a1)
    ctx->pc = 0x43220cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x432210: 0xb4a80028  sdr         $t0, 0x28($a1)
    ctx->pc = 0x432210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x432214: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x432214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x432218: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x432218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x43221c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x43221Cu;
    {
        const bool branch_taken_0x43221c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x432220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43221Cu;
        // 0x432220: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43221c) {
            ctx->pc = 0x43225Cu;
            goto label_43225c;
        }
    }
    ctx->pc = 0x432224u;
    // 0x432224: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x432224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x432228: 0x8f84aeb0  lw          $a0, -0x5150($gp)
    ctx->pc = 0x432228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946480)));
    // 0x43222c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x43222cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x432230: 0xa0a30031  sb          $v1, 0x31($a1)
    ctx->pc = 0x432230u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 49), (uint8_t)GPR_U32(ctx, 3));
    // 0x432234: 0xaca2001c  sw          $v0, 0x1C($a1)
    ctx->pc = 0x432234u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
    // 0x432238: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x432238u;
    {
        const bool branch_taken_0x432238 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x43223Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432238u;
        // 0x43223c: 0xa0a30030  sb          $v1, 0x30($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 48), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432238) {
            ctx->pc = 0x432248u;
            goto label_432248;
        }
    }
    ctx->pc = 0x432240u;
    // 0x432240: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x432240u;
    {
        const bool branch_taken_0x432240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x432244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432240u;
        // 0x432244: 0xaca40018  sw          $a0, 0x18($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432240) {
            ctx->pc = 0x432250u;
            goto label_432250;
        }
    }
    ctx->pc = 0x432248u;
label_432248:
    // 0x432248: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x432248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x43224c: 0xaf82aeb0  sw          $v0, -0x5150($gp)
    ctx->pc = 0x43224cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946480), GPR_U32(ctx, 2));
label_432250:
    // 0x432250: 0x24c23b90  addiu       $v0, $a2, 0x3B90
    ctx->pc = 0x432250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 15248));
    // 0x432254: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x432254u;
    {
        const bool branch_taken_0x432254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x432258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432254u;
        // 0x432258: 0xa0400033  sb          $zero, 0x33($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 51), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432254) {
            ctx->pc = 0x432274u;
            goto label_432274;
        }
    }
    ctx->pc = 0x43225Cu;
label_43225c:
    // 0x43225c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x43225cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x432260: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x432260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x432264: 0xa0a20033  sb          $v0, 0x33($a1)
    ctx->pc = 0x432264u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 51), (uint8_t)GPR_U32(ctx, 2));
    // 0x432268: 0xa0a30031  sb          $v1, 0x31($a1)
    ctx->pc = 0x432268u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 49), (uint8_t)GPR_U32(ctx, 3));
    // 0x43226c: 0xa0a30030  sb          $v1, 0x30($a1)
    ctx->pc = 0x43226cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 48), (uint8_t)GPR_U32(ctx, 3));
    // 0x432270: 0x24c23b90  addiu       $v0, $a2, 0x3B90
    ctx->pc = 0x432270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 15248));
label_432274:
    // 0x432274: 0xa0400032  sb          $zero, 0x32($v0)
    ctx->pc = 0x432274u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 50), (uint8_t)GPR_U32(ctx, 0));
label_432278:
    // 0x432278: 0x24c23b90  addiu       $v0, $a2, 0x3B90
    ctx->pc = 0x432278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 15248));
    // 0x43227c: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x43227cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x432280: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x432280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x432284: 0x14640002  bne         $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x432284u;
    {
        const bool branch_taken_0x432284 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x432288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432284u;
        // 0x432288: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432284) {
            ctx->pc = 0x432290u;
            goto label_432290;
        }
    }
    ctx->pc = 0x43228Cu;
    // 0x43228c: 0x24020500  addiu       $v0, $zero, 0x500
    ctx->pc = 0x43228cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
label_432290:
    // 0x432290: 0xaf82bedc  sw          $v0, -0x4124($gp)
    ctx->pc = 0x432290u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950620), GPR_U32(ctx, 2));
label_432294:
    // 0x432294: 0x3e00008  jr          $ra
    ctx->pc = 0x432294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x432298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432294u;
        // 0x432298: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x432294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43229Cu;
    // 0x43229c: 0x0  nop
    ctx->pc = 0x43229cu;
    // NOP
    ctx->pc = 0x4322a0u;
}

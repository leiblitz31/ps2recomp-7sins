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

// Function: sub_0044C960
// Address: 0x44c960 - 0x44cac8
void sub_0044C960_0x44c960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044C960_0x44c960");
#endif

    switch (ctx->pc) {
        case 0x44ca10u: goto label_44ca10;
        case 0x44caa8u: goto label_44caa8;
        case 0x44cab8u: goto label_44cab8;
        default: break;
    }

    ctx->pc = 0x44c960u;

    // 0x44c960: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x44c960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x44c964: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x44c964u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44c968: 0x1100004a  beqz        $t0, . + 4 + (0x4A << 2)
    ctx->pc = 0x44C968u;
    {
        const bool branch_taken_0x44c968 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C968u;
        // 0x44c96c: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c968) {
            ctx->pc = 0x44CA94u;
            goto label_44ca94;
        }
    }
    ctx->pc = 0x44C970u;
    // 0x44c970: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x44c970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x44c974: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x44c974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x44c978: 0x2445e880  addiu       $a1, $v0, -0x1780
    ctx->pc = 0x44c978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x44c97c: 0x8ca30124  lw          $v1, 0x124($a1)
    ctx->pc = 0x44c97cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61E9A4u));
    // 0x44c980: 0x1464001a  bne         $v1, $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x44C980u;
    {
        const bool branch_taken_0x44c980 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x44C984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C980u;
        // 0x44c984: 0x8f82bf20  lw          $v0, -0x40E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c980) {
            ctx->pc = 0x44C9ECu;
            goto label_44c9ec;
        }
    }
    ctx->pc = 0x44C988u;
    // 0x44c988: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x44c988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x44c98c: 0x6843000b  ldl         $v1, 0xB($v0)
    ctx->pc = 0x44c98cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x44c990: 0x6c430004  ldr         $v1, 0x4($v0)
    ctx->pc = 0x44c990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x44c994: 0x68440013  ldl         $a0, 0x13($v0)
    ctx->pc = 0x44c994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x44c998: 0x6c44000c  ldr         $a0, 0xC($v0)
    ctx->pc = 0x44c998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x44c99c: 0x6845001b  ldl         $a1, 0x1B($v0)
    ctx->pc = 0x44c99cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x44c9a0: 0x6c450014  ldr         $a1, 0x14($v0)
    ctx->pc = 0x44c9a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x44c9a4: 0x68460023  ldl         $a2, 0x23($v0)
    ctx->pc = 0x44c9a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x44c9a8: 0x6c46001c  ldr         $a2, 0x1C($v0)
    ctx->pc = 0x44c9a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x44c9ac: 0xb1030007  sdl         $v1, 0x7($t0)
    ctx->pc = 0x44c9acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x44c9b0: 0xb5030000  sdr         $v1, 0x0($t0)
    ctx->pc = 0x44c9b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x44c9b4: 0xb104000f  sdl         $a0, 0xF($t0)
    ctx->pc = 0x44c9b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x44c9b8: 0xb5040008  sdr         $a0, 0x8($t0)
    ctx->pc = 0x44c9b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x44c9bc: 0xb1050017  sdl         $a1, 0x17($t0)
    ctx->pc = 0x44c9bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x44c9c0: 0xb5050010  sdr         $a1, 0x10($t0)
    ctx->pc = 0x44c9c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x44c9c4: 0xb106001f  sdl         $a2, 0x1F($t0)
    ctx->pc = 0x44c9c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x44c9c8: 0xb5060018  sdr         $a2, 0x18($t0)
    ctx->pc = 0x44c9c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x44c9cc: 0x6843002b  ldl         $v1, 0x2B($v0)
    ctx->pc = 0x44c9ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x44c9d0: 0x6c430024  ldr         $v1, 0x24($v0)
    ctx->pc = 0x44c9d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x44c9d4: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x44c9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x44c9d8: 0xb1030027  sdl         $v1, 0x27($t0)
    ctx->pc = 0x44c9d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x44c9dc: 0xb5030020  sdr         $v1, 0x20($t0)
    ctx->pc = 0x44c9dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x44c9e0: 0xad040028  sw          $a0, 0x28($t0)
    ctx->pc = 0x44c9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 4));
    // 0x44c9e4: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x44C9E4u;
    {
        const bool branch_taken_0x44c9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C9E4u;
        // 0x44c9e8: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c9e4) {
            ctx->pc = 0x44CABCu;
            goto label_44cabc;
        }
    }
    ctx->pc = 0x44C9ECu;
label_44c9ec:
    // 0x44c9ec: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x44c9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x44c9f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x44c9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x44c9f4: 0x1102000a  beq         $t0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x44C9F4u;
    {
        const bool branch_taken_0x44c9f4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x44C9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C9F4u;
        // 0x44c9f8: 0x3c050061  lui         $a1, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c9f4) {
            ctx->pc = 0x44CA20u;
            goto label_44ca20;
        }
    }
    ctx->pc = 0x44C9FCu;
    // 0x44c9fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x44c9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44ca00: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x44ca00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x44ca04: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x44ca04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x44ca08: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x44CA08u;
    SET_GPR_U32(ctx, 31, 0x44CA10u);
    ctx->pc = 0x44CA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44CA08u;
    // 0x44ca0c: 0x34840018  ori         $a0, $a0, 0x18 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)24);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x44CA08u, 0x44CA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44CA10u;
label_44ca10:
    // 0x44ca10: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x44ca10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44ca14: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x44CA14u;
    {
        const bool branch_taken_0x44ca14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44CA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CA14u;
        // 0x44ca18: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ca14) {
            ctx->pc = 0x44CAB0u;
            goto label_44cab0;
        }
    }
    ctx->pc = 0x44CA1Cu;
    // 0x44ca1c: 0x0  nop
    ctx->pc = 0x44ca1cu;
    // NOP
label_44ca20:
    // 0x44ca20: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x44ca20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x44ca24: 0x24ac9ea8  addiu       $t4, $a1, -0x6158
    ctx->pc = 0x44ca24u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942376));
    // 0x44ca28: 0x89890003  lwl         $t1, 0x3($t4)
    ctx->pc = 0x44ca28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 9) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 9, (int32_t)merged); }
    // 0x44ca2c: 0x99890000  lwr         $t1, 0x0($t4)
    ctx->pc = 0x44ca2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 9) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 9) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 9, merged64); }
    // 0x44ca30: 0xaba90013  swl         $t1, 0x13($sp)
    ctx->pc = 0x44ca30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x44ca34: 0xbba90010  swr         $t1, 0x10($sp)
    ctx->pc = 0x44ca34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x44ca38: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x44ca38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44ca3c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x44ca3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x44ca40: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x44ca40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x44ca44: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x44ca44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x44ca48: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x44ca48u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x44ca4c: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x44ca4cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
    // 0x44ca50: 0xad04000c  sw          $a0, 0xC($t0)
    ctx->pc = 0x44ca50u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 4));
    // 0x44ca54: 0xad070018  sw          $a3, 0x18($t0)
    ctx->pc = 0x44ca54u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 7));
    // 0x44ca58: 0xad06001c  sw          $a2, 0x1C($t0)
    ctx->pc = 0x44ca58u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 6));
    // 0x44ca5c: 0xad060004  sw          $a2, 0x4($t0)
    ctx->pc = 0x44ca5cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 6));
    // 0x44ca60: 0xad000010  sw          $zero, 0x10($t0)
    ctx->pc = 0x44ca60u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 0));
    // 0x44ca64: 0xad070014  sw          $a3, 0x14($t0)
    ctx->pc = 0x44ca64u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 7));
    // 0x44ca68: 0x8ba20013  lwl         $v0, 0x13($sp)
    ctx->pc = 0x44ca68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x44ca6c: 0x9ba20010  lwr         $v0, 0x10($sp)
    ctx->pc = 0x44ca6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x44ca70: 0xa9020023  swl         $v0, 0x23($t0)
    ctx->pc = 0x44ca70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x44ca74: 0xb9020020  swr         $v0, 0x20($t0)
    ctx->pc = 0x44ca74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x44ca78: 0xad000024  sw          $zero, 0x24($t0)
    ctx->pc = 0x44ca78u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 36), GPR_U32(ctx, 0));
    // 0x44ca7c: 0x8ba60013  lwl         $a2, 0x13($sp)
    ctx->pc = 0x44ca7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x44ca80: 0x9ba60010  lwr         $a2, 0x10($sp)
    ctx->pc = 0x44ca80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x44ca84: 0xa906002b  swl         $a2, 0x2B($t0)
    ctx->pc = 0x44ca84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 43); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x44ca88: 0xb9060028  swr         $a2, 0x28($t0)
    ctx->pc = 0x44ca88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 40); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x44ca8c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x44CA8Cu;
    {
        const bool branch_taken_0x44ca8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44CA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CA8Cu;
        // 0x44ca90: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ca8c) {
            ctx->pc = 0x44CABCu;
            goto label_44cabc;
        }
    }
    ctx->pc = 0x44CA94u;
label_44ca94:
    // 0x44ca94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x44ca94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44ca98: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x44ca98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x44ca9c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x44ca9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x44caa0: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x44CAA0u;
    SET_GPR_U32(ctx, 31, 0x44CAA8u);
    ctx->pc = 0x44CAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44CAA0u;
    // 0x44caa4: 0x34840016  ori         $a0, $a0, 0x16 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x44CAA0u, 0x44CAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44CAA8u;
label_44caa8:
    // 0x44caa8: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x44caa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x44caac: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x44caacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_44cab0:
    // 0x44cab0: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x44CAB0u;
    SET_GPR_U32(ctx, 31, 0x44CAB8u);
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x44CAB0u, 0x44CAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44CAB8u;
label_44cab8:
    // 0x44cab8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x44cab8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44cabc:
    // 0x44cabc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x44cabcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x44cac0: 0x3e00008  jr          $ra
    ctx->pc = 0x44CAC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44CAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CAC0u;
        // 0x44cac4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44CAC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44CAC8u;
}

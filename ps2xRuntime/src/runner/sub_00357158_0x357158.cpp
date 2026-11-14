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

// Function: sub_00357158
// Address: 0x357158 - 0x357388
void sub_00357158_0x357158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00357158_0x357158");
#endif

    switch (ctx->pc) {
        case 0x35717cu: goto label_35717c;
        case 0x357190u: goto label_357190;
        case 0x357198u: goto label_357198;
        case 0x3571bcu: goto label_3571bc;
        case 0x3571d0u: goto label_3571d0;
        case 0x3572b0u: goto label_3572b0;
        case 0x3572c0u: goto label_3572c0;
        case 0x3572d0u: goto label_3572d0;
        case 0x3572e0u: goto label_3572e0;
        case 0x3572e8u: goto label_3572e8;
        case 0x357300u: goto label_357300;
        case 0x357310u: goto label_357310;
        case 0x357324u: goto label_357324;
        case 0x357338u: goto label_357338;
        case 0x35734cu: goto label_35734c;
        case 0x357360u: goto label_357360;
        default: break;
    }

    ctx->pc = 0x357158u;

    // 0x357158: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x357158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x35715c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x35715cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x357160: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x357160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x357164: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x357164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x357168: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x357168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x35716c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x35716cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x357170: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x357170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x357174: 0xc1116a2  jal         func_445A88
    ctx->pc = 0x357174u;
    SET_GPR_U32(ctx, 31, 0x35717Cu);
    ctx->pc = 0x445A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445A88u, 0x357174u, 0x35717Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35717Cu;
label_35717c:
    // 0x35717c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x35717cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357180: 0x12000078  beqz        $s0, . + 4 + (0x78 << 2)
    ctx->pc = 0x357180u;
    {
        const bool branch_taken_0x357180 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x357184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357180u;
        // 0x357184: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357180) {
            ctx->pc = 0x357364u;
            goto label_357364;
        }
    }
    ctx->pc = 0x357188u;
    // 0x357188: 0xc112074  jal         func_4481D0
    ctx->pc = 0x357188u;
    SET_GPR_U32(ctx, 31, 0x357190u);
    ctx->pc = 0x35718Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357188u;
    // 0x35718c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4481D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4481D0u, 0x357188u, 0x357190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357190u;
label_357190:
    // 0x357190: 0xc0e94f0  jal         func_3A53C0
    ctx->pc = 0x357190u;
    SET_GPR_U32(ctx, 31, 0x357198u);
    ctx->pc = 0x357194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357190u;
    // 0x357194: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53C0u, 0x357190u, 0x357198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357198u;
label_357198:
    // 0x357198: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x357198u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35719c: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x35719Cu;
    {
        const bool branch_taken_0x35719c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x3571A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35719Cu;
        // 0x3571a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35719c) {
            ctx->pc = 0x3571ACu;
            goto label_3571ac;
        }
    }
    ctx->pc = 0x3571A4u;
    // 0x3571a4: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x3571A4u;
    {
        const bool branch_taken_0x3571a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3571A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3571A4u;
        // 0x3571a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3571a4) {
            ctx->pc = 0x357364u;
            goto label_357364;
        }
    }
    ctx->pc = 0x3571ACu;
label_3571ac:
    // 0x3571ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3571acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3571b0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3571b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3571b4: 0xc1120d8  jal         func_448360
    ctx->pc = 0x3571B4u;
    SET_GPR_U32(ctx, 31, 0x3571BCu);
    ctx->pc = 0x3571B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3571B4u;
    // 0x3571b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x448360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x448360u, 0x3571B4u, 0x3571BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3571BCu;
label_3571bc:
    // 0x3571bc: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x3571bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3571c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3571c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3571c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3571c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3571c8: 0xc1125d8  jal         func_449760
    ctx->pc = 0x3571C8u;
    SET_GPR_U32(ctx, 31, 0x3571D0u);
    ctx->pc = 0x3571CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3571C8u;
    // 0x3571cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x449760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x449760u, 0x3571C8u, 0x3571D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3571D0u;
label_3571d0:
    // 0x3571d0: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x3571d0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
    // 0x3571d4: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x3571d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x3571d8: 0x2467b120  addiu       $a3, $v1, -0x4EE0
    ctx->pc = 0x3571d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947104));
    // 0x3571dc: 0x2506c410  addiu       $a2, $t0, -0x3BF0
    ctx->pc = 0x3571dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 4294951952));
    // 0x3571e0: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x3571e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3571e4: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x3571e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3571e8: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x3571e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x3571ec: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x3571ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x3571f0: 0xb0c40007  sdl         $a0, 0x7($a2)
    ctx->pc = 0x3571f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3571f4: 0xb4c40000  sdr         $a0, 0x0($a2)
    ctx->pc = 0x3571f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3571f8: 0xb0c5000f  sdl         $a1, 0xF($a2)
    ctx->pc = 0x3571f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3571fc: 0xb4c50008  sdr         $a1, 0x8($a2)
    ctx->pc = 0x3571fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x357200: 0x3c0a005e  lui         $t2, 0x5E
    ctx->pc = 0x357200u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)94 << 16));
    // 0x357204: 0x2508c410  addiu       $t0, $t0, -0x3BF0
    ctx->pc = 0x357204u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294951952));
    // 0x357208: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x357208u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35720c: 0x8d070008  lw          $a3, 0x8($t0)
    ctx->pc = 0x35720cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x61C418u));
    // 0x357210: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x357210u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x357214: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x357214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x357218: 0x2542b0e0  addiu       $v0, $t2, -0x4F20
    ctx->pc = 0x357218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294947040));
    // 0x35721c: 0x24adc400  addiu       $t5, $a1, -0x3C00
    ctx->pc = 0x35721cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951936));
    // 0x357220: 0x684b0007  ldl         $t3, 0x7($v0)
    ctx->pc = 0x357220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x357224: 0x6c4b0000  ldr         $t3, 0x0($v0)
    ctx->pc = 0x357224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x357228: 0x684c000f  ldl         $t4, 0xF($v0)
    ctx->pc = 0x357228u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x35722c: 0x6c4c0008  ldr         $t4, 0x8($v0)
    ctx->pc = 0x35722cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x357230: 0xb1ab0007  sdl         $t3, 0x7($t5)
    ctx->pc = 0x357230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x357234: 0xb5ab0000  sdr         $t3, 0x0($t5)
    ctx->pc = 0x357234u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x357238: 0xb1ac000f  sdl         $t4, 0xF($t5)
    ctx->pc = 0x357238u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35723c: 0xb5ac0008  sdr         $t4, 0x8($t5)
    ctx->pc = 0x35723cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x357240: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x357240u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
    // 0x357244: 0x3463dfff  ori         $v1, $v1, 0xDFFF
    ctx->pc = 0x357244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57343);
    // 0x357248: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x357248u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x35724c: 0x3c066c00  lui         $a2, 0x6C00
    ctx->pc = 0x35724cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27648 << 16));
    // 0x357250: 0x252db150  addiu       $t5, $t1, -0x4EB0
    ctx->pc = 0x357250u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 9), 4294947152));
    // 0x357254: 0x248cc420  addiu       $t4, $a0, -0x3BE0
    ctx->pc = 0x357254u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951968));
    // 0x357258: 0x69aa0007  ldl         $t2, 0x7($t5)
    ctx->pc = 0x357258u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x35725c: 0x6daa0000  ldr         $t2, 0x0($t5)
    ctx->pc = 0x35725cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x357260: 0x69ab000f  ldl         $t3, 0xF($t5)
    ctx->pc = 0x357260u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x357264: 0x6dab0008  ldr         $t3, 0x8($t5)
    ctx->pc = 0x357264u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x357268: 0xb18a0007  sdl         $t2, 0x7($t4)
    ctx->pc = 0x357268u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35726c: 0xb58a0000  sdr         $t2, 0x0($t4)
    ctx->pc = 0x35726cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x357270: 0xb18b000f  sdl         $t3, 0xF($t4)
    ctx->pc = 0x357270u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x357274: 0xb58b0008  sdr         $t3, 0x8($t4)
    ctx->pc = 0x357274u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x357278: 0x24b0c400  addiu       $s0, $a1, -0x3C00
    ctx->pc = 0x357278u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951936));
    // 0x35727c: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x35727cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x357280: 0x34c6000d  ori         $a2, $a2, 0xD
    ctx->pc = 0x357280u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)13);
    // 0x357284: 0x34e7000d  ori         $a3, $a3, 0xD
    ctx->pc = 0x357284u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)13);
    // 0x357288: 0xae060008  sw          $a2, 0x8($s0)
    ctx->pc = 0x357288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
    // 0x35728c: 0x3c036400  lui         $v1, 0x6400
    ctx->pc = 0x35728cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25600 << 16));
    // 0x357290: 0xad070008  sw          $a3, 0x8($t0)
    ctx->pc = 0x357290u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 7));
    // 0x357294: 0x3463000d  ori         $v1, $v1, 0xD
    ctx->pc = 0x357294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13);
    // 0x357298: 0x2491c420  addiu       $s1, $a0, -0x3BE0
    ctx->pc = 0x357298u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951968));
    // 0x35729c: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x35729cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3572a0: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x3572a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x3572a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3572a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3572a8: 0xc0e9450  jal         func_3A5140
    ctx->pc = 0x3572A8u;
    SET_GPR_U32(ctx, 31, 0x3572B0u);
    ctx->pc = 0x3572ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3572A8u;
    // 0x3572ac: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5140u, 0x3572A8u, 0x3572B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3572B0u;
label_3572b0:
    // 0x3572b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3572b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3572b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3572b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3572b8: 0xc0e9450  jal         func_3A5140
    ctx->pc = 0x3572B8u;
    SET_GPR_U32(ctx, 31, 0x3572C0u);
    ctx->pc = 0x3572BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3572B8u;
    // 0x3572bc: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5140u, 0x3572B8u, 0x3572C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3572C0u;
label_3572c0:
    // 0x3572c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3572c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3572c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3572c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3572c8: 0xc0e9450  jal         func_3A5140
    ctx->pc = 0x3572C8u;
    SET_GPR_U32(ctx, 31, 0x3572D0u);
    ctx->pc = 0x3572CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3572C8u;
    // 0x3572cc: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5140u, 0x3572C8u, 0x3572D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3572D0u;
label_3572d0:
    // 0x3572d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3572d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3572d4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3572d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3572d8: 0xc0e958a  jal         func_3A5628
    ctx->pc = 0x3572D8u;
    SET_GPR_U32(ctx, 31, 0x3572E0u);
    ctx->pc = 0x3572DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3572D8u;
    // 0x3572dc: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5628u, 0x3572D8u, 0x3572E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3572E0u;
label_3572e0:
    // 0x3572e0: 0xc111dea  jal         func_4477A8
    ctx->pc = 0x3572E0u;
    SET_GPR_U32(ctx, 31, 0x3572E8u);
    ctx->pc = 0x3572E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3572E0u;
    // 0x3572e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4477A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4477A8u, 0x3572E0u, 0x3572E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3572E8u;
label_3572e8:
    // 0x3572e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3572e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3572ec: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x3572ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3572f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3572f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3572f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3572f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3572f8: 0xc1125d8  jal         func_449760
    ctx->pc = 0x3572F8u;
    SET_GPR_U32(ctx, 31, 0x357300u);
    ctx->pc = 0x3572FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3572F8u;
    // 0x3572fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x449760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x449760u, 0x3572F8u, 0x357300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357300u;
label_357300:
    // 0x357300: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x357300u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357304: 0x240500f0  addiu       $a1, $zero, 0xF0
    ctx->pc = 0x357304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x357308: 0xc0e95d2  jal         func_3A5748
    ctx->pc = 0x357308u;
    SET_GPR_U32(ctx, 31, 0x357310u);
    ctx->pc = 0x35730Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357308u;
    // 0x35730c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5748u, 0x357308u, 0x357310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357310u;
label_357310:
    // 0x357310: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x357310u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
    // 0x357314: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x357314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x357318: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x357318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35731c: 0xc0e95de  jal         func_3A5778
    ctx->pc = 0x35731Cu;
    SET_GPR_U32(ctx, 31, 0x357324u);
    ctx->pc = 0x357320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35731Cu;
    // 0x357320: 0x24a580f0  addiu       $a1, $a1, -0x7F10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5778u, 0x35731Cu, 0x357324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357324u;
label_357324:
    // 0x357324: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x357324u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x357328: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x357328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35732c: 0x24c622c0  addiu       $a2, $a2, 0x22C0
    ctx->pc = 0x35732cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8896));
    // 0x357330: 0xc0e95fe  jal         func_3A57F8
    ctx->pc = 0x357330u;
    SET_GPR_U32(ctx, 31, 0x357338u);
    ctx->pc = 0x357334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357330u;
    // 0x357334: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A57F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A57F8u, 0x357330u, 0x357338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357338u;
label_357338:
    // 0x357338: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x357338u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x35733c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35733cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357340: 0x24c67840  addiu       $a2, $a2, 0x7840
    ctx->pc = 0x357340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30784));
    // 0x357344: 0xc0e95fe  jal         func_3A57F8
    ctx->pc = 0x357344u;
    SET_GPR_U32(ctx, 31, 0x35734Cu);
    ctx->pc = 0x357348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357344u;
    // 0x357348: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A57F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A57F8u, 0x357344u, 0x35734Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35734Cu;
label_35734c:
    // 0x35734c: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x35734cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x357350: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x357350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357354: 0x24c66c00  addiu       $a2, $a2, 0x6C00
    ctx->pc = 0x357354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27648));
    // 0x357358: 0xc0e95fe  jal         func_3A57F8
    ctx->pc = 0x357358u;
    SET_GPR_U32(ctx, 31, 0x357360u);
    ctx->pc = 0x35735Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357358u;
    // 0x35735c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A57F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A57F8u, 0x357358u, 0x357360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357360u;
label_357360:
    // 0x357360: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x357360u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_357364:
    // 0x357364: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x357364u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x357368: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x357368u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35736c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x35736cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x357370: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x357370u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x357374: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x357374u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x357378: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x357378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35737c: 0x3e00008  jr          $ra
    ctx->pc = 0x35737Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35737Cu;
        // 0x357380: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35737Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357384u;
    // 0x357384: 0x0  nop
    ctx->pc = 0x357384u;
    // NOP
    ctx->pc = 0x357388u;
}

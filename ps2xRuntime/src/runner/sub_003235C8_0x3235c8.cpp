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

// Function: sub_003235C8
// Address: 0x3235c8 - 0x323810
void sub_003235C8_0x3235c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003235C8_0x3235c8");
#endif

    switch (ctx->pc) {
        case 0x323624u: goto label_323624;
        case 0x323630u: goto label_323630;
        case 0x323678u: goto label_323678;
        case 0x323738u: goto label_323738;
        case 0x3237dcu: goto label_3237dc;
        case 0x3237e4u: goto label_3237e4;
        default: break;
    }

    ctx->pc = 0x3235c8u;

    // 0x3235c8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3235c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3235cc: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3235ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x3235d0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3235d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x3235d4: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3235d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x3235d8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3235d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3235dc: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x3235dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x3235e0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3235e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x3235e4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3235e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3235e8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3235e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3235ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3235ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3235f0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x3235f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x3235f4: 0x8eb40000  lw          $s4, 0x0($s5)
    ctx->pc = 0x3235f4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3235f8: 0x24469590  addiu       $a2, $v0, -0x6A70
    ctx->pc = 0x3235f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940048));
    // 0x3235fc: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x3235fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x323600: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x323600u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x323604: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x323604u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x323608: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x323608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x32360c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x32360cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x323610: 0x8e93000c  lw          $s3, 0xC($s4)
    ctx->pc = 0x323610u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x323614: 0x8e920010  lw          $s2, 0x10($s4)
    ctx->pc = 0x323614u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x323618: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x323618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32361c: 0xc107034  jal         func_41C0D0
    ctx->pc = 0x32361Cu;
    SET_GPR_U32(ctx, 31, 0x323624u);
    ctx->pc = 0x323620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32361Cu;
    // 0x323620: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C0D0u, 0x32361Cu, 0x323624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323624u;
label_323624:
    // 0x323624: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x323624u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323628: 0xc107078  jal         func_41C1E0
    ctx->pc = 0x323628u;
    SET_GPR_U32(ctx, 31, 0x323630u);
    ctx->pc = 0x32362Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323628u;
    // 0x32362c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C1E0u, 0x323628u, 0x323630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323630u;
label_323630:
    // 0x323630: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x323630u;
    {
        const bool branch_taken_0x323630 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x323634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323630u;
        // 0x323634: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323630) {
            ctx->pc = 0x323660u;
            goto label_323660;
        }
    }
    ctx->pc = 0x323638u;
    // 0x323638: 0x8a070003  lwl         $a3, 0x3($s0)
    ctx->pc = 0x323638u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x32363c: 0x9a070000  lwr         $a3, 0x0($s0)
    ctx->pc = 0x32363cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x323640: 0xaba70003  swl         $a3, 0x3($sp)
    ctx->pc = 0x323640u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x323644: 0xbba70000  swr         $a3, 0x0($sp)
    ctx->pc = 0x323644u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x323648: 0xa3a20003  sb          $v0, 0x3($sp)
    ctx->pc = 0x323648u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x32364c: 0x8a030003  lwl         $v1, 0x3($s0)
    ctx->pc = 0x32364cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x323650: 0x9a030000  lwr         $v1, 0x0($s0)
    ctx->pc = 0x323650u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x323654: 0xaba30007  swl         $v1, 0x7($sp)
    ctx->pc = 0x323654u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x323658: 0xbba30004  swr         $v1, 0x4($sp)
    ctx->pc = 0x323658u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x32365c: 0xa3a20007  sb          $v0, 0x7($sp)
    ctx->pc = 0x32365cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 7), (uint8_t)GPR_U32(ctx, 2));
label_323660:
    // 0x323660: 0x8e2c0010  lw          $t4, 0x10($s1)
    ctx->pc = 0x323660u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x323664: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x323664u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323668: 0x12400059  beqz        $s2, . + 4 + (0x59 << 2)
    ctx->pc = 0x323668u;
    {
        const bool branch_taken_0x323668 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x32366Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323668u;
        // 0x32366c: 0x8e2f0014  lw          $t7, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323668) {
            ctx->pc = 0x3237D0u;
            goto label_3237d0;
        }
    }
    ctx->pc = 0x323670u;
    // 0x323670: 0x6c1018  mult        $v0, $v1, $t4
    ctx->pc = 0x323670u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x323674: 0x0  nop
    ctx->pc = 0x323674u;
    // NOP
label_323678:
    // 0x323678: 0x30680001  andi        $t0, $v1, 0x1
    ctx->pc = 0x323678u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x32367c: 0x2682021  addu        $a0, $s3, $t0
    ctx->pc = 0x32367cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 8)));
    // 0x323680: 0x4f3021  addu        $a2, $v0, $t7
    ctx->pc = 0x323680u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x323684: 0x104102b  sltu        $v0, $t0, $a0
    ctx->pc = 0x323684u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x323688: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x323688u;
    {
        const bool branch_taken_0x323688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32368Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323688u;
        // 0x32368c: 0x246b0001  addiu       $t3, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323688) {
            ctx->pc = 0x3237C0u;
            goto label_3237c0;
        }
    }
    ctx->pc = 0x323690u;
    // 0x323690: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x323690u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323694: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x323694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323698: 0x1481023  subu        $v0, $t2, $t0
    ctx->pc = 0x323698u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x32369c: 0x10a182a  slt         $v1, $t0, $t2
    ctx->pc = 0x32369cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x3236a0: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x3236A0u;
    {
        const bool branch_taken_0x3236a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3236A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3236A0u;
        // 0x3236a4: 0x30440003  andi        $a0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3236a0) {
            ctx->pc = 0x323708u;
            goto label_323708;
        }
    }
    ctx->pc = 0x3236A8u;
    // 0x3236a8: 0x10800022  beqz        $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x3236A8u;
    {
        const bool branch_taken_0x3236a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3236ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3236A8u;
        // 0x3236ac: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3236a8) {
            ctx->pc = 0x323734u;
            goto label_323734;
        }
    }
    ctx->pc = 0x3236B0u;
    // 0x3236b0: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3236B0u;
    {
        const bool branch_taken_0x3236b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3236B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3236B0u;
        // 0x3236b4: 0x31020001  andi        $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3236b0) {
            ctx->pc = 0x32370Cu;
            goto label_32370c;
        }
    }
    ctx->pc = 0x3236B8u;
    // 0x3236b8: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x3236b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3236bc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3236BCu;
    {
        const bool branch_taken_0x3236bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3236C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3236BCu;
        // 0x3236c0: 0x31020001  andi        $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3236bc) {
            ctx->pc = 0x3236E8u;
            goto label_3236e8;
        }
    }
    ctx->pc = 0x3236C4u;
    // 0x3236c4: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x3236c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x3236c8: 0x24c50004  addiu       $a1, $a2, 0x4
    ctx->pc = 0x3236c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x3236cc: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x3236ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x3236d0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3236d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3236d4: 0x88640003  lwl         $a0, 0x3($v1)
    ctx->pc = 0x3236d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x3236d8: 0x98640000  lwr         $a0, 0x0($v1)
    ctx->pc = 0x3236d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x3236dc: 0xa8c40003  swl         $a0, 0x3($a2)
    ctx->pc = 0x3236dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3236e0: 0xb8c40000  swr         $a0, 0x0($a2)
    ctx->pc = 0x3236e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3236e4: 0x31020001  andi        $v0, $t0, 0x1
    ctx->pc = 0x3236e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
label_3236e8:
    // 0x3236e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3236e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3236ec: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3236ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3236f0: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x3236f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x3236f4: 0x886e0003  lwl         $t6, 0x3($v1)
    ctx->pc = 0x3236f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 14) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 14, (int32_t)merged); }
    // 0x3236f8: 0x986e0000  lwr         $t6, 0x0($v1)
    ctx->pc = 0x3236f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 14) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 14) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 14, merged64); }
    // 0x3236fc: 0xa8ae0003  swl         $t6, 0x3($a1)
    ctx->pc = 0x3236fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 14); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x323700: 0xb8ae0000  swr         $t6, 0x0($a1)
    ctx->pc = 0x323700u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 14); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x323704: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x323704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_323708:
    // 0x323708: 0x31020001  andi        $v0, $t0, 0x1
    ctx->pc = 0x323708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
label_32370c:
    // 0x32370c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x32370cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x323710: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x323710u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x323714: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x323714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x323718: 0x88670003  lwl         $a3, 0x3($v1)
    ctx->pc = 0x323718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x32371c: 0x98670000  lwr         $a3, 0x0($v1)
    ctx->pc = 0x32371cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x323720: 0xa8a70003  swl         $a3, 0x3($a1)
    ctx->pc = 0x323720u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x323724: 0x10a102b  sltu        $v0, $t0, $t2
    ctx->pc = 0x323724u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x323728: 0xb8a70000  swr         $a3, 0x0($a1)
    ctx->pc = 0x323728u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x32372c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x32372Cu;
    {
        const bool branch_taken_0x32372c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x323730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32372Cu;
        // 0x323730: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32372c) {
            ctx->pc = 0x3237C0u;
            goto label_3237c0;
        }
    }
    ctx->pc = 0x323734u;
label_323734:
    // 0x323734: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x323734u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_323738:
    // 0x323738: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x323738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x32373c: 0x31030001  andi        $v1, $t0, 0x1
    ctx->pc = 0x32373cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x323740: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x323740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x323744: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x323744u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x323748: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x323748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x32374c: 0x3a33821  addu        $a3, $sp, $v1
    ctx->pc = 0x32374cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x323750: 0x3a23021  addu        $a2, $sp, $v0
    ctx->pc = 0x323750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x323754: 0x31040001  andi        $a0, $t0, 0x1
    ctx->pc = 0x323754u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x323758: 0x88e20003  lwl         $v0, 0x3($a3)
    ctx->pc = 0x323758u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x32375c: 0x98e20000  lwr         $v0, 0x0($a3)
    ctx->pc = 0x32375cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x323760: 0xa9220003  swl         $v0, 0x3($t1)
    ctx->pc = 0x323760u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x323764: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x323764u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x323768: 0xb9220000  swr         $v0, 0x0($t1)
    ctx->pc = 0x323768u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x32376c: 0x25030003  addiu       $v1, $t0, 0x3
    ctx->pc = 0x32376cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
    // 0x323770: 0x3a42821  addu        $a1, $sp, $a0
    ctx->pc = 0x323770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x323774: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x323774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x323778: 0x88c20003  lwl         $v0, 0x3($a2)
    ctx->pc = 0x323778u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x32377c: 0x98c20000  lwr         $v0, 0x0($a2)
    ctx->pc = 0x32377cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x323780: 0xa9220007  swl         $v0, 0x7($t1)
    ctx->pc = 0x323780u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x323784: 0xb9220004  swr         $v0, 0x4($t1)
    ctx->pc = 0x323784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x323788: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x323788u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32378c: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x32378cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x323790: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x323790u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x323794: 0x88ae0003  lwl         $t6, 0x3($a1)
    ctx->pc = 0x323794u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 14) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 14, (int32_t)merged); }
    // 0x323798: 0x98ae0000  lwr         $t6, 0x0($a1)
    ctx->pc = 0x323798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 14) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 14) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 14, merged64); }
    // 0x32379c: 0xa92e000b  swl         $t6, 0xB($t1)
    ctx->pc = 0x32379cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 14); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3237a0: 0xb92e0008  swr         $t6, 0x8($t1)
    ctx->pc = 0x3237a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 14); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3237a4: 0x88470003  lwl         $a3, 0x3($v0)
    ctx->pc = 0x3237a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x3237a8: 0x98470000  lwr         $a3, 0x0($v0)
    ctx->pc = 0x3237a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x3237ac: 0xa927000f  swl         $a3, 0xF($t1)
    ctx->pc = 0x3237acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3237b0: 0xb927000c  swr         $a3, 0xC($t1)
    ctx->pc = 0x3237b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3237b4: 0x10a102b  sltu        $v0, $t0, $t2
    ctx->pc = 0x3237b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3237b8: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x3237B8u;
    {
        const bool branch_taken_0x3237b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3237BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3237B8u;
        // 0x3237bc: 0x25290010  addiu       $t1, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3237b8) {
            ctx->pc = 0x323738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_323738;
        }
    }
    ctx->pc = 0x3237C0u;
label_3237c0:
    // 0x3237c0: 0x160182d  daddu       $v1, $t3, $zero
    ctx->pc = 0x3237c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3237c4: 0x72102b  sltu        $v0, $v1, $s2
    ctx->pc = 0x3237c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x3237c8: 0x1440ffab  bnez        $v0, . + 4 + (-0x55 << 2)
    ctx->pc = 0x3237C8u;
    {
        const bool branch_taken_0x3237c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3237CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3237C8u;
        // 0x3237cc: 0x6c1018  mult        $v0, $v1, $t4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3237c8) {
            ctx->pc = 0x323678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_323678;
        }
    }
    ctx->pc = 0x3237D0u;
label_3237d0:
    // 0x3237d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3237d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3237d4: 0xc1073c2  jal         func_41CF08
    ctx->pc = 0x3237D4u;
    SET_GPR_U32(ctx, 31, 0x3237DCu);
    ctx->pc = 0x3237D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3237D4u;
    // 0x3237d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF08u, 0x3237D4u, 0x3237DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3237DCu;
label_3237dc:
    // 0x3237dc: 0xc10705c  jal         func_41C170
    ctx->pc = 0x3237DCu;
    SET_GPR_U32(ctx, 31, 0x3237E4u);
    ctx->pc = 0x3237E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3237DCu;
    // 0x3237e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3237DCu, 0x3237E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3237E4u;
label_3237e4:
    // 0x3237e4: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x3237e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3237e8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3237e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3237ec: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3237ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3237f0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3237f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3237f4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3237f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3237f8: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x3237f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3237fc: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x3237fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x323800: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x323800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323804: 0x3e00008  jr          $ra
    ctx->pc = 0x323804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323804u;
        // 0x323808: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32380Cu;
    // 0x32380c: 0x0  nop
    ctx->pc = 0x32380cu;
    // NOP
    ctx->pc = 0x323810u;
}

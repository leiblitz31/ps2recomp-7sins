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

// Function: sub_0038E8E8
// Address: 0x38e8e8 - 0x38ea10
void sub_0038E8E8_0x38e8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038E8E8_0x38e8e8");
#endif

    switch (ctx->pc) {
        case 0x38e910u: goto label_38e910;
        case 0x38e924u: goto label_38e924;
        case 0x38e970u: goto label_38e970;
        case 0x38e984u: goto label_38e984;
        case 0x38e994u: goto label_38e994;
        default: break;
    }

    ctx->pc = 0x38e8e8u;

    // 0x38e8e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x38e8e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x38e8ec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x38e8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x38e8f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38e8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x38e8f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38e8f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e8f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38e8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38e8fc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x38e8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38e900: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38E900u;
    {
        const bool branch_taken_0x38e900 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E900u;
        // 0x38e904: 0x24110028  addiu       $s1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e900) {
            ctx->pc = 0x38E914u;
            goto label_38e914;
        }
    }
    ctx->pc = 0x38E908u;
    // 0x38e908: 0xc10598e  jal         func_416638
    ctx->pc = 0x38E908u;
    SET_GPR_U32(ctx, 31, 0x38E910u);
    ctx->pc = 0x416638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x416638u, 0x38E908u, 0x38E910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E910u;
label_38e910:
    // 0x38e910: 0x24510034  addiu       $s1, $v0, 0x34
    ctx->pc = 0x38e910u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
label_38e914:
    // 0x38e914: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x38e914u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x38e918: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38e918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e91c: 0xc104aec  jal         func_412BB0
    ctx->pc = 0x38E91Cu;
    SET_GPR_U32(ctx, 31, 0x38E924u);
    ctx->pc = 0x38E920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E91Cu;
    // 0x38e920: 0x2484ae00  addiu       $a0, $a0, -0x5200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412BB0u, 0x38E91Cu, 0x38E924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E924u;
label_38e924:
    // 0x38e924: 0x2623000c  addiu       $v1, $s1, 0xC
    ctx->pc = 0x38e924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x38e928: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x38e928u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38e92c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38e92cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38e930: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x38e930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x38e934: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38e934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38e938: 0x3e00008  jr          $ra
    ctx->pc = 0x38E938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38E93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E938u;
        // 0x38e93c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38E940u;
    // 0x38e940: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x38e940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x38e944: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x38e944u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e948: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x38e948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x38e94c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x38e94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x38e950: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x38e950u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e954: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x38e954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x38e958: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38e958u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e95c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x38e95cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e960: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x38e960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x38e964: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x38e964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38e968: 0xc103322  jal         func_40CC88
    ctx->pc = 0x38E968u;
    SET_GPR_U32(ctx, 31, 0x38E970u);
    ctx->pc = 0x38E96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E968u;
    // 0x38e96c: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x38E968u, 0x38E970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E970u;
label_38e970:
    // 0x38e970: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x38E970u;
    {
        const bool branch_taken_0x38e970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E970u;
        // 0x38e974: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e970) {
            ctx->pc = 0x38E9A4u;
            goto label_38e9a4;
        }
    }
    ctx->pc = 0x38E978u;
    // 0x38e978: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x38e978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e97c: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x38E97Cu;
    SET_GPR_U32(ctx, 31, 0x38E984u);
    ctx->pc = 0x38E980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E97Cu;
    // 0x38e980: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x38E97Cu, 0x38E984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E984u;
label_38e984:
    // 0x38e984: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x38e984u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38e988: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38e988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e98c: 0xc10480a  jal         func_412028
    ctx->pc = 0x38E98Cu;
    SET_GPR_U32(ctx, 31, 0x38E994u);
    ctx->pc = 0x38E990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E98Cu;
    // 0x38e990: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x38E98Cu, 0x38E994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E994u;
label_38e994:
    // 0x38e994: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x38e994u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e998: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x38e998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38e99c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38E99Cu;
    {
        const bool branch_taken_0x38e99c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x38E9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E99Cu;
        // 0x38e9a0: 0x2462000c  addiu       $v0, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e99c) {
            ctx->pc = 0x38E9ACu;
            goto label_38e9ac;
        }
    }
    ctx->pc = 0x38E9A4u;
label_38e9a4:
    // 0x38e9a4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x38E9A4u;
    {
        const bool branch_taken_0x38e9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E9A4u;
        // 0x38e9a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e9a4) {
            ctx->pc = 0x38E9F4u;
            goto label_38e9f4;
        }
    }
    ctx->pc = 0x38E9ACu;
label_38e9ac:
    // 0x38e9ac: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x38e9acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x38e9b0: 0x8a020007  lwl         $v0, 0x7($s0)
    ctx->pc = 0x38e9b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x38e9b4: 0x9a020004  lwr         $v0, 0x4($s0)
    ctx->pc = 0x38e9b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x38e9b8: 0xaba20003  swl         $v0, 0x3($sp)
    ctx->pc = 0x38e9b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x38e9bc: 0xbba20000  swr         $v0, 0x0($sp)
    ctx->pc = 0x38e9bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x38e9c0: 0x8ba20003  lwl         $v0, 0x3($sp)
    ctx->pc = 0x38e9c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x38e9c4: 0x9ba20000  lwr         $v0, 0x0($sp)
    ctx->pc = 0x38e9c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x38e9c8: 0xaa020007  swl         $v0, 0x7($s0)
    ctx->pc = 0x38e9c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x38e9cc: 0xba020004  swr         $v0, 0x4($s0)
    ctx->pc = 0x38e9ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x38e9d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x38e9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38e9d4: 0x2c420011  sltiu       $v0, $v0, 0x11
    ctx->pc = 0x38e9d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x38e9d8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x38E9D8u;
    {
        const bool branch_taken_0x38e9d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E9D8u;
        // 0x38e9dc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e9d8) {
            ctx->pc = 0x38E9F4u;
            goto label_38e9f4;
        }
    }
    ctx->pc = 0x38E9E0u;
    // 0x38e9e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x38e9e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x38e9e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x38e9e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38e9e8: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x38e9e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x38e9ec: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x38e9ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x38e9f0: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x38e9f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_38e9f4:
    // 0x38e9f4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x38e9f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x38e9f8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x38e9f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38e9fc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x38e9fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38ea00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x38ea00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38ea04: 0x3e00008  jr          $ra
    ctx->pc = 0x38EA04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38EA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EA04u;
        // 0x38ea08: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38EA04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38EA0Cu;
    // 0x38ea0c: 0x0  nop
    ctx->pc = 0x38ea0cu;
    // NOP
    ctx->pc = 0x38ea10u;
}

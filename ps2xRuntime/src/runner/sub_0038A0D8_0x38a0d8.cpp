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

// Function: sub_0038A0D8
// Address: 0x38a0d8 - 0x38a1d8
void sub_0038A0D8_0x38a0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038A0D8_0x38a0d8");
#endif

    switch (ctx->pc) {
        case 0x38a110u: goto label_38a110;
        case 0x38a124u: goto label_38a124;
        case 0x38a170u: goto label_38a170;
        case 0x38a180u: goto label_38a180;
        default: break;
    }

    ctx->pc = 0x38a0d8u;

    // 0x38a0d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x38a0d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x38a0dc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x38a0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x38a0e0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x38a0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x38a0e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38a0e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a0e8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x38a0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x38a0ec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x38a0ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a0f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38a0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38a0f4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x38a0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x38a0f8: 0x12220021  beq         $s1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x38A0F8u;
    {
        const bool branch_taken_0x38a0f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x38A0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A0F8u;
        // 0x38a0fc: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a0f8) {
            ctx->pc = 0x38A180u;
            goto label_38a180;
        }
    }
    ctx->pc = 0x38A100u;
    // 0x38a100: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x38A100u;
    {
        const bool branch_taken_0x38a100 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x38a100) {
            ctx->pc = 0x38A104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38A100u;
            // 0x38a104: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38A114u;
            goto label_38a114;
        }
    }
    ctx->pc = 0x38A108u;
    // 0x38a108: 0xc0e3444  jal         func_38D110
    ctx->pc = 0x38A108u;
    SET_GPR_U32(ctx, 31, 0x38A110u);
    ctx->pc = 0x38A10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A108u;
    // 0x38a10c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D110u, 0x38A108u, 0x38A110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A110u;
label_38a110:
    // 0x38a110: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x38a110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_38a114:
    // 0x38a114: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38A114u;
    {
        const bool branch_taken_0x38a114 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A114u;
        // 0x38a118: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a114) {
            ctx->pc = 0x38A128u;
            goto label_38a128;
        }
    }
    ctx->pc = 0x38A11Cu;
    // 0x38a11c: 0xc0e3414  jal         func_38D050
    ctx->pc = 0x38A11Cu;
    SET_GPR_U32(ctx, 31, 0x38A124u);
    ctx->pc = 0x38D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D050u, 0x38A11Cu, 0x38A124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A124u;
label_38a124:
    // 0x38a124: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x38a124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_38a128:
    // 0x38a128: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x38A128u;
    {
        const bool branch_taken_0x38a128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38A12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A128u;
        // 0x38a12c: 0xae110018  sw          $s1, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a128) {
            ctx->pc = 0x38A180u;
            goto label_38a180;
        }
    }
    ctx->pc = 0x38A130u;
    // 0x38a130: 0x5220000b  beql        $s1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x38A130u;
    {
        const bool branch_taken_0x38a130 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x38a130) {
            ctx->pc = 0x38A134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38A130u;
            // 0x38a134: 0x8e110004  lw          $s1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38A160u;
            goto label_38a160;
        }
    }
    ctx->pc = 0x38A138u;
    // 0x38a138: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x38a138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x38a13c: 0x6843000b  ldl         $v1, 0xB($v0)
    ctx->pc = 0x38a13cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x38a140: 0x6c430004  ldr         $v1, 0x4($v0)
    ctx->pc = 0x38a140u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x38a144: 0x68440013  ldl         $a0, 0x13($v0)
    ctx->pc = 0x38a144u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x38a148: 0x6c44000c  ldr         $a0, 0xC($v0)
    ctx->pc = 0x38a148u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x38a14c: 0xb2030023  sdl         $v1, 0x23($s0)
    ctx->pc = 0x38a14cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x38a150: 0xb603001c  sdr         $v1, 0x1C($s0)
    ctx->pc = 0x38a150u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x38a154: 0xb204002b  sdl         $a0, 0x2B($s0)
    ctx->pc = 0x38a154u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x38a158: 0xb6040024  sdr         $a0, 0x24($s0)
    ctx->pc = 0x38a158u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x38a15c: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x38a15cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_38a160:
    // 0x38a160: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x38A160u;
    {
        const bool branch_taken_0x38a160 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A160u;
        // 0x38a164: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a160) {
            ctx->pc = 0x38A184u;
            goto label_38a184;
        }
    }
    ctx->pc = 0x38A168u;
    // 0x38a168: 0xc0e6ea2  jal         func_39BA88
    ctx->pc = 0x38A168u;
    SET_GPR_U32(ctx, 31, 0x38A170u);
    ctx->pc = 0x38A16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A168u;
    // 0x38a16c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BA88u, 0x38A168u, 0x38A170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A170u;
label_38a170:
    // 0x38a170: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38A170u;
    {
        const bool branch_taken_0x38a170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A170u;
        // 0x38a174: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a170) {
            ctx->pc = 0x38A184u;
            goto label_38a184;
        }
    }
    ctx->pc = 0x38A178u;
    // 0x38a178: 0xc106794  jal         func_419E50
    ctx->pc = 0x38A178u;
    SET_GPR_U32(ctx, 31, 0x38A180u);
    ctx->pc = 0x38A17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A178u;
    // 0x38a17c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E50u, 0x38A178u, 0x38A180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A180u;
label_38a180:
    // 0x38a180: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38a180u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38a184:
    // 0x38a184: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x38a184u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38a188: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x38a188u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38a18c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x38a18cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38a190: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38a190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38a194: 0x3e00008  jr          $ra
    ctx->pc = 0x38A194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A194u;
        // 0x38a198: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A19Cu;
    // 0x38a19c: 0x0  nop
    ctx->pc = 0x38a19cu;
    // NOP
    // 0x38a1a0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x38A1A0u;
    {
        const bool branch_taken_0x38a1a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A1A0u;
        // 0x38a1a4: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a1a0) {
            ctx->pc = 0x38A1B0u;
            goto label_38a1b0;
        }
    }
    ctx->pc = 0x38A1A8u;
    // 0x38a1a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x38A1A8u;
    {
        const bool branch_taken_0x38a1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A1A8u;
        // 0x38a1ac: 0xac850028  sw          $a1, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a1a8) {
            ctx->pc = 0x38A1B8u;
            goto label_38a1b8;
        }
    }
    ctx->pc = 0x38A1B0u;
label_38a1b0:
    // 0x38a1b0: 0x2442aa30  addiu       $v0, $v0, -0x55D0
    ctx->pc = 0x38a1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945328));
    // 0x38a1b4: 0xac820028  sw          $v0, 0x28($a0)
    ctx->pc = 0x38a1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
label_38a1b8:
    // 0x38a1b8: 0x3e00008  jr          $ra
    ctx->pc = 0x38A1B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A1B8u;
        // 0x38a1bc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A1B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A1C0u;
    // 0x38a1c0: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x38a1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x38a1c4: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x38a1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x38a1c8: 0x2463aa30  addiu       $v1, $v1, -0x55D0
    ctx->pc = 0x38a1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945328));
    // 0x38a1cc: 0x431826  xor         $v1, $v0, $v1
    ctx->pc = 0x38a1ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x38a1d0: 0x3e00008  jr          $ra
    ctx->pc = 0x38A1D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A1D0u;
        // 0x38a1d4: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A1D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A1D8u;
}

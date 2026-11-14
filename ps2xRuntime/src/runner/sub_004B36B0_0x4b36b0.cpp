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

// Function: sub_004B36B0
// Address: 0x4b36b0 - 0x4b3a28
void sub_004B36B0_0x4b36b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B36B0_0x4b36b0");
#endif

    ctx->pc = 0x4b36b0u;

    // 0x4b36b0: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x4b36b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x4b36b4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4b36b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b36b8: 0x3e00008  jr          $ra
    ctx->pc = 0x4B36B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B36BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B36B8u;
        // 0x4b36bc: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B36B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B36C0u;
    // 0x4b36c0: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x4b36c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b36c4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4b36c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4b36c8: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x4b36c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x4b36cc: 0x8c860030  lw          $a2, 0x30($a0)
    ctx->pc = 0x4b36ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x4b36d0: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4b36d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4b36d4: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x4b36d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
    // 0x4b36d8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4b36d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b36dc: 0x94830058  lhu         $v1, 0x58($a0)
    ctx->pc = 0x4b36dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x4b36e0: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x4b36e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
    // 0x4b36e4: 0x3e00008  jr          $ra
    ctx->pc = 0x4B36E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B36E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B36E4u;
        // 0x4b36e8: 0xa4830058  sh          $v1, 0x58($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 88), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B36E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B36ECu;
    // 0x4b36ec: 0x0  nop
    ctx->pc = 0x4b36ecu;
    // NOP
    // 0x4b36f0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4b36f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b36f4: 0x94a20058  lhu         $v0, 0x58($a1)
    ctx->pc = 0x4b36f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x4b36f8: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x4b36f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x4b36fc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B36FCu;
    {
        const bool branch_taken_0x4b36fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B3700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B36FCu;
        // 0x4b3700: 0x8ca20030  lw          $v0, 0x30($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b36fc) {
            ctx->pc = 0x4B3718u;
            goto label_4b3718;
        }
    }
    ctx->pc = 0x4B3704u;
    // 0x4b3704: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4b3704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4b3708: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x4b3708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4b370c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4B370Cu;
    {
        const bool branch_taken_0x4b370c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B370Cu;
        // 0x4b3710: 0x641823  subu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b370c) {
            ctx->pc = 0x4B371Cu;
            goto label_4b371c;
        }
    }
    ctx->pc = 0x4B3714u;
    // 0x4b3714: 0x0  nop
    ctx->pc = 0x4b3714u;
    // NOP
label_4b3718:
    // 0x4b3718: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x4b3718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4b371c:
    // 0x4b371c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4b371cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4b3720: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B3724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3720u;
        // 0x4b3724: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B3728u;
    // 0x4b3728: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4b3728u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b372c: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x4b372cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4b3730: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x4b3730u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4b3734: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x4b3734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x4b3738: 0xb043006b  sdl         $v1, 0x6B($v0)
    ctx->pc = 0x4b3738u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 107); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b373c: 0xb4430064  sdr         $v1, 0x64($v0)
    ctx->pc = 0x4b373cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 100); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b3740: 0xac44006c  sw          $a0, 0x6C($v0)
    ctx->pc = 0x4b3740u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 4));
    // 0x4b3744: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B374Cu;
    // 0x4b374c: 0x0  nop
    ctx->pc = 0x4b374cu;
    // NOP
    // 0x4b3750: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4b3750u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3754: 0x6843006b  ldl         $v1, 0x6B($v0)
    ctx->pc = 0x4b3754u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 107); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4b3758: 0x6c430064  ldr         $v1, 0x64($v0)
    ctx->pc = 0x4b3758u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 100); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4b375c: 0x8c44006c  lw          $a0, 0x6C($v0)
    ctx->pc = 0x4b375cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x4b3760: 0xb0c30007  sdl         $v1, 0x7($a2)
    ctx->pc = 0x4b3760u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b3764: 0xb4c30000  sdr         $v1, 0x0($a2)
    ctx->pc = 0x4b3764u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b3768: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x4b3768u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x4b376c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B376Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B376Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B3774u;
    // 0x4b3774: 0x0  nop
    ctx->pc = 0x4b3774u;
    // NOP
    // 0x4b3778: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4b3778u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b377c: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x4b377cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4b3780: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x4b3780u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4b3784: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x4b3784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x4b3788: 0xb0430077  sdl         $v1, 0x77($v0)
    ctx->pc = 0x4b3788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b378c: 0xb4430070  sdr         $v1, 0x70($v0)
    ctx->pc = 0x4b378cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b3790: 0xac440078  sw          $a0, 0x78($v0)
    ctx->pc = 0x4b3790u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 4));
    // 0x4b3794: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B379Cu;
    // 0x4b379c: 0x0  nop
    ctx->pc = 0x4b379cu;
    // NOP
    // 0x4b37a0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4b37a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b37a4: 0x68430077  ldl         $v1, 0x77($v0)
    ctx->pc = 0x4b37a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4b37a8: 0x6c430070  ldr         $v1, 0x70($v0)
    ctx->pc = 0x4b37a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4b37ac: 0x8c440078  lw          $a0, 0x78($v0)
    ctx->pc = 0x4b37acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x4b37b0: 0xb0c30007  sdl         $v1, 0x7($a2)
    ctx->pc = 0x4b37b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b37b4: 0xb4c30000  sdr         $v1, 0x0($a2)
    ctx->pc = 0x4b37b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b37b8: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x4b37b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x4b37bc: 0x3e00008  jr          $ra
    ctx->pc = 0x4B37BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B37BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B37C4u;
    // 0x4b37c4: 0x0  nop
    ctx->pc = 0x4b37c4u;
    // NOP
    // 0x4b37c8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4b37c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b37cc: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x4b37ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b37d0: 0x3e00008  jr          $ra
    ctx->pc = 0x4B37D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B37D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B37D0u;
        // 0x4b37d4: 0xe4400098  swc1        $f0, 0x98($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B37D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B37D8u;
    // 0x4b37d8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4b37d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b37dc: 0xc4400098  lwc1        $f0, 0x98($v0)
    ctx->pc = 0x4b37dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b37e0: 0x3e00008  jr          $ra
    ctx->pc = 0x4B37E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B37E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B37E0u;
        // 0x4b37e4: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B37E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B37E8u;
    // 0x4b37e8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4b37e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b37ec: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x4b37ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b37f0: 0x3e00008  jr          $ra
    ctx->pc = 0x4B37F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B37F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B37F0u;
        // 0x4b37f4: 0xe440009c  swc1        $f0, 0x9C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B37F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B37F8u;
    // 0x4b37f8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4b37f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b37fc: 0xc440009c  lwc1        $f0, 0x9C($v0)
    ctx->pc = 0x4b37fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b3800: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B3804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3800u;
        // 0x4b3804: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B3808u;
    // 0x4b3808: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4b3808u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b380c: 0x94430058  lhu         $v1, 0x58($v0)
    ctx->pc = 0x4b380cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x4b3810: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x4b3810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x4b3814: 0xa4430058  sh          $v1, 0x58($v0)
    ctx->pc = 0x4b3814u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 88), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b3818: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x4b3818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b381c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B381Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B3820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B381Cu;
        // 0x4b3820: 0xe440007c  swc1        $f0, 0x7C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 124), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B381Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B3824u;
    // 0x4b3824: 0x0  nop
    ctx->pc = 0x4b3824u;
    // NOP
    // 0x4b3828: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4b3828u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b382c: 0xc440007c  lwc1        $f0, 0x7C($v0)
    ctx->pc = 0x4b382cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b3830: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B3834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3830u;
        // 0x4b3834: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B3838u;
    // 0x4b3838: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4b3838u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b383c: 0x94430058  lhu         $v1, 0x58($v0)
    ctx->pc = 0x4b383cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x4b3840: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x4b3840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x4b3844: 0xa4430058  sh          $v1, 0x58($v0)
    ctx->pc = 0x4b3844u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 88), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b3848: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x4b3848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b384c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B384Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B3850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B384Cu;
        // 0x4b3850: 0xe4400084  swc1        $f0, 0x84($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B384Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B3854u;
    // 0x4b3854: 0x0  nop
    ctx->pc = 0x4b3854u;
    // NOP
    // 0x4b3858: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4b3858u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b385c: 0xc4400084  lwc1        $f0, 0x84($v0)
    ctx->pc = 0x4b385cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b3860: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B3864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3860u;
        // 0x4b3864: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B3868u;
    // 0x4b3868: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4b3868u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b386c: 0x8c470030  lw          $a3, 0x30($v0)
    ctx->pc = 0x4b386cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x4b3870: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b3870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b3874: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4b3874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4b3878: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x4b3878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b387c: 0xa4180b  movn        $v1, $a1, $a0
    ctx->pc = 0x4b387cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x4b3880: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B3884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3880u;
        // 0x4b3884: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B3888u;
    // 0x4b3888: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x4b3888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x4b388c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4b388cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4b3890: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4b3890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4b3894: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B3894u;
    {
        const bool branch_taken_0x4b3894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x4B3898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3894u;
        // 0x4b3898: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3894) {
            ctx->pc = 0x4B38A8u;
            goto label_4b38a8;
        }
    }
    ctx->pc = 0x4B389Cu;
    // 0x4b389c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4b389cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x4b38a0: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x4b38a0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4b38a4: 0x0  nop
    ctx->pc = 0x4b38a4u;
    // NOP
label_4b38a8:
    // 0x4b38a8: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4b38a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x4b38ac: 0x3e00008  jr          $ra
    ctx->pc = 0x4B38ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B38B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B38ACu;
        // 0x4b38b0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B38ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B38B4u;
    // 0x4b38b4: 0x0  nop
    ctx->pc = 0x4b38b4u;
    // NOP
    // 0x4b38b8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4b38b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b38bc: 0x94430058  lhu         $v1, 0x58($v0)
    ctx->pc = 0x4b38bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x4b38c0: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x4b38c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x4b38c4: 0x8c450030  lw          $a1, 0x30($v0)
    ctx->pc = 0x4b38c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x4b38c8: 0xa4430058  sh          $v1, 0x58($v0)
    ctx->pc = 0x4b38c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 88), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b38cc: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x4b38ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b38d0: 0x3e00008  jr          $ra
    ctx->pc = 0x4B38D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B38D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B38D0u;
        // 0x4b38d4: 0xaca40018  sw          $a0, 0x18($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B38D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B38D8u;
    // 0x4b38d8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4b38d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b38dc: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x4b38dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x4b38e0: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x4b38e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x4b38e4: 0x3e00008  jr          $ra
    ctx->pc = 0x4B38E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B38E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B38E4u;
        // 0x4b38e8: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B38E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B38ECu;
    // 0x4b38ec: 0x0  nop
    ctx->pc = 0x4b38ecu;
    // NOP
    // 0x4b38f0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4b38f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b38f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B38F4u;
    {
        const bool branch_taken_0x4b38f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B38F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B38F4u;
        // 0x4b38f8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b38f4) {
            ctx->pc = 0x4B3910u;
            goto label_4b3910;
        }
    }
    ctx->pc = 0x4B38FCu;
    // 0x4b38fc: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x4b38fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x4b3900: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x4b3900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x4b3904: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x4b3904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x4b3908: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4B3908u;
    {
        const bool branch_taken_0x4b3908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B390Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3908u;
        // 0x4b390c: 0xac62001c  sw          $v0, 0x1C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3908) {
            ctx->pc = 0x4B3928u;
            goto label_4b3928;
        }
    }
    ctx->pc = 0x4B3910u;
label_4b3910:
    // 0x4b3910: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x4b3910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x4b3914: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4b3914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4b3918: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x4b3918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x4b391c: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x4b391cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x4b3920: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b3920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4b3924: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x4b3924u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
label_4b3928:
    // 0x4b3928: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B392Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3928u;
        // 0x4b392c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B3930u;
    // 0x4b3930: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4b3930u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3934: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x4b3934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x4b3938: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x4b3938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x4b393c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4b393cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4b3940: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B3944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3940u;
        // 0x4b3944: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B3948u;
    // 0x4b3948: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x4b3948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x4b394c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B394Cu;
    {
        const bool branch_taken_0x4b394c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B394Cu;
        // 0x4b3950: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b394c) {
            ctx->pc = 0x4B3960u;
            goto label_4b3960;
        }
    }
    ctx->pc = 0x4B3954u;
    // 0x4b3954: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x4b3954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x4b3958: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4b3958u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4b395c: 0x0  nop
    ctx->pc = 0x4b395cu;
    // NOP
label_4b3960:
    // 0x4b3960: 0x50c00006  beql        $a2, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B3960u;
    {
        const bool branch_taken_0x4b3960 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b3960) {
            ctx->pc = 0x4B3964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B3960u;
            // 0x4b3964: 0x94830058  lhu         $v1, 0x58($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B397Cu;
            goto label_4b397c;
        }
    }
    ctx->pc = 0x4B3968u;
    // 0x4b3968: 0x8cc20054  lw          $v0, 0x54($a2)
    ctx->pc = 0x4b3968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
    // 0x4b396c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4b396cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x4b3970: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4b3970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4b3974: 0xac8200a0  sw          $v0, 0xA0($a0)
    ctx->pc = 0x4b3974u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 2));
    // 0x4b3978: 0x94830058  lhu         $v1, 0x58($a0)
    ctx->pc = 0x4b3978u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 88)));
label_4b397c:
    // 0x4b397c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4b397cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3980: 0xac860038  sw          $a2, 0x38($a0)
    ctx->pc = 0x4b3980u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 6));
    // 0x4b3984: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x4b3984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x4b3988: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B398Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3988u;
        // 0x4b398c: 0xa4830058  sh          $v1, 0x58($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 88), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B3990u;
    // 0x4b3990: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4b3990u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3994: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x4b3994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x4b3998: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B399Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3998u;
        // 0x4b399c: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B39A0u;
    // 0x4b39a0: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x4b39a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b39a4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x4b39a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x4b39a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4b39a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4b39ac: 0x94830058  lhu         $v1, 0x58($a0)
    ctx->pc = 0x4b39acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x4b39b0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4b39b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b39b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4b39b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4b39b8: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x4b39b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x4b39bc: 0xa4830058  sh          $v1, 0x58($a0)
    ctx->pc = 0x4b39bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 88), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b39c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4b39c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4b39c4: 0x3e00008  jr          $ra
    ctx->pc = 0x4B39C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B39C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B39C4u;
        // 0x4b39c8: 0xe4800088  swc1        $f0, 0x88($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B39C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B39CCu;
    // 0x4b39cc: 0x0  nop
    ctx->pc = 0x4b39ccu;
    // NOP
    // 0x4b39d0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4b39d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b39d4: 0xc4400088  lwc1        $f0, 0x88($v0)
    ctx->pc = 0x4b39d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b39d8: 0x3e00008  jr          $ra
    ctx->pc = 0x4B39D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B39DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B39D8u;
        // 0x4b39dc: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B39D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B39E0u;
    // 0x4b39e0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4b39e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b39e4: 0x8c4300a0  lw          $v1, 0xA0($v0)
    ctx->pc = 0x4b39e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x4b39e8: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x4b39e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x4b39ec: 0x3e00008  jr          $ra
    ctx->pc = 0x4B39ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B39F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B39ECu;
        // 0x4b39f0: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B39ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B39F4u;
    // 0x4b39f4: 0x0  nop
    ctx->pc = 0x4b39f4u;
    // NOP
    // 0x4b39f8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4b39f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b39fc: 0x94430058  lhu         $v1, 0x58($v0)
    ctx->pc = 0x4b39fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x4b3a00: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x4b3a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x4b3a04: 0xa4430058  sh          $v1, 0x58($v0)
    ctx->pc = 0x4b3a04u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 88), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b3a08: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x4b3a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b3a0c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B3A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3A0Cu;
        // 0x4b3a10: 0xe4400080  swc1        $f0, 0x80($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3A0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B3A14u;
    // 0x4b3a14: 0x0  nop
    ctx->pc = 0x4b3a14u;
    // NOP
    // 0x4b3a18: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4b3a18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3a1c: 0xc4400080  lwc1        $f0, 0x80($v0)
    ctx->pc = 0x4b3a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b3a20: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B3A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3A20u;
        // 0x4b3a24: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3A20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B3A28u;
}

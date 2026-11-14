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

// Function: sub_004AC538
// Address: 0x4ac538 - 0x4ac7c8
void sub_004AC538_0x4ac538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AC538_0x4ac538");
#endif

    switch (ctx->pc) {
        case 0x4ac56cu: goto label_4ac56c;
        case 0x4ac580u: goto label_4ac580;
        case 0x4ac5a0u: goto label_4ac5a0;
        case 0x4ac5b0u: goto label_4ac5b0;
        case 0x4ac5c0u: goto label_4ac5c0;
        case 0x4ac5d8u: goto label_4ac5d8;
        case 0x4ac648u: goto label_4ac648;
        case 0x4ac6b0u: goto label_4ac6b0;
        case 0x4ac704u: goto label_4ac704;
        case 0x4ac73cu: goto label_4ac73c;
        case 0x4ac77cu: goto label_4ac77c;
        case 0x4ac7b4u: goto label_4ac7b4;
        default: break;
    }

    ctx->pc = 0x4ac538u;

    // 0x4ac538: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ac538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4ac53c: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x4ac53cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x4ac540: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x4ac540u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x4ac544: 0x8f84c190  lw          $a0, -0x3E70($gp)
    ctx->pc = 0x4ac544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951312)));
    // 0x4ac548: 0x3c090003  lui         $t1, 0x3
    ctx->pc = 0x4ac548u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)3 << 16));
    // 0x4ac54c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4ac54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4ac550: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ac550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ac554: 0x24c68a38  addiu       $a2, $a2, -0x75C8
    ctx->pc = 0x4ac554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937144));
    // 0x4ac558: 0x24e78a98  addiu       $a3, $a3, -0x7568
    ctx->pc = 0x4ac558u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294937240));
    // 0x4ac55c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x4ac55cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4ac560: 0x2788c220  addiu       $t0, $gp, -0x3DE0
    ctx->pc = 0x4ac560u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951456));
    // 0x4ac564: 0xc12679e  jal         func_499E78
    ctx->pc = 0x4AC564u;
    SET_GPR_U32(ctx, 31, 0x4AC56Cu);
    ctx->pc = 0x4AC568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC564u;
    // 0x4ac568: 0x35290810  ori         $t1, $t1, 0x810 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2064);
    ctx->in_delay_slot = false;
    ctx->pc = 0x499E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499E78u, 0x4AC564u, 0x4AC56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC56Cu;
label_4ac56c:
    // 0x4ac56c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4ac56cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac570: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4AC570u;
    {
        const bool branch_taken_0x4ac570 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC570u;
        // 0x4ac574: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac570) {
            ctx->pc = 0x4AC5DCu;
            goto label_4ac5dc;
        }
    }
    ctx->pc = 0x4AC578u;
    // 0x4ac578: 0xc12b0b0  jal         func_4AC2C0
    ctx->pc = 0x4AC578u;
    SET_GPR_U32(ctx, 31, 0x4AC580u);
    ctx->pc = 0x4AC57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC578u;
    // 0x4ac57c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AC2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AC2C0u, 0x4AC578u, 0x4AC580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC580u;
label_4ac580:
    // 0x4ac580: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x4ac580u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
    // 0x4ac584: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x4ac584u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
    // 0x4ac588: 0x24a57000  addiu       $a1, $a1, 0x7000
    ctx->pc = 0x4ac588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28672));
    // 0x4ac58c: 0x24e77150  addiu       $a3, $a3, 0x7150
    ctx->pc = 0x4ac58cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 29008));
    // 0x4ac590: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ac590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac594: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x4ac594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x4ac598: 0xc12668c  jal         func_499A30
    ctx->pc = 0x4AC598u;
    SET_GPR_U32(ctx, 31, 0x4AC5A0u);
    ctx->pc = 0x4AC59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC598u;
    // 0x4ac59c: 0x2408000f  addiu       $t0, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x499A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499A30u, 0x4AC598u, 0x4AC5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC5A0u;
label_4ac5a0:
    // 0x4ac5a0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4AC5A0u;
    {
        const bool branch_taken_0x4ac5a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ac5a0) {
            ctx->pc = 0x4AC5D0u;
            goto label_4ac5d0;
        }
    }
    ctx->pc = 0x4AC5A8u;
    // 0x4ac5a8: 0xc12afd8  jal         func_4ABF60
    ctx->pc = 0x4AC5A8u;
    SET_GPR_U32(ctx, 31, 0x4AC5B0u);
    ctx->pc = 0x4ABF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ABF60u, 0x4AC5A8u, 0x4AC5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC5B0u;
label_4ac5b0:
    // 0x4ac5b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4AC5B0u;
    {
        const bool branch_taken_0x4ac5b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC5B0u;
        // 0x4ac5b4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac5b0) {
            ctx->pc = 0x4AC5D0u;
            goto label_4ac5d0;
        }
    }
    ctx->pc = 0x4AC5B8u;
    // 0x4ac5b8: 0xc126804  jal         func_49A010
    ctx->pc = 0x4AC5B8u;
    SET_GPR_U32(ctx, 31, 0x4AC5C0u);
    ctx->pc = 0x4AC5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC5B8u;
    // 0x4ac5bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49A010u, 0x4AC5B8u, 0x4AC5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC5C0u;
label_4ac5c0:
    // 0x4ac5c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4ac5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4ac5c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ac5c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac5c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4AC5C8u;
    {
        const bool branch_taken_0x4ac5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC5C8u;
        // 0x4ac5cc: 0xaf83b8a8  sw          $v1, -0x4758($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949032), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac5c8) {
            ctx->pc = 0x4AC5DCu;
            goto label_4ac5dc;
        }
    }
    ctx->pc = 0x4AC5D0u;
label_4ac5d0:
    // 0x4ac5d0: 0xc126614  jal         func_499850
    ctx->pc = 0x4AC5D0u;
    SET_GPR_U32(ctx, 31, 0x4AC5D8u);
    ctx->pc = 0x4AC5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC5D0u;
    // 0x4ac5d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x499850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499850u, 0x4AC5D0u, 0x4AC5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC5D8u;
label_4ac5d8:
    // 0x4ac5d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4ac5d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ac5dc:
    // 0x4ac5dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4ac5dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ac5e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ac5e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ac5e4: 0x3e00008  jr          $ra
    ctx->pc = 0x4AC5E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC5E4u;
        // 0x4ac5e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC5E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AC5ECu;
    // 0x4ac5ec: 0x0  nop
    ctx->pc = 0x4ac5ecu;
    // NOP
    // 0x4ac5f0: 0x3e00008  jr          $ra
    ctx->pc = 0x4AC5F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC5F0u;
        // 0x4ac5f4: 0xe48c0090  swc1        $f12, 0x90($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 144), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC5F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AC5F8u;
    // 0x4ac5f8: 0x3e00008  jr          $ra
    ctx->pc = 0x4AC5F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC5F8u;
        // 0x4ac5fc: 0xc4800090  lwc1        $f0, 0x90($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC5F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AC600u;
    // 0x4ac600: 0x3e00008  jr          $ra
    ctx->pc = 0x4AC600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC600u;
        // 0x4ac604: 0xe48c0094  swc1        $f12, 0x94($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 148), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AC608u;
    // 0x4ac608: 0x3e00008  jr          $ra
    ctx->pc = 0x4AC608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC608u;
        // 0x4ac60c: 0xc4800094  lwc1        $f0, 0x94($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AC610u;
    // 0x4ac610: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ac610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ac614: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ac614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ac618: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x4ac618u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4ac61c: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x4ac61cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4ac620: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x4ac620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4ac624: 0xb0820077  sdl         $v0, 0x77($a0)
    ctx->pc = 0x4ac624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ac628: 0xb4820070  sdr         $v0, 0x70($a0)
    ctx->pc = 0x4ac628u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ac62c: 0xac830078  sw          $v1, 0x78($a0)
    ctx->pc = 0x4ac62cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 3));
    // 0x4ac630: 0x8c840048  lw          $a0, 0x48($a0)
    ctx->pc = 0x4ac630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x4ac634: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AC634u;
    {
        const bool branch_taken_0x4ac634 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC634u;
        // 0x4ac638: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac634) {
            ctx->pc = 0x4AC648u;
            goto label_4ac648;
        }
    }
    ctx->pc = 0x4AC63Cu;
    // 0x4ac63c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4ac63cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4ac640: 0xc1262e8  jal         func_498BA0
    ctx->pc = 0x4AC640u;
    SET_GPR_U32(ctx, 31, 0x4AC648u);
    ctx->pc = 0x4AC644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC640u;
    // 0x4ac644: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498BA0u, 0x4AC640u, 0x4AC648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC648u;
label_4ac648:
    // 0x4ac648: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ac648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ac64c: 0x3e00008  jr          $ra
    ctx->pc = 0x4AC64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC64Cu;
        // 0x4ac650: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC64Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AC654u;
    // 0x4ac654: 0x0  nop
    ctx->pc = 0x4ac654u;
    // NOP
    // 0x4ac658: 0x68820077  ldl         $v0, 0x77($a0)
    ctx->pc = 0x4ac658u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4ac65c: 0x6c820070  ldr         $v0, 0x70($a0)
    ctx->pc = 0x4ac65cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4ac660: 0x8c830078  lw          $v1, 0x78($a0)
    ctx->pc = 0x4ac660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x4ac664: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x4ac664u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ac668: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x4ac668u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ac66c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x4ac66cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x4ac670: 0x3e00008  jr          $ra
    ctx->pc = 0x4AC670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AC678u;
    // 0x4ac678: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ac678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ac67c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ac67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ac680: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x4ac680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4ac684: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x4ac684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4ac688: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x4ac688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4ac68c: 0xb0820083  sdl         $v0, 0x83($a0)
    ctx->pc = 0x4ac68cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 131); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ac690: 0xb482007c  sdr         $v0, 0x7C($a0)
    ctx->pc = 0x4ac690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 124); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ac694: 0xac830084  sw          $v1, 0x84($a0)
    ctx->pc = 0x4ac694u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
    // 0x4ac698: 0x8c840048  lw          $a0, 0x48($a0)
    ctx->pc = 0x4ac698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x4ac69c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AC69Cu;
    {
        const bool branch_taken_0x4ac69c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC69Cu;
        // 0x4ac6a0: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac69c) {
            ctx->pc = 0x4AC6B0u;
            goto label_4ac6b0;
        }
    }
    ctx->pc = 0x4AC6A4u;
    // 0x4ac6a4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4ac6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4ac6a8: 0xc1262e8  jal         func_498BA0
    ctx->pc = 0x4AC6A8u;
    SET_GPR_U32(ctx, 31, 0x4AC6B0u);
    ctx->pc = 0x4AC6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC6A8u;
    // 0x4ac6ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498BA0u, 0x4AC6A8u, 0x4AC6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC6B0u;
label_4ac6b0:
    // 0x4ac6b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ac6b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ac6b4: 0x3e00008  jr          $ra
    ctx->pc = 0x4AC6B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC6B4u;
        // 0x4ac6b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC6B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AC6BCu;
    // 0x4ac6bc: 0x0  nop
    ctx->pc = 0x4ac6bcu;
    // NOP
    // 0x4ac6c0: 0x68820083  ldl         $v0, 0x83($a0)
    ctx->pc = 0x4ac6c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 131); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4ac6c4: 0x6c82007c  ldr         $v0, 0x7C($a0)
    ctx->pc = 0x4ac6c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 124); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4ac6c8: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x4ac6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x4ac6cc: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x4ac6ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ac6d0: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x4ac6d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ac6d4: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x4ac6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x4ac6d8: 0x3e00008  jr          $ra
    ctx->pc = 0x4AC6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC6D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AC6E0u;
    // 0x4ac6e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ac6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ac6e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ac6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ac6e8: 0xe48c0088  swc1        $f12, 0x88($a0)
    ctx->pc = 0x4ac6e8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
    // 0x4ac6ec: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x4ac6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x4ac6f0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AC6F0u;
    {
        const bool branch_taken_0x4ac6f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC6F0u;
        // 0x4ac6f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac6f0) {
            ctx->pc = 0x4AC704u;
            goto label_4ac704;
        }
    }
    ctx->pc = 0x4AC6F8u;
    // 0x4ac6f8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4ac6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4ac6fc: 0xc1263d6  jal         func_498F58
    ctx->pc = 0x4AC6FCu;
    SET_GPR_U32(ctx, 31, 0x4AC704u);
    ctx->pc = 0x4AC700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC6FCu;
    // 0x4ac700: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498F58u, 0x4AC6FCu, 0x4AC704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC704u;
label_4ac704:
    // 0x4ac704: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ac704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ac708: 0x3e00008  jr          $ra
    ctx->pc = 0x4AC708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC708u;
        // 0x4ac70c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AC710u;
    // 0x4ac710: 0x3e00008  jr          $ra
    ctx->pc = 0x4AC710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC710u;
        // 0x4ac714: 0xc4800088  lwc1        $f0, 0x88($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AC718u;
    // 0x4ac718: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ac718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ac71c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ac71cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ac720: 0xe48c008c  swc1        $f12, 0x8C($a0)
    ctx->pc = 0x4ac720u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 140), bits); }
    // 0x4ac724: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x4ac724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x4ac728: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AC728u;
    {
        const bool branch_taken_0x4ac728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC728u;
        // 0x4ac72c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac728) {
            ctx->pc = 0x4AC73Cu;
            goto label_4ac73c;
        }
    }
    ctx->pc = 0x4AC730u;
    // 0x4ac730: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x4ac730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4ac734: 0xc1263d6  jal         func_498F58
    ctx->pc = 0x4AC734u;
    SET_GPR_U32(ctx, 31, 0x4AC73Cu);
    ctx->pc = 0x4AC738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC734u;
    // 0x4ac738: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498F58u, 0x4AC734u, 0x4AC73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC73Cu;
label_4ac73c:
    // 0x4ac73c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ac73cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ac740: 0x3e00008  jr          $ra
    ctx->pc = 0x4AC740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC740u;
        // 0x4ac744: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AC748u;
    // 0x4ac748: 0x3e00008  jr          $ra
    ctx->pc = 0x4AC748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC748u;
        // 0x4ac74c: 0xc480008c  lwc1        $f0, 0x8C($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AC750u;
    // 0x4ac750: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ac750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ac754: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4ac754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4ac758: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ac758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ac75c: 0xac82009c  sw          $v0, 0x9C($a0)
    ctx->pc = 0x4ac75cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 2));
    // 0x4ac760: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x4ac760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x4ac764: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AC764u;
    {
        const bool branch_taken_0x4ac764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC764u;
        // 0x4ac768: 0xe48c0054  swc1        $f12, 0x54($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac764) {
            ctx->pc = 0x4AC77Cu;
            goto label_4ac77c;
        }
    }
    ctx->pc = 0x4AC76Cu;
    // 0x4ac76c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x4ac76cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac770: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x4ac770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4ac774: 0xc1263d6  jal         func_498F58
    ctx->pc = 0x4AC774u;
    SET_GPR_U32(ctx, 31, 0x4AC77Cu);
    ctx->pc = 0x4AC778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC774u;
    // 0x4ac778: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498F58u, 0x4AC774u, 0x4AC77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC77Cu;
label_4ac77c:
    // 0x4ac77c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ac77cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ac780: 0x3e00008  jr          $ra
    ctx->pc = 0x4AC780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC780u;
        // 0x4ac784: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AC788u;
    // 0x4ac788: 0x3e00008  jr          $ra
    ctx->pc = 0x4AC788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC788u;
        // 0x4ac78c: 0xc4800054  lwc1        $f0, 0x54($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AC790u;
    // 0x4ac790: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ac790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ac794: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ac794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ac798: 0xe48c0058  swc1        $f12, 0x58($a0)
    ctx->pc = 0x4ac798u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
    // 0x4ac79c: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x4ac79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x4ac7a0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AC7A0u;
    {
        const bool branch_taken_0x4ac7a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC7A0u;
        // 0x4ac7a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac7a0) {
            ctx->pc = 0x4AC7B4u;
            goto label_4ac7b4;
        }
    }
    ctx->pc = 0x4AC7A8u;
    // 0x4ac7a8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x4ac7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4ac7ac: 0xc1263d6  jal         func_498F58
    ctx->pc = 0x4AC7ACu;
    SET_GPR_U32(ctx, 31, 0x4AC7B4u);
    ctx->pc = 0x4AC7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC7ACu;
    // 0x4ac7b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498F58u, 0x4AC7ACu, 0x4AC7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC7B4u;
label_4ac7b4:
    // 0x4ac7b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ac7b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ac7b8: 0x3e00008  jr          $ra
    ctx->pc = 0x4AC7B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC7B8u;
        // 0x4ac7bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC7B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AC7C0u;
    // 0x4ac7c0: 0x3e00008  jr          $ra
    ctx->pc = 0x4AC7C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC7C0u;
        // 0x4ac7c4: 0xc4800058  lwc1        $f0, 0x58($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC7C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AC7C8u;
}

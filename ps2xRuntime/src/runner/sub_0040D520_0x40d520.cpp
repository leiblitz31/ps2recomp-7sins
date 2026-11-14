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

// Function: sub_0040D520
// Address: 0x40d520 - 0x40d6c0
void sub_0040D520_0x40d520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040D520_0x40d520");
#endif

    switch (ctx->pc) {
        case 0x40d548u: goto label_40d548;
        case 0x40d574u: goto label_40d574;
        case 0x40d584u: goto label_40d584;
        case 0x40d5a0u: goto label_40d5a0;
        case 0x40d62cu: goto label_40d62c;
        case 0x40d648u: goto label_40d648;
        case 0x40d654u: goto label_40d654;
        case 0x40d674u: goto label_40d674;
        case 0x40d694u: goto label_40d694;
        case 0x40d6a8u: goto label_40d6a8;
        default: break;
    }

    ctx->pc = 0x40d520u;

    // 0x40d520: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x40d520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x40d524: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x40d524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x40d528: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x40d528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x40d52c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x40d52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x40d530: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x40d530u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40d534: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x40d534u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40d538: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x40d538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x40d53c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x40d53cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40d540: 0xc103322  jal         func_40CC88
    ctx->pc = 0x40D540u;
    SET_GPR_U32(ctx, 31, 0x40D548u);
    ctx->pc = 0x40D544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D540u;
    // 0x40d544: 0x27a70074  addiu       $a3, $sp, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x40D540u, 0x40D548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D548u;
label_40d548:
    // 0x40d548: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x40D548u;
    {
        const bool branch_taken_0x40d548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40D54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D548u;
        // 0x40d54c: 0x8fa30074  lw          $v1, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d548) {
            ctx->pc = 0x40D680u;
            goto label_40d680;
        }
    }
    ctx->pc = 0x40D550u;
    // 0x40d550: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x40d550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
    // 0x40d554: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x40d554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x40d558: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x40d558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x40d55c: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x40d55cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
    // 0x40d560: 0x1060003f  beqz        $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x40D560u;
    {
        const bool branch_taken_0x40d560 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x40D564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D560u;
        // 0x40d564: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d560) {
            ctx->pc = 0x40D660u;
            goto label_40d660;
        }
    }
    ctx->pc = 0x40D568u;
    // 0x40d568: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x40d568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40d56c: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x40D56Cu;
    SET_GPR_U32(ctx, 31, 0x40D574u);
    ctx->pc = 0x40D570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D56Cu;
    // 0x40d570: 0x24060034  addiu       $a2, $zero, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x40D56Cu, 0x40D574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D574u;
label_40d574:
    // 0x40d574: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x40d574u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x40d578: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40d578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40d57c: 0xc10480a  jal         func_412028
    ctx->pc = 0x40D57Cu;
    SET_GPR_U32(ctx, 31, 0x40D584u);
    ctx->pc = 0x40D580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D57Cu;
    // 0x40d580: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x40D57Cu, 0x40D584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D584u;
label_40d584:
    // 0x40d584: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x40d584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x40d588: 0x1462002b  bne         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x40D588u;
    {
        const bool branch_taken_0x40d588 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x40D58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D588u;
        // 0x40d58c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d588) {
            ctx->pc = 0x40D638u;
            goto label_40d638;
        }
    }
    ctx->pc = 0x40D590u;
    // 0x40d590: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x40D590u;
    {
        const bool branch_taken_0x40d590 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x40D594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D590u;
        // 0x40d594: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d590) {
            ctx->pc = 0x40D5ACu;
            goto label_40d5ac;
        }
    }
    ctx->pc = 0x40D598u;
    // 0x40d598: 0xc103db0  jal         func_40F6C0
    ctx->pc = 0x40D598u;
    SET_GPR_U32(ctx, 31, 0x40D5A0u);
    ctx->pc = 0x40F6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F6C0u, 0x40D598u, 0x40D5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D5A0u;
label_40d5a0:
    // 0x40d5a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x40d5a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40d5a4: 0x12000040  beqz        $s0, . + 4 + (0x40 << 2)
    ctx->pc = 0x40D5A4u;
    {
        const bool branch_taken_0x40d5a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x40D5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D5A4u;
        // 0x40d5a8: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d5a4) {
            ctx->pc = 0x40D6A8u;
            goto label_40d6a8;
        }
    }
    ctx->pc = 0x40D5ACu;
label_40d5ac:
    // 0x40d5ac: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x40d5acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x40d5b0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x40d5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x40d5b4: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x40d5b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x40d5b8: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x40d5b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x40d5bc: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x40d5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x40d5c0: 0xb2030007  sdl         $v1, 0x7($s0)
    ctx->pc = 0x40d5c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x40d5c4: 0xb6030000  sdr         $v1, 0x0($s0)
    ctx->pc = 0x40d5c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x40d5c8: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x40d5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x40d5cc: 0x6ba70013  ldl         $a3, 0x13($sp)
    ctx->pc = 0x40d5ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x40d5d0: 0x6fa7000c  ldr         $a3, 0xC($sp)
    ctx->pc = 0x40d5d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x40d5d4: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x40d5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x40d5d8: 0xb2070017  sdl         $a3, 0x17($s0)
    ctx->pc = 0x40d5d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x40d5dc: 0xb6070010  sdr         $a3, 0x10($s0)
    ctx->pc = 0x40d5dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x40d5e0: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x40d5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
    // 0x40d5e4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x40d5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x40d5e8: 0x6ba7001f  ldl         $a3, 0x1F($sp)
    ctx->pc = 0x40d5e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x40d5ec: 0x6fa70018  ldr         $a3, 0x18($sp)
    ctx->pc = 0x40d5ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x40d5f0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x40d5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40d5f4: 0xb2070027  sdl         $a3, 0x27($s0)
    ctx->pc = 0x40d5f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x40d5f8: 0xb6070020  sdr         $a3, 0x20($s0)
    ctx->pc = 0x40d5f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x40d5fc: 0xae040028  sw          $a0, 0x28($s0)
    ctx->pc = 0x40d5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 4));
    // 0x40d600: 0x6ba7002b  ldl         $a3, 0x2B($sp)
    ctx->pc = 0x40d600u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x40d604: 0x6fa70024  ldr         $a3, 0x24($sp)
    ctx->pc = 0x40d604u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x40d608: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x40d608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x40d60c: 0xb2070037  sdl         $a3, 0x37($s0)
    ctx->pc = 0x40d60cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x40d610: 0xb6070030  sdr         $a3, 0x30($s0)
    ctx->pc = 0x40d610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x40d614: 0xae040038  sw          $a0, 0x38($s0)
    ctx->pc = 0x40d614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 4));
    // 0x40d618: 0x14430023  bne         $v0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x40D618u;
    {
        const bool branch_taken_0x40d618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x40D61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D618u;
        // 0x40d61c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d618) {
            ctx->pc = 0x40D6A8u;
            goto label_40d6a8;
        }
    }
    ctx->pc = 0x40D620u;
    // 0x40d620: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40d620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40d624: 0xc103e64  jal         func_40F990
    ctx->pc = 0x40D624u;
    SET_GPR_U32(ctx, 31, 0x40D62Cu);
    ctx->pc = 0x40D628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D624u;
    // 0x40d628: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F990u, 0x40D624u, 0x40D62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D62Cu;
label_40d62c:
    // 0x40d62c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x40D62Cu;
    {
        const bool branch_taken_0x40d62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40D630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D62Cu;
        // 0x40d630: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d62c) {
            ctx->pc = 0x40D6ACu;
            goto label_40d6ac;
        }
    }
    ctx->pc = 0x40D634u;
    // 0x40d634: 0x0  nop
    ctx->pc = 0x40d634u;
    // NOP
label_40d638:
    // 0x40d638: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x40d638u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x40d63c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x40d63cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x40d640: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x40D640u;
    SET_GPR_U32(ctx, 31, 0x40D648u);
    ctx->pc = 0x40D644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D640u;
    // 0x40d644: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x40D640u, 0x40D648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D648u;
label_40d648:
    // 0x40d648: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x40d648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x40d64c: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x40D64Cu;
    SET_GPR_U32(ctx, 31, 0x40D654u);
    ctx->pc = 0x40D650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D64Cu;
    // 0x40d650: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x40D64Cu, 0x40D654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D654u;
label_40d654:
    // 0x40d654: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x40D654u;
    {
        const bool branch_taken_0x40d654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40D658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D654u;
        // 0x40d658: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d654) {
            ctx->pc = 0x40D6ACu;
            goto label_40d6ac;
        }
    }
    ctx->pc = 0x40D65Cu;
    // 0x40d65c: 0x0  nop
    ctx->pc = 0x40d65cu;
    // NOP
label_40d660:
    // 0x40d660: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x40d660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40d664: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x40d664u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x40d668: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x40d668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x40d66c: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x40D66Cu;
    SET_GPR_U32(ctx, 31, 0x40D674u);
    ctx->pc = 0x40D670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D66Cu;
    // 0x40d670: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x40D66Cu, 0x40D674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D674u;
label_40d674:
    // 0x40d674: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x40d674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x40d678: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x40D678u;
    {
        const bool branch_taken_0x40d678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40D67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D678u;
        // 0x40d67c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d678) {
            ctx->pc = 0x40D6A0u;
            goto label_40d6a0;
        }
    }
    ctx->pc = 0x40D680u;
label_40d680:
    // 0x40d680: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x40d680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40d684: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x40d684u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x40d688: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x40d688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x40d68c: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x40D68Cu;
    SET_GPR_U32(ctx, 31, 0x40D694u);
    ctx->pc = 0x40D690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D68Cu;
    // 0x40d690: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x40D68Cu, 0x40D694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D694u;
label_40d694:
    // 0x40d694: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x40d694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x40d698: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x40d698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x40d69c: 0x0  nop
    ctx->pc = 0x40d69cu;
    // NOP
label_40d6a0:
    // 0x40d6a0: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x40D6A0u;
    SET_GPR_U32(ctx, 31, 0x40D6A8u);
    ctx->pc = 0x40D6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D6A0u;
    // 0x40d6a4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x40D6A0u, 0x40D6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D6A8u;
label_40d6a8:
    // 0x40d6a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x40d6a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40d6ac:
    // 0x40d6ac: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x40d6acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x40d6b0: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x40d6b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x40d6b4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x40d6b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x40d6b8: 0x3e00008  jr          $ra
    ctx->pc = 0x40D6B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40D6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D6B8u;
        // 0x40d6bc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D6B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40D6C0u;
}

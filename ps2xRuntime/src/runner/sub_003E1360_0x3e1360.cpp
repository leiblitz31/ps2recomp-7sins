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

// Function: sub_003E1360
// Address: 0x3e1360 - 0x3e1450
void sub_003E1360_0x3e1360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E1360_0x3e1360");
#endif

    switch (ctx->pc) {
        case 0x3e1394u: goto label_3e1394;
        case 0x3e13c4u: goto label_3e13c4;
        case 0x3e1420u: goto label_3e1420;
        case 0x3e1440u: goto label_3e1440;
        default: break;
    }

    ctx->pc = 0x3e1360u;

    // 0x3e1360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e1360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e1364: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x3e1364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x3e1368: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e1368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e136c: 0x2cc20009  sltiu       $v0, $a2, 0x9
    ctx->pc = 0x3e136cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x3e1370: 0x246a9c50  addiu       $t2, $v1, -0x63B0
    ctx->pc = 0x3e1370u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941776));
    // 0x3e1374: 0x69470007  ldl         $a3, 0x7($t2)
    ctx->pc = 0x3e1374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x3e1378: 0x6d470000  ldr         $a3, 0x0($t2)
    ctx->pc = 0x3e1378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x3e137c: 0xb3a70007  sdl         $a3, 0x7($sp)
    ctx->pc = 0x3e137cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3e1380: 0xb7a70000  sdr         $a3, 0x0($sp)
    ctx->pc = 0x3e1380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3e1384: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E1384u;
    {
        const bool branch_taken_0x3e1384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e1384) {
            ctx->pc = 0x3E1388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E1384u;
            // 0x3e1388: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E139Cu;
            goto label_3e139c;
        }
    }
    ctx->pc = 0x3E138Cu;
    // 0x3e138c: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E138Cu;
    {
        const bool branch_taken_0x3e138c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E1390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E138Cu;
        // 0x3e1390: 0x2ca20008  sltiu       $v0, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e138c) {
            ctx->pc = 0x3E13A0u;
            goto label_3e13a0;
        }
    }
    ctx->pc = 0x3E1394u;
label_3e1394:
    // 0x3e1394: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3E1394u;
    {
        const bool branch_taken_0x3e1394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1394u;
        // 0x3e1398: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1394) {
            ctx->pc = 0x3E13C4u;
            goto label_3e13c4;
        }
    }
    ctx->pc = 0x3E139Cu;
label_3e139c:
    // 0x3e139c: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x3e139cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_3e13a0:
    // 0x3e13a0: 0x1040fffc  beqz        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x3E13A0u;
    {
        const bool branch_taken_0x3e13a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E13A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E13A0u;
        // 0x3e13a4: 0xa61021  addu        $v0, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e13a0) {
            ctx->pc = 0x3E1394u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e1394;
        }
    }
    ctx->pc = 0x3E13A8u;
    // 0x3e13a8: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x3e13a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x3e13ac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E13ACu;
    {
        const bool branch_taken_0x3e13ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E13B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E13ACu;
        // 0x3e13b0: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e13ac) {
            ctx->pc = 0x3E13BCu;
            goto label_3e13bc;
        }
    }
    ctx->pc = 0x3E13B4u;
    // 0x3e13b4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3e13b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3e13b8: 0x453023  subu        $a2, $v0, $a1
    ctx->pc = 0x3e13b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_3e13bc:
    // 0x3e13bc: 0xc0bb752  jal         func_2EDD48
    ctx->pc = 0x3E13BCu;
    SET_GPR_U32(ctx, 31, 0x3E13C4u);
    ctx->pc = 0x3E13C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E13BCu;
    // 0x3e13c0: 0x3a52821  addu        $a1, $sp, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x3E13BCu, 0x3E13C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E13C4u;
label_3e13c4:
    // 0x3e13c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e13c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e13c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3E13C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E13CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E13C8u;
        // 0x3e13cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E13C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E13D0u;
    // 0x3e13d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e13d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e13d4: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x3e13d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x3e13d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e13d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e13dc: 0x2ca20009  sltiu       $v0, $a1, 0x9
    ctx->pc = 0x3e13dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x3e13e0: 0x24699c50  addiu       $t1, $v1, -0x63B0
    ctx->pc = 0x3e13e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941776));
    // 0x3e13e4: 0x69260007  ldl         $a2, 0x7($t1)
    ctx->pc = 0x3e13e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x3e13e8: 0x6d260000  ldr         $a2, 0x0($t1)
    ctx->pc = 0x3e13e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x3e13ec: 0xb3a60007  sdl         $a2, 0x7($sp)
    ctx->pc = 0x3e13ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3e13f0: 0xb7a60000  sdr         $a2, 0x0($sp)
    ctx->pc = 0x3e13f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3e13f4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E13F4u;
    {
        const bool branch_taken_0x3e13f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e13f4) {
            ctx->pc = 0x3E13F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E13F4u;
            // 0x3e13f8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E140Cu;
            goto label_3e140c;
        }
    }
    ctx->pc = 0x3E13FCu;
    // 0x3e13fc: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E13FCu;
    {
        const bool branch_taken_0x3e13fc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E1400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E13FCu;
        // 0x3e1400: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e13fc) {
            ctx->pc = 0x3E1414u;
            goto label_3e1414;
        }
    }
    ctx->pc = 0x3E1404u;
    // 0x3e1404: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3E1404u;
    {
        const bool branch_taken_0x3e1404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1404u;
        // 0x3e1408: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1404) {
            ctx->pc = 0x3E1420u;
            goto label_3e1420;
        }
    }
    ctx->pc = 0x3E140Cu;
label_3e140c:
    // 0x3e140c: 0x2ca20009  sltiu       $v0, $a1, 0x9
    ctx->pc = 0x3e140cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x3e1410: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x3e1410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3e1414:
    // 0x3e1414: 0xa2300b  movn        $a2, $a1, $v0
    ctx->pc = 0x3e1414u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 5));
    // 0x3e1418: 0xc0bb752  jal         func_2EDD48
    ctx->pc = 0x3E1418u;
    SET_GPR_U32(ctx, 31, 0x3E1420u);
    ctx->pc = 0x3E141Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1418u;
    // 0x3e141c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x3E1418u, 0x3E1420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1420u;
label_3e1420:
    // 0x3e1420: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e1420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e1424: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3e1424u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3e1428: 0x3e00008  jr          $ra
    ctx->pc = 0x3E1428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E142Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1428u;
        // 0x3e142c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1430u;
    // 0x3e1430: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e1430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3e1434: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e1434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e1438: 0xc0f73da  jal         func_3DCF68
    ctx->pc = 0x3E1438u;
    SET_GPR_U32(ctx, 31, 0x3E1440u);
    ctx->pc = 0x3E143Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1438u;
    // 0x3e143c: 0x24840110  addiu       $a0, $a0, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DCF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DCF68u, 0x3E1438u, 0x3E1440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1440u;
label_3e1440:
    // 0x3e1440: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e1440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e1444: 0x3e00008  jr          $ra
    ctx->pc = 0x3E1444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E1448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1444u;
        // 0x3e1448: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E144Cu;
    // 0x3e144c: 0x0  nop
    ctx->pc = 0x3e144cu;
    // NOP
    ctx->pc = 0x3e1450u;
}

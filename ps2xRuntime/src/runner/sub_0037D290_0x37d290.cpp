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

// Function: sub_0037D290
// Address: 0x37d290 - 0x37d5b0
void sub_0037D290_0x37d290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037D290_0x37d290");
#endif

    switch (ctx->pc) {
        case 0x37d2d8u: goto label_37d2d8;
        case 0x37d2e4u: goto label_37d2e4;
        case 0x37d35cu: goto label_37d35c;
        case 0x37d368u: goto label_37d368;
        case 0x37d3c4u: goto label_37d3c4;
        case 0x37d3d0u: goto label_37d3d0;
        case 0x37d454u: goto label_37d454;
        case 0x37d460u: goto label_37d460;
        case 0x37d4a4u: goto label_37d4a4;
        case 0x37d4ccu: goto label_37d4cc;
        case 0x37d4d8u: goto label_37d4d8;
        case 0x37d51cu: goto label_37d51c;
        case 0x37d538u: goto label_37d538;
        case 0x37d560u: goto label_37d560;
        case 0x37d578u: goto label_37d578;
        case 0x37d584u: goto label_37d584;
        case 0x37d594u: goto label_37d594;
        default: break;
    }

    ctx->pc = 0x37d290u;

    // 0x37d290: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37d290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37d294: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37d294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37d298: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x37d298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x37d29c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x37d29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x37d2a0: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37D2A0u;
    {
        const bool branch_taken_0x37d2a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x37d2a0) {
            ctx->pc = 0x37D2A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37D2A0u;
            // 0x37d2a4: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37D2BCu;
            goto label_37d2bc;
        }
    }
    ctx->pc = 0x37D2A8u;
    // 0x37d2a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x37d2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37d2ac: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37D2ACu;
    {
        const bool branch_taken_0x37d2ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x37d2ac) {
            ctx->pc = 0x37D2B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37D2ACu;
            // 0x37d2b0: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37D2C4u;
            goto label_37d2c4;
        }
    }
    ctx->pc = 0x37D2B4u;
    // 0x37d2b4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x37D2B4u;
    {
        const bool branch_taken_0x37d2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D2B4u;
        // 0x37d2b8: 0x24020102  addiu       $v0, $zero, 0x102 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d2b4) {
            ctx->pc = 0x37D2CCu;
            goto label_37d2cc;
        }
    }
    ctx->pc = 0x37D2BCu;
label_37d2bc:
    // 0x37d2bc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x37D2BCu;
    {
        const bool branch_taken_0x37d2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D2BCu;
        // 0x37d2c0: 0x2442fffe  addiu       $v0, $v0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d2bc) {
            ctx->pc = 0x37D2E8u;
            goto label_37d2e8;
        }
    }
    ctx->pc = 0x37D2C4u;
label_37d2c4:
    // 0x37d2c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x37D2C4u;
    {
        const bool branch_taken_0x37d2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D2C4u;
        // 0x37d2c8: 0x2442fffd  addiu       $v0, $v0, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d2c4) {
            ctx->pc = 0x37D2E8u;
            goto label_37d2e8;
        }
    }
    ctx->pc = 0x37D2CCu;
label_37d2cc:
    // 0x37d2cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x37d2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37d2d0: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x37D2D0u;
    SET_GPR_U32(ctx, 31, 0x37D2D8u);
    ctx->pc = 0x37D2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D2D0u;
    // 0x37d2d4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x37D2D0u, 0x37D2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D2D8u;
label_37d2d8:
    // 0x37d2d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x37d2d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d2dc: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x37D2DCu;
    SET_GPR_U32(ctx, 31, 0x37D2E4u);
    ctx->pc = 0x37D2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D2DCu;
    // 0x37d2e0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x37D2DCu, 0x37D2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D2E4u;
label_37d2e4:
    // 0x37d2e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37d2e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37d2e8:
    // 0x37d2e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x37d2e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37d2ec: 0x3e00008  jr          $ra
    ctx->pc = 0x37D2ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D2ECu;
        // 0x37d2f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D2ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D2F4u;
    // 0x37d2f4: 0x0  nop
    ctx->pc = 0x37d2f4u;
    // NOP
    // 0x37d2f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x37d2f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x37d2fc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x37d2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x37d300: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x37d300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x37d304: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37d304u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d308: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x37d308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x37d30c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x37d30cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d310: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x37d310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x37d314: 0x6200024  bltz        $s1, . + 4 + (0x24 << 2)
    ctx->pc = 0x37D314u;
    {
        const bool branch_taken_0x37d314 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x37D318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D314u;
        // 0x37d318: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d314) {
            ctx->pc = 0x37D3A8u;
            goto label_37d3a8;
        }
    }
    ctx->pc = 0x37D31Cu;
    // 0x37d31c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x37d31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x37d320: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37d320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37d324: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37D324u;
    {
        const bool branch_taken_0x37d324 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x37d324) {
            ctx->pc = 0x37D328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37D324u;
            // 0x37d328: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37D340u;
            goto label_37d340;
        }
    }
    ctx->pc = 0x37D32Cu;
    // 0x37d32c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x37d32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37d330: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37D330u;
    {
        const bool branch_taken_0x37d330 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x37d330) {
            ctx->pc = 0x37D334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37D330u;
            // 0x37d334: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37D348u;
            goto label_37d348;
        }
    }
    ctx->pc = 0x37D338u;
    // 0x37d338: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x37D338u;
    {
        const bool branch_taken_0x37d338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D338u;
        // 0x37d33c: 0x24020102  addiu       $v0, $zero, 0x102 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d338) {
            ctx->pc = 0x37D350u;
            goto label_37d350;
        }
    }
    ctx->pc = 0x37D340u;
label_37d340:
    // 0x37d340: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x37D340u;
    {
        const bool branch_taken_0x37d340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D340u;
        // 0x37d344: 0x2442fffe  addiu       $v0, $v0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d340) {
            ctx->pc = 0x37D370u;
            goto label_37d370;
        }
    }
    ctx->pc = 0x37D348u;
label_37d348:
    // 0x37d348: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x37D348u;
    {
        const bool branch_taken_0x37d348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D348u;
        // 0x37d34c: 0x2442fffd  addiu       $v0, $v0, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d348) {
            ctx->pc = 0x37D370u;
            goto label_37d370;
        }
    }
    ctx->pc = 0x37D350u;
label_37d350:
    // 0x37d350: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x37d350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37d354: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x37D354u;
    SET_GPR_U32(ctx, 31, 0x37D35Cu);
    ctx->pc = 0x37D358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D354u;
    // 0x37d358: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x37D354u, 0x37D35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D35Cu;
label_37d35c:
    // 0x37d35c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x37d35cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d360: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x37D360u;
    SET_GPR_U32(ctx, 31, 0x37D368u);
    ctx->pc = 0x37D364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D360u;
    // 0x37d364: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x37D360u, 0x37D368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D368u;
label_37d368:
    // 0x37d368: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37d368u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d36c: 0x0  nop
    ctx->pc = 0x37d36cu;
    // NOP
label_37d370:
    // 0x37d370: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x37d370u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x37d374: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x37D374u;
    {
        const bool branch_taken_0x37d374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D374u;
        // 0x37d378: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d374) {
            ctx->pc = 0x37D3A8u;
            goto label_37d3a8;
        }
    }
    ctx->pc = 0x37D37Cu;
    // 0x37d37c: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x37d37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x37d380: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x37d380u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x37d384: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x37d384u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d388: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x37d388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x37d38c: 0x68640007  ldl         $a0, 0x7($v1)
    ctx->pc = 0x37d38cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x37d390: 0x6c640000  ldr         $a0, 0x0($v1)
    ctx->pc = 0x37d390u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x37d394: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x37d394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x37d398: 0xb2440007  sdl         $a0, 0x7($s2)
    ctx->pc = 0x37d398u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37d39c: 0xb6440000  sdr         $a0, 0x0($s2)
    ctx->pc = 0x37d39cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37d3a0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x37D3A0u;
    {
        const bool branch_taken_0x37d3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D3A0u;
        // 0x37d3a4: 0xae450008  sw          $a1, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d3a0) {
            ctx->pc = 0x37D3D8u;
            goto label_37d3d8;
        }
    }
    ctx->pc = 0x37D3A8u;
label_37d3a8:
    // 0x37d3a8: 0x24020102  addiu       $v0, $zero, 0x102
    ctx->pc = 0x37d3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    // 0x37d3ac: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x37d3acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x37d3b0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x37d3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x37d3b4: 0x24a5b9f0  addiu       $a1, $a1, -0x4610
    ctx->pc = 0x37d3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949360));
    // 0x37d3b8: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x37d3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x37d3bc: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x37D3BCu;
    SET_GPR_U32(ctx, 31, 0x37D3C4u);
    ctx->pc = 0x37D3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D3BCu;
    // 0x37d3c0: 0x34840003  ori         $a0, $a0, 0x3 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x37D3BCu, 0x37D3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D3C4u;
label_37d3c4:
    // 0x37d3c4: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x37d3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x37d3c8: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x37D3C8u;
    SET_GPR_U32(ctx, 31, 0x37D3D0u);
    ctx->pc = 0x37D3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D3C8u;
    // 0x37d3cc: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x37D3C8u, 0x37D3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D3D0u;
label_37d3d0:
    // 0x37d3d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37d3d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d3d4: 0x0  nop
    ctx->pc = 0x37d3d4u;
    // NOP
label_37d3d8:
    // 0x37d3d8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x37d3d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x37d3dc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x37d3dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37d3e0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x37d3e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37d3e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x37d3e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37d3e8: 0x3e00008  jr          $ra
    ctx->pc = 0x37D3E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D3E8u;
        // 0x37d3ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D3E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D3F0u;
    // 0x37d3f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x37d3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x37d3f4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x37d3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x37d3f8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x37d3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x37d3fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37d3fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d400: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x37d400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x37d404: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x37d404u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d408: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x37d408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x37d40c: 0x6200028  bltz        $s1, . + 4 + (0x28 << 2)
    ctx->pc = 0x37D40Cu;
    {
        const bool branch_taken_0x37d40c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x37D410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D40Cu;
        // 0x37d410: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d40c) {
            ctx->pc = 0x37D4B0u;
            goto label_37d4b0;
        }
    }
    ctx->pc = 0x37D414u;
    // 0x37d414: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x37d414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x37d418: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37d418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37d41c: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37D41Cu;
    {
        const bool branch_taken_0x37d41c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x37d41c) {
            ctx->pc = 0x37D420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37D41Cu;
            // 0x37d420: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37D438u;
            goto label_37d438;
        }
    }
    ctx->pc = 0x37D424u;
    // 0x37d424: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x37d424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37d428: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37D428u;
    {
        const bool branch_taken_0x37d428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x37d428) {
            ctx->pc = 0x37D42Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37D428u;
            // 0x37d42c: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37D440u;
            goto label_37d440;
        }
    }
    ctx->pc = 0x37D430u;
    // 0x37d430: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x37D430u;
    {
        const bool branch_taken_0x37d430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D430u;
        // 0x37d434: 0x24020102  addiu       $v0, $zero, 0x102 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d430) {
            ctx->pc = 0x37D448u;
            goto label_37d448;
        }
    }
    ctx->pc = 0x37D438u;
label_37d438:
    // 0x37d438: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x37D438u;
    {
        const bool branch_taken_0x37d438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D438u;
        // 0x37d43c: 0x2442fffe  addiu       $v0, $v0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d438) {
            ctx->pc = 0x37D468u;
            goto label_37d468;
        }
    }
    ctx->pc = 0x37D440u;
label_37d440:
    // 0x37d440: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x37D440u;
    {
        const bool branch_taken_0x37d440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D440u;
        // 0x37d444: 0x2442fffd  addiu       $v0, $v0, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d440) {
            ctx->pc = 0x37D468u;
            goto label_37d468;
        }
    }
    ctx->pc = 0x37D448u;
label_37d448:
    // 0x37d448: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x37d448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37d44c: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x37D44Cu;
    SET_GPR_U32(ctx, 31, 0x37D454u);
    ctx->pc = 0x37D450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D44Cu;
    // 0x37d450: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x37D44Cu, 0x37D454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D454u;
label_37d454:
    // 0x37d454: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x37d454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d458: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x37D458u;
    SET_GPR_U32(ctx, 31, 0x37D460u);
    ctx->pc = 0x37D45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D458u;
    // 0x37d45c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x37D458u, 0x37D460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D460u;
label_37d460:
    // 0x37d460: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37d460u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d464: 0x0  nop
    ctx->pc = 0x37d464u;
    // NOP
label_37d468:
    // 0x37d468: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x37d468u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x37d46c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x37D46Cu;
    {
        const bool branch_taken_0x37d46c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D46Cu;
        // 0x37d470: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d46c) {
            ctx->pc = 0x37D4B0u;
            goto label_37d4b0;
        }
    }
    ctx->pc = 0x37D474u;
    // 0x37d474: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x37d474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x37d478: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x37d478u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x37d47c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37d47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d480: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37d480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37d484: 0x6a430007  ldl         $v1, 0x7($s2)
    ctx->pc = 0x37d484u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x37d488: 0x6e430000  ldr         $v1, 0x0($s2)
    ctx->pc = 0x37d488u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x37d48c: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x37d48cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x37d490: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x37d490u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37d494: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x37d494u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37d498: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x37d498u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x37d49c: 0xc0debba  jal         func_37AEE8
    ctx->pc = 0x37D49Cu;
    SET_GPR_U32(ctx, 31, 0x37D4A4u);
    ctx->pc = 0x37D4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D49Cu;
    // 0x37d4a0: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37AEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37AEE8u, 0x37D49Cu, 0x37D4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D4A4u;
label_37d4a4:
    // 0x37d4a4: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x37d4a4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x37d4a8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x37D4A8u;
    {
        const bool branch_taken_0x37d4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D4A8u;
        // 0x37d4ac: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d4a8) {
            ctx->pc = 0x37D4E0u;
            goto label_37d4e0;
        }
    }
    ctx->pc = 0x37D4B0u;
label_37d4b0:
    // 0x37d4b0: 0x24020102  addiu       $v0, $zero, 0x102
    ctx->pc = 0x37d4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    // 0x37d4b4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x37d4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x37d4b8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x37d4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x37d4bc: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x37d4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x37d4c0: 0x24a5b9f0  addiu       $a1, $a1, -0x4610
    ctx->pc = 0x37d4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949360));
    // 0x37d4c4: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x37D4C4u;
    SET_GPR_U32(ctx, 31, 0x37D4CCu);
    ctx->pc = 0x37D4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D4C4u;
    // 0x37d4c8: 0x34840003  ori         $a0, $a0, 0x3 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x37D4C4u, 0x37D4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D4CCu;
label_37d4cc:
    // 0x37d4cc: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x37d4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x37d4d0: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x37D4D0u;
    SET_GPR_U32(ctx, 31, 0x37D4D8u);
    ctx->pc = 0x37D4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D4D0u;
    // 0x37d4d4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x37D4D0u, 0x37D4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D4D8u;
label_37d4d8:
    // 0x37d4d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37d4d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d4dc: 0x0  nop
    ctx->pc = 0x37d4dcu;
    // NOP
label_37d4e0:
    // 0x37d4e0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x37d4e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x37d4e4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x37d4e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37d4e8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x37d4e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37d4ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x37d4ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37d4f0: 0x3e00008  jr          $ra
    ctx->pc = 0x37D4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D4F0u;
        // 0x37d4f4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D4F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D4F8u;
    // 0x37d4f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x37d4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x37d4fc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x37d4fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d500: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x37d500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x37d504: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37d504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37d508: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x37d508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x37d50c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x37d50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37d510: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x37d510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x37d514: 0xc10493e  jal         func_4124F8
    ctx->pc = 0x37D514u;
    SET_GPR_U32(ctx, 31, 0x37D51Cu);
    ctx->pc = 0x37D518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D514u;
    // 0x37d518: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4124F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4124F8u, 0x37D514u, 0x37D51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D51Cu;
label_37d51c:
    // 0x37d51c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x37d51cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d520: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x37D520u;
    {
        const bool branch_taken_0x37d520 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D520u;
        // 0x37d524: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d520) {
            ctx->pc = 0x37D594u;
            goto label_37d594;
        }
    }
    ctx->pc = 0x37D528u;
    // 0x37d528: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x37d528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x37d52c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37d52cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d530: 0xc103322  jal         func_40CC88
    ctx->pc = 0x37D530u;
    SET_GPR_U32(ctx, 31, 0x37D538u);
    ctx->pc = 0x37D534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D530u;
    // 0x37d534: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x37D530u, 0x37D538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D538u;
label_37d538:
    // 0x37d538: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x37D538u;
    {
        const bool branch_taken_0x37d538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D538u;
        // 0x37d53c: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d538) {
            ctx->pc = 0x37D588u;
            goto label_37d588;
        }
    }
    ctx->pc = 0x37D540u;
    // 0x37d540: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x37d540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
    // 0x37d544: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x37d544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x37d548: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x37d548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37d54c: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x37d54cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
    // 0x37d550: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x37D550u;
    {
        const bool branch_taken_0x37d550 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D550u;
        // 0x37d554: 0x24020102  addiu       $v0, $zero, 0x102 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d550) {
            ctx->pc = 0x37D568u;
            goto label_37d568;
        }
    }
    ctx->pc = 0x37D558u;
    // 0x37d558: 0xc0df028  jal         func_37C0A0
    ctx->pc = 0x37D558u;
    SET_GPR_U32(ctx, 31, 0x37D560u);
    ctx->pc = 0x37D55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D558u;
    // 0x37d55c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37C0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37C0A0u, 0x37D558u, 0x37D560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D560u;
label_37d560:
    // 0x37d560: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x37D560u;
    {
        const bool branch_taken_0x37d560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D560u;
        // 0x37d564: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d560) {
            ctx->pc = 0x37D588u;
            goto label_37d588;
        }
    }
    ctx->pc = 0x37D568u;
label_37d568:
    // 0x37d568: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x37d568u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x37d56c: 0x34840004  ori         $a0, $a0, 0x4
    ctx->pc = 0x37d56cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x37d570: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x37D570u;
    SET_GPR_U32(ctx, 31, 0x37D578u);
    ctx->pc = 0x37D574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D570u;
    // 0x37d574: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x37D570u, 0x37D578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D578u;
label_37d578:
    // 0x37d578: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x37d578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d57c: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x37D57Cu;
    SET_GPR_U32(ctx, 31, 0x37D584u);
    ctx->pc = 0x37D580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D57Cu;
    // 0x37d580: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x37D57Cu, 0x37D584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D584u;
label_37d584:
    // 0x37d584: 0x0  nop
    ctx->pc = 0x37d584u;
    // NOP
label_37d588:
    // 0x37d588: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37d588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d58c: 0xc10496a  jal         func_4125A8
    ctx->pc = 0x37D58Cu;
    SET_GPR_U32(ctx, 31, 0x37D594u);
    ctx->pc = 0x37D590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D58Cu;
    // 0x37d590: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4125A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4125A8u, 0x37D58Cu, 0x37D594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D594u;
label_37d594:
    // 0x37d594: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x37d594u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d598: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x37d598u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37d59c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x37d59cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37d5a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x37d5a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37d5a4: 0x3e00008  jr          $ra
    ctx->pc = 0x37D5A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D5A4u;
        // 0x37d5a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D5A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D5ACu;
    // 0x37d5ac: 0x0  nop
    ctx->pc = 0x37d5acu;
    // NOP
    ctx->pc = 0x37d5b0u;
}

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

// Function: sub_00321350
// Address: 0x321350 - 0x321568
void sub_00321350_0x321350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321350_0x321350");
#endif

    switch (ctx->pc) {
        case 0x3213b0u: goto label_3213b0;
        case 0x321420u: goto label_321420;
        case 0x3214b0u: goto label_3214b0;
        case 0x3214f8u: goto label_3214f8;
        case 0x321508u: goto label_321508;
        default: break;
    }

    ctx->pc = 0x321350u;

    // 0x321350: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x321350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x321354: 0x1840001d  blez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x321354u;
    {
        const bool branch_taken_0x321354 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x321358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321354u;
        // 0x321358: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321354) {
            ctx->pc = 0x3213CCu;
            goto label_3213cc;
        }
    }
    ctx->pc = 0x32135Cu;
    // 0x32135c: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x32135cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x321360: 0x51023  negu        $v0, $a1
    ctx->pc = 0x321360u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x321364: 0x30460003  andi        $a2, $v0, 0x3
    ctx->pc = 0x321364u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x321368: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x321368u;
    {
        const bool branch_taken_0x321368 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x32136Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321368u;
        // 0x32136c: 0x24e3000c  addiu       $v1, $a3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321368) {
            ctx->pc = 0x3213ACu;
            goto label_3213ac;
        }
    }
    ctx->pc = 0x321370u;
    // 0x321370: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x321370u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x321374: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x321374u;
    {
        const bool branch_taken_0x321374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x321378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321374u;
        // 0x321378: 0x28c20002  slti        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x321374) {
            ctx->pc = 0x32139Cu;
            goto label_32139c;
        }
    }
    ctx->pc = 0x32137Cu;
    // 0x32137c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x32137Cu;
    {
        const bool branch_taken_0x32137c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32137c) {
            ctx->pc = 0x321380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32137Cu;
            // 0x321380: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x321394u;
            goto label_321394;
        }
    }
    ctx->pc = 0x321384u;
    // 0x321384: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x321384u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x321388: 0x24e3001c  addiu       $v1, $a3, 0x1C
    ctx->pc = 0x321388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 28));
    // 0x32138c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x32138cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x321390: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x321390u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_321394:
    // 0x321394: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x321394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x321398: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x321398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_32139c:
    // 0x32139c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x32139cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x3213a0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3213a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3213a4: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3213A4u;
    {
        const bool branch_taken_0x3213a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3213A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3213A4u;
        // 0x3213a8: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3213a4) {
            ctx->pc = 0x3213CCu;
            goto label_3213cc;
        }
    }
    ctx->pc = 0x3213ACu;
label_3213ac:
    // 0x3213ac: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3213acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3213b0:
    // 0x3213b0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3213b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3213b4: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x3213b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x3213b8: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x3213b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x3213bc: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x3213bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x3213c0: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x3213c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x3213c4: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3213C4u;
    {
        const bool branch_taken_0x3213c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3213C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3213C4u;
        // 0x3213c8: 0x24420040  addiu       $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3213c4) {
            ctx->pc = 0x3213B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3213b0;
        }
    }
    ctx->pc = 0x3213CCu;
label_3213cc:
    // 0x3213cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3213CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3213D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3213CCu;
        // 0x3213d0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3213CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3213D4u;
    // 0x3213d4: 0x0  nop
    ctx->pc = 0x3213d4u;
    // NOP
    // 0x3213d8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3213d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3213dc: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x3213dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3213e0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3213e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3213e4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3213e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3213e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3213e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3213ec: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3213ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3213f0: 0x3c120032  lui         $s2, 0x32
    ctx->pc = 0x3213f0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)50 << 16));
    // 0x3213f4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3213f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3213f8: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x3213f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3213fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3213fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x321400: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x321400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x321404: 0x8e300014  lw          $s0, 0x14($s1)
    ctx->pc = 0x321404u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x321408: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x321408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x32140c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x32140cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x321410: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x321410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321414: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x321414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x321418: 0xc0c85a4  jal         func_321690
    ctx->pc = 0x321418u;
    SET_GPR_U32(ctx, 31, 0x321420u);
    ctx->pc = 0x32141Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321418u;
    // 0x32141c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321690u, 0x321418u, 0x321420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321420u;
label_321420:
    // 0x321420: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x321420u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321424: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x321424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x321428: 0x14620031  bne         $v1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x321428u;
    {
        const bool branch_taken_0x321428 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x321428) {
            ctx->pc = 0x3214F0u;
            goto label_3214f0;
        }
    }
    ctx->pc = 0x321430u;
    // 0x321430: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x321430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x321434: 0x1840002e  blez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x321434u;
    {
        const bool branch_taken_0x321434 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x321438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321434u;
        // 0x321438: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321434) {
            ctx->pc = 0x3214F0u;
            goto label_3214f0;
        }
    }
    ctx->pc = 0x32143Cu;
    // 0x32143c: 0x8e270010  lw          $a3, 0x10($s1)
    ctx->pc = 0x32143cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x321440: 0x51023  negu        $v0, $a1
    ctx->pc = 0x321440u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x321444: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x321444u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321448: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x321448u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x32144c: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x32144Cu;
    {
        const bool branch_taken_0x32144c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x321450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32144Cu;
        // 0x321450: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32144c) {
            ctx->pc = 0x3214A8u;
            goto label_3214a8;
        }
    }
    ctx->pc = 0x321454u;
    // 0x321454: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x321454u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x321458: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x321458u;
    {
        const bool branch_taken_0x321458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32145Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321458u;
        // 0x32145c: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x321458) {
            ctx->pc = 0x321490u;
            goto label_321490;
        }
    }
    ctx->pc = 0x321460u;
    // 0x321460: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x321460u;
    {
        const bool branch_taken_0x321460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x321460) {
            ctx->pc = 0x321464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x321460u;
            // 0x321464: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x321480u;
            goto label_321480;
        }
    }
    ctx->pc = 0x321468u;
    // 0x321468: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x321468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x32146c: 0x50460001  beql        $v0, $a2, . + 4 + (0x1 << 2)
    ctx->pc = 0x32146Cu;
    {
        const bool branch_taken_0x32146c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x32146c) {
            ctx->pc = 0x321470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32146Cu;
            // 0x321470: 0xacf0000c  sw          $s0, 0xC($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x321474u;
            goto label_321474;
        }
    }
    ctx->pc = 0x321474u;
label_321474:
    // 0x321474: 0x24e30010  addiu       $v1, $a3, 0x10
    ctx->pc = 0x321474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x321478: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x321478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x32147c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x32147cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_321480:
    // 0x321480: 0x50460001  beql        $v0, $a2, . + 4 + (0x1 << 2)
    ctx->pc = 0x321480u;
    {
        const bool branch_taken_0x321480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x321480) {
            ctx->pc = 0x321484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x321480u;
            // 0x321484: 0xac70000c  sw          $s0, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x321488u;
            goto label_321488;
        }
    }
    ctx->pc = 0x321488u;
label_321488:
    // 0x321488: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x321488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x32148c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x32148cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_321490:
    // 0x321490: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x321490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x321494: 0x50460001  beql        $v0, $a2, . + 4 + (0x1 << 2)
    ctx->pc = 0x321494u;
    {
        const bool branch_taken_0x321494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x321494) {
            ctx->pc = 0x321498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x321494u;
            // 0x321498: 0xac70000c  sw          $s0, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32149Cu;
            goto label_32149c;
        }
    }
    ctx->pc = 0x32149Cu;
label_32149c:
    // 0x32149c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x32149cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3214a0: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x3214A0u;
    {
        const bool branch_taken_0x3214a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3214A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3214A0u;
        // 0x3214a4: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3214a0) {
            ctx->pc = 0x3214F0u;
            goto label_3214f0;
        }
    }
    ctx->pc = 0x3214A8u;
label_3214a8:
    // 0x3214a8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3214a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3214ac: 0x0  nop
    ctx->pc = 0x3214acu;
    // NOP
label_3214b0:
    // 0x3214b0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3214b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3214b4: 0x50460001  beql        $v0, $a2, . + 4 + (0x1 << 2)
    ctx->pc = 0x3214B4u;
    {
        const bool branch_taken_0x3214b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x3214b4) {
            ctx->pc = 0x3214B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3214B4u;
            // 0x3214b8: 0xac70000c  sw          $s0, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3214BCu;
            goto label_3214bc;
        }
    }
    ctx->pc = 0x3214BCu;
label_3214bc:
    // 0x3214bc: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x3214bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3214c0: 0x50460001  beql        $v0, $a2, . + 4 + (0x1 << 2)
    ctx->pc = 0x3214C0u;
    {
        const bool branch_taken_0x3214c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x3214c0) {
            ctx->pc = 0x3214C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3214C0u;
            // 0x3214c4: 0xac70001c  sw          $s0, 0x1C($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3214C8u;
            goto label_3214c8;
        }
    }
    ctx->pc = 0x3214C8u;
label_3214c8:
    // 0x3214c8: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x3214c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x3214cc: 0x50460001  beql        $v0, $a2, . + 4 + (0x1 << 2)
    ctx->pc = 0x3214CCu;
    {
        const bool branch_taken_0x3214cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x3214cc) {
            ctx->pc = 0x3214D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3214CCu;
            // 0x3214d0: 0xac70002c  sw          $s0, 0x2C($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3214D4u;
            goto label_3214d4;
        }
    }
    ctx->pc = 0x3214D4u;
label_3214d4:
    // 0x3214d4: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x3214d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x3214d8: 0x50460001  beql        $v0, $a2, . + 4 + (0x1 << 2)
    ctx->pc = 0x3214D8u;
    {
        const bool branch_taken_0x3214d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x3214d8) {
            ctx->pc = 0x3214DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3214D8u;
            // 0x3214dc: 0xac70003c  sw          $s0, 0x3C($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3214E0u;
            goto label_3214e0;
        }
    }
    ctx->pc = 0x3214E0u;
label_3214e0:
    // 0x3214e0: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x3214e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x3214e4: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x3214e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x3214e8: 0x14a0fff1  bnez        $a1, . + 4 + (-0xF << 2)
    ctx->pc = 0x3214E8u;
    {
        const bool branch_taken_0x3214e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3214ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3214E8u;
        // 0x3214ec: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3214e8) {
            ctx->pc = 0x3214B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3214b0;
        }
    }
    ctx->pc = 0x3214F0u;
label_3214f0:
    // 0x3214f0: 0xc106794  jal         func_419E50
    ctx->pc = 0x3214F0u;
    SET_GPR_U32(ctx, 31, 0x3214F8u);
    ctx->pc = 0x3214F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3214F0u;
    // 0x3214f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E50u, 0x3214F0u, 0x3214F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3214F8u;
label_3214f8:
    // 0x3214f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3214f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3214fc: 0x26451740  addiu       $a1, $s2, 0x1740
    ctx->pc = 0x3214fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 5952));
    // 0x321500: 0xc1066c2  jal         func_419B08
    ctx->pc = 0x321500u;
    SET_GPR_U32(ctx, 31, 0x321508u);
    ctx->pc = 0x321504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321500u;
    // 0x321504: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419B08u, 0x321500u, 0x321508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321508u;
label_321508:
    // 0x321508: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x321508u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32150c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x32150cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x321510: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x321510u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x321514: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x321514u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x321518: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x321518u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32151c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32151cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x321520: 0x3e00008  jr          $ra
    ctx->pc = 0x321520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321520u;
        // 0x321524: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321528u;
    // 0x321528: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x321528u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32152c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x32152cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x321530: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x321530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x321534: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x321534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x321538: 0x3e00008  jr          $ra
    ctx->pc = 0x321538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32153Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321538u;
        // 0x32153c: 0xaca0000c  sw          $zero, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321540u;
    // 0x321540: 0x8f82bce0  lw          $v0, -0x4320($gp)
    ctx->pc = 0x321540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950112)));
    // 0x321544: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x321544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x321548: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x321548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x32154c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x32154Cu;
    {
        const bool branch_taken_0x32154c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32154c) {
            ctx->pc = 0x321550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32154Cu;
            // 0x321550: 0xac400014  sw          $zero, 0x14($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x321554u;
            goto label_321554;
        }
    }
    ctx->pc = 0x321554u;
label_321554:
    // 0x321554: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x321554u;
    {
        const bool branch_taken_0x321554 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x321558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321554u;
        // 0x321558: 0xac650004  sw          $a1, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321554) {
            ctx->pc = 0x321560u;
            goto label_321560;
        }
    }
    ctx->pc = 0x32155Cu;
    // 0x32155c: 0xaca40014  sw          $a0, 0x14($a1)
    ctx->pc = 0x32155cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 4));
label_321560:
    // 0x321560: 0x3e00008  jr          $ra
    ctx->pc = 0x321560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321560u;
        // 0x321564: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321568u;
}

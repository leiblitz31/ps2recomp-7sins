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

// Function: sub_00388368
// Address: 0x388368 - 0x3884a0
void sub_00388368_0x388368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00388368_0x388368");
#endif

    switch (ctx->pc) {
        case 0x388368u: goto label_388368;
        case 0x38836cu: goto label_38836c;
        case 0x388370u: goto label_388370;
        case 0x388374u: goto label_388374;
        case 0x388378u: goto label_388378;
        case 0x38837cu: goto label_38837c;
        case 0x388380u: goto label_388380;
        case 0x388384u: goto label_388384;
        case 0x388388u: goto label_388388;
        case 0x38838cu: goto label_38838c;
        case 0x388390u: goto label_388390;
        case 0x388394u: goto label_388394;
        case 0x388398u: goto label_388398;
        case 0x38839cu: goto label_38839c;
        case 0x3883a0u: goto label_3883a0;
        case 0x3883a4u: goto label_3883a4;
        case 0x3883a8u: goto label_3883a8;
        case 0x3883acu: goto label_3883ac;
        case 0x3883b0u: goto label_3883b0;
        case 0x3883b4u: goto label_3883b4;
        case 0x3883b8u: goto label_3883b8;
        case 0x3883bcu: goto label_3883bc;
        case 0x3883c0u: goto label_3883c0;
        case 0x3883c4u: goto label_3883c4;
        case 0x3883c8u: goto label_3883c8;
        case 0x3883ccu: goto label_3883cc;
        case 0x3883d0u: goto label_3883d0;
        case 0x3883d4u: goto label_3883d4;
        case 0x3883d8u: goto label_3883d8;
        case 0x3883dcu: goto label_3883dc;
        case 0x3883e0u: goto label_3883e0;
        case 0x3883e4u: goto label_3883e4;
        case 0x3883e8u: goto label_3883e8;
        case 0x3883ecu: goto label_3883ec;
        case 0x3883f0u: goto label_3883f0;
        case 0x3883f4u: goto label_3883f4;
        case 0x3883f8u: goto label_3883f8;
        case 0x3883fcu: goto label_3883fc;
        case 0x388400u: goto label_388400;
        case 0x388404u: goto label_388404;
        case 0x388408u: goto label_388408;
        case 0x38840cu: goto label_38840c;
        case 0x388410u: goto label_388410;
        case 0x388414u: goto label_388414;
        case 0x388418u: goto label_388418;
        case 0x38841cu: goto label_38841c;
        case 0x388420u: goto label_388420;
        case 0x388424u: goto label_388424;
        case 0x388428u: goto label_388428;
        case 0x38842cu: goto label_38842c;
        case 0x388430u: goto label_388430;
        case 0x388434u: goto label_388434;
        case 0x388438u: goto label_388438;
        case 0x38843cu: goto label_38843c;
        case 0x388440u: goto label_388440;
        case 0x388444u: goto label_388444;
        case 0x388448u: goto label_388448;
        case 0x38844cu: goto label_38844c;
        case 0x388450u: goto label_388450;
        case 0x388454u: goto label_388454;
        case 0x388458u: goto label_388458;
        case 0x38845cu: goto label_38845c;
        case 0x388460u: goto label_388460;
        case 0x388464u: goto label_388464;
        case 0x388468u: goto label_388468;
        case 0x38846cu: goto label_38846c;
        case 0x388470u: goto label_388470;
        case 0x388474u: goto label_388474;
        case 0x388478u: goto label_388478;
        case 0x38847cu: goto label_38847c;
        case 0x388480u: goto label_388480;
        case 0x388484u: goto label_388484;
        case 0x388488u: goto label_388488;
        case 0x38848cu: goto label_38848c;
        case 0x388490u: goto label_388490;
        case 0x388494u: goto label_388494;
        case 0x388498u: goto label_388498;
        case 0x38849cu: goto label_38849c;
        default: break;
    }

    ctx->pc = 0x388368u;

label_388368:
    // 0x388368: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x388368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_38836c:
    // 0x38836c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x38836cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_388370:
    // 0x388370: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x388370u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_388374:
    // 0x388374: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x388374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_388378:
    // 0x388378: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x388378u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_38837c:
    // 0x38837c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x38837cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_388380:
    // 0x388380: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x388380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_388384:
    // 0x388384: 0x2484adb8  addiu       $a0, $a0, -0x5248
    ctx->pc = 0x388384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946232));
label_388388:
    // 0x388388: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x388388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_38838c:
    // 0x38838c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x38838cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_388390:
    // 0x388390: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x388390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_388394:
    // 0x388394: 0xc104ca6  jal         func_413298
label_388398:
    if (ctx->pc == 0x388398u) {
        ctx->pc = 0x388398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388394u;
        // 0x388398: 0x26510008  addiu       $s1, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38839Cu;
        goto label_38839c;
    }
    ctx->pc = 0x388394u;
    SET_GPR_U32(ctx, 31, 0x38839Cu);
    ctx->pc = 0x388398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388394u;
    // 0x388398: 0x26510008  addiu       $s1, $s2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413298u, 0x388394u, 0x38839Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38839Cu;
label_38839c:
    // 0x38839c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x38839cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_3883a0:
    // 0x3883a0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x3883a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3883a4:
    // 0x3883a4: 0x10510009  beq         $v0, $s1, . + 4 + (0x9 << 2)
label_3883a8:
    if (ctx->pc == 0x3883A8u) {
        ctx->pc = 0x3883A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3883A4u;
        // 0x3883a8: 0x2473aa38  addiu       $s3, $v1, -0x55C8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3883ACu;
        goto label_3883ac;
    }
    ctx->pc = 0x3883A4u;
    {
        const bool branch_taken_0x3883a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x3883A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3883A4u;
        // 0x3883a8: 0x2473aa38  addiu       $s3, $v1, -0x55C8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3883a4) {
            ctx->pc = 0x3883CCu;
            goto label_3883cc;
        }
    }
    ctx->pc = 0x3883ACu;
label_3883ac:
    // 0x3883ac: 0x2444ffc0  addiu       $a0, $v0, -0x40
    ctx->pc = 0x3883acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
label_3883b0:
    // 0x3883b0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x3883b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3883b4:
    // 0x3883b4: 0x260f809  jalr        $s3
label_3883b8:
    if (ctx->pc == 0x3883B8u) {
        ctx->pc = 0x3883B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3883B4u;
        // 0x3883b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3883BCu;
        goto label_3883bc;
    }
    ctx->pc = 0x3883B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x3883BCu);
        ctx->pc = 0x3883B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3883B4u;
        // 0x3883b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3883B4u, 0x3883BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3883BCu;
label_3883bc:
    // 0x3883bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3883c0:
    if (ctx->pc == 0x3883C0u) {
        ctx->pc = 0x3883C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3883BCu;
        // 0x3883c0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3883C4u;
        goto label_3883c4;
    }
    ctx->pc = 0x3883BCu;
    {
        const bool branch_taken_0x3883bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3883C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3883BCu;
        // 0x3883c0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3883bc) {
            ctx->pc = 0x3883CCu;
            goto label_3883cc;
        }
    }
    ctx->pc = 0x3883C4u;
label_3883c4:
    // 0x3883c4: 0x1451fffa  bne         $v0, $s1, . + 4 + (-0x6 << 2)
label_3883c8:
    if (ctx->pc == 0x3883C8u) {
        ctx->pc = 0x3883C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3883C4u;
        // 0x3883c8: 0x2444ffc0  addiu       $a0, $v0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3883CCu;
        goto label_3883cc;
    }
    ctx->pc = 0x3883C4u;
    {
        const bool branch_taken_0x3883c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x3883C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3883C4u;
        // 0x3883c8: 0x2444ffc0  addiu       $a0, $v0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3883c4) {
            ctx->pc = 0x3883B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3883b0;
        }
    }
    ctx->pc = 0x3883CCu;
label_3883cc:
    // 0x3883cc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x3883ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_3883d0:
    // 0x3883d0: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x3883d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3883d4:
    // 0x3883d4: 0x2454a7e0  addiu       $s4, $v0, -0x5820
    ctx->pc = 0x3883d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944736));
label_3883d8:
    // 0x3883d8: 0x26510010  addiu       $s1, $s2, 0x10
    ctx->pc = 0x3883d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_3883dc:
    // 0x3883dc: 0x1071000b  beq         $v1, $s1, . + 4 + (0xB << 2)
label_3883e0:
    if (ctx->pc == 0x3883E0u) {
        ctx->pc = 0x3883E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3883DCu;
        // 0x3883e0: 0x26530018  addiu       $s3, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3883E4u;
        goto label_3883e4;
    }
    ctx->pc = 0x3883DCu;
    {
        const bool branch_taken_0x3883dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x3883E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3883DCu;
        // 0x3883e0: 0x26530018  addiu       $s3, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3883dc) {
            ctx->pc = 0x38840Cu;
            goto label_38840c;
        }
    }
    ctx->pc = 0x3883E4u;
label_3883e4:
    // 0x3883e4: 0x8f84a98c  lw          $a0, -0x5674($gp)
    ctx->pc = 0x3883e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945164)));
label_3883e8:
    // 0x3883e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3883e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3883ec:
    // 0x3883ec: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x3883ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3883f0:
    // 0x3883f0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3883f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_3883f4:
    // 0x3883f4: 0x280f809  jalr        $s4
label_3883f8:
    if (ctx->pc == 0x3883F8u) {
        ctx->pc = 0x3883F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3883F4u;
        // 0x3883f8: 0x642023  subu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3883FCu;
        goto label_3883fc;
    }
    ctx->pc = 0x3883F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x3883FCu);
        ctx->pc = 0x3883F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3883F4u;
        // 0x3883f8: 0x642023  subu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3883F4u, 0x3883FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3883FCu;
label_3883fc:
    // 0x3883fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_388400:
    if (ctx->pc == 0x388400u) {
        ctx->pc = 0x388400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3883FCu;
        // 0x388400: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388404u;
        goto label_388404;
    }
    ctx->pc = 0x3883FCu;
    {
        const bool branch_taken_0x3883fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x388400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3883FCu;
        // 0x388400: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3883fc) {
            ctx->pc = 0x38840Cu;
            goto label_38840c;
        }
    }
    ctx->pc = 0x388404u;
label_388404:
    // 0x388404: 0x5471fff8  bnel        $v1, $s1, . + 4 + (-0x8 << 2)
label_388408:
    if (ctx->pc == 0x388408u) {
        ctx->pc = 0x388408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388404u;
        // 0x388408: 0x8f84a98c  lw          $a0, -0x5674($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38840Cu;
        goto label_38840c;
    }
    ctx->pc = 0x388404u;
    {
        const bool branch_taken_0x388404 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x388404) {
            ctx->pc = 0x388408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x388404u;
            // 0x388408: 0x8f84a98c  lw          $a0, -0x5674($gp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3883E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3883e8;
        }
    }
    ctx->pc = 0x38840Cu;
label_38840c:
    // 0x38840c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x38840cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_388410:
    // 0x388410: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x388410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_388414:
    // 0x388414: 0x1073000b  beq         $v1, $s3, . + 4 + (0xB << 2)
label_388418:
    if (ctx->pc == 0x388418u) {
        ctx->pc = 0x388418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388414u;
        // 0x388418: 0x2451a820  addiu       $s1, $v0, -0x57E0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38841Cu;
        goto label_38841c;
    }
    ctx->pc = 0x388414u;
    {
        const bool branch_taken_0x388414 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x388418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388414u;
        // 0x388418: 0x2451a820  addiu       $s1, $v0, -0x57E0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388414) {
            ctx->pc = 0x388444u;
            goto label_388444;
        }
    }
    ctx->pc = 0x38841Cu;
label_38841c:
    // 0x38841c: 0x8f84a988  lw          $a0, -0x5678($gp)
    ctx->pc = 0x38841cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945160)));
label_388420:
    // 0x388420: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x388420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_388424:
    // 0x388424: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x388424u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_388428:
    // 0x388428: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x388428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_38842c:
    // 0x38842c: 0x220f809  jalr        $s1
label_388430:
    if (ctx->pc == 0x388430u) {
        ctx->pc = 0x388430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38842Cu;
        // 0x388430: 0x642023  subu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388434u;
        goto label_388434;
    }
    ctx->pc = 0x38842Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 17);
        SET_GPR_U32(ctx, 31, 0x388434u);
        ctx->pc = 0x388430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38842Cu;
        // 0x388430: 0x642023  subu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38842Cu, 0x388434u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x388434u;
label_388434:
    // 0x388434: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_388438:
    if (ctx->pc == 0x388438u) {
        ctx->pc = 0x388438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388434u;
        // 0x388438: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38843Cu;
        goto label_38843c;
    }
    ctx->pc = 0x388434u;
    {
        const bool branch_taken_0x388434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x388438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388434u;
        // 0x388438: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388434) {
            ctx->pc = 0x388444u;
            goto label_388444;
        }
    }
    ctx->pc = 0x38843Cu;
label_38843c:
    // 0x38843c: 0x1473fff8  bne         $v1, $s3, . + 4 + (-0x8 << 2)
label_388440:
    if (ctx->pc == 0x388440u) {
        ctx->pc = 0x388440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38843Cu;
        // 0x388440: 0x8f84a988  lw          $a0, -0x5678($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388444u;
        goto label_388444;
    }
    ctx->pc = 0x38843Cu;
    {
        const bool branch_taken_0x38843c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x388440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38843Cu;
        // 0x388440: 0x8f84a988  lw          $a0, -0x5678($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38843c) {
            ctx->pc = 0x388420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_388420;
        }
    }
    ctx->pc = 0x388444u;
label_388444:
    // 0x388444: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x388444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_388448:
    // 0x388448: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_38844c:
    if (ctx->pc == 0x38844Cu) {
        ctx->pc = 0x38844Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388448u;
        // 0x38844c: 0x8f83bd20  lw          $v1, -0x42E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388450u;
        goto label_388450;
    }
    ctx->pc = 0x388448u;
    {
        const bool branch_taken_0x388448 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x38844Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388448u;
        // 0x38844c: 0x8f83bd20  lw          $v1, -0x42E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388448) {
            ctx->pc = 0x38845Cu;
            goto label_38845c;
        }
    }
    ctx->pc = 0x388450u;
label_388450:
    // 0x388450: 0xc106698  jal         func_419A60
label_388454:
    if (ctx->pc == 0x388454u) {
        ctx->pc = 0x388458u;
        goto label_388458;
    }
    ctx->pc = 0x388450u;
    SET_GPR_U32(ctx, 31, 0x388458u);
    ctx->pc = 0x419A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419A60u, 0x388450u, 0x388458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388458u;
label_388458:
    // 0x388458: 0x8f83bd20  lw          $v1, -0x42E0($gp)
    ctx->pc = 0x388458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950176)));
label_38845c:
    // 0x38845c: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x38845cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_388460:
    // 0x388460: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x388460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
label_388464:
    // 0x388464: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x388464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_388468:
    // 0x388468: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x388468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_38846c:
    // 0x38846c: 0x8c82011c  lw          $v0, 0x11C($a0)
    ctx->pc = 0x38846cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 284)));
label_388470:
    // 0x388470: 0x40f809  jalr        $v0
label_388474:
    if (ctx->pc == 0x388474u) {
        ctx->pc = 0x388474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388470u;
        // 0x388474: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388478u;
        goto label_388478;
    }
    ctx->pc = 0x388470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x388478u);
        ctx->pc = 0x388474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388470u;
        // 0x388474: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x388470u, 0x388478u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x388478u;
label_388478:
    // 0x388478: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x388478u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_38847c:
    // 0x38847c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38847cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_388480:
    // 0x388480: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x388480u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_388484:
    // 0x388484: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x388484u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_388488:
    // 0x388488: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x388488u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38848c:
    // 0x38848c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x38848cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_388490:
    // 0x388490: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x388490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_388494:
    // 0x388494: 0x3e00008  jr          $ra
label_388498:
    if (ctx->pc == 0x388498u) {
        ctx->pc = 0x388498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388494u;
        // 0x388498: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38849Cu;
        goto label_38849c;
    }
    ctx->pc = 0x388494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x388498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388494u;
        // 0x388498: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x388494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38849Cu;
label_38849c:
    // 0x38849c: 0x0  nop
    ctx->pc = 0x38849cu;
    // NOP
    ctx->pc = 0x3884a0u;
}

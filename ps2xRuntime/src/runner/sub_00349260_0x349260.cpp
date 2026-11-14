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

// Function: sub_00349260
// Address: 0x349260 - 0x3493b8
void sub_00349260_0x349260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00349260_0x349260");
#endif

    switch (ctx->pc) {
        case 0x349260u: goto label_349260;
        case 0x349264u: goto label_349264;
        case 0x349268u: goto label_349268;
        case 0x34926cu: goto label_34926c;
        case 0x349270u: goto label_349270;
        case 0x349274u: goto label_349274;
        case 0x349278u: goto label_349278;
        case 0x34927cu: goto label_34927c;
        case 0x349280u: goto label_349280;
        case 0x349284u: goto label_349284;
        case 0x349288u: goto label_349288;
        case 0x34928cu: goto label_34928c;
        case 0x349290u: goto label_349290;
        case 0x349294u: goto label_349294;
        case 0x349298u: goto label_349298;
        case 0x34929cu: goto label_34929c;
        case 0x3492a0u: goto label_3492a0;
        case 0x3492a4u: goto label_3492a4;
        case 0x3492a8u: goto label_3492a8;
        case 0x3492acu: goto label_3492ac;
        case 0x3492b0u: goto label_3492b0;
        case 0x3492b4u: goto label_3492b4;
        case 0x3492b8u: goto label_3492b8;
        case 0x3492bcu: goto label_3492bc;
        case 0x3492c0u: goto label_3492c0;
        case 0x3492c4u: goto label_3492c4;
        case 0x3492c8u: goto label_3492c8;
        case 0x3492ccu: goto label_3492cc;
        case 0x3492d0u: goto label_3492d0;
        case 0x3492d4u: goto label_3492d4;
        case 0x3492d8u: goto label_3492d8;
        case 0x3492dcu: goto label_3492dc;
        case 0x3492e0u: goto label_3492e0;
        case 0x3492e4u: goto label_3492e4;
        case 0x3492e8u: goto label_3492e8;
        case 0x3492ecu: goto label_3492ec;
        case 0x3492f0u: goto label_3492f0;
        case 0x3492f4u: goto label_3492f4;
        case 0x3492f8u: goto label_3492f8;
        case 0x3492fcu: goto label_3492fc;
        case 0x349300u: goto label_349300;
        case 0x349304u: goto label_349304;
        case 0x349308u: goto label_349308;
        case 0x34930cu: goto label_34930c;
        case 0x349310u: goto label_349310;
        case 0x349314u: goto label_349314;
        case 0x349318u: goto label_349318;
        case 0x34931cu: goto label_34931c;
        case 0x349320u: goto label_349320;
        case 0x349324u: goto label_349324;
        case 0x349328u: goto label_349328;
        case 0x34932cu: goto label_34932c;
        case 0x349330u: goto label_349330;
        case 0x349334u: goto label_349334;
        case 0x349338u: goto label_349338;
        case 0x34933cu: goto label_34933c;
        case 0x349340u: goto label_349340;
        case 0x349344u: goto label_349344;
        case 0x349348u: goto label_349348;
        case 0x34934cu: goto label_34934c;
        case 0x349350u: goto label_349350;
        case 0x349354u: goto label_349354;
        case 0x349358u: goto label_349358;
        case 0x34935cu: goto label_34935c;
        case 0x349360u: goto label_349360;
        case 0x349364u: goto label_349364;
        case 0x349368u: goto label_349368;
        case 0x34936cu: goto label_34936c;
        case 0x349370u: goto label_349370;
        case 0x349374u: goto label_349374;
        case 0x349378u: goto label_349378;
        case 0x34937cu: goto label_34937c;
        case 0x349380u: goto label_349380;
        case 0x349384u: goto label_349384;
        case 0x349388u: goto label_349388;
        case 0x34938cu: goto label_34938c;
        case 0x349390u: goto label_349390;
        case 0x349394u: goto label_349394;
        case 0x349398u: goto label_349398;
        case 0x34939cu: goto label_34939c;
        case 0x3493a0u: goto label_3493a0;
        case 0x3493a4u: goto label_3493a4;
        case 0x3493a8u: goto label_3493a8;
        case 0x3493acu: goto label_3493ac;
        case 0x3493b0u: goto label_3493b0;
        case 0x3493b4u: goto label_3493b4;
        default: break;
    }

    ctx->pc = 0x349260u;

label_349260:
    // 0x349260: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x349260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_349264:
    // 0x349264: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x349264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_349268:
    // 0x349268: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x349268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_34926c:
    // 0x34926c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x34926cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_349270:
    // 0x349270: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x349270u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_349274:
    // 0x349274: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x349274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_349278:
    // 0x349278: 0x2442c2c8  addiu       $v0, $v0, -0x3D38
    ctx->pc = 0x349278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951624));
label_34927c:
    // 0x34927c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x34927cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_349280:
    // 0x349280: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x349280u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_349284:
    // 0x349284: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x349284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_349288:
    // 0x349288: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x349288u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_34928c:
    // 0x34928c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34928cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_349290:
    // 0x349290: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x349290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_349294:
    // 0x349294: 0x8c500064  lw          $s0, 0x64($v0)
    ctx->pc = 0x349294u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_349298:
    // 0x349298: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_34929c:
    if (ctx->pc == 0x34929Cu) {
        ctx->pc = 0x34929Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349298u;
        // 0x34929c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3492A0u;
        goto label_3492a0;
    }
    ctx->pc = 0x349298u;
    {
        const bool branch_taken_0x349298 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x34929Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349298u;
        // 0x34929c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349298) {
            ctx->pc = 0x3492CCu;
            goto label_3492cc;
        }
    }
    ctx->pc = 0x3492A0u;
label_3492a0:
    // 0x3492a0: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x3492a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3492a4:
    // 0x3492a4: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_3492a8:
    if (ctx->pc == 0x3492A8u) {
        ctx->pc = 0x3492A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3492A4u;
        // 0x3492a8: 0x2682c2c8  addiu       $v0, $s4, -0x3D38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294951624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3492ACu;
        goto label_3492ac;
    }
    ctx->pc = 0x3492A4u;
    {
        const bool branch_taken_0x3492a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3492A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3492A4u;
        // 0x3492a8: 0x2682c2c8  addiu       $v0, $s4, -0x3D38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294951624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3492a4) {
            ctx->pc = 0x3492C8u;
            goto label_3492c8;
        }
    }
    ctx->pc = 0x3492ACu;
label_3492ac:
    // 0x3492ac: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x3492acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3492b0:
    // 0x3492b0: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x3492b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3492b4:
    // 0x3492b4: 0xc0d0ce8  jal         func_3433A0
label_3492b8:
    if (ctx->pc == 0x3492B8u) {
        ctx->pc = 0x3492B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3492B4u;
        // 0x3492b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3492BCu;
        goto label_3492bc;
    }
    ctx->pc = 0x3492B4u;
    SET_GPR_U32(ctx, 31, 0x3492BCu);
    ctx->pc = 0x3492B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3492B4u;
    // 0x3492b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3433A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3433A0u, 0x3492B4u, 0x3492BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3492BCu;
label_3492bc:
    // 0x3492bc: 0x1630fffc  bne         $s1, $s0, . + 4 + (-0x4 << 2)
label_3492c0:
    if (ctx->pc == 0x3492C0u) {
        ctx->pc = 0x3492C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3492BCu;
        // 0x3492c0: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3492C4u;
        goto label_3492c4;
    }
    ctx->pc = 0x3492BCu;
    {
        const bool branch_taken_0x3492bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x3492C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3492BCu;
        // 0x3492c0: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3492bc) {
            ctx->pc = 0x3492B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3492b0;
        }
    }
    ctx->pc = 0x3492C4u;
label_3492c4:
    // 0x3492c4: 0x2682c2c8  addiu       $v0, $s4, -0x3D38
    ctx->pc = 0x3492c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294951624));
label_3492c8:
    // 0x3492c8: 0xac400064  sw          $zero, 0x64($v0)
    ctx->pc = 0x3492c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 0));
label_3492cc:
    // 0x3492cc: 0x2682c2c8  addiu       $v0, $s4, -0x3D38
    ctx->pc = 0x3492ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294951624));
label_3492d0:
    // 0x3492d0: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x3492d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_3492d4:
    // 0x3492d4: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_3492d8:
    if (ctx->pc == 0x3492D8u) {
        ctx->pc = 0x3492D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3492D4u;
        // 0x3492d8: 0x2682c2c8  addiu       $v0, $s4, -0x3D38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294951624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3492DCu;
        goto label_3492dc;
    }
    ctx->pc = 0x3492D4u;
    {
        const bool branch_taken_0x3492d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3492d4) {
            ctx->pc = 0x3492D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3492D4u;
            // 0x3492d8: 0x2682c2c8  addiu       $v0, $s4, -0x3D38 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294951624));
            ctx->in_delay_slot = false;
            ctx->pc = 0x349310u;
            goto label_349310;
        }
    }
    ctx->pc = 0x3492DCu;
label_3492dc:
    // 0x3492dc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x3492dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3492e0:
    // 0x3492e0: 0x12120009  beq         $s0, $s2, . + 4 + (0x9 << 2)
label_3492e4:
    if (ctx->pc == 0x3492E4u) {
        ctx->pc = 0x3492E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3492E0u;
        // 0x3492e4: 0x2682c2c8  addiu       $v0, $s4, -0x3D38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294951624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3492E8u;
        goto label_3492e8;
    }
    ctx->pc = 0x3492E0u;
    {
        const bool branch_taken_0x3492e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x3492E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3492E0u;
        // 0x3492e4: 0x2682c2c8  addiu       $v0, $s4, -0x3D38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294951624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3492e0) {
            ctx->pc = 0x349308u;
            goto label_349308;
        }
    }
    ctx->pc = 0x3492E8u;
label_3492e8:
    // 0x3492e8: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x3492e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3492ec:
    // 0x3492ec: 0x0  nop
    ctx->pc = 0x3492ecu;
    // NOP
label_3492f0:
    // 0x3492f0: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x3492f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3492f4:
    // 0x3492f4: 0xc0d03c8  jal         func_340F20
label_3492f8:
    if (ctx->pc == 0x3492F8u) {
        ctx->pc = 0x3492F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3492F4u;
        // 0x3492f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3492FCu;
        goto label_3492fc;
    }
    ctx->pc = 0x3492F4u;
    SET_GPR_U32(ctx, 31, 0x3492FCu);
    ctx->pc = 0x3492F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3492F4u;
    // 0x3492f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340F20u, 0x3492F4u, 0x3492FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3492FCu;
label_3492fc:
    // 0x3492fc: 0x1612fffc  bne         $s0, $s2, . + 4 + (-0x4 << 2)
label_349300:
    if (ctx->pc == 0x349300u) {
        ctx->pc = 0x349300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3492FCu;
        // 0x349300: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349304u;
        goto label_349304;
    }
    ctx->pc = 0x3492FCu;
    {
        const bool branch_taken_0x3492fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x349300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3492FCu;
        // 0x349300: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3492fc) {
            ctx->pc = 0x3492F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3492f0;
        }
    }
    ctx->pc = 0x349304u;
label_349304:
    // 0x349304: 0x2682c2c8  addiu       $v0, $s4, -0x3D38
    ctx->pc = 0x349304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294951624));
label_349308:
    // 0x349308: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x349308u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
label_34930c:
    // 0x34930c: 0x2682c2c8  addiu       $v0, $s4, -0x3D38
    ctx->pc = 0x34930cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294951624));
label_349310:
    // 0x349310: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x349310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
label_349314:
    // 0x349314: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_349318:
    if (ctx->pc == 0x349318u) {
        ctx->pc = 0x349318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349314u;
        // 0x349318: 0x2690c2c8  addiu       $s0, $s4, -0x3D38 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294951624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34931Cu;
        goto label_34931c;
    }
    ctx->pc = 0x349314u;
    {
        const bool branch_taken_0x349314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x349318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349314u;
        // 0x349318: 0x2690c2c8  addiu       $s0, $s4, -0x3D38 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294951624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349314) {
            ctx->pc = 0x349350u;
            goto label_349350;
        }
    }
    ctx->pc = 0x34931Cu;
label_34931c:
    // 0x34931c: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x34931cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_349320:
    // 0x349320: 0x12130009  beq         $s0, $s3, . + 4 + (0x9 << 2)
label_349324:
    if (ctx->pc == 0x349324u) {
        ctx->pc = 0x349324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349320u;
        // 0x349324: 0x2682c2c8  addiu       $v0, $s4, -0x3D38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294951624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349328u;
        goto label_349328;
    }
    ctx->pc = 0x349320u;
    {
        const bool branch_taken_0x349320 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x349324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349320u;
        // 0x349324: 0x2682c2c8  addiu       $v0, $s4, -0x3D38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294951624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349320) {
            ctx->pc = 0x349348u;
            goto label_349348;
        }
    }
    ctx->pc = 0x349328u;
label_349328:
    // 0x349328: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x349328u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34932c:
    // 0x34932c: 0x0  nop
    ctx->pc = 0x34932cu;
    // NOP
label_349330:
    // 0x349330: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x349330u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_349334:
    // 0x349334: 0xc0d1054  jal         func_344150
label_349338:
    if (ctx->pc == 0x349338u) {
        ctx->pc = 0x349338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349334u;
        // 0x349338: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34933Cu;
        goto label_34933c;
    }
    ctx->pc = 0x349334u;
    SET_GPR_U32(ctx, 31, 0x34933Cu);
    ctx->pc = 0x349338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349334u;
    // 0x349338: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344150u, 0x349334u, 0x34933Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34933Cu;
label_34933c:
    // 0x34933c: 0x1613fffc  bne         $s0, $s3, . + 4 + (-0x4 << 2)
label_349340:
    if (ctx->pc == 0x349340u) {
        ctx->pc = 0x349340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34933Cu;
        // 0x349340: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349344u;
        goto label_349344;
    }
    ctx->pc = 0x34933Cu;
    {
        const bool branch_taken_0x34933c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        ctx->pc = 0x349340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34933Cu;
        // 0x349340: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34933c) {
            ctx->pc = 0x349330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_349330;
        }
    }
    ctx->pc = 0x349344u;
label_349344:
    // 0x349344: 0x2682c2c8  addiu       $v0, $s4, -0x3D38
    ctx->pc = 0x349344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294951624));
label_349348:
    // 0x349348: 0xac400068  sw          $zero, 0x68($v0)
    ctx->pc = 0x349348u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 0));
label_34934c:
    // 0x34934c: 0x2690c2c8  addiu       $s0, $s4, -0x3D38
    ctx->pc = 0x34934cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294951624));
label_349350:
    // 0x349350: 0x8e040080  lw          $a0, 0x80($s0)
    ctx->pc = 0x349350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_349354:
    // 0x349354: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_349358:
    if (ctx->pc == 0x349358u) {
        ctx->pc = 0x349358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349354u;
        // 0x349358: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34935Cu;
        goto label_34935c;
    }
    ctx->pc = 0x349354u;
    {
        const bool branch_taken_0x349354 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x349358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349354u;
        // 0x349358: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349354) {
            ctx->pc = 0x349368u;
            goto label_349368;
        }
    }
    ctx->pc = 0x34935Cu;
label_34935c:
    // 0x34935c: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x34935cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_349360:
    // 0x349360: 0x40f809  jalr        $v0
label_349364:
    if (ctx->pc == 0x349364u) {
        ctx->pc = 0x349368u;
        goto label_349368;
    }
    ctx->pc = 0x349360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x349368u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349360u, 0x349368u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x349368u;
label_349368:
    // 0x349368: 0x8e040088  lw          $a0, 0x88($s0)
    ctx->pc = 0x349368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_34936c:
    // 0x34936c: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x34936cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
label_349370:
    // 0x349370: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_349374:
    if (ctx->pc == 0x349374u) {
        ctx->pc = 0x349374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349370u;
        // 0x349374: 0xae000084  sw          $zero, 0x84($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349378u;
        goto label_349378;
    }
    ctx->pc = 0x349370u;
    {
        const bool branch_taken_0x349370 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x349374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349370u;
        // 0x349374: 0xae000084  sw          $zero, 0x84($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349370) {
            ctx->pc = 0x349388u;
            goto label_349388;
        }
    }
    ctx->pc = 0x349378u;
label_349378:
    // 0x349378: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x349378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_34937c:
    // 0x34937c: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x34937cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_349380:
    // 0x349380: 0x40f809  jalr        $v0
label_349384:
    if (ctx->pc == 0x349384u) {
        ctx->pc = 0x349388u;
        goto label_349388;
    }
    ctx->pc = 0x349380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x349388u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349380u, 0x349388u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x349388u;
label_349388:
    // 0x349388: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x349388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
label_34938c:
    // 0x34938c: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x34938cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_349390:
    // 0x349390: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x349390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
label_349394:
    // 0x349394: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x349394u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_349398:
    // 0x349398: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x349398u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_34939c:
    // 0x34939c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x34939cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3493a0:
    // 0x3493a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3493a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3493a4:
    // 0x3493a4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3493a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3493a8:
    // 0x3493a8: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x3493a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3493ac:
    // 0x3493ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3493acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3493b0:
    // 0x3493b0: 0x3e00008  jr          $ra
label_3493b4:
    if (ctx->pc == 0x3493B4u) {
        ctx->pc = 0x3493B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3493B0u;
        // 0x3493b4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3493B8u;
        goto label_fallthrough_0x3493b0;
    }
    ctx->pc = 0x3493B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3493B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3493B0u;
        // 0x3493b4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3493B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3493b0:
    ctx->pc = 0x3493B8u;
}

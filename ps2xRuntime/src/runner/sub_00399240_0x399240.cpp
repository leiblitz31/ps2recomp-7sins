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

// Function: sub_00399240
// Address: 0x399240 - 0x3994f0
void sub_00399240_0x399240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399240_0x399240");
#endif

    switch (ctx->pc) {
        case 0x399240u: goto label_399240;
        case 0x399244u: goto label_399244;
        case 0x399248u: goto label_399248;
        case 0x39924cu: goto label_39924c;
        case 0x399250u: goto label_399250;
        case 0x399254u: goto label_399254;
        case 0x399258u: goto label_399258;
        case 0x39925cu: goto label_39925c;
        case 0x399260u: goto label_399260;
        case 0x399264u: goto label_399264;
        case 0x399268u: goto label_399268;
        case 0x39926cu: goto label_39926c;
        case 0x399270u: goto label_399270;
        case 0x399274u: goto label_399274;
        case 0x399278u: goto label_399278;
        case 0x39927cu: goto label_39927c;
        case 0x399280u: goto label_399280;
        case 0x399284u: goto label_399284;
        case 0x399288u: goto label_399288;
        case 0x39928cu: goto label_39928c;
        case 0x399290u: goto label_399290;
        case 0x399294u: goto label_399294;
        case 0x399298u: goto label_399298;
        case 0x39929cu: goto label_39929c;
        case 0x3992a0u: goto label_3992a0;
        case 0x3992a4u: goto label_3992a4;
        case 0x3992a8u: goto label_3992a8;
        case 0x3992acu: goto label_3992ac;
        case 0x3992b0u: goto label_3992b0;
        case 0x3992b4u: goto label_3992b4;
        case 0x3992b8u: goto label_3992b8;
        case 0x3992bcu: goto label_3992bc;
        case 0x3992c0u: goto label_3992c0;
        case 0x3992c4u: goto label_3992c4;
        case 0x3992c8u: goto label_3992c8;
        case 0x3992ccu: goto label_3992cc;
        case 0x3992d0u: goto label_3992d0;
        case 0x3992d4u: goto label_3992d4;
        case 0x3992d8u: goto label_3992d8;
        case 0x3992dcu: goto label_3992dc;
        case 0x3992e0u: goto label_3992e0;
        case 0x3992e4u: goto label_3992e4;
        case 0x3992e8u: goto label_3992e8;
        case 0x3992ecu: goto label_3992ec;
        case 0x3992f0u: goto label_3992f0;
        case 0x3992f4u: goto label_3992f4;
        case 0x3992f8u: goto label_3992f8;
        case 0x3992fcu: goto label_3992fc;
        case 0x399300u: goto label_399300;
        case 0x399304u: goto label_399304;
        case 0x399308u: goto label_399308;
        case 0x39930cu: goto label_39930c;
        case 0x399310u: goto label_399310;
        case 0x399314u: goto label_399314;
        case 0x399318u: goto label_399318;
        case 0x39931cu: goto label_39931c;
        case 0x399320u: goto label_399320;
        case 0x399324u: goto label_399324;
        case 0x399328u: goto label_399328;
        case 0x39932cu: goto label_39932c;
        case 0x399330u: goto label_399330;
        case 0x399334u: goto label_399334;
        case 0x399338u: goto label_399338;
        case 0x39933cu: goto label_39933c;
        case 0x399340u: goto label_399340;
        case 0x399344u: goto label_399344;
        case 0x399348u: goto label_399348;
        case 0x39934cu: goto label_39934c;
        case 0x399350u: goto label_399350;
        case 0x399354u: goto label_399354;
        case 0x399358u: goto label_399358;
        case 0x39935cu: goto label_39935c;
        case 0x399360u: goto label_399360;
        case 0x399364u: goto label_399364;
        case 0x399368u: goto label_399368;
        case 0x39936cu: goto label_39936c;
        case 0x399370u: goto label_399370;
        case 0x399374u: goto label_399374;
        case 0x399378u: goto label_399378;
        case 0x39937cu: goto label_39937c;
        case 0x399380u: goto label_399380;
        case 0x399384u: goto label_399384;
        case 0x399388u: goto label_399388;
        case 0x39938cu: goto label_39938c;
        case 0x399390u: goto label_399390;
        case 0x399394u: goto label_399394;
        case 0x399398u: goto label_399398;
        case 0x39939cu: goto label_39939c;
        case 0x3993a0u: goto label_3993a0;
        case 0x3993a4u: goto label_3993a4;
        case 0x3993a8u: goto label_3993a8;
        case 0x3993acu: goto label_3993ac;
        case 0x3993b0u: goto label_3993b0;
        case 0x3993b4u: goto label_3993b4;
        case 0x3993b8u: goto label_3993b8;
        case 0x3993bcu: goto label_3993bc;
        case 0x3993c0u: goto label_3993c0;
        case 0x3993c4u: goto label_3993c4;
        case 0x3993c8u: goto label_3993c8;
        case 0x3993ccu: goto label_3993cc;
        case 0x3993d0u: goto label_3993d0;
        case 0x3993d4u: goto label_3993d4;
        case 0x3993d8u: goto label_3993d8;
        case 0x3993dcu: goto label_3993dc;
        case 0x3993e0u: goto label_3993e0;
        case 0x3993e4u: goto label_3993e4;
        case 0x3993e8u: goto label_3993e8;
        case 0x3993ecu: goto label_3993ec;
        case 0x3993f0u: goto label_3993f0;
        case 0x3993f4u: goto label_3993f4;
        case 0x3993f8u: goto label_3993f8;
        case 0x3993fcu: goto label_3993fc;
        case 0x399400u: goto label_399400;
        case 0x399404u: goto label_399404;
        case 0x399408u: goto label_399408;
        case 0x39940cu: goto label_39940c;
        case 0x399410u: goto label_399410;
        case 0x399414u: goto label_399414;
        case 0x399418u: goto label_399418;
        case 0x39941cu: goto label_39941c;
        case 0x399420u: goto label_399420;
        case 0x399424u: goto label_399424;
        case 0x399428u: goto label_399428;
        case 0x39942cu: goto label_39942c;
        case 0x399430u: goto label_399430;
        case 0x399434u: goto label_399434;
        case 0x399438u: goto label_399438;
        case 0x39943cu: goto label_39943c;
        case 0x399440u: goto label_399440;
        case 0x399444u: goto label_399444;
        case 0x399448u: goto label_399448;
        case 0x39944cu: goto label_39944c;
        case 0x399450u: goto label_399450;
        case 0x399454u: goto label_399454;
        case 0x399458u: goto label_399458;
        case 0x39945cu: goto label_39945c;
        case 0x399460u: goto label_399460;
        case 0x399464u: goto label_399464;
        case 0x399468u: goto label_399468;
        case 0x39946cu: goto label_39946c;
        case 0x399470u: goto label_399470;
        case 0x399474u: goto label_399474;
        case 0x399478u: goto label_399478;
        case 0x39947cu: goto label_39947c;
        case 0x399480u: goto label_399480;
        case 0x399484u: goto label_399484;
        case 0x399488u: goto label_399488;
        case 0x39948cu: goto label_39948c;
        case 0x399490u: goto label_399490;
        case 0x399494u: goto label_399494;
        case 0x399498u: goto label_399498;
        case 0x39949cu: goto label_39949c;
        case 0x3994a0u: goto label_3994a0;
        case 0x3994a4u: goto label_3994a4;
        case 0x3994a8u: goto label_3994a8;
        case 0x3994acu: goto label_3994ac;
        case 0x3994b0u: goto label_3994b0;
        case 0x3994b4u: goto label_3994b4;
        case 0x3994b8u: goto label_3994b8;
        case 0x3994bcu: goto label_3994bc;
        case 0x3994c0u: goto label_3994c0;
        case 0x3994c4u: goto label_3994c4;
        case 0x3994c8u: goto label_3994c8;
        case 0x3994ccu: goto label_3994cc;
        case 0x3994d0u: goto label_3994d0;
        case 0x3994d4u: goto label_3994d4;
        case 0x3994d8u: goto label_3994d8;
        case 0x3994dcu: goto label_3994dc;
        case 0x3994e0u: goto label_3994e0;
        case 0x3994e4u: goto label_3994e4;
        case 0x3994e8u: goto label_3994e8;
        case 0x3994ecu: goto label_3994ec;
        default: break;
    }

    ctx->pc = 0x399240u;

label_399240:
    // 0x399240: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x399240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_399244:
    // 0x399244: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x399244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_399248:
    // 0x399248: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x399248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_39924c:
    // 0x39924c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x39924cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_399250:
    // 0x399250: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x399250u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_399254:
    // 0x399254: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x399254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_399258:
    // 0x399258: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x399258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_39925c:
    // 0x39925c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x39925cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_399260:
    // 0x399260: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x399260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_399264:
    // 0x399264: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x399264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_399268:
    // 0x399268: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x399268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_39926c:
    // 0x39926c: 0x10620082  beq         $v1, $v0, . + 4 + (0x82 << 2)
label_399270:
    if (ctx->pc == 0x399270u) {
        ctx->pc = 0x399270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39926Cu;
        // 0x399270: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399274u;
        goto label_399274;
    }
    ctx->pc = 0x39926Cu;
    {
        const bool branch_taken_0x39926c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x399270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39926Cu;
        // 0x399270: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39926c) {
            ctx->pc = 0x399478u;
            goto label_399478;
        }
    }
    ctx->pc = 0x399274u;
label_399274:
    // 0x399274: 0x54620086  bnel        $v1, $v0, . + 4 + (0x86 << 2)
label_399278:
    if (ctx->pc == 0x399278u) {
        ctx->pc = 0x399278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399274u;
        // 0x399278: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39927Cu;
        goto label_39927c;
    }
    ctx->pc = 0x399274u;
    {
        const bool branch_taken_0x399274 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x399274) {
            ctx->pc = 0x399278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x399274u;
            // 0x399278: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x399490u;
            goto label_399490;
        }
    }
    ctx->pc = 0x39927Cu;
label_39927c:
    // 0x39927c: 0x8e440034  lw          $a0, 0x34($s2)
    ctx->pc = 0x39927cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_399280:
    // 0x399280: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_399284:
    if (ctx->pc == 0x399284u) {
        ctx->pc = 0x399284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399280u;
        // 0x399284: 0x8e500038  lw          $s0, 0x38($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399288u;
        goto label_399288;
    }
    ctx->pc = 0x399280u;
    {
        const bool branch_taken_0x399280 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x399280) {
            ctx->pc = 0x399284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x399280u;
            // 0x399284: 0x8e500038  lw          $s0, 0x38($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x399294u;
            goto label_399294;
        }
    }
    ctx->pc = 0x399288u;
label_399288:
    // 0x399288: 0xc104702  jal         func_411C08
label_39928c:
    if (ctx->pc == 0x39928Cu) {
        ctx->pc = 0x399290u;
        goto label_399290;
    }
    ctx->pc = 0x399288u;
    SET_GPR_U32(ctx, 31, 0x399290u);
    ctx->pc = 0x411C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x411C08u, 0x399288u, 0x399290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399290u;
label_399290:
    // 0x399290: 0x8e500038  lw          $s0, 0x38($s2)
    ctx->pc = 0x399290u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_399294:
    // 0x399294: 0x26530038  addiu       $s3, $s2, 0x38
    ctx->pc = 0x399294u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
label_399298:
    // 0x399298: 0x26540040  addiu       $s4, $s2, 0x40
    ctx->pc = 0x399298u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_39929c:
    // 0x39929c: 0x3c150062  lui         $s5, 0x62
    ctx->pc = 0x39929cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)98 << 16));
label_3992a0:
    // 0x3992a0: 0x12130007  beq         $s0, $s3, . + 4 + (0x7 << 2)
label_3992a4:
    if (ctx->pc == 0x3992A4u) {
        ctx->pc = 0x3992A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3992A0u;
        // 0x3992a4: 0x26510010  addiu       $s1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3992A8u;
        goto label_3992a8;
    }
    ctx->pc = 0x3992A0u;
    {
        const bool branch_taken_0x3992a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x3992A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3992A0u;
        // 0x3992a4: 0x26510010  addiu       $s1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3992a0) {
            ctx->pc = 0x3992C0u;
            goto label_3992c0;
        }
    }
    ctx->pc = 0x3992A8u;
label_3992a8:
    // 0x3992a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3992a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3992ac:
    // 0x3992ac: 0x0  nop
    ctx->pc = 0x3992acu;
    // NOP
label_3992b0:
    // 0x3992b0: 0xc0e7172  jal         func_39C5C8
label_3992b4:
    if (ctx->pc == 0x3992B4u) {
        ctx->pc = 0x3992B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3992B0u;
        // 0x3992b4: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3992B8u;
        goto label_3992b8;
    }
    ctx->pc = 0x3992B0u;
    SET_GPR_U32(ctx, 31, 0x3992B8u);
    ctx->pc = 0x3992B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3992B0u;
    // 0x3992b4: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C5C8u, 0x3992B0u, 0x3992B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3992B8u;
label_3992b8:
    // 0x3992b8: 0x1613fffd  bne         $s0, $s3, . + 4 + (-0x3 << 2)
label_3992bc:
    if (ctx->pc == 0x3992BCu) {
        ctx->pc = 0x3992BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3992B8u;
        // 0x3992bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3992C0u;
        goto label_3992c0;
    }
    ctx->pc = 0x3992B8u;
    {
        const bool branch_taken_0x3992b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        ctx->pc = 0x3992BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3992B8u;
        // 0x3992bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3992b8) {
            ctx->pc = 0x3992B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3992b0;
        }
    }
    ctx->pc = 0x3992C0u;
label_3992c0:
    // 0x3992c0: 0x8e500040  lw          $s0, 0x40($s2)
    ctx->pc = 0x3992c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_3992c4:
    // 0x3992c4: 0x12140007  beq         $s0, $s4, . + 4 + (0x7 << 2)
label_3992c8:
    if (ctx->pc == 0x3992C8u) {
        ctx->pc = 0x3992C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3992C4u;
        // 0x3992c8: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3992CCu;
        goto label_3992cc;
    }
    ctx->pc = 0x3992C4u;
    {
        const bool branch_taken_0x3992c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        ctx->pc = 0x3992C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3992C4u;
        // 0x3992c8: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3992c4) {
            ctx->pc = 0x3992E4u;
            goto label_3992e4;
        }
    }
    ctx->pc = 0x3992CCu;
label_3992cc:
    // 0x3992cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3992ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3992d0:
    // 0x3992d0: 0xc0e7192  jal         func_39C648
label_3992d4:
    if (ctx->pc == 0x3992D4u) {
        ctx->pc = 0x3992D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3992D0u;
        // 0x3992d4: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3992D8u;
        goto label_3992d8;
    }
    ctx->pc = 0x3992D0u;
    SET_GPR_U32(ctx, 31, 0x3992D8u);
    ctx->pc = 0x3992D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3992D0u;
    // 0x3992d4: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C648u, 0x3992D0u, 0x3992D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3992D8u;
label_3992d8:
    // 0x3992d8: 0x5614fffd  bnel        $s0, $s4, . + 4 + (-0x3 << 2)
label_3992dc:
    if (ctx->pc == 0x3992DCu) {
        ctx->pc = 0x3992DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3992D8u;
        // 0x3992dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3992E0u;
        goto label_3992e0;
    }
    ctx->pc = 0x3992D8u;
    {
        const bool branch_taken_0x3992d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 20));
        if (branch_taken_0x3992d8) {
            ctx->pc = 0x3992DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3992D8u;
            // 0x3992dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3992D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3992d0;
        }
    }
    ctx->pc = 0x3992E0u;
label_3992e0:
    // 0x3992e0: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x3992e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_3992e4:
    // 0x3992e4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3992e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3992e8:
    // 0x3992e8: 0xc104ca6  jal         func_413298
label_3992ec:
    if (ctx->pc == 0x3992ECu) {
        ctx->pc = 0x3992ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3992E8u;
        // 0x3992ec: 0x2484ae40  addiu       $a0, $a0, -0x51C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3992F0u;
        goto label_3992f0;
    }
    ctx->pc = 0x3992E8u;
    SET_GPR_U32(ctx, 31, 0x3992F0u);
    ctx->pc = 0x3992ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3992E8u;
    // 0x3992ec: 0x2484ae40  addiu       $a0, $a0, -0x51C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413298u, 0x3992E8u, 0x3992F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3992F0u;
label_3992f0:
    // 0x3992f0: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x3992f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3992f4:
    // 0x3992f4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_3992f8:
    if (ctx->pc == 0x3992F8u) {
        ctx->pc = 0x3992F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3992F4u;
        // 0x3992f8: 0x26a3e880  addiu       $v1, $s5, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3992FCu;
        goto label_3992fc;
    }
    ctx->pc = 0x3992F4u;
    {
        const bool branch_taken_0x3992f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3992F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3992F4u;
        // 0x3992f8: 0x26a3e880  addiu       $v1, $s5, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3992f4) {
            ctx->pc = 0x39930Cu;
            goto label_39930c;
        }
    }
    ctx->pc = 0x3992FCu;
label_3992fc:
    // 0x3992fc: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x3992fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_399300:
    // 0x399300: 0x40f809  jalr        $v0
label_399304:
    if (ctx->pc == 0x399304u) {
        ctx->pc = 0x399308u;
        goto label_399308;
    }
    ctx->pc = 0x399300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x399308u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399300u, 0x399308u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x399308u;
label_399308:
    // 0x399308: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x399308u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_39930c:
    // 0x39930c: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x39930cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_399310:
    // 0x399310: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_399314:
    if (ctx->pc == 0x399314u) {
        ctx->pc = 0x399314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399310u;
        // 0x399314: 0x26a3e880  addiu       $v1, $s5, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399318u;
        goto label_399318;
    }
    ctx->pc = 0x399310u;
    {
        const bool branch_taken_0x399310 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x399314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399310u;
        // 0x399314: 0x26a3e880  addiu       $v1, $s5, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399310) {
            ctx->pc = 0x399328u;
            goto label_399328;
        }
    }
    ctx->pc = 0x399318u;
label_399318:
    // 0x399318: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x399318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_39931c:
    // 0x39931c: 0x40f809  jalr        $v0
label_399320:
    if (ctx->pc == 0x399320u) {
        ctx->pc = 0x399324u;
        goto label_399324;
    }
    ctx->pc = 0x39931Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x399324u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39931Cu, 0x399324u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x399324u;
label_399324:
    // 0x399324: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x399324u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_399328:
    // 0x399328: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x399328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_39932c:
    // 0x39932c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_399330:
    if (ctx->pc == 0x399330u) {
        ctx->pc = 0x399330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39932Cu;
        // 0x399330: 0x26a3e880  addiu       $v1, $s5, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399334u;
        goto label_399334;
    }
    ctx->pc = 0x39932Cu;
    {
        const bool branch_taken_0x39932c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x399330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39932Cu;
        // 0x399330: 0x26a3e880  addiu       $v1, $s5, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39932c) {
            ctx->pc = 0x399344u;
            goto label_399344;
        }
    }
    ctx->pc = 0x399334u;
label_399334:
    // 0x399334: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x399334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_399338:
    // 0x399338: 0x40f809  jalr        $v0
label_39933c:
    if (ctx->pc == 0x39933Cu) {
        ctx->pc = 0x399340u;
        goto label_399340;
    }
    ctx->pc = 0x399338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x399340u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399338u, 0x399340u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x399340u;
label_399340:
    // 0x399340: 0xae400030  sw          $zero, 0x30($s2)
    ctx->pc = 0x399340u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
label_399344:
    // 0x399344: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x399344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_399348:
    // 0x399348: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_39934c:
    if (ctx->pc == 0x39934Cu) {
        ctx->pc = 0x39934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399348u;
        // 0x39934c: 0x26a3e880  addiu       $v1, $s5, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399350u;
        goto label_399350;
    }
    ctx->pc = 0x399348u;
    {
        const bool branch_taken_0x399348 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x39934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399348u;
        // 0x39934c: 0x26a3e880  addiu       $v1, $s5, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399348) {
            ctx->pc = 0x399360u;
            goto label_399360;
        }
    }
    ctx->pc = 0x399350u;
label_399350:
    // 0x399350: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x399350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_399354:
    // 0x399354: 0x40f809  jalr        $v0
label_399358:
    if (ctx->pc == 0x399358u) {
        ctx->pc = 0x39935Cu;
        goto label_39935c;
    }
    ctx->pc = 0x399354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39935Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399354u, 0x39935Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39935Cu;
label_39935c:
    // 0x39935c: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x39935cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_399360:
    // 0x399360: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x399360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_399364:
    // 0x399364: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x399364u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_399368:
    // 0x399368: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x399368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39936c:
    // 0x39936c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_399370:
    if (ctx->pc == 0x399370u) {
        ctx->pc = 0x399370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39936Cu;
        // 0x399370: 0x2453e880  addiu       $s3, $v0, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399374u;
        goto label_399374;
    }
    ctx->pc = 0x39936Cu;
    {
        const bool branch_taken_0x39936c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x399370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39936Cu;
        // 0x399370: 0x2453e880  addiu       $s3, $v0, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39936c) {
            ctx->pc = 0x399388u;
            goto label_399388;
        }
    }
    ctx->pc = 0x399374u;
label_399374:
    // 0x399374: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x399374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_399378:
    // 0x399378: 0x40f809  jalr        $v0
label_39937c:
    if (ctx->pc == 0x39937Cu) {
        ctx->pc = 0x399380u;
        goto label_399380;
    }
    ctx->pc = 0x399378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x399380u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399378u, 0x399380u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x399380u;
label_399380:
    // 0x399380: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x399380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_399384:
    // 0x399384: 0x0  nop
    ctx->pc = 0x399384u;
    // NOP
label_399388:
    // 0x399388: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x399388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_39938c:
    // 0x39938c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_399390:
    if (ctx->pc == 0x399390u) {
        ctx->pc = 0x399390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39938Cu;
        // 0x399390: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399394u;
        goto label_399394;
    }
    ctx->pc = 0x39938Cu;
    {
        const bool branch_taken_0x39938c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39938c) {
            ctx->pc = 0x399390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39938Cu;
            // 0x399390: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3993A8u;
            goto label_3993a8;
        }
    }
    ctx->pc = 0x399394u;
label_399394:
    // 0x399394: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x399394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_399398:
    // 0x399398: 0x40f809  jalr        $v0
label_39939c:
    if (ctx->pc == 0x39939Cu) {
        ctx->pc = 0x3993A0u;
        goto label_3993a0;
    }
    ctx->pc = 0x399398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3993A0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399398u, 0x3993A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3993A0u;
label_3993a0:
    // 0x3993a0: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x3993a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_3993a4:
    // 0x3993a4: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x3993a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3993a8:
    // 0x3993a8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3993ac:
    if (ctx->pc == 0x3993ACu) {
        ctx->pc = 0x3993ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3993A8u;
        // 0x3993ac: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3993B0u;
        goto label_3993b0;
    }
    ctx->pc = 0x3993A8u;
    {
        const bool branch_taken_0x3993a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3993a8) {
            ctx->pc = 0x3993ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3993A8u;
            // 0x3993ac: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3993C4u;
            goto label_3993c4;
        }
    }
    ctx->pc = 0x3993B0u;
label_3993b0:
    // 0x3993b0: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x3993b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_3993b4:
    // 0x3993b4: 0x40f809  jalr        $v0
label_3993b8:
    if (ctx->pc == 0x3993B8u) {
        ctx->pc = 0x3993BCu;
        goto label_3993bc;
    }
    ctx->pc = 0x3993B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3993BCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3993B4u, 0x3993BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3993BCu;
label_3993bc:
    // 0x3993bc: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3993bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_3993c0:
    // 0x3993c0: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x3993c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_3993c4:
    // 0x3993c4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3993c8:
    if (ctx->pc == 0x3993C8u) {
        ctx->pc = 0x3993C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3993C4u;
        // 0x3993c8: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3993CCu;
        goto label_3993cc;
    }
    ctx->pc = 0x3993C4u;
    {
        const bool branch_taken_0x3993c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3993c4) {
            ctx->pc = 0x3993C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3993C4u;
            // 0x3993c8: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3993E0u;
            goto label_3993e0;
        }
    }
    ctx->pc = 0x3993CCu;
label_3993cc:
    // 0x3993cc: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x3993ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_3993d0:
    // 0x3993d0: 0x40f809  jalr        $v0
label_3993d4:
    if (ctx->pc == 0x3993D4u) {
        ctx->pc = 0x3993D8u;
        goto label_3993d8;
    }
    ctx->pc = 0x3993D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3993D8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3993D0u, 0x3993D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3993D8u;
label_3993d8:
    // 0x3993d8: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x3993d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_3993dc:
    // 0x3993dc: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x3993dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3993e0:
    // 0x3993e0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3993e4:
    if (ctx->pc == 0x3993E4u) {
        ctx->pc = 0x3993E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3993E0u;
        // 0x3993e4: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3993E8u;
        goto label_3993e8;
    }
    ctx->pc = 0x3993E0u;
    {
        const bool branch_taken_0x3993e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3993e0) {
            ctx->pc = 0x3993E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3993E0u;
            // 0x3993e4: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3993FCu;
            goto label_3993fc;
        }
    }
    ctx->pc = 0x3993E8u;
label_3993e8:
    // 0x3993e8: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x3993e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_3993ec:
    // 0x3993ec: 0x40f809  jalr        $v0
label_3993f0:
    if (ctx->pc == 0x3993F0u) {
        ctx->pc = 0x3993F4u;
        goto label_3993f4;
    }
    ctx->pc = 0x3993ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3993F4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3993ECu, 0x3993F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3993F4u;
label_3993f4:
    // 0x3993f4: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x3993f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_3993f8:
    // 0x3993f8: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x3993f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3993fc:
    // 0x3993fc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_399400:
    if (ctx->pc == 0x399400u) {
        ctx->pc = 0x399400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3993FCu;
        // 0x399400: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399404u;
        goto label_399404;
    }
    ctx->pc = 0x3993FCu;
    {
        const bool branch_taken_0x3993fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3993fc) {
            ctx->pc = 0x399400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3993FCu;
            // 0x399400: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x399418u;
            goto label_399418;
        }
    }
    ctx->pc = 0x399404u;
label_399404:
    // 0x399404: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x399404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_399408:
    // 0x399408: 0x40f809  jalr        $v0
label_39940c:
    if (ctx->pc == 0x39940Cu) {
        ctx->pc = 0x399410u;
        goto label_399410;
    }
    ctx->pc = 0x399408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x399410u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399408u, 0x399410u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x399410u;
label_399410:
    // 0x399410: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x399410u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_399414:
    // 0x399414: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x399414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_399418:
    // 0x399418: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_39941c:
    if (ctx->pc == 0x39941Cu) {
        ctx->pc = 0x39941Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399418u;
        // 0x39941c: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399420u;
        goto label_399420;
    }
    ctx->pc = 0x399418u;
    {
        const bool branch_taken_0x399418 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x399418) {
            ctx->pc = 0x39941Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x399418u;
            // 0x39941c: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x399434u;
            goto label_399434;
        }
    }
    ctx->pc = 0x399420u;
label_399420:
    // 0x399420: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x399420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_399424:
    // 0x399424: 0x40f809  jalr        $v0
label_399428:
    if (ctx->pc == 0x399428u) {
        ctx->pc = 0x39942Cu;
        goto label_39942c;
    }
    ctx->pc = 0x399424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39942Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399424u, 0x39942Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39942Cu;
label_39942c:
    // 0x39942c: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x39942cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_399430:
    // 0x399430: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x399430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_399434:
    // 0x399434: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_399438:
    if (ctx->pc == 0x399438u) {
        ctx->pc = 0x399438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399434u;
        // 0x399438: 0x8e440078  lw          $a0, 0x78($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39943Cu;
        goto label_39943c;
    }
    ctx->pc = 0x399434u;
    {
        const bool branch_taken_0x399434 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x399434) {
            ctx->pc = 0x399438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x399434u;
            // 0x399438: 0x8e440078  lw          $a0, 0x78($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x399450u;
            goto label_399450;
        }
    }
    ctx->pc = 0x39943Cu;
label_39943c:
    // 0x39943c: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x39943cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_399440:
    // 0x399440: 0x40f809  jalr        $v0
label_399444:
    if (ctx->pc == 0x399444u) {
        ctx->pc = 0x399448u;
        goto label_399448;
    }
    ctx->pc = 0x399440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x399448u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399440u, 0x399448u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x399448u;
label_399448:
    // 0x399448: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x399448u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
label_39944c:
    // 0x39944c: 0x8e440078  lw          $a0, 0x78($s2)
    ctx->pc = 0x39944cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
label_399450:
    // 0x399450: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_399454:
    if (ctx->pc == 0x399454u) {
        ctx->pc = 0x399454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399450u;
        // 0x399454: 0x8e62010c  lw          $v0, 0x10C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399458u;
        goto label_399458;
    }
    ctx->pc = 0x399450u;
    {
        const bool branch_taken_0x399450 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x399450) {
            ctx->pc = 0x399454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x399450u;
            // 0x399454: 0x8e62010c  lw          $v0, 0x10C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x399468u;
            goto label_399468;
        }
    }
    ctx->pc = 0x399458u;
label_399458:
    // 0x399458: 0xc0e4052  jal         func_390148
label_39945c:
    if (ctx->pc == 0x39945Cu) {
        ctx->pc = 0x399460u;
        goto label_399460;
    }
    ctx->pc = 0x399458u;
    SET_GPR_U32(ctx, 31, 0x399460u);
    ctx->pc = 0x390148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390148u, 0x399458u, 0x399460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399460u;
label_399460:
    // 0x399460: 0xae400078  sw          $zero, 0x78($s2)
    ctx->pc = 0x399460u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 0));
label_399464:
    // 0x399464: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x399464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_399468:
    // 0x399468: 0x40f809  jalr        $v0
label_39946c:
    if (ctx->pc == 0x39946Cu) {
        ctx->pc = 0x39946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399468u;
        // 0x39946c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399470u;
        goto label_399470;
    }
    ctx->pc = 0x399468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x399470u);
        ctx->pc = 0x39946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399468u;
        // 0x39946c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399468u, 0x399470u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x399470u;
label_399470:
    // 0x399470: 0x10000016  b           . + 4 + (0x16 << 2)
label_399474:
    if (ctx->pc == 0x399474u) {
        ctx->pc = 0x399474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399470u;
        // 0x399474: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399478u;
        goto label_399478;
    }
    ctx->pc = 0x399470u;
    {
        const bool branch_taken_0x399470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x399474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399470u;
        // 0x399474: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399470) {
            ctx->pc = 0x3994CCu;
            goto label_3994cc;
        }
    }
    ctx->pc = 0x399478u;
label_399478:
    // 0x399478: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x399478u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_39947c:
    // 0x39947c: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x39947cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_399480:
    // 0x399480: 0x40f809  jalr        $v0
label_399484:
    if (ctx->pc == 0x399484u) {
        ctx->pc = 0x399484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399480u;
        // 0x399484: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399488u;
        goto label_399488;
    }
    ctx->pc = 0x399480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x399488u);
        ctx->pc = 0x399484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399480u;
        // 0x399484: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399480u, 0x399488u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x399488u;
label_399488:
    // 0x399488: 0x10000010  b           . + 4 + (0x10 << 2)
label_39948c:
    if (ctx->pc == 0x39948Cu) {
        ctx->pc = 0x39948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399488u;
        // 0x39948c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399490u;
        goto label_399490;
    }
    ctx->pc = 0x399488u;
    {
        const bool branch_taken_0x399488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399488u;
        // 0x39948c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399488) {
            ctx->pc = 0x3994CCu;
            goto label_3994cc;
        }
    }
    ctx->pc = 0x399490u;
label_399490:
    // 0x399490: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_399494:
    if (ctx->pc == 0x399494u) {
        ctx->pc = 0x399494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399490u;
        // 0x399494: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399498u;
        goto label_399498;
    }
    ctx->pc = 0x399490u;
    {
        const bool branch_taken_0x399490 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x399490) {
            ctx->pc = 0x399494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x399490u;
            // 0x399494: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3994A4u;
            goto label_3994a4;
        }
    }
    ctx->pc = 0x399498u;
label_399498:
    // 0x399498: 0xc0e6490  jal         func_399240
label_39949c:
    if (ctx->pc == 0x39949Cu) {
        ctx->pc = 0x3994A0u;
        goto label_3994a0;
    }
    ctx->pc = 0x399498u;
    SET_GPR_U32(ctx, 31, 0x3994A0u);
    ctx->pc = 0x399240u;
    goto label_399240;
    ctx->pc = 0x3994A0u;
label_3994a0:
    // 0x3994a0: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x3994a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_3994a4:
    // 0x3994a4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_3994a8:
    if (ctx->pc == 0x3994A8u) {
        ctx->pc = 0x3994A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3994A4u;
        // 0x3994a8: 0xae400008  sw          $zero, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3994ACu;
        goto label_3994ac;
    }
    ctx->pc = 0x3994A4u;
    {
        const bool branch_taken_0x3994a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3994A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3994A4u;
        // 0x3994a8: 0xae400008  sw          $zero, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3994a4) {
            ctx->pc = 0x3994B4u;
            goto label_3994b4;
        }
    }
    ctx->pc = 0x3994ACu;
label_3994ac:
    // 0x3994ac: 0xc0e6490  jal         func_399240
label_3994b0:
    if (ctx->pc == 0x3994B0u) {
        ctx->pc = 0x3994B4u;
        goto label_3994b4;
    }
    ctx->pc = 0x3994ACu;
    SET_GPR_U32(ctx, 31, 0x3994B4u);
    ctx->pc = 0x399240u;
    goto label_399240;
    ctx->pc = 0x3994B4u;
label_3994b4:
    // 0x3994b4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3994b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3994b8:
    // 0x3994b8: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x3994b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_3994bc:
    // 0x3994bc: 0x8c43e98c  lw          $v1, -0x1674($v0)
    ctx->pc = 0x3994bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961548)));
label_3994c0:
    // 0x3994c0: 0x60f809  jalr        $v1
label_3994c4:
    if (ctx->pc == 0x3994C4u) {
        ctx->pc = 0x3994C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3994C0u;
        // 0x3994c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3994C8u;
        goto label_3994c8;
    }
    ctx->pc = 0x3994C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3994C8u);
        ctx->pc = 0x3994C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3994C0u;
        // 0x3994c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3994C0u, 0x3994C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3994C8u;
label_3994c8:
    // 0x3994c8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3994c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3994cc:
    // 0x3994cc: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3994ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3994d0:
    // 0x3994d0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3994d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3994d4:
    // 0x3994d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3994d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3994d8:
    // 0x3994d8: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3994d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3994dc:
    // 0x3994dc: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x3994dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3994e0:
    // 0x3994e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3994e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3994e4:
    // 0x3994e4: 0x3e00008  jr          $ra
label_3994e8:
    if (ctx->pc == 0x3994E8u) {
        ctx->pc = 0x3994E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3994E4u;
        // 0x3994e8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3994ECu;
        goto label_3994ec;
    }
    ctx->pc = 0x3994E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3994E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3994E4u;
        // 0x3994e8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3994E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3994ECu;
label_3994ec:
    // 0x3994ec: 0x0  nop
    ctx->pc = 0x3994ecu;
    // NOP
    ctx->pc = 0x3994f0u;
}

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

// Function: sub_00390308
// Address: 0x390308 - 0x390398
void sub_00390308_0x390308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00390308_0x390308");
#endif

    switch (ctx->pc) {
        case 0x390308u: goto label_390308;
        case 0x39030cu: goto label_39030c;
        case 0x390310u: goto label_390310;
        case 0x390314u: goto label_390314;
        case 0x390318u: goto label_390318;
        case 0x39031cu: goto label_39031c;
        case 0x390320u: goto label_390320;
        case 0x390324u: goto label_390324;
        case 0x390328u: goto label_390328;
        case 0x39032cu: goto label_39032c;
        case 0x390330u: goto label_390330;
        case 0x390334u: goto label_390334;
        case 0x390338u: goto label_390338;
        case 0x39033cu: goto label_39033c;
        case 0x390340u: goto label_390340;
        case 0x390344u: goto label_390344;
        case 0x390348u: goto label_390348;
        case 0x39034cu: goto label_39034c;
        case 0x390350u: goto label_390350;
        case 0x390354u: goto label_390354;
        case 0x390358u: goto label_390358;
        case 0x39035cu: goto label_39035c;
        case 0x390360u: goto label_390360;
        case 0x390364u: goto label_390364;
        case 0x390368u: goto label_390368;
        case 0x39036cu: goto label_39036c;
        case 0x390370u: goto label_390370;
        case 0x390374u: goto label_390374;
        case 0x390378u: goto label_390378;
        case 0x39037cu: goto label_39037c;
        case 0x390380u: goto label_390380;
        case 0x390384u: goto label_390384;
        case 0x390388u: goto label_390388;
        case 0x39038cu: goto label_39038c;
        case 0x390390u: goto label_390390;
        case 0x390394u: goto label_390394;
        default: break;
    }

    ctx->pc = 0x390308u;

label_390308:
    // 0x390308: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x390308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_39030c:
    // 0x39030c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x39030cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_390310:
    // 0x390310: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x390310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_390314:
    // 0x390314: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x390314u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_390318:
    // 0x390318: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x390318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_39031c:
    // 0x39031c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x39031cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_390320:
    // 0x390320: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x390320u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_390324:
    // 0x390324: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x390324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_390328:
    // 0x390328: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x390328u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39032c:
    // 0x39032c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39032cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_390330:
    // 0x390330: 0x96250004  lhu         $a1, 0x4($s1)
    ctx->pc = 0x390330u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_390334:
    // 0x390334: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x390334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_390338:
    // 0x390338: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x390338u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39033c:
    // 0x39033c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x39033cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_390340:
    // 0x390340: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x390340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_390344:
    // 0x390344: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_390348:
    if (ctx->pc == 0x390348u) {
        ctx->pc = 0x390348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390344u;
        // 0x390348: 0x2229021  addu        $s2, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39034Cu;
        goto label_39034c;
    }
    ctx->pc = 0x390344u;
    {
        const bool branch_taken_0x390344 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x390348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390344u;
        // 0x390348: 0x2229021  addu        $s2, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390344) {
            ctx->pc = 0x390374u;
            goto label_390374;
        }
    }
    ctx->pc = 0x39034Cu;
label_39034c:
    // 0x39034c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x39034cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_390350:
    // 0x390350: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x390350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_390354:
    // 0x390354: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x390354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_390358:
    // 0x390358: 0x280f809  jalr        $s4
label_39035c:
    if (ctx->pc == 0x39035Cu) {
        ctx->pc = 0x39035Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390358u;
        // 0x39035c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390360u;
        goto label_390360;
    }
    ctx->pc = 0x390358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x390360u);
        ctx->pc = 0x39035Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390358u;
        // 0x39035c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390358u, 0x390360u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x390360u;
label_390360:
    // 0x390360: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_390364:
    if (ctx->pc == 0x390364u) {
        ctx->pc = 0x390364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390360u;
        // 0x390364: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390368u;
        goto label_390368;
    }
    ctx->pc = 0x390360u;
    {
        const bool branch_taken_0x390360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x390364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390360u;
        // 0x390364: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390360) {
            ctx->pc = 0x390374u;
            goto label_390374;
        }
    }
    ctx->pc = 0x390368u;
label_390368:
    // 0x390368: 0x2652000c  addiu       $s2, $s2, 0xC
    ctx->pc = 0x390368u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_39036c:
    // 0x39036c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_390370:
    if (ctx->pc == 0x390370u) {
        ctx->pc = 0x390370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39036Cu;
        // 0x390370: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390374u;
        goto label_390374;
    }
    ctx->pc = 0x39036Cu;
    {
        const bool branch_taken_0x39036c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x390370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39036Cu;
        // 0x390370: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39036c) {
            ctx->pc = 0x390350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_390350;
        }
    }
    ctx->pc = 0x390374u;
label_390374:
    // 0x390374: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x390374u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_390378:
    // 0x390378: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x390378u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_39037c:
    // 0x39037c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x39037cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_390380:
    // 0x390380: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x390380u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_390384:
    // 0x390384: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x390384u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_390388:
    // 0x390388: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x390388u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39038c:
    // 0x39038c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39038cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_390390:
    // 0x390390: 0x3e00008  jr          $ra
label_390394:
    if (ctx->pc == 0x390394u) {
        ctx->pc = 0x390394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390390u;
        // 0x390394: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390398u;
        goto label_fallthrough_0x390390;
    }
    ctx->pc = 0x390390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x390394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390390u;
        // 0x390394: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x390390:
    ctx->pc = 0x390398u;
}

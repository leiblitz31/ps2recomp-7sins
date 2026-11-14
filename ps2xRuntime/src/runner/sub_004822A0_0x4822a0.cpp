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

// Function: sub_004822A0
// Address: 0x4822a0 - 0x4823a0
void sub_004822A0_0x4822a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004822A0_0x4822a0");
#endif

    switch (ctx->pc) {
        case 0x4822a0u: goto label_4822a0;
        case 0x4822a4u: goto label_4822a4;
        case 0x4822a8u: goto label_4822a8;
        case 0x4822acu: goto label_4822ac;
        case 0x4822b0u: goto label_4822b0;
        case 0x4822b4u: goto label_4822b4;
        case 0x4822b8u: goto label_4822b8;
        case 0x4822bcu: goto label_4822bc;
        case 0x4822c0u: goto label_4822c0;
        case 0x4822c4u: goto label_4822c4;
        case 0x4822c8u: goto label_4822c8;
        case 0x4822ccu: goto label_4822cc;
        case 0x4822d0u: goto label_4822d0;
        case 0x4822d4u: goto label_4822d4;
        case 0x4822d8u: goto label_4822d8;
        case 0x4822dcu: goto label_4822dc;
        case 0x4822e0u: goto label_4822e0;
        case 0x4822e4u: goto label_4822e4;
        case 0x4822e8u: goto label_4822e8;
        case 0x4822ecu: goto label_4822ec;
        case 0x4822f0u: goto label_4822f0;
        case 0x4822f4u: goto label_4822f4;
        case 0x4822f8u: goto label_4822f8;
        case 0x4822fcu: goto label_4822fc;
        case 0x482300u: goto label_482300;
        case 0x482304u: goto label_482304;
        case 0x482308u: goto label_482308;
        case 0x48230cu: goto label_48230c;
        case 0x482310u: goto label_482310;
        case 0x482314u: goto label_482314;
        case 0x482318u: goto label_482318;
        case 0x48231cu: goto label_48231c;
        case 0x482320u: goto label_482320;
        case 0x482324u: goto label_482324;
        case 0x482328u: goto label_482328;
        case 0x48232cu: goto label_48232c;
        case 0x482330u: goto label_482330;
        case 0x482334u: goto label_482334;
        case 0x482338u: goto label_482338;
        case 0x48233cu: goto label_48233c;
        case 0x482340u: goto label_482340;
        case 0x482344u: goto label_482344;
        case 0x482348u: goto label_482348;
        case 0x48234cu: goto label_48234c;
        case 0x482350u: goto label_482350;
        case 0x482354u: goto label_482354;
        case 0x482358u: goto label_482358;
        case 0x48235cu: goto label_48235c;
        case 0x482360u: goto label_482360;
        case 0x482364u: goto label_482364;
        case 0x482368u: goto label_482368;
        case 0x48236cu: goto label_48236c;
        case 0x482370u: goto label_482370;
        case 0x482374u: goto label_482374;
        case 0x482378u: goto label_482378;
        case 0x48237cu: goto label_48237c;
        case 0x482380u: goto label_482380;
        case 0x482384u: goto label_482384;
        case 0x482388u: goto label_482388;
        case 0x48238cu: goto label_48238c;
        case 0x482390u: goto label_482390;
        case 0x482394u: goto label_482394;
        case 0x482398u: goto label_482398;
        case 0x48239cu: goto label_48239c;
        default: break;
    }

    ctx->pc = 0x4822a0u;

label_4822a0:
    // 0x4822a0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x4822a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_4822a4:
    // 0x4822a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4822a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4822a8:
    // 0x4822a8: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x4822a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
label_4822ac:
    // 0x4822ac: 0xafa50150  sw          $a1, 0x150($sp)
    ctx->pc = 0x4822acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 5));
label_4822b0:
    // 0x4822b0: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x4822b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_4822b4:
    // 0x4822b4: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x4822b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_4822b8:
    // 0x4822b8: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x4822b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_4822bc:
    // 0x4822bc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x4822bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_4822c0:
    // 0x4822c0: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x4822c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_4822c4:
    // 0x4822c4: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x4822c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_4822c8:
    // 0x4822c8: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x4822c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4822cc:
    // 0x4822cc: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x4822ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_4822d0:
    // 0x4822d0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4822d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4822d4:
    // 0x4822d4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4822d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4822d8:
    // 0x4822d8: 0x1020002a  beqz        $at, . + 4 + (0x2A << 2)
label_4822dc:
    if (ctx->pc == 0x4822DCu) {
        ctx->pc = 0x4822E0u;
        goto label_4822e0;
    }
    ctx->pc = 0x4822D8u;
    {
        const bool branch_taken_0x4822d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4822d8) {
            ctx->pc = 0x482384u;
            goto label_482384;
        }
    }
    ctx->pc = 0x4822E0u;
label_4822e0:
    // 0x4822e0: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x4822e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_4822e4:
    // 0x4822e4: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x4822e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_4822e8:
    // 0x4822e8: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x4822e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_4822ec:
    // 0x4822ec: 0xc115ee8  jal         func_457BA0
label_4822f0:
    if (ctx->pc == 0x4822F0u) {
        ctx->pc = 0x4822F4u;
        goto label_4822f4;
    }
    ctx->pc = 0x4822ECu;
    SET_GPR_U32(ctx, 31, 0x4822F4u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x4822ECu, 0x4822F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4822F4u;
label_4822f4:
    // 0x4822f4: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_4822f8:
    if (ctx->pc == 0x4822F8u) {
        ctx->pc = 0x4822FCu;
        goto label_4822fc;
    }
    ctx->pc = 0x4822F4u;
    {
        const bool branch_taken_0x4822f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4822f4) {
            ctx->pc = 0x482384u;
            goto label_482384;
        }
    }
    ctx->pc = 0x4822FCu;
label_4822fc:
    // 0x4822fc: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x4822fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_482300:
    // 0x482300: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
label_482304:
    if (ctx->pc == 0x482304u) {
        ctx->pc = 0x482308u;
        goto label_482308;
    }
    ctx->pc = 0x482300u;
    {
        const bool branch_taken_0x482300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x482300) {
            ctx->pc = 0x482384u;
            goto label_482384;
        }
    }
    ctx->pc = 0x482308u;
label_482308:
    // 0x482308: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x482308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_48230c:
    // 0x48230c: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x48230cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_482310:
    // 0x482310: 0x8fa60134  lw          $a2, 0x134($sp)
    ctx->pc = 0x482310u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_482314:
    // 0x482314: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x482314u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_482318:
    // 0x482318: 0x24e71cf0  addiu       $a3, $a3, 0x1CF0
    ctx->pc = 0x482318u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7408));
label_48231c:
    // 0x48231c: 0x24080032  addiu       $t0, $zero, 0x32
    ctx->pc = 0x48231cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_482320:
    // 0x482320: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x482320u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_482324:
    // 0x482324: 0xc113940  jal         func_44E500
label_482328:
    if (ctx->pc == 0x482328u) {
        ctx->pc = 0x48232Cu;
        goto label_48232c;
    }
    ctx->pc = 0x482324u;
    SET_GPR_U32(ctx, 31, 0x48232Cu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x482324u, 0x48232Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48232Cu;
label_48232c:
    // 0x48232c: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x48232cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_482330:
    // 0x482330: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x482330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_482334:
    // 0x482334: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x482334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_482338:
    // 0x482338: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x482338u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_48233c:
    // 0x48233c: 0x24a51d10  addiu       $a1, $a1, 0x1D10
    ctx->pc = 0x48233cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7440));
label_482340:
    // 0x482340: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x482340u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_482344:
    // 0x482344: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x482344u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_482348:
    // 0x482348: 0xc115c24  jal         func_457090
label_48234c:
    if (ctx->pc == 0x48234Cu) {
        ctx->pc = 0x482350u;
        goto label_482350;
    }
    ctx->pc = 0x482348u;
    SET_GPR_U32(ctx, 31, 0x482350u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x482348u, 0x482350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482350u;
label_482350:
    // 0x482350: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x482350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_482354:
    // 0x482354: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x482354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_482358:
    // 0x482358: 0x40f809  jalr        $v0
label_48235c:
    if (ctx->pc == 0x48235Cu) {
        ctx->pc = 0x482360u;
        goto label_482360;
    }
    ctx->pc = 0x482358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x482360u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x482358u, 0x482360u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x482360u;
label_482360:
    // 0x482360: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x482360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_482364:
    // 0x482364: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_482368:
    if (ctx->pc == 0x482368u) {
        ctx->pc = 0x48236Cu;
        goto label_48236c;
    }
    ctx->pc = 0x482364u;
    {
        const bool branch_taken_0x482364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x482364) {
            ctx->pc = 0x482374u;
            goto label_482374;
        }
    }
    ctx->pc = 0x48236Cu;
label_48236c:
    // 0x48236c: 0xd  break       0
    ctx->pc = 0x48236cu;
    runtime->handleBreak(rdram, ctx);
label_482370:
    // 0x482370: 0x0  nop
    ctx->pc = 0x482370u;
    // NOP
label_482374:
    // 0x482374: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x482374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_482378:
    // 0x482378: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x482378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48237c:
    // 0x48237c: 0xc11392c  jal         func_44E4B0
label_482380:
    if (ctx->pc == 0x482380u) {
        ctx->pc = 0x482384u;
        goto label_482384;
    }
    ctx->pc = 0x48237Cu;
    SET_GPR_U32(ctx, 31, 0x482384u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x48237Cu, 0x482384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482384u;
label_482384:
    // 0x482384: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x482384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_482388:
    // 0x482388: 0x27bd0160  addiu       $sp, $sp, 0x160
    ctx->pc = 0x482388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_48238c:
    // 0x48238c: 0x3e00008  jr          $ra
label_482390:
    if (ctx->pc == 0x482390u) {
        ctx->pc = 0x482394u;
        goto label_482394;
    }
    ctx->pc = 0x48238Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48238Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x482394u;
label_482394:
    // 0x482394: 0x0  nop
    ctx->pc = 0x482394u;
    // NOP
label_482398:
    // 0x482398: 0x0  nop
    ctx->pc = 0x482398u;
    // NOP
label_48239c:
    // 0x48239c: 0x0  nop
    ctx->pc = 0x48239cu;
    // NOP
    ctx->pc = 0x4823a0u;
}

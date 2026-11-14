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

// Function: sub_0048E250
// Address: 0x48e250 - 0x48e350
void sub_0048E250_0x48e250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048E250_0x48e250");
#endif

    switch (ctx->pc) {
        case 0x48e250u: goto label_48e250;
        case 0x48e254u: goto label_48e254;
        case 0x48e258u: goto label_48e258;
        case 0x48e25cu: goto label_48e25c;
        case 0x48e260u: goto label_48e260;
        case 0x48e264u: goto label_48e264;
        case 0x48e268u: goto label_48e268;
        case 0x48e26cu: goto label_48e26c;
        case 0x48e270u: goto label_48e270;
        case 0x48e274u: goto label_48e274;
        case 0x48e278u: goto label_48e278;
        case 0x48e27cu: goto label_48e27c;
        case 0x48e280u: goto label_48e280;
        case 0x48e284u: goto label_48e284;
        case 0x48e288u: goto label_48e288;
        case 0x48e28cu: goto label_48e28c;
        case 0x48e290u: goto label_48e290;
        case 0x48e294u: goto label_48e294;
        case 0x48e298u: goto label_48e298;
        case 0x48e29cu: goto label_48e29c;
        case 0x48e2a0u: goto label_48e2a0;
        case 0x48e2a4u: goto label_48e2a4;
        case 0x48e2a8u: goto label_48e2a8;
        case 0x48e2acu: goto label_48e2ac;
        case 0x48e2b0u: goto label_48e2b0;
        case 0x48e2b4u: goto label_48e2b4;
        case 0x48e2b8u: goto label_48e2b8;
        case 0x48e2bcu: goto label_48e2bc;
        case 0x48e2c0u: goto label_48e2c0;
        case 0x48e2c4u: goto label_48e2c4;
        case 0x48e2c8u: goto label_48e2c8;
        case 0x48e2ccu: goto label_48e2cc;
        case 0x48e2d0u: goto label_48e2d0;
        case 0x48e2d4u: goto label_48e2d4;
        case 0x48e2d8u: goto label_48e2d8;
        case 0x48e2dcu: goto label_48e2dc;
        case 0x48e2e0u: goto label_48e2e0;
        case 0x48e2e4u: goto label_48e2e4;
        case 0x48e2e8u: goto label_48e2e8;
        case 0x48e2ecu: goto label_48e2ec;
        case 0x48e2f0u: goto label_48e2f0;
        case 0x48e2f4u: goto label_48e2f4;
        case 0x48e2f8u: goto label_48e2f8;
        case 0x48e2fcu: goto label_48e2fc;
        case 0x48e300u: goto label_48e300;
        case 0x48e304u: goto label_48e304;
        case 0x48e308u: goto label_48e308;
        case 0x48e30cu: goto label_48e30c;
        case 0x48e310u: goto label_48e310;
        case 0x48e314u: goto label_48e314;
        case 0x48e318u: goto label_48e318;
        case 0x48e31cu: goto label_48e31c;
        case 0x48e320u: goto label_48e320;
        case 0x48e324u: goto label_48e324;
        case 0x48e328u: goto label_48e328;
        case 0x48e32cu: goto label_48e32c;
        case 0x48e330u: goto label_48e330;
        case 0x48e334u: goto label_48e334;
        case 0x48e338u: goto label_48e338;
        case 0x48e33cu: goto label_48e33c;
        case 0x48e340u: goto label_48e340;
        case 0x48e344u: goto label_48e344;
        case 0x48e348u: goto label_48e348;
        case 0x48e34cu: goto label_48e34c;
        default: break;
    }

    ctx->pc = 0x48e250u;

label_48e250:
    // 0x48e250: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x48e250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_48e254:
    // 0x48e254: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48e254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_48e258:
    // 0x48e258: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x48e258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
label_48e25c:
    // 0x48e25c: 0xafa50150  sw          $a1, 0x150($sp)
    ctx->pc = 0x48e25cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 5));
label_48e260:
    // 0x48e260: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x48e260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_48e264:
    // 0x48e264: 0xc042514  jal         func_109450
label_48e268:
    if (ctx->pc == 0x48E268u) {
        ctx->pc = 0x48E26Cu;
        goto label_48e26c;
    }
    ctx->pc = 0x48E264u;
    SET_GPR_U32(ctx, 31, 0x48E26Cu);
    ctx->pc = 0x109450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109450u, 0x48E264u, 0x48E26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E26Cu;
label_48e26c:
    // 0x48e26c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x48e26cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_48e270:
    // 0x48e270: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x48e270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_48e274:
    // 0x48e274: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_48e278:
    if (ctx->pc == 0x48E278u) {
        ctx->pc = 0x48E27Cu;
        goto label_48e27c;
    }
    ctx->pc = 0x48E274u;
    {
        const bool branch_taken_0x48e274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48e274) {
            ctx->pc = 0x48E324u;
            goto label_48e324;
        }
    }
    ctx->pc = 0x48E27Cu;
label_48e27c:
    // 0x48e27c: 0x8f82b684  lw          $v0, -0x497C($gp)
    ctx->pc = 0x48e27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948484)));
label_48e280:
    // 0x48e280: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_48e284:
    if (ctx->pc == 0x48E284u) {
        ctx->pc = 0x48E288u;
        goto label_48e288;
    }
    ctx->pc = 0x48E280u;
    {
        const bool branch_taken_0x48e280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48e280) {
            ctx->pc = 0x48E324u;
            goto label_48e324;
        }
    }
    ctx->pc = 0x48E288u;
label_48e288:
    // 0x48e288: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x48e288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_48e28c:
    // 0x48e28c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x48e28cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_48e290:
    // 0x48e290: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x48e290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_48e294:
    // 0x48e294: 0xc115ee8  jal         func_457BA0
label_48e298:
    if (ctx->pc == 0x48E298u) {
        ctx->pc = 0x48E29Cu;
        goto label_48e29c;
    }
    ctx->pc = 0x48E294u;
    SET_GPR_U32(ctx, 31, 0x48E29Cu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x48E294u, 0x48E29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E29Cu;
label_48e29c:
    // 0x48e29c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_48e2a0:
    if (ctx->pc == 0x48E2A0u) {
        ctx->pc = 0x48E2A4u;
        goto label_48e2a4;
    }
    ctx->pc = 0x48E29Cu;
    {
        const bool branch_taken_0x48e29c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48e29c) {
            ctx->pc = 0x48E324u;
            goto label_48e324;
        }
    }
    ctx->pc = 0x48E2A4u;
label_48e2a4:
    // 0x48e2a4: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x48e2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_48e2a8:
    // 0x48e2a8: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_48e2ac:
    if (ctx->pc == 0x48E2ACu) {
        ctx->pc = 0x48E2B0u;
        goto label_48e2b0;
    }
    ctx->pc = 0x48E2A8u;
    {
        const bool branch_taken_0x48e2a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48e2a8) {
            ctx->pc = 0x48E324u;
            goto label_48e324;
        }
    }
    ctx->pc = 0x48E2B0u;
label_48e2b0:
    // 0x48e2b0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x48e2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_48e2b4:
    // 0x48e2b4: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x48e2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_48e2b8:
    // 0x48e2b8: 0x8fa60134  lw          $a2, 0x134($sp)
    ctx->pc = 0x48e2b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_48e2bc:
    // 0x48e2bc: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x48e2bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_48e2c0:
    // 0x48e2c0: 0x24e74d80  addiu       $a3, $a3, 0x4D80
    ctx->pc = 0x48e2c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19840));
label_48e2c4:
    // 0x48e2c4: 0x2408003e  addiu       $t0, $zero, 0x3E
    ctx->pc = 0x48e2c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
label_48e2c8:
    // 0x48e2c8: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x48e2c8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_48e2cc:
    // 0x48e2cc: 0x25294da0  addiu       $t1, $t1, 0x4DA0
    ctx->pc = 0x48e2ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 19872));
label_48e2d0:
    // 0x48e2d0: 0xc113940  jal         func_44E500
label_48e2d4:
    if (ctx->pc == 0x48E2D4u) {
        ctx->pc = 0x48E2D8u;
        goto label_48e2d8;
    }
    ctx->pc = 0x48E2D0u;
    SET_GPR_U32(ctx, 31, 0x48E2D8u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x48E2D0u, 0x48E2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E2D8u;
label_48e2d8:
    // 0x48e2d8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x48e2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_48e2dc:
    // 0x48e2dc: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x48e2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_48e2e0:
    // 0x48e2e0: 0x24a54dc0  addiu       $a1, $a1, 0x4DC0
    ctx->pc = 0x48e2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19904));
label_48e2e4:
    // 0x48e2e4: 0xc115c24  jal         func_457090
label_48e2e8:
    if (ctx->pc == 0x48E2E8u) {
        ctx->pc = 0x48E2ECu;
        goto label_48e2ec;
    }
    ctx->pc = 0x48E2E4u;
    SET_GPR_U32(ctx, 31, 0x48E2ECu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x48E2E4u, 0x48E2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E2ECu;
label_48e2ec:
    // 0x48e2ec: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x48e2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_48e2f0:
    // 0x48e2f0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x48e2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_48e2f4:
    // 0x48e2f4: 0x40f809  jalr        $v0
label_48e2f8:
    if (ctx->pc == 0x48E2F8u) {
        ctx->pc = 0x48E2FCu;
        goto label_48e2fc;
    }
    ctx->pc = 0x48E2F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x48E2FCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48E2F4u, 0x48E2FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48E2FCu;
label_48e2fc:
    // 0x48e2fc: 0xaf82b684  sw          $v0, -0x497C($gp)
    ctx->pc = 0x48e2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948484), GPR_U32(ctx, 2));
label_48e300:
    // 0x48e300: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48e300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_48e304:
    // 0x48e304: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_48e308:
    if (ctx->pc == 0x48E308u) {
        ctx->pc = 0x48E30Cu;
        goto label_48e30c;
    }
    ctx->pc = 0x48E304u;
    {
        const bool branch_taken_0x48e304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48e304) {
            ctx->pc = 0x48E314u;
            goto label_48e314;
        }
    }
    ctx->pc = 0x48E30Cu;
label_48e30c:
    // 0x48e30c: 0xd  break       0
    ctx->pc = 0x48e30cu;
    runtime->handleBreak(rdram, ctx);
label_48e310:
    // 0x48e310: 0x0  nop
    ctx->pc = 0x48e310u;
    // NOP
label_48e314:
    // 0x48e314: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x48e314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_48e318:
    // 0x48e318: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48e318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48e31c:
    // 0x48e31c: 0xc11392c  jal         func_44E4B0
label_48e320:
    if (ctx->pc == 0x48E320u) {
        ctx->pc = 0x48E324u;
        goto label_48e324;
    }
    ctx->pc = 0x48E31Cu;
    SET_GPR_U32(ctx, 31, 0x48E324u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x48E31Cu, 0x48E324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E324u;
label_48e324:
    // 0x48e324: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x48e324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_48e328:
    // 0x48e328: 0x8fa50150  lw          $a1, 0x150($sp)
    ctx->pc = 0x48e328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_48e32c:
    // 0x48e32c: 0xc0430e4  jal         func_10C390
label_48e330:
    if (ctx->pc == 0x48E330u) {
        ctx->pc = 0x48E334u;
        goto label_48e334;
    }
    ctx->pc = 0x48E32Cu;
    SET_GPR_U32(ctx, 31, 0x48E334u);
    ctx->pc = 0x10C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C390u, 0x48E32Cu, 0x48E334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E334u;
label_48e334:
    // 0x48e334: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48e334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_48e338:
    // 0x48e338: 0x27bd0160  addiu       $sp, $sp, 0x160
    ctx->pc = 0x48e338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_48e33c:
    // 0x48e33c: 0x3e00008  jr          $ra
label_48e340:
    if (ctx->pc == 0x48E340u) {
        ctx->pc = 0x48E344u;
        goto label_48e344;
    }
    ctx->pc = 0x48E33Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48E33Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48E344u;
label_48e344:
    // 0x48e344: 0x0  nop
    ctx->pc = 0x48e344u;
    // NOP
label_48e348:
    // 0x48e348: 0x0  nop
    ctx->pc = 0x48e348u;
    // NOP
label_48e34c:
    // 0x48e34c: 0x0  nop
    ctx->pc = 0x48e34cu;
    // NOP
    ctx->pc = 0x48e350u;
}

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

// Function: sub_00236480
// Address: 0x236480 - 0x236550
void sub_00236480_0x236480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236480_0x236480");
#endif

    switch (ctx->pc) {
        case 0x236480u: goto label_236480;
        case 0x236484u: goto label_236484;
        case 0x236488u: goto label_236488;
        case 0x23648cu: goto label_23648c;
        case 0x236490u: goto label_236490;
        case 0x236494u: goto label_236494;
        case 0x236498u: goto label_236498;
        case 0x23649cu: goto label_23649c;
        case 0x2364a0u: goto label_2364a0;
        case 0x2364a4u: goto label_2364a4;
        case 0x2364a8u: goto label_2364a8;
        case 0x2364acu: goto label_2364ac;
        case 0x2364b0u: goto label_2364b0;
        case 0x2364b4u: goto label_2364b4;
        case 0x2364b8u: goto label_2364b8;
        case 0x2364bcu: goto label_2364bc;
        case 0x2364c0u: goto label_2364c0;
        case 0x2364c4u: goto label_2364c4;
        case 0x2364c8u: goto label_2364c8;
        case 0x2364ccu: goto label_2364cc;
        case 0x2364d0u: goto label_2364d0;
        case 0x2364d4u: goto label_2364d4;
        case 0x2364d8u: goto label_2364d8;
        case 0x2364dcu: goto label_2364dc;
        case 0x2364e0u: goto label_2364e0;
        case 0x2364e4u: goto label_2364e4;
        case 0x2364e8u: goto label_2364e8;
        case 0x2364ecu: goto label_2364ec;
        case 0x2364f0u: goto label_2364f0;
        case 0x2364f4u: goto label_2364f4;
        case 0x2364f8u: goto label_2364f8;
        case 0x2364fcu: goto label_2364fc;
        case 0x236500u: goto label_236500;
        case 0x236504u: goto label_236504;
        case 0x236508u: goto label_236508;
        case 0x23650cu: goto label_23650c;
        case 0x236510u: goto label_236510;
        case 0x236514u: goto label_236514;
        case 0x236518u: goto label_236518;
        case 0x23651cu: goto label_23651c;
        case 0x236520u: goto label_236520;
        case 0x236524u: goto label_236524;
        case 0x236528u: goto label_236528;
        case 0x23652cu: goto label_23652c;
        case 0x236530u: goto label_236530;
        case 0x236534u: goto label_236534;
        case 0x236538u: goto label_236538;
        case 0x23653cu: goto label_23653c;
        case 0x236540u: goto label_236540;
        case 0x236544u: goto label_236544;
        case 0x236548u: goto label_236548;
        case 0x23654cu: goto label_23654c;
        default: break;
    }

    ctx->pc = 0x236480u;

label_236480:
    // 0x236480: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x236480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_236484:
    // 0x236484: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x236484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_236488:
    // 0x236488: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x236488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_23648c:
    // 0x23648c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23648cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_236490:
    // 0x236490: 0x8c44004c  lw          $a0, 0x4C($v0)
    ctx->pc = 0x236490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_236494:
    // 0x236494: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x236494u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_236498:
    // 0x236498: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x236498u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_23649c:
    // 0x23649c: 0x320f809  jalr        $t9
label_2364a0:
    if (ctx->pc == 0x2364A0u) {
        ctx->pc = 0x2364A4u;
        goto label_2364a4;
    }
    ctx->pc = 0x23649Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2364A4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23649Cu, 0x2364A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2364A4u;
label_2364a4:
    // 0x2364a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2364a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2364a8:
    // 0x2364a8: 0x8c44004c  lw          $a0, 0x4C($v0)
    ctx->pc = 0x2364a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_2364ac:
    // 0x2364ac: 0xc047eb0  jal         func_11FAC0
label_2364b0:
    if (ctx->pc == 0x2364B0u) {
        ctx->pc = 0x2364B4u;
        goto label_2364b4;
    }
    ctx->pc = 0x2364ACu;
    SET_GPR_U32(ctx, 31, 0x2364B4u);
    ctx->pc = 0x11FAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAC0u, 0x2364ACu, 0x2364B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2364B4u;
label_2364b4:
    // 0x2364b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2364b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2364b8:
    // 0x2364b8: 0x27859d28  addiu       $a1, $gp, -0x62D8
    ctx->pc = 0x2364b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941992));
label_2364bc:
    // 0x2364bc: 0xc08d60c  jal         func_235830
label_2364c0:
    if (ctx->pc == 0x2364C0u) {
        ctx->pc = 0x2364C4u;
        goto label_2364c4;
    }
    ctx->pc = 0x2364BCu;
    SET_GPR_U32(ctx, 31, 0x2364C4u);
    ctx->pc = 0x235830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235830u, 0x2364BCu, 0x2364C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2364C4u;
label_2364c4:
    // 0x2364c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2364c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2364c8:
    // 0x2364c8: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x2364c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2364cc:
    // 0x2364cc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2364ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2364d0:
    // 0x2364d0: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2364d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2364d4:
    // 0x2364d4: 0x320f809  jalr        $t9
label_2364d8:
    if (ctx->pc == 0x2364D8u) {
        ctx->pc = 0x2364DCu;
        goto label_2364dc;
    }
    ctx->pc = 0x2364D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2364DCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2364D4u, 0x2364DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2364DCu;
label_2364dc:
    // 0x2364dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2364dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2364e0:
    // 0x2364e0: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x2364e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2364e4:
    // 0x2364e4: 0x27859d30  addiu       $a1, $gp, -0x62D0
    ctx->pc = 0x2364e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942000));
label_2364e8:
    // 0x2364e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2364e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2364ec:
    // 0x2364ec: 0xc047314  jal         func_11CC50
label_2364f0:
    if (ctx->pc == 0x2364F0u) {
        ctx->pc = 0x2364F4u;
        goto label_2364f4;
    }
    ctx->pc = 0x2364ECu;
    SET_GPR_U32(ctx, 31, 0x2364F4u);
    ctx->pc = 0x11CC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CC50u, 0x2364ECu, 0x2364F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2364F4u;
label_2364f4:
    // 0x2364f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2364f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2364f8:
    // 0x2364f8: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x2364f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2364fc:
    // 0x2364fc: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2364fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_236500:
    // 0x236500: 0x24a5b9c0  addiu       $a1, $a1, -0x4640
    ctx->pc = 0x236500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949312));
label_236504:
    // 0x236504: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x236504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_236508:
    // 0x236508: 0xc041b24  jal         func_106C90
label_23650c:
    if (ctx->pc == 0x23650Cu) {
        ctx->pc = 0x236510u;
        goto label_236510;
    }
    ctx->pc = 0x236508u;
    SET_GPR_U32(ctx, 31, 0x236510u);
    ctx->pc = 0x106C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C90u, 0x236508u, 0x236510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236510u;
label_236510:
    // 0x236510: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x236510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_236514:
    // 0x236514: 0x8c440050  lw          $a0, 0x50($v0)
    ctx->pc = 0x236514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_236518:
    // 0x236518: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x236518u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23651c:
    // 0x23651c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x23651cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_236520:
    // 0x236520: 0x320f809  jalr        $t9
label_236524:
    if (ctx->pc == 0x236524u) {
        ctx->pc = 0x236528u;
        goto label_236528;
    }
    ctx->pc = 0x236520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x236528u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236520u, 0x236528u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x236528u;
label_236528:
    // 0x236528: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x236528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_23652c:
    // 0x23652c: 0x8c440050  lw          $a0, 0x50($v0)
    ctx->pc = 0x23652cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_236530:
    // 0x236530: 0xc08d6e8  jal         func_235BA0
label_236534:
    if (ctx->pc == 0x236534u) {
        ctx->pc = 0x236538u;
        goto label_236538;
    }
    ctx->pc = 0x236530u;
    SET_GPR_U32(ctx, 31, 0x236538u);
    ctx->pc = 0x235BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235BA0u, 0x236530u, 0x236538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236538u;
label_236538:
    // 0x236538: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x236538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23653c:
    // 0x23653c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x23653cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_236540:
    // 0x236540: 0x3e00008  jr          $ra
label_236544:
    if (ctx->pc == 0x236544u) {
        ctx->pc = 0x236548u;
        goto label_236548;
    }
    ctx->pc = 0x236540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236548u;
label_236548:
    // 0x236548: 0x0  nop
    ctx->pc = 0x236548u;
    // NOP
label_23654c:
    // 0x23654c: 0x0  nop
    ctx->pc = 0x23654cu;
    // NOP
    ctx->pc = 0x236550u;
}

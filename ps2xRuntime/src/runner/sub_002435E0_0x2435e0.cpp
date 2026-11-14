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

// Function: sub_002435E0
// Address: 0x2435e0 - 0x243710
void sub_002435E0_0x2435e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002435E0_0x2435e0");
#endif

    switch (ctx->pc) {
        case 0x243658u: goto label_243658;
        case 0x243688u: goto label_243688;
        case 0x243694u: goto label_243694;
        case 0x2436d0u: goto label_2436d0;
        case 0x243700u: goto label_243700;
        default: break;
    }

    ctx->pc = 0x2435e0u;

    // 0x2435e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2435e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2435e4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2435e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2435e8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x2435e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x2435ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2435ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2435f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2435f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2435f4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2435f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2435f8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2435f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2435fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2435fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243600: 0x90430004  lbu         $v1, 0x4($v0)
    ctx->pc = 0x243600u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x243604: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x243604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243608: 0xa0430004  sb          $v1, 0x4($v0)
    ctx->pc = 0x243608u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x24360c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x24360cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243610: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x243610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x243614: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x243614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243618: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x243618u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x24361c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x24361cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243620: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x243620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x243624: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x243624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243628: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x243628u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x24362c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x24362cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243630: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x243630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x243634: 0x3e00008  jr          $ra
    ctx->pc = 0x243634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24363Cu;
    // 0x24363c: 0x0  nop
    ctx->pc = 0x24363cu;
    // NOP
    // 0x243640: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x243640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x243644: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x243644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x243648: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x243648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x24364c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x24364cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243650: 0xc0911a4  jal         func_244690
    ctx->pc = 0x243650u;
    SET_GPR_U32(ctx, 31, 0x243658u);
    ctx->pc = 0x244690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244690u, 0x243650u, 0x243658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243658u;
label_243658:
    // 0x243658: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x243658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24365c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x24365cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x243660: 0x3e00008  jr          $ra
    ctx->pc = 0x243660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x243668u;
    // 0x243668: 0x0  nop
    ctx->pc = 0x243668u;
    // NOP
    // 0x24366c: 0x0  nop
    ctx->pc = 0x24366cu;
    // NOP
    // 0x243670: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x243670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x243674: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x243674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x243678: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x243678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x24367c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x24367cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243680: 0xc090cb4  jal         func_2432D0
    ctx->pc = 0x243680u;
    SET_GPR_U32(ctx, 31, 0x243688u);
    ctx->pc = 0x2432D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2432D0u, 0x243680u, 0x243688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243688u;
label_243688:
    // 0x243688: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x243688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24368c: 0xc0911bc  jal         func_2446F0
    ctx->pc = 0x24368Cu;
    SET_GPR_U32(ctx, 31, 0x243694u);
    ctx->pc = 0x2446F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2446F0u, 0x24368Cu, 0x243694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243694u;
label_243694:
    // 0x243694: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x243694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243698: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x243698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24369c: 0x3e00008  jr          $ra
    ctx->pc = 0x24369Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24369Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2436A4u;
    // 0x2436a4: 0x0  nop
    ctx->pc = 0x2436a4u;
    // NOP
    // 0x2436a8: 0x0  nop
    ctx->pc = 0x2436a8u;
    // NOP
    // 0x2436ac: 0x0  nop
    ctx->pc = 0x2436acu;
    // NOP
    // 0x2436b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2436b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2436b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2436b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2436b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2436b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2436bc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2436bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2436c0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2436c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2436c4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2436c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2436c8: 0xc0911dc  jal         func_244770
    ctx->pc = 0x2436C8u;
    SET_GPR_U32(ctx, 31, 0x2436D0u);
    ctx->pc = 0x244770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244770u, 0x2436C8u, 0x2436D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2436D0u;
label_2436d0:
    // 0x2436d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2436d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2436d4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2436d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2436d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2436D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2436D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2436E0u;
    // 0x2436e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2436e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2436e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2436e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2436e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2436e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2436ec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2436ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2436f0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2436f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2436f4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2436f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2436f8: 0xc0911ec  jal         func_2447B0
    ctx->pc = 0x2436F8u;
    SET_GPR_U32(ctx, 31, 0x243700u);
    ctx->pc = 0x2447B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2447B0u, 0x2436F8u, 0x243700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243700u;
label_243700:
    // 0x243700: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x243700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243704: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x243704u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x243708: 0x3e00008  jr          $ra
    ctx->pc = 0x243708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x243710u;
}

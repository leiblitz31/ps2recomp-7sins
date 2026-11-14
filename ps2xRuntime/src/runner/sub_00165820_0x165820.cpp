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

// Function: sub_00165820
// Address: 0x165820 - 0x165900
void sub_00165820_0x165820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165820_0x165820");
#endif

    switch (ctx->pc) {
        case 0x165858u: goto label_165858;
        case 0x16586cu: goto label_16586c;
        case 0x165880u: goto label_165880;
        case 0x16589cu: goto label_16589c;
        case 0x1658acu: goto label_1658ac;
        case 0x1658c8u: goto label_1658c8;
        case 0x1658e4u: goto label_1658e4;
        default: break;
    }

    ctx->pc = 0x165820u;

    // 0x165820: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x165820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x165824: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x165824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x165828: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x165828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x16582c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x16582cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x165830: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x165830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x165834: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x165834u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x165838: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x165838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x16583c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x16583cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x165840: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x165840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x165844: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x165844u;
    {
        const bool branch_taken_0x165844 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x165844) {
            ctx->pc = 0x1658B4u;
            goto label_1658b4;
        }
    }
    ctx->pc = 0x16584Cu;
    // 0x16584c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x16584cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x165850: 0xc0495d4  jal         func_125750
    ctx->pc = 0x165850u;
    SET_GPR_U32(ctx, 31, 0x165858u);
    ctx->pc = 0x125750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125750u, 0x165850u, 0x165858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165858u;
label_165858:
    // 0x165858: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x165858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x16585c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x16585cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x165860: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x165860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x165864: 0xc08e514  jal         func_239450
    ctx->pc = 0x165864u;
    SET_GPR_U32(ctx, 31, 0x16586Cu);
    ctx->pc = 0x239450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239450u, 0x165864u, 0x16586Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16586Cu;
label_16586c:
    // 0x16586c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x16586cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165870: 0x2444008c  addiu       $a0, $v0, 0x8C
    ctx->pc = 0x165870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x165874: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x165874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x165878: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x165878u;
    SET_GPR_U32(ctx, 31, 0x165880u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x165878u, 0x165880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165880u;
label_165880:
    // 0x165880: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x165880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x165884: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x165884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165888: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x165888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x16588c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x16588cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x165890: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x165890u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165894: 0xc08c378  jal         func_230DE0
    ctx->pc = 0x165894u;
    SET_GPR_U32(ctx, 31, 0x16589Cu);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x165894u, 0x16589Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16589Cu;
label_16589c:
    // 0x16589c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x16589cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1658a0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1658a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1658a4: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x1658A4u;
    SET_GPR_U32(ctx, 31, 0x1658ACu);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x1658A4u, 0x1658ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1658ACu;
label_1658ac:
    // 0x1658ac: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1658ACu;
    {
        const bool branch_taken_0x1658ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1658ac) {
            ctx->pc = 0x1658E4u;
            goto label_1658e4;
        }
    }
    ctx->pc = 0x1658B4u;
label_1658b4:
    // 0x1658b4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1658b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1658b8: 0x2444008c  addiu       $a0, $v0, 0x8C
    ctx->pc = 0x1658b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x1658bc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1658bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1658c0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1658C0u;
    SET_GPR_U32(ctx, 31, 0x1658C8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1658C0u, 0x1658C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1658C8u;
label_1658c8:
    // 0x1658c8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1658c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1658cc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1658ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1658d0: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1658d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1658d4: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x1658d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1658d8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1658d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1658dc: 0xc08c32c  jal         func_230CB0
    ctx->pc = 0x1658DCu;
    SET_GPR_U32(ctx, 31, 0x1658E4u);
    ctx->pc = 0x230CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230CB0u, 0x1658DCu, 0x1658E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1658E4u;
label_1658e4:
    // 0x1658e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1658e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1658e8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1658e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1658ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1658ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1658ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1658F4u;
    // 0x1658f4: 0x0  nop
    ctx->pc = 0x1658f4u;
    // NOP
    // 0x1658f8: 0x0  nop
    ctx->pc = 0x1658f8u;
    // NOP
    // 0x1658fc: 0x0  nop
    ctx->pc = 0x1658fcu;
    // NOP
    ctx->pc = 0x165900u;
}

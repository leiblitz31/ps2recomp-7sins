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

// Function: sub_00139560
// Address: 0x139560 - 0x139630
void sub_00139560_0x139560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139560_0x139560");
#endif

    switch (ctx->pc) {
        case 0x139578u: goto label_139578;
        case 0x1395a0u: goto label_1395a0;
        case 0x1395c4u: goto label_1395c4;
        case 0x1395d0u: goto label_1395d0;
        case 0x1395e4u: goto label_1395e4;
        case 0x1395f4u: goto label_1395f4;
        case 0x139604u: goto label_139604;
        case 0x139610u: goto label_139610;
        default: break;
    }

    ctx->pc = 0x139560u;

    // 0x139560: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x139560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x139564: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x139564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x139568: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x139568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x13956c: 0x8f84ba74  lw          $a0, -0x458C($gp)
    ctx->pc = 0x13956cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949492)));
    // 0x139570: 0xc04e398  jal         func_138E60
    ctx->pc = 0x139570u;
    SET_GPR_U32(ctx, 31, 0x139578u);
    ctx->pc = 0x138E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138E60u, 0x139570u, 0x139578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139578u;
label_139578:
    // 0x139578: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x139578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13957c: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x13957cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x139580: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x139580u;
    {
        const bool branch_taken_0x139580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x139580) {
            ctx->pc = 0x1395A0u;
            goto label_1395a0;
        }
    }
    ctx->pc = 0x139588u;
    // 0x139588: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x139588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13958c: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x13958cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x139590: 0x8c450064  lw          $a1, 0x64($v0)
    ctx->pc = 0x139590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x139594: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x139594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139598: 0xc08f71c  jal         func_23DC70
    ctx->pc = 0x139598u;
    SET_GPR_U32(ctx, 31, 0x1395A0u);
    ctx->pc = 0x23DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DC70u, 0x139598u, 0x1395A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1395A0u;
label_1395a0:
    // 0x1395a0: 0x8f82ba70  lw          $v0, -0x4590($gp)
    ctx->pc = 0x1395a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949488)));
    // 0x1395a4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1395A4u;
    {
        const bool branch_taken_0x1395a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1395a4) {
            ctx->pc = 0x1395D4u;
            goto label_1395d4;
        }
    }
    ctx->pc = 0x1395ACu;
    // 0x1395ac: 0x8f82ba70  lw          $v0, -0x4590($gp)
    ctx->pc = 0x1395acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949488)));
    // 0x1395b0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1395B0u;
    {
        const bool branch_taken_0x1395b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1395b0) {
            ctx->pc = 0x1395D4u;
            goto label_1395d4;
        }
    }
    ctx->pc = 0x1395B8u;
    // 0x1395b8: 0x8f84ba70  lw          $a0, -0x4590($gp)
    ctx->pc = 0x1395b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949488)));
    // 0x1395bc: 0xc04e364  jal         func_138D90
    ctx->pc = 0x1395BCu;
    SET_GPR_U32(ctx, 31, 0x1395C4u);
    ctx->pc = 0x138D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138D90u, 0x1395BCu, 0x1395C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1395C4u;
label_1395c4:
    // 0x1395c4: 0x8f84ba70  lw          $a0, -0x4590($gp)
    ctx->pc = 0x1395c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949488)));
    // 0x1395c8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x1395C8u;
    SET_GPR_U32(ctx, 31, 0x1395D0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x1395C8u, 0x1395D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1395D0u;
label_1395d0:
    // 0x1395d0: 0xaf80ba70  sw          $zero, -0x4590($gp)
    ctx->pc = 0x1395d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949488), GPR_U32(ctx, 0));
label_1395d4:
    // 0x1395d4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1395d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1395d8: 0x2444006c  addiu       $a0, $v0, 0x6C
    ctx->pc = 0x1395d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
    // 0x1395dc: 0xc04e58c  jal         func_139630
    ctx->pc = 0x1395DCu;
    SET_GPR_U32(ctx, 31, 0x1395E4u);
    ctx->pc = 0x139630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139630u, 0x1395DCu, 0x1395E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1395E4u;
label_1395e4:
    // 0x1395e4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1395e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1395e8: 0x24440080  addiu       $a0, $v0, 0x80
    ctx->pc = 0x1395e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1395ec: 0xc04e58c  jal         func_139630
    ctx->pc = 0x1395ECu;
    SET_GPR_U32(ctx, 31, 0x1395F4u);
    ctx->pc = 0x139630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139630u, 0x1395ECu, 0x1395F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1395F4u;
label_1395f4:
    // 0x1395f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1395f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1395f8: 0x24440094  addiu       $a0, $v0, 0x94
    ctx->pc = 0x1395f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 148));
    // 0x1395fc: 0xc04e58c  jal         func_139630
    ctx->pc = 0x1395FCu;
    SET_GPR_U32(ctx, 31, 0x139604u);
    ctx->pc = 0x139630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139630u, 0x1395FCu, 0x139604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139604u;
label_139604:
    // 0x139604: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x139604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139608: 0xc04eee8  jal         func_13BBA0
    ctx->pc = 0x139608u;
    SET_GPR_U32(ctx, 31, 0x139610u);
    ctx->pc = 0x13BBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BBA0u, 0x139608u, 0x139610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139610u;
label_139610:
    // 0x139610: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x139610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139614: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x139614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139618: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x139618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13961c: 0x3e00008  jr          $ra
    ctx->pc = 0x13961Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13961Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139624u;
    // 0x139624: 0x0  nop
    ctx->pc = 0x139624u;
    // NOP
    // 0x139628: 0x0  nop
    ctx->pc = 0x139628u;
    // NOP
    // 0x13962c: 0x0  nop
    ctx->pc = 0x13962cu;
    // NOP
    ctx->pc = 0x139630u;
}

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

// Function: sub_001BD2F0
// Address: 0x1bd2f0 - 0x1bd370
void sub_001BD2F0_0x1bd2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BD2F0_0x1bd2f0");
#endif

    switch (ctx->pc) {
        case 0x1bd314u: goto label_1bd314;
        case 0x1bd358u: goto label_1bd358;
        default: break;
    }

    ctx->pc = 0x1bd2f0u;

    // 0x1bd2f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bd2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bd2f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bd2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bd2f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1bd2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1bd2fc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1bd2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bd300: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1bd300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bd304: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1bd304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bd308: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1bd308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1bd30c: 0xc06f404  jal         func_1BD010
    ctx->pc = 0x1BD30Cu;
    SET_GPR_U32(ctx, 31, 0x1BD314u);
    ctx->pc = 0x1BD010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD010u, 0x1BD30Cu, 0x1BD314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD314u;
label_1bd314:
    // 0x1bd314: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1bd314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bd318: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1bd318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bd31c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1bd31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bd320: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1bd320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1bd324: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1bd324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bd328: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bd328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bd32c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1bd32cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bd330: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1bd330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1bd334: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x1bd334u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1bd338: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BD338u;
    {
        const bool branch_taken_0x1bd338 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1bd338) {
            ctx->pc = 0x1BD348u;
            goto label_1bd348;
        }
    }
    ctx->pc = 0x1BD340u;
    // 0x1bd340: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x1bd340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1bd344: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x1bd344u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_1bd348:
    // 0x1bd348: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1bd348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1bd34c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1bd34cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bd350: 0xc070ddc  jal         func_1C3770
    ctx->pc = 0x1BD350u;
    SET_GPR_U32(ctx, 31, 0x1BD358u);
    ctx->pc = 0x1C3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3770u, 0x1BD350u, 0x1BD358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD358u;
label_1bd358:
    // 0x1bd358: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bd358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bd35c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1bd35cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1bd360: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BD360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BD368u;
    // 0x1bd368: 0x0  nop
    ctx->pc = 0x1bd368u;
    // NOP
    // 0x1bd36c: 0x0  nop
    ctx->pc = 0x1bd36cu;
    // NOP
    ctx->pc = 0x1bd370u;
}

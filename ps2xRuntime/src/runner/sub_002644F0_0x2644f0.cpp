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

// Function: sub_002644F0
// Address: 0x2644f0 - 0x264580
void sub_002644F0_0x2644f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002644F0_0x2644f0");
#endif

    switch (ctx->pc) {
        case 0x26452cu: goto label_26452c;
        case 0x26456cu: goto label_26456c;
        default: break;
    }

    ctx->pc = 0x2644f0u;

    // 0x2644f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2644f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2644f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2644f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2644f8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2644f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2644fc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2644fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x264500: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x264500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x264504: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x264504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x264508: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x264508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26450c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x26450cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x264510: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x264510u;
    {
        const bool branch_taken_0x264510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x264510) {
            ctx->pc = 0x264544u;
            goto label_264544;
        }
    }
    ctx->pc = 0x264518u;
    // 0x264518: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x264518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26451c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x26451cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x264520: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x264520u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x264524: 0xc099204  jal         func_264810
    ctx->pc = 0x264524u;
    SET_GPR_U32(ctx, 31, 0x26452Cu);
    ctx->pc = 0x264810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264810u, 0x264524u, 0x26452Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26452Cu;
label_26452c:
    // 0x26452c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x26452cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x264530: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x264530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x264534: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x264534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x264538: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x264538u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x26453c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x26453Cu;
    {
        const bool branch_taken_0x26453c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26453c) {
            ctx->pc = 0x26456Cu;
            goto label_26456c;
        }
    }
    ctx->pc = 0x264544u;
label_264544:
    // 0x264544: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x264544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x264548: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x264548u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x26454c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x26454cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x264550: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x264550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x264554: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x264554u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x264558: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x264558u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x26455c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x26455cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x264560: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x264560u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x264564: 0xc099160  jal         func_264580
    ctx->pc = 0x264564u;
    SET_GPR_U32(ctx, 31, 0x26456Cu);
    ctx->pc = 0x264580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264580u, 0x264564u, 0x26456Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26456Cu;
label_26456c:
    // 0x26456c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26456cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x264570: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x264570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x264574: 0x3e00008  jr          $ra
    ctx->pc = 0x264574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26457Cu;
    // 0x26457c: 0x0  nop
    ctx->pc = 0x26457cu;
    // NOP
    ctx->pc = 0x264580u;
}

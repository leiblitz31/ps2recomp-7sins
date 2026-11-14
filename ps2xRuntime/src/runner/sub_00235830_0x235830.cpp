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

// Function: sub_00235830
// Address: 0x235830 - 0x2358c0
void sub_00235830_0x235830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235830_0x235830");
#endif

    switch (ctx->pc) {
        case 0x23586cu: goto label_23586c;
        case 0x2358a8u: goto label_2358a8;
        default: break;
    }

    ctx->pc = 0x235830u;

    // 0x235830: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x235830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x235834: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x235834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x235838: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x235838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23583c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x23583cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x235840: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x235840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x235844: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x235844u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x235848: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x235848u;
    {
        const bool branch_taken_0x235848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x235848) {
            ctx->pc = 0x235874u;
            goto label_235874;
        }
    }
    ctx->pc = 0x235850u;
    // 0x235850: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x235850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235854: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x235854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x235858: 0x27859d20  addiu       $a1, $gp, -0x62E0
    ctx->pc = 0x235858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941984));
    // 0x23585c: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x23585cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235860: 0x24470004  addiu       $a3, $v0, 0x4
    ctx->pc = 0x235860u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x235864: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x235864u;
    SET_GPR_U32(ctx, 31, 0x23586Cu);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x235864u, 0x23586Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23586Cu;
label_23586c:
    // 0x23586c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23586Cu;
    {
        const bool branch_taken_0x23586c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23586c) {
            ctx->pc = 0x235884u;
            goto label_235884;
        }
    }
    ctx->pc = 0x235874u;
label_235874:
    // 0x235874: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x235874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235878: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x235878u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x23587c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23587cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235880: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x235880u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_235884:
    // 0x235884: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x235884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235888: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x235888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23588c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23588cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235890: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x235890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x235894: 0x27859d20  addiu       $a1, $gp, -0x62E0
    ctx->pc = 0x235894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941984));
    // 0x235898: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x235898u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23589c: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x23589cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2358a0: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x2358A0u;
    SET_GPR_U32(ctx, 31, 0x2358A8u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x2358A0u, 0x2358A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2358A8u;
label_2358a8:
    // 0x2358a8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2358a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2358ac: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x2358acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    // 0x2358b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2358b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2358b4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2358b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2358b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2358B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2358B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2358C0u;
}

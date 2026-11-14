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

// Function: sub_00478270
// Address: 0x478270 - 0x478300
void sub_00478270_0x478270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00478270_0x478270");
#endif

    switch (ctx->pc) {
        case 0x4782b4u: goto label_4782b4;
        default: break;
    }

    ctx->pc = 0x478270u;

    // 0x478270: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x478270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x478274: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x478274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x478278: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x478278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x47827c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x47827cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x478280: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x478280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
    // 0x478284: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x478284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x478288: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x478288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x47828c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x47828Cu;
    {
        const bool branch_taken_0x47828c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47828c) {
            ctx->pc = 0x4782ACu;
            goto label_4782ac;
        }
    }
    ctx->pc = 0x478294u;
    // 0x478294: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x478294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x478298: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x478298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x47829c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x47829cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4782a0: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x4782a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
    // 0x4782a4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4782a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4782a8: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x4782a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
label_4782ac:
    // 0x4782ac: 0xc11e0c0  jal         func_478300
    ctx->pc = 0x4782ACu;
    SET_GPR_U32(ctx, 31, 0x4782B4u);
    ctx->pc = 0x478300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x478300u, 0x4782ACu, 0x4782B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4782B4u;
label_4782b4:
    // 0x4782b4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4782B4u;
    {
        const bool branch_taken_0x4782b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4782b4) {
            ctx->pc = 0x4782ECu;
            goto label_4782ec;
        }
    }
    ctx->pc = 0x4782BCu;
    // 0x4782bc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x4782bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x4782c0: 0x24638310  addiu       $v1, $v1, -0x7CF0
    ctx->pc = 0x4782c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935312));
    // 0x4782c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4782c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4782c8: 0xac430048  sw          $v1, 0x48($v0)
    ctx->pc = 0x4782c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 3));
    // 0x4782cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4782ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4782d0: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x4782d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x4782d4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4782D4u;
    {
        const bool branch_taken_0x4782d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4782d4) {
            ctx->pc = 0x4782ECu;
            goto label_4782ec;
        }
    }
    ctx->pc = 0x4782DCu;
    // 0x4782dc: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x4782dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x4782e0: 0x24639850  addiu       $v1, $v1, -0x67B0
    ctx->pc = 0x4782e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940752));
    // 0x4782e4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4782e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4782e8: 0xac430048  sw          $v1, 0x48($v0)
    ctx->pc = 0x4782e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 3));
label_4782ec:
    // 0x4782ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4782ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4782f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4782f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4782f4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x4782f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x4782f8: 0x3e00008  jr          $ra
    ctx->pc = 0x4782F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4782F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x478300u;
}

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

// Function: sub_00478180
// Address: 0x478180 - 0x478230
void sub_00478180_0x478180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00478180_0x478180");
#endif

    ctx->pc = 0x478180u;

    // 0x478180: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x478180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x478184: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x478184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x478188: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x478188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47818c: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x47818cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
    // 0x478190: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x478190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x478194: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x478194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x478198: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x478198u;
    {
        const bool branch_taken_0x478198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x478198) {
            ctx->pc = 0x4781F0u;
            goto label_4781f0;
        }
    }
    ctx->pc = 0x4781A0u;
    // 0x4781a0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4781a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4781a4: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x4781a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
    // 0x4781a8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4781a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4781ac: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x4781acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x4781b0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4781b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4781b4: 0xac430048  sw          $v1, 0x48($v0)
    ctx->pc = 0x4781b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 3));
    // 0x4781b8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4781b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4781bc: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x4781bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x4781c0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4781C0u;
    {
        const bool branch_taken_0x4781c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4781c0) {
            ctx->pc = 0x4781D8u;
            goto label_4781d8;
        }
    }
    ctx->pc = 0x4781C8u;
    // 0x4781c8: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x4781c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x4781cc: 0x24639850  addiu       $v1, $v1, -0x67B0
    ctx->pc = 0x4781ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940752));
    // 0x4781d0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4781d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4781d4: 0xac430048  sw          $v1, 0x48($v0)
    ctx->pc = 0x4781d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 3));
label_4781d8:
    // 0x4781d8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4781d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4781dc: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x4781dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
    // 0x4781e0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4781e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4781e4: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x4781e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x4781e8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4781E8u;
    {
        const bool branch_taken_0x4781e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4781e8) {
            ctx->pc = 0x478220u;
            goto label_478220;
        }
    }
    ctx->pc = 0x4781F0u;
label_4781f0:
    // 0x4781f0: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x4781f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x4781f4: 0x24639850  addiu       $v1, $v1, -0x67B0
    ctx->pc = 0x4781f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940752));
    // 0x4781f8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4781f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4781fc: 0xac430048  sw          $v1, 0x48($v0)
    ctx->pc = 0x4781fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 3));
    // 0x478200: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x478200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x478204: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x478204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x478208: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x478208u;
    {
        const bool branch_taken_0x478208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x478208) {
            ctx->pc = 0x478220u;
            goto label_478220;
        }
    }
    ctx->pc = 0x478210u;
    // 0x478210: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x478210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x478214: 0x24639850  addiu       $v1, $v1, -0x67B0
    ctx->pc = 0x478214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940752));
    // 0x478218: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x478218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47821c: 0xac430048  sw          $v1, 0x48($v0)
    ctx->pc = 0x47821cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 3));
label_478220:
    // 0x478220: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x478220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x478224: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x478224u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x478228: 0x3e00008  jr          $ra
    ctx->pc = 0x478228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x478228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x478230u;
}

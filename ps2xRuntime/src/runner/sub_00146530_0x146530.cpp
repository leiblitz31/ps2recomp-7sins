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

// Function: sub_00146530
// Address: 0x146530 - 0x146580
void sub_00146530_0x146530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00146530_0x146530");
#endif

    ctx->pc = 0x146530u;

    // 0x146530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x146530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x146534: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x146534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x146538: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x146538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x14653c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x14653cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146540: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x146540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x146544: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x146544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146548: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x146548u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x14654c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x14654cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146550: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x146550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x146554: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x146554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146558: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x146558u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x14655c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x14655cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146560: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x146560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x146564: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x146564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146568: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x146568u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x14656c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x14656cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146570: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x146570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x146574: 0x3e00008  jr          $ra
    ctx->pc = 0x146574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14657Cu;
    // 0x14657c: 0x0  nop
    ctx->pc = 0x14657cu;
    // NOP
    ctx->pc = 0x146580u;
}

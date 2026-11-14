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

// Function: sub_00266FE0
// Address: 0x266fe0 - 0x267060
void sub_00266FE0_0x266fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266FE0_0x266fe0");
#endif

    switch (ctx->pc) {
        case 0x267004u: goto label_267004;
        case 0x267048u: goto label_267048;
        default: break;
    }

    ctx->pc = 0x266fe0u;

    // 0x266fe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x266fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x266fe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x266fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x266fe8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x266fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x266fec: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x266fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x266ff0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x266ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x266ff4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x266ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x266ff8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x266ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x266ffc: 0xc099660  jal         func_265980
    ctx->pc = 0x266FFCu;
    SET_GPR_U32(ctx, 31, 0x267004u);
    ctx->pc = 0x265980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265980u, 0x266FFCu, 0x267004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267004u;
label_267004:
    // 0x267004: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x267004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x267008: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x267008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26700c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26700cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x267010: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x267010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x267014: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x267014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x267018: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x267018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26701c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x26701cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x267020: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x267020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x267024: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x267024u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x267028: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x267028u;
    {
        const bool branch_taken_0x267028 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x267028) {
            ctx->pc = 0x267038u;
            goto label_267038;
        }
    }
    ctx->pc = 0x267030u;
    // 0x267030: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x267030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x267034: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x267034u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_267038:
    // 0x267038: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x267038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x26703c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x26703cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x267040: 0xc09a120  jal         func_268480
    ctx->pc = 0x267040u;
    SET_GPR_U32(ctx, 31, 0x267048u);
    ctx->pc = 0x268480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268480u, 0x267040u, 0x267048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267048u;
label_267048:
    // 0x267048: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x267048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26704c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x26704cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x267050: 0x3e00008  jr          $ra
    ctx->pc = 0x267050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x267058u;
    // 0x267058: 0x0  nop
    ctx->pc = 0x267058u;
    // NOP
    // 0x26705c: 0x0  nop
    ctx->pc = 0x26705cu;
    // NOP
    ctx->pc = 0x267060u;
}

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

// Function: sub_001E94C0
// Address: 0x1e94c0 - 0x1e9540
void sub_001E94C0_0x1e94c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E94C0_0x1e94c0");
#endif

    switch (ctx->pc) {
        case 0x1e94e4u: goto label_1e94e4;
        case 0x1e9528u: goto label_1e9528;
        default: break;
    }

    ctx->pc = 0x1e94c0u;

    // 0x1e94c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e94c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e94c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e94c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e94c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1e94c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1e94cc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1e94ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e94d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e94d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e94d4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1e94d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e94d8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1e94d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e94dc: 0xc075a48  jal         func_1D6920
    ctx->pc = 0x1E94DCu;
    SET_GPR_U32(ctx, 31, 0x1E94E4u);
    ctx->pc = 0x1D6920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6920u, 0x1E94DCu, 0x1E94E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E94E4u;
label_1e94e4:
    // 0x1e94e4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e94e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e94e8: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1e94e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e94ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e94ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e94f0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1e94f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e94f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e94f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e94f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e94f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e94fc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1e94fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e9500: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1e9500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e9504: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x1e9504u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1e9508: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E9508u;
    {
        const bool branch_taken_0x1e9508 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1e9508) {
            ctx->pc = 0x1E9518u;
            goto label_1e9518;
        }
    }
    ctx->pc = 0x1E9510u;
    // 0x1e9510: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x1e9510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1e9514: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x1e9514u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_1e9518:
    // 0x1e9518: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1e9518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1e951c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1e951cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e9520: 0xc079c38  jal         func_1E70E0
    ctx->pc = 0x1E9520u;
    SET_GPR_U32(ctx, 31, 0x1E9528u);
    ctx->pc = 0x1E70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E70E0u, 0x1E9520u, 0x1E9528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9528u;
label_1e9528:
    // 0x1e9528: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e9528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e952c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1e952cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e9530: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9538u;
    // 0x1e9538: 0x0  nop
    ctx->pc = 0x1e9538u;
    // NOP
    // 0x1e953c: 0x0  nop
    ctx->pc = 0x1e953cu;
    // NOP
    ctx->pc = 0x1e9540u;
}

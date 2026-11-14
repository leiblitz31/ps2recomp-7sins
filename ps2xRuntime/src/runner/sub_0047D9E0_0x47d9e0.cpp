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

// Function: sub_0047D9E0
// Address: 0x47d9e0 - 0x47da40
void sub_0047D9E0_0x47d9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047D9E0_0x47d9e0");
#endif

    switch (ctx->pc) {
        case 0x47da04u: goto label_47da04;
        case 0x47da0cu: goto label_47da0c;
        case 0x47da20u: goto label_47da20;
        default: break;
    }

    ctx->pc = 0x47d9e0u;

    // 0x47d9e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x47d9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x47d9e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47d9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x47d9e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x47d9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x47d9ec: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x47d9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x47d9f0: 0x8c42e880  lw          $v0, -0x1780($v0)
    ctx->pc = 0x47d9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61E880u));
    // 0x47d9f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x47D9F4u;
    {
        const bool branch_taken_0x47d9f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47d9f4) {
            ctx->pc = 0x47DA0Cu;
            goto label_47da0c;
        }
    }
    ctx->pc = 0x47D9FCu;
    // 0x47d9fc: 0xc11f698  jal         func_47DA60
    ctx->pc = 0x47D9FCu;
    SET_GPR_U32(ctx, 31, 0x47DA04u);
    ctx->pc = 0x47DA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47DA60u, 0x47D9FCu, 0x47DA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47DA04u;
label_47da04:
    // 0x47da04: 0xc11f6d0  jal         func_47DB40
    ctx->pc = 0x47DA04u;
    SET_GPR_U32(ctx, 31, 0x47DA0Cu);
    ctx->pc = 0x47DB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47DB40u, 0x47DA04u, 0x47DA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47DA0Cu;
label_47da0c:
    // 0x47da0c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x47da0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47da10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x47DA10u;
    {
        const bool branch_taken_0x47da10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47da10) {
            ctx->pc = 0x47DA20u;
            goto label_47da20;
        }
    }
    ctx->pc = 0x47DA18u;
    // 0x47da18: 0xc11f690  jal         func_47DA40
    ctx->pc = 0x47DA18u;
    SET_GPR_U32(ctx, 31, 0x47DA20u);
    ctx->pc = 0x47DA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47DA40u, 0x47DA18u, 0x47DA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47DA20u;
label_47da20:
    // 0x47da20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47da20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x47da24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47da24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47da28: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x47da28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x47da2c: 0x3e00008  jr          $ra
    ctx->pc = 0x47DA2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47DA2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47DA34u;
    // 0x47da34: 0x0  nop
    ctx->pc = 0x47da34u;
    // NOP
    // 0x47da38: 0x0  nop
    ctx->pc = 0x47da38u;
    // NOP
    // 0x47da3c: 0x0  nop
    ctx->pc = 0x47da3cu;
    // NOP
    ctx->pc = 0x47da40u;
}

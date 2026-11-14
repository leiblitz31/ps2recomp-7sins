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

// Function: sub_00245DC0
// Address: 0x245dc0 - 0x245e40
void sub_00245DC0_0x245dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245DC0_0x245dc0");
#endif

    switch (ctx->pc) {
        case 0x245de4u: goto label_245de4;
        case 0x245e28u: goto label_245e28;
        default: break;
    }

    ctx->pc = 0x245dc0u;

    // 0x245dc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x245dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x245dc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x245dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x245dc8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x245dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x245dcc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x245dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245dd0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x245dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245dd4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x245dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x245dd8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x245dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x245ddc: 0xc091488  jal         func_245220
    ctx->pc = 0x245DDCu;
    SET_GPR_U32(ctx, 31, 0x245DE4u);
    ctx->pc = 0x245220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245220u, 0x245DDCu, 0x245DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245DE4u;
label_245de4:
    // 0x245de4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x245de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245de8: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x245de8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245dec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x245decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245df0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x245df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x245df4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x245df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245df8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x245df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x245dfc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x245dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x245e00: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x245e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x245e04: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x245e04u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x245e08: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x245E08u;
    {
        const bool branch_taken_0x245e08 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x245e08) {
            ctx->pc = 0x245E18u;
            goto label_245e18;
        }
    }
    ctx->pc = 0x245E10u;
    // 0x245e10: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x245e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x245e14: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x245e14u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_245e18:
    // 0x245e18: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x245e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x245e1c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x245e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x245e20: 0xc091868  jal         func_2461A0
    ctx->pc = 0x245E20u;
    SET_GPR_U32(ctx, 31, 0x245E28u);
    ctx->pc = 0x2461A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2461A0u, 0x245E20u, 0x245E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245E28u;
label_245e28:
    // 0x245e28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x245e28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x245e2c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x245e2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x245e30: 0x3e00008  jr          $ra
    ctx->pc = 0x245E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245E30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x245E38u;
    // 0x245e38: 0x0  nop
    ctx->pc = 0x245e38u;
    // NOP
    // 0x245e3c: 0x0  nop
    ctx->pc = 0x245e3cu;
    // NOP
    ctx->pc = 0x245e40u;
}

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

// Function: sub_00226DA0
// Address: 0x226da0 - 0x226e10
void sub_00226DA0_0x226da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226DA0_0x226da0");
#endif

    switch (ctx->pc) {
        case 0x226dccu: goto label_226dcc;
        case 0x226de4u: goto label_226de4;
        default: break;
    }

    ctx->pc = 0x226da0u;

    // 0x226da0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x226da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x226da4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x226da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x226da8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x226da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x226dac: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x226dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x226db0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x226db0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x226db4: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x226db4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x226db8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x226db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x226dbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x226dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226dc0: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x226dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x226dc4: 0xc10828e  jal         func_420A38
    ctx->pc = 0x226DC4u;
    SET_GPR_U32(ctx, 31, 0x226DCCu);
    ctx->pc = 0x420A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420A38u, 0x226DC4u, 0x226DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226DCCu;
label_226dcc:
    // 0x226dcc: 0x14020005  bne         $zero, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x226DCCu;
    {
        const bool branch_taken_0x226dcc = (GPR_U64(ctx, 0) != GPR_U64(ctx, 2));
        if (branch_taken_0x226dcc) {
            ctx->pc = 0x226DE4u;
            goto label_226de4;
        }
    }
    ctx->pc = 0x226DD4u;
    // 0x226dd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x226dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226dd8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x226dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x226ddc: 0xc10826c  jal         func_4209B0
    ctx->pc = 0x226DDCu;
    SET_GPR_U32(ctx, 31, 0x226DE4u);
    ctx->pc = 0x4209B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4209B0u, 0x226DDCu, 0x226DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226DE4u;
label_226de4:
    // 0x226de4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x226de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x226de8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x226de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x226dec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x226decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x226df0: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x226df0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
    // 0x226df4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x226df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x226df8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x226df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226dfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x226dfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226e00: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x226e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x226e04: 0x3e00008  jr          $ra
    ctx->pc = 0x226E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226E04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226E0Cu;
    // 0x226e0c: 0x0  nop
    ctx->pc = 0x226e0cu;
    // NOP
    ctx->pc = 0x226e10u;
}

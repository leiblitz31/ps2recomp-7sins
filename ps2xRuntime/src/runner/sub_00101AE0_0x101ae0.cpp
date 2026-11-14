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

// Function: sub_00101AE0
// Address: 0x101ae0 - 0x101b40
void sub_00101AE0_0x101ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101AE0_0x101ae0");
#endif

    switch (ctx->pc) {
        case 0x101b0cu: goto label_101b0c;
        default: break;
    }

    ctx->pc = 0x101ae0u;

    // 0x101ae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x101ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x101ae4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x101ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x101ae8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x101ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x101aec: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x101aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101af0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x101af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x101af4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x101AF4u;
    {
        const bool branch_taken_0x101af4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x101af4) {
            ctx->pc = 0x101B14u;
            goto label_101b14;
        }
    }
    ctx->pc = 0x101AFCu;
    // 0x101afc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x101afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101b00: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x101b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x101b04: 0xc119c5c  jal         func_467170
    ctx->pc = 0x101B04u;
    SET_GPR_U32(ctx, 31, 0x101B0Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x101B04u, 0x101B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101B0Cu;
label_101b0c:
    // 0x101b0c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x101b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101b10: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x101b10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_101b14:
    // 0x101b14: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x101b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101b18: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x101b18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x101b1c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x101b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101b20: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x101b20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x101b24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x101b24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101b28: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x101b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x101b2c: 0x3e00008  jr          $ra
    ctx->pc = 0x101B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101B2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101B34u;
    // 0x101b34: 0x0  nop
    ctx->pc = 0x101b34u;
    // NOP
    // 0x101b38: 0x0  nop
    ctx->pc = 0x101b38u;
    // NOP
    // 0x101b3c: 0x0  nop
    ctx->pc = 0x101b3cu;
    // NOP
    ctx->pc = 0x101b40u;
}

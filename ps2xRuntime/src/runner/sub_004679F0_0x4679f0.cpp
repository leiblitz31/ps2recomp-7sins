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

// Function: sub_004679F0
// Address: 0x4679f0 - 0x467a40
void sub_004679F0_0x4679f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004679F0_0x4679f0");
#endif

    switch (ctx->pc) {
        case 0x467a1cu: goto label_467a1c;
        default: break;
    }

    ctx->pc = 0x4679f0u;

    // 0x4679f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4679f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4679f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4679f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4679f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x4679f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x4679fc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x4679fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x467a00: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x467a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x467a04: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x467A04u;
    {
        const bool branch_taken_0x467a04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x467a04) {
            ctx->pc = 0x467A24u;
            goto label_467a24;
        }
    }
    ctx->pc = 0x467A0Cu;
    // 0x467a0c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x467a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x467a10: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x467a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x467a14: 0xc0f0af2  jal         func_3C2BC8
    ctx->pc = 0x467A14u;
    SET_GPR_U32(ctx, 31, 0x467A1Cu);
    ctx->pc = 0x3C2BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2BC8u, 0x467A14u, 0x467A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467A1Cu;
label_467a1c:
    // 0x467a1c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x467a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x467a20: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x467a20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
label_467a24:
    // 0x467a24: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x467a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x467a28: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x467a28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x467a2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x467a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x467a30: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x467a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x467a34: 0x3e00008  jr          $ra
    ctx->pc = 0x467A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x467A34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x467A3Cu;
    // 0x467a3c: 0x0  nop
    ctx->pc = 0x467a3cu;
    // NOP
    ctx->pc = 0x467a40u;
}

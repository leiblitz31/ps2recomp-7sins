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

// Function: sub_00467570
// Address: 0x467570 - 0x4675d0
void sub_00467570_0x467570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00467570_0x467570");
#endif

    switch (ctx->pc) {
        case 0x467588u: goto label_467588;
        default: break;
    }

    ctx->pc = 0x467570u;

    // 0x467570: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x467570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x467574: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x467574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x467578: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x467578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46757c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x46757cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x467580: 0xc11a218  jal         func_468860
    ctx->pc = 0x467580u;
    SET_GPR_U32(ctx, 31, 0x467588u);
    ctx->pc = 0x468860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x468860u, 0x467580u, 0x467588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467588u;
label_467588:
    // 0x467588: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x467588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x46758c: 0x24636ba0  addiu       $v1, $v1, 0x6BA0
    ctx->pc = 0x46758cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27552));
    // 0x467590: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x467590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x467594: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x467594u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x467598: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x467598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x46759c: 0x24636bb8  addiu       $v1, $v1, 0x6BB8
    ctx->pc = 0x46759cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27576));
    // 0x4675a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4675a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4675a4: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x4675a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x4675a8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4675a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4675ac: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x4675acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x4675b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4675b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4675b4: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x4675b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x4675b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4675b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4675bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4675bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4675c0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4675c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4675c4: 0x3e00008  jr          $ra
    ctx->pc = 0x4675C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4675C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4675CCu;
    // 0x4675cc: 0x0  nop
    ctx->pc = 0x4675ccu;
    // NOP
    ctx->pc = 0x4675d0u;
}

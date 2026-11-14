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

// Function: sub_00256B00
// Address: 0x256b00 - 0x256b40
void sub_00256B00_0x256b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00256B00_0x256b00");
#endif

    switch (ctx->pc) {
        case 0x256b18u: goto label_256b18;
        default: break;
    }

    ctx->pc = 0x256b00u;

    // 0x256b00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x256b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x256b04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x256b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x256b08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x256b08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x256b0c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x256b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256b10: 0xc088560  jal         func_221580
    ctx->pc = 0x256B10u;
    SET_GPR_U32(ctx, 31, 0x256B18u);
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x256B10u, 0x256B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256B18u;
label_256b18:
    // 0x256b18: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x256b18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x256b1c: 0x246358b0  addiu       $v1, $v1, 0x58B0
    ctx->pc = 0x256b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22704));
    // 0x256b20: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x256b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256b24: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x256b24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x256b28: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x256b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256b2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x256b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x256b30: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x256b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x256b34: 0x3e00008  jr          $ra
    ctx->pc = 0x256B34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256B34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x256B3Cu;
    // 0x256b3c: 0x0  nop
    ctx->pc = 0x256b3cu;
    // NOP
    ctx->pc = 0x256b40u;
}

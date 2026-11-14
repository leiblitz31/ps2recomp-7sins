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

// Function: sub_00290940
// Address: 0x290940 - 0x290990
void sub_00290940_0x290940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290940_0x290940");
#endif

    switch (ctx->pc) {
        case 0x290964u: goto label_290964;
        default: break;
    }

    ctx->pc = 0x290940u;

    // 0x290940: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x290940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x290944: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x290944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x290948: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x290948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x29094c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x29094cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x290950: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x290950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x290954: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x290954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290958: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x290958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29095c: 0xc0a4264  jal         func_290990
    ctx->pc = 0x29095Cu;
    SET_GPR_U32(ctx, 31, 0x290964u);
    ctx->pc = 0x290990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290990u, 0x29095Cu, 0x290964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290964u;
label_290964:
    // 0x290964: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x290964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x290968: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x290968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29096c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x29096cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x290970: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x290970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290974: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x290974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290978: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x290978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x29097c: 0x3e00008  jr          $ra
    ctx->pc = 0x29097Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29097Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290984u;
    // 0x290984: 0x0  nop
    ctx->pc = 0x290984u;
    // NOP
    // 0x290988: 0x0  nop
    ctx->pc = 0x290988u;
    // NOP
    // 0x29098c: 0x0  nop
    ctx->pc = 0x29098cu;
    // NOP
    ctx->pc = 0x290990u;
}

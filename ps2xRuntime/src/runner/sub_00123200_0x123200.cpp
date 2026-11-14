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

// Function: sub_00123200
// Address: 0x123200 - 0x123270
void sub_00123200_0x123200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123200_0x123200");
#endif

    switch (ctx->pc) {
        case 0x12321cu: goto label_12321c;
        case 0x12323cu: goto label_12323c;
        case 0x12324cu: goto label_12324c;
        default: break;
    }

    ctx->pc = 0x123200u;

    // 0x123200: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x123200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x123204: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x123204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x123208: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x123208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x12320c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x12320cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123210: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x123210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x123214: 0xc047074  jal         func_11C1D0
    ctx->pc = 0x123214u;
    SET_GPR_U32(ctx, 31, 0x12321Cu);
    ctx->pc = 0x11C1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C1D0u, 0x123214u, 0x12321Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12321Cu;
label_12321c:
    // 0x12321c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x12321cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x123220: 0x24633680  addiu       $v1, $v1, 0x3680
    ctx->pc = 0x123220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13952));
    // 0x123224: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x123224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123228: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x123228u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x12322c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12322cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123230: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x123230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x123234: 0xc048d54  jal         func_123550
    ctx->pc = 0x123234u;
    SET_GPR_U32(ctx, 31, 0x12323Cu);
    ctx->pc = 0x123550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123550u, 0x123234u, 0x12323Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12323Cu;
label_12323c:
    // 0x12323c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x12323cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123240: 0x27858b48  addiu       $a1, $gp, -0x74B8
    ctx->pc = 0x123240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937416));
    // 0x123244: 0xc04322c  jal         func_10C8B0
    ctx->pc = 0x123244u;
    SET_GPR_U32(ctx, 31, 0x12324Cu);
    ctx->pc = 0x10C8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C8B0u, 0x123244u, 0x12324Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12324Cu;
label_12324c:
    // 0x12324c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12324cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123250: 0xaf82b9fc  sw          $v0, -0x4604($gp)
    ctx->pc = 0x123250u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949372), GPR_U32(ctx, 2));
    // 0x123254: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x123254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123258: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x123258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12325c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x12325cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x123260: 0x3e00008  jr          $ra
    ctx->pc = 0x123260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123268u;
    // 0x123268: 0x0  nop
    ctx->pc = 0x123268u;
    // NOP
    // 0x12326c: 0x0  nop
    ctx->pc = 0x12326cu;
    // NOP
    ctx->pc = 0x123270u;
}

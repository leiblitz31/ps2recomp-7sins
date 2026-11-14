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

// Function: sub_00221490
// Address: 0x221490 - 0x2214e0
void sub_00221490_0x221490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221490_0x221490");
#endif

    switch (ctx->pc) {
        case 0x2214b0u: goto label_2214b0;
        default: break;
    }

    ctx->pc = 0x221490u;

    // 0x221490: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x221490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x221494: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x221494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x221498: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x221498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22149c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x22149cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2214a0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2214a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2214a4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2214a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2214a8: 0xc042844  jal         func_10A110
    ctx->pc = 0x2214A8u;
    SET_GPR_U32(ctx, 31, 0x2214B0u);
    ctx->pc = 0x10A110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A110u, 0x2214A8u, 0x2214B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2214B0u;
label_2214b0:
    // 0x2214b0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2214b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2214b4: 0x9443000c  lhu         $v1, 0xC($v0)
    ctx->pc = 0x2214b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2214b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2214b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2214bc: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x2214bcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2214c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2214c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2214c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2214c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2214c8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2214c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2214cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2214CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2214CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2214D4u;
    // 0x2214d4: 0x0  nop
    ctx->pc = 0x2214d4u;
    // NOP
    // 0x2214d8: 0x0  nop
    ctx->pc = 0x2214d8u;
    // NOP
    // 0x2214dc: 0x0  nop
    ctx->pc = 0x2214dcu;
    // NOP
    ctx->pc = 0x2214e0u;
}

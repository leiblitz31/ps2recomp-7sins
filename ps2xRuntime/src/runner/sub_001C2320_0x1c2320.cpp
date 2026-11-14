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

// Function: sub_001C2320
// Address: 0x1c2320 - 0x1c2360
void sub_001C2320_0x1c2320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2320_0x1c2320");
#endif

    switch (ctx->pc) {
        case 0x1c233cu: goto label_1c233c;
        default: break;
    }

    ctx->pc = 0x1c2320u;

    // 0x1c2320: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c2320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c2324: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c2324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c2328: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1c2328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1c232c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1c232cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1c2330: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1c2330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2334: 0xc0708b0  jal         func_1C22C0
    ctx->pc = 0x1C2334u;
    SET_GPR_U32(ctx, 31, 0x1C233Cu);
    ctx->pc = 0x1C22C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C22C0u, 0x1C2334u, 0x1C233Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C233Cu;
label_1c233c:
    // 0x1c233c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1c233cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c2340: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c2340u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c2344: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c2344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c2348: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c2348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c234c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1c234cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c2350: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2358u;
    // 0x1c2358: 0x0  nop
    ctx->pc = 0x1c2358u;
    // NOP
    // 0x1c235c: 0x0  nop
    ctx->pc = 0x1c235cu;
    // NOP
    ctx->pc = 0x1c2360u;
}

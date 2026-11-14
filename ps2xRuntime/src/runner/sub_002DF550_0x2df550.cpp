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

// Function: sub_002DF550
// Address: 0x2df550 - 0x2df5a0
void sub_002DF550_0x2df550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF550_0x2df550");
#endif

    switch (ctx->pc) {
        case 0x2df574u: goto label_2df574;
        default: break;
    }

    ctx->pc = 0x2df550u;

    // 0x2df550: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2df550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2df554: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2df554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2df558: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2df558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2df55c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2df55cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2df560: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2df560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x2df564: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2df564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df568: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2df568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2df56c: 0xc0b7d68  jal         func_2DF5A0
    ctx->pc = 0x2DF56Cu;
    SET_GPR_U32(ctx, 31, 0x2DF574u);
    ctx->pc = 0x2DF5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF5A0u, 0x2DF56Cu, 0x2DF574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF574u;
label_2df574:
    // 0x2df574: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2df574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2df578: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2df578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df57c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2df57cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2df580: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2df580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df584: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2df584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df588: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2df588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2df58c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF58Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF58Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF594u;
    // 0x2df594: 0x0  nop
    ctx->pc = 0x2df594u;
    // NOP
    // 0x2df598: 0x0  nop
    ctx->pc = 0x2df598u;
    // NOP
    // 0x2df59c: 0x0  nop
    ctx->pc = 0x2df59cu;
    // NOP
    ctx->pc = 0x2df5a0u;
}

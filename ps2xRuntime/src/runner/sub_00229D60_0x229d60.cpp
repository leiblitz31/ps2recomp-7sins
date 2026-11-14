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

// Function: sub_00229D60
// Address: 0x229d60 - 0x229da0
void sub_00229D60_0x229d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229D60_0x229d60");
#endif

    switch (ctx->pc) {
        case 0x229d8cu: goto label_229d8c;
        default: break;
    }

    ctx->pc = 0x229d60u;

    // 0x229d60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x229d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x229d64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x229d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x229d68: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x229d68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x229d6c: 0xa3a60030  sb          $a2, 0x30($sp)
    ctx->pc = 0x229d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 6));
    // 0x229d70: 0x93a20030  lbu         $v0, 0x30($sp)
    ctx->pc = 0x229d70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x229d74: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x229d74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x229d78: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x229d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x229d7c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x229d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x229d80: 0x24a57310  addiu       $a1, $a1, 0x7310
    ctx->pc = 0x229d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29456));
    // 0x229d84: 0xc0e2628  jal         func_3898A0
    ctx->pc = 0x229D84u;
    SET_GPR_U32(ctx, 31, 0x229D8Cu);
    ctx->pc = 0x3898A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3898A0u, 0x229D84u, 0x229D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229D8Cu;
label_229d8c:
    // 0x229d8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x229d8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x229d90: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x229d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x229d94: 0x3e00008  jr          $ra
    ctx->pc = 0x229D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229D94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x229D9Cu;
    // 0x229d9c: 0x0  nop
    ctx->pc = 0x229d9cu;
    // NOP
    ctx->pc = 0x229da0u;
}

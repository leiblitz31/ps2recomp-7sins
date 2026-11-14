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

// Function: sub_004A0AF8
// Address: 0x4a0af8 - 0x4a0b30
void sub_004A0AF8_0x4a0af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A0AF8_0x4a0af8");
#endif

    switch (ctx->pc) {
        case 0x4a0b10u: goto label_4a0b10;
        default: break;
    }

    ctx->pc = 0x4a0af8u;

    // 0x4a0af8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a0af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4a0afc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4a0afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4a0b00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4a0b00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a0b04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a0b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a0b08: 0xc12ab76  jal         func_4AADD8
    ctx->pc = 0x4A0B08u;
    SET_GPR_U32(ctx, 31, 0x4A0B10u);
    ctx->pc = 0x4A0B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A0B08u;
    // 0x4a0b0c: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AADD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AADD8u, 0x4A0B08u, 0x4A0B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0B10u;
label_4a0b10:
    // 0x4a0b10: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x4a0b10u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x4a0b14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a0b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a0b18: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x4a0b18u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x4a0b1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4a0b1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a0b20: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4a0b20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a0b24: 0x3e00008  jr          $ra
    ctx->pc = 0x4A0B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A0B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0B24u;
        // 0x4a0b28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A0B24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A0B2Cu;
    // 0x4a0b2c: 0x0  nop
    ctx->pc = 0x4a0b2cu;
    // NOP
    ctx->pc = 0x4a0b30u;
}

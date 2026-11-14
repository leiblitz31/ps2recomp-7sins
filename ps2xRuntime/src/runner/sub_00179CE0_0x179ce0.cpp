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

// Function: sub_00179CE0
// Address: 0x179ce0 - 0x179d40
void sub_00179CE0_0x179ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00179CE0_0x179ce0");
#endif

    ctx->pc = 0x179ce0u;

    // 0x179ce0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x179ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x179ce4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x179ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x179ce8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x179ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x179cec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x179cecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179cf0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x179cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179cf4: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x179cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x179cf8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x179CF8u;
    {
        const bool branch_taken_0x179cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x179cf8) {
            ctx->pc = 0x179D20u;
            goto label_179d20;
        }
    }
    ctx->pc = 0x179D00u;
    // 0x179d00: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x179d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179d04: 0x90420098  lbu         $v0, 0x98($v0)
    ctx->pc = 0x179d04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x179d08: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x179d08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x179d0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x179d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x179d10: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x179D10u;
    {
        const bool branch_taken_0x179d10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x179d10) {
            ctx->pc = 0x179D20u;
            goto label_179d20;
        }
    }
    ctx->pc = 0x179D18u;
    // 0x179d18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x179d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x179d1c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x179d1cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_179d20:
    // 0x179d20: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x179d20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179d24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x179d24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x179d28: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x179d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x179d2c: 0x3e00008  jr          $ra
    ctx->pc = 0x179D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179D34u;
    // 0x179d34: 0x0  nop
    ctx->pc = 0x179d34u;
    // NOP
    // 0x179d38: 0x0  nop
    ctx->pc = 0x179d38u;
    // NOP
    // 0x179d3c: 0x0  nop
    ctx->pc = 0x179d3cu;
    // NOP
    ctx->pc = 0x179d40u;
}

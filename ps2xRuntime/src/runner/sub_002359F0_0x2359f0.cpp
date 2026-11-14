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

// Function: sub_002359F0
// Address: 0x2359f0 - 0x235a70
void sub_002359F0_0x2359f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002359F0_0x2359f0");
#endif

    switch (ctx->pc) {
        case 0x235a30u: goto label_235a30;
        case 0x235a50u: goto label_235a50;
        default: break;
    }

    ctx->pc = 0x2359f0u;

    // 0x2359f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2359f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2359f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2359f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2359f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2359f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2359fc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2359fcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x235a00: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x235a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235a04: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x235A04u;
    {
        const bool branch_taken_0x235a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x235a04) {
            ctx->pc = 0x235A50u;
            goto label_235a50;
        }
    }
    ctx->pc = 0x235A0Cu;
    // 0x235a0c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x235a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x235a10: 0x246354a0  addiu       $v1, $v1, 0x54A0
    ctx->pc = 0x235a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21664));
    // 0x235a14: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x235a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235a18: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x235a18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x235a1c: 0xaf80bbb0  sw          $zero, -0x4450($gp)
    ctx->pc = 0x235a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949808), GPR_U32(ctx, 0));
    // 0x235a20: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x235a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235a24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x235a24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235a28: 0xc08ec24  jal         func_23B090
    ctx->pc = 0x235A28u;
    SET_GPR_U32(ctx, 31, 0x235A30u);
    ctx->pc = 0x23B090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B090u, 0x235A28u, 0x235A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235A30u;
label_235a30:
    // 0x235a30: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x235a30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x235a34: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x235a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x235a38: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x235a38u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x235a3c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x235A3Cu;
    {
        const bool branch_taken_0x235a3c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x235a3c) {
            ctx->pc = 0x235A50u;
            goto label_235a50;
        }
    }
    ctx->pc = 0x235A44u;
    // 0x235a44: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x235a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235a48: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x235A48u;
    SET_GPR_U32(ctx, 31, 0x235A50u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x235A48u, 0x235A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235A50u;
label_235a50:
    // 0x235a50: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x235a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235a54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x235a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235a58: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x235a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x235a5c: 0x3e00008  jr          $ra
    ctx->pc = 0x235A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235A5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235A64u;
    // 0x235a64: 0x0  nop
    ctx->pc = 0x235a64u;
    // NOP
    // 0x235a68: 0x0  nop
    ctx->pc = 0x235a68u;
    // NOP
    // 0x235a6c: 0x0  nop
    ctx->pc = 0x235a6cu;
    // NOP
    ctx->pc = 0x235a70u;
}

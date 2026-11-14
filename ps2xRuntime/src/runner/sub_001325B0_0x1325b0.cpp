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

// Function: sub_001325B0
// Address: 0x1325b0 - 0x132630
void sub_001325B0_0x1325b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001325B0_0x1325b0");
#endif

    switch (ctx->pc) {
        case 0x1325e4u: goto label_1325e4;
        case 0x1325f4u: goto label_1325f4;
        case 0x132614u: goto label_132614;
        default: break;
    }

    ctx->pc = 0x1325b0u;

    // 0x1325b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1325b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1325b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1325b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1325b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1325b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1325bc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1325bcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1325c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1325c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1325c4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1325C4u;
    {
        const bool branch_taken_0x1325c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1325c4) {
            ctx->pc = 0x132614u;
            goto label_132614;
        }
    }
    ctx->pc = 0x1325CCu;
    // 0x1325cc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1325ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1325d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1325d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1325d4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1325d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1325d8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1325d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1325dc: 0xc04c9b4  jal         func_1326D0
    ctx->pc = 0x1325DCu;
    SET_GPR_U32(ctx, 31, 0x1325E4u);
    ctx->pc = 0x1326D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1326D0u, 0x1325DCu, 0x1325E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1325E4u;
label_1325e4:
    // 0x1325e4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1325e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1325e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1325e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1325ec: 0xc04c98c  jal         func_132630
    ctx->pc = 0x1325ECu;
    SET_GPR_U32(ctx, 31, 0x1325F4u);
    ctx->pc = 0x132630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132630u, 0x1325ECu, 0x1325F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1325F4u;
label_1325f4:
    // 0x1325f4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1325f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1325f8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1325f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1325fc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1325fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x132600: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x132600u;
    {
        const bool branch_taken_0x132600 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x132600) {
            ctx->pc = 0x132614u;
            goto label_132614;
        }
    }
    ctx->pc = 0x132608u;
    // 0x132608: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x132608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13260c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x13260Cu;
    SET_GPR_U32(ctx, 31, 0x132614u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x13260Cu, 0x132614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132614u;
label_132614:
    // 0x132614: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x132614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132618: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x132618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13261c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x13261cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x132620: 0x3e00008  jr          $ra
    ctx->pc = 0x132620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x132628u;
    // 0x132628: 0x0  nop
    ctx->pc = 0x132628u;
    // NOP
    // 0x13262c: 0x0  nop
    ctx->pc = 0x13262cu;
    // NOP
    ctx->pc = 0x132630u;
}

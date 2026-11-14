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

// Function: sub_00120070
// Address: 0x120070 - 0x1200f0
void sub_00120070_0x120070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00120070_0x120070");
#endif

    switch (ctx->pc) {
        case 0x1200a4u: goto label_1200a4;
        case 0x1200b4u: goto label_1200b4;
        case 0x1200d4u: goto label_1200d4;
        default: break;
    }

    ctx->pc = 0x120070u;

    // 0x120070: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x120070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x120074: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x120074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x120078: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x120078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x12007c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x12007cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x120080: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x120080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120084: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x120084u;
    {
        const bool branch_taken_0x120084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x120084) {
            ctx->pc = 0x1200D4u;
            goto label_1200d4;
        }
    }
    ctx->pc = 0x12008Cu;
    // 0x12008c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x12008cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120090: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x120090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120094: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x120094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x120098: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x120098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x12009c: 0xc048068  jal         func_1201A0
    ctx->pc = 0x12009Cu;
    SET_GPR_U32(ctx, 31, 0x1200A4u);
    ctx->pc = 0x1201A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1201A0u, 0x12009Cu, 0x1200A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1200A4u;
label_1200a4:
    // 0x1200a4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1200a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1200a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1200a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1200ac: 0xc04803c  jal         func_1200F0
    ctx->pc = 0x1200ACu;
    SET_GPR_U32(ctx, 31, 0x1200B4u);
    ctx->pc = 0x1200F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1200F0u, 0x1200ACu, 0x1200B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1200B4u;
label_1200b4:
    // 0x1200b4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1200b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1200b8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1200b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1200bc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1200bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1200c0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1200C0u;
    {
        const bool branch_taken_0x1200c0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1200c0) {
            ctx->pc = 0x1200D4u;
            goto label_1200d4;
        }
    }
    ctx->pc = 0x1200C8u;
    // 0x1200c8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1200c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1200cc: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1200CCu;
    SET_GPR_U32(ctx, 31, 0x1200D4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1200CCu, 0x1200D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1200D4u;
label_1200d4:
    // 0x1200d4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1200d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1200d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1200d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1200dc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1200dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1200e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1200E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1200E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1200E8u;
    // 0x1200e8: 0x0  nop
    ctx->pc = 0x1200e8u;
    // NOP
    // 0x1200ec: 0x0  nop
    ctx->pc = 0x1200ecu;
    // NOP
    ctx->pc = 0x1200f0u;
}

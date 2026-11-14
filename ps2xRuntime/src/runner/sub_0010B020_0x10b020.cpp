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

// Function: sub_0010B020
// Address: 0x10b020 - 0x10b0d0
void sub_0010B020_0x10b020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B020_0x10b020");
#endif

    switch (ctx->pc) {
        case 0x10b03cu: goto label_10b03c;
        case 0x10b054u: goto label_10b054;
        case 0x10b064u: goto label_10b064;
        case 0x10b074u: goto label_10b074;
        case 0x10b088u: goto label_10b088;
        case 0x10b098u: goto label_10b098;
        case 0x10b0b8u: goto label_10b0b8;
        default: break;
    }

    ctx->pc = 0x10b020u;

    // 0x10b020: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10b020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10b024: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10b024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10b028: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x10b028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x10b02c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x10b02cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x10b030: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x10b030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x10b034: 0xc042d08  jal         func_10B420
    ctx->pc = 0x10B034u;
    SET_GPR_U32(ctx, 31, 0x10B03Cu);
    ctx->pc = 0x10B420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B420u, 0x10B034u, 0x10B03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B03Cu;
label_10b03c:
    // 0x10b03c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10b03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b040: 0x27a40014  addiu       $a0, $sp, 0x14
    ctx->pc = 0x10b040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x10b044: 0x24450028  addiu       $a1, $v0, 0x28
    ctx->pc = 0x10b044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x10b048: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x10b048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10b04c: 0xc042c64  jal         func_10B190
    ctx->pc = 0x10B04Cu;
    SET_GPR_U32(ctx, 31, 0x10B054u);
    ctx->pc = 0x10B190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B190u, 0x10B04Cu, 0x10B054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B054u;
label_10b054:
    // 0x10b054: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x10b054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x10b058: 0x27a50014  addiu       $a1, $sp, 0x14
    ctx->pc = 0x10b058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x10b05c: 0xc042c58  jal         func_10B160
    ctx->pc = 0x10B05Cu;
    SET_GPR_U32(ctx, 31, 0x10B064u);
    ctx->pc = 0x10B160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B160u, 0x10B05Cu, 0x10B064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B064u;
label_10b064:
    // 0x10b064: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x10b064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x10b068: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10b068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b06c: 0xc042c48  jal         func_10B120
    ctx->pc = 0x10B06Cu;
    SET_GPR_U32(ctx, 31, 0x10B074u);
    ctx->pc = 0x10B120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B120u, 0x10B06Cu, 0x10B074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B074u;
label_10b074:
    // 0x10b074: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10b074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b078: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x10b078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x10b07c: 0x24450028  addiu       $a1, $v0, 0x28
    ctx->pc = 0x10b07cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x10b080: 0xc042b2c  jal         func_10ACB0
    ctx->pc = 0x10B080u;
    SET_GPR_U32(ctx, 31, 0x10B088u);
    ctx->pc = 0x10ACB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ACB0u, 0x10B080u, 0x10B088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B088u;
label_10b088:
    // 0x10b088: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x10b088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x10b08c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x10b08cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x10b090: 0xc0426a0  jal         func_109A80
    ctx->pc = 0x10B090u;
    SET_GPR_U32(ctx, 31, 0x10B098u);
    ctx->pc = 0x109A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109A80u, 0x10B090u, 0x10B098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B098u;
label_10b098:
    // 0x10b098: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10B098u;
    {
        const bool branch_taken_0x10b098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b098) {
            ctx->pc = 0x10B0ACu;
            goto label_10b0ac;
        }
    }
    ctx->pc = 0x10B0A0u;
    // 0x10b0a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10b0a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b0a4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x10B0A4u;
    {
        const bool branch_taken_0x10b0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b0a4) {
            ctx->pc = 0x10B0BCu;
            goto label_10b0bc;
        }
    }
    ctx->pc = 0x10B0ACu;
label_10b0ac:
    // 0x10b0ac: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x10b0acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x10b0b0: 0xc042c34  jal         func_10B0D0
    ctx->pc = 0x10B0B0u;
    SET_GPR_U32(ctx, 31, 0x10B0B8u);
    ctx->pc = 0x10B0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B0D0u, 0x10B0B0u, 0x10B0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B0B8u;
label_10b0b8:
    // 0x10b0b8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x10b0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_10b0bc:
    // 0x10b0bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10b0bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b0c0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x10b0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x10b0c4: 0x3e00008  jr          $ra
    ctx->pc = 0x10B0C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B0C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B0CCu;
    // 0x10b0cc: 0x0  nop
    ctx->pc = 0x10b0ccu;
    // NOP
    ctx->pc = 0x10b0d0u;
}

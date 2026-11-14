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

// Function: sub_0010A050
// Address: 0x10a050 - 0x10a0b0
void sub_0010A050_0x10a050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A050_0x10a050");
#endif

    switch (ctx->pc) {
        case 0x10a078u: goto label_10a078;
        case 0x10a08cu: goto label_10a08c;
        default: break;
    }

    ctx->pc = 0x10a050u;

    // 0x10a050: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10a050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10a054: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10a054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10a058: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10a058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10a05c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x10a05cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x10a060: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x10a060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x10a064: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10a064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a068: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10a068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a06c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10a06cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a070: 0xc0423f0  jal         func_108FC0
    ctx->pc = 0x10A070u;
    SET_GPR_U32(ctx, 31, 0x10A078u);
    ctx->pc = 0x108FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108FC0u, 0x10A070u, 0x10A078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A078u;
label_10a078:
    // 0x10a078: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10a078u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a07c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x10a07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x10a080: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x10a080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10a084: 0xc04282c  jal         func_10A0B0
    ctx->pc = 0x10A084u;
    SET_GPR_U32(ctx, 31, 0x10A08Cu);
    ctx->pc = 0x10A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A0B0u, 0x10A084u, 0x10A08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A08Cu;
label_10a08c:
    // 0x10a08c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10a08cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a090: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10a090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a094: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10a094u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a098: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x10a098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x10a09c: 0x3e00008  jr          $ra
    ctx->pc = 0x10A09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A09Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A0A4u;
    // 0x10a0a4: 0x0  nop
    ctx->pc = 0x10a0a4u;
    // NOP
    // 0x10a0a8: 0x0  nop
    ctx->pc = 0x10a0a8u;
    // NOP
    // 0x10a0ac: 0x0  nop
    ctx->pc = 0x10a0acu;
    // NOP
    ctx->pc = 0x10a0b0u;
}

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

// Function: sub_0023F200
// Address: 0x23f200 - 0x23f260
void sub_0023F200_0x23f200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F200_0x23f200");
#endif

    switch (ctx->pc) {
        case 0x23f228u: goto label_23f228;
        case 0x23f23cu: goto label_23f23c;
        default: break;
    }

    ctx->pc = 0x23f200u;

    // 0x23f200: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23f200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23f204: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23f204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23f208: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23f208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23f20c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x23f20cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x23f210: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x23f210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x23f214: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x23f214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23f218: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23f218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f21c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23f21cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f220: 0xc08f870  jal         func_23E1C0
    ctx->pc = 0x23F220u;
    SET_GPR_U32(ctx, 31, 0x23F228u);
    ctx->pc = 0x23E1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E1C0u, 0x23F220u, 0x23F228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F228u;
label_23f228:
    // 0x23f228: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23f228u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f22c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x23f22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x23f230: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x23f230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23f234: 0xc08fc98  jal         func_23F260
    ctx->pc = 0x23F234u;
    SET_GPR_U32(ctx, 31, 0x23F23Cu);
    ctx->pc = 0x23F260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F260u, 0x23F234u, 0x23F23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F23Cu;
label_23f23c:
    // 0x23f23c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23f23cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f240: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23f240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f244: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23f244u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f248: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x23f248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x23f24c: 0x3e00008  jr          $ra
    ctx->pc = 0x23F24Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F24Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F254u;
    // 0x23f254: 0x0  nop
    ctx->pc = 0x23f254u;
    // NOP
    // 0x23f258: 0x0  nop
    ctx->pc = 0x23f258u;
    // NOP
    // 0x23f25c: 0x0  nop
    ctx->pc = 0x23f25cu;
    // NOP
    ctx->pc = 0x23f260u;
}

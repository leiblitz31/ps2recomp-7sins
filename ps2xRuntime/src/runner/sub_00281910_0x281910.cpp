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

// Function: sub_00281910
// Address: 0x281910 - 0x281980
void sub_00281910_0x281910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281910_0x281910");
#endif

    switch (ctx->pc) {
        case 0x281930u: goto label_281930;
        case 0x281944u: goto label_281944;
        case 0x281958u: goto label_281958;
        default: break;
    }

    ctx->pc = 0x281910u;

    // 0x281910: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x281910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x281914: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x281914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x281918: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x281918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x28191c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x28191cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x281920: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x281920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x281924: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x281924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x281928: 0xc0a067c  jal         func_2819F0
    ctx->pc = 0x281928u;
    SET_GPR_U32(ctx, 31, 0x281930u);
    ctx->pc = 0x2819F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2819F0u, 0x281928u, 0x281930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281930u;
label_281930:
    // 0x281930: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x281930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x281934: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x281934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281938: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x281938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28193c: 0xc0a0660  jal         func_281980
    ctx->pc = 0x28193Cu;
    SET_GPR_U32(ctx, 31, 0x281944u);
    ctx->pc = 0x281980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281980u, 0x28193Cu, 0x281944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281944u;
label_281944:
    // 0x281944: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x281944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x281948: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x281948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28194c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28194cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281950: 0xc0a07a4  jal         func_281E90
    ctx->pc = 0x281950u;
    SET_GPR_U32(ctx, 31, 0x281958u);
    ctx->pc = 0x281E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281E90u, 0x281950u, 0x281958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281958u;
label_281958:
    // 0x281958: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x281958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28195c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x28195cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x281960: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x281960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x281964: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x281964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281968: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x281968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x28196c: 0x3e00008  jr          $ra
    ctx->pc = 0x28196Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28196Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281974u;
    // 0x281974: 0x0  nop
    ctx->pc = 0x281974u;
    // NOP
    // 0x281978: 0x0  nop
    ctx->pc = 0x281978u;
    // NOP
    // 0x28197c: 0x0  nop
    ctx->pc = 0x28197cu;
    // NOP
    ctx->pc = 0x281980u;
}

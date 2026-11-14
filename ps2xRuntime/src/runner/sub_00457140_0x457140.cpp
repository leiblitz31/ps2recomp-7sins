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

// Function: sub_00457140
// Address: 0x457140 - 0x4571b0
void sub_00457140_0x457140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00457140_0x457140");
#endif

    switch (ctx->pc) {
        case 0x45715cu: goto label_45715c;
        case 0x457184u: goto label_457184;
        default: break;
    }

    ctx->pc = 0x457140u;

    // 0x457140: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x457140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x457144: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x457144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x457148: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x457148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x45714c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x45714cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x457150: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x457150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x457154: 0xc115ca0  jal         func_457280
    ctx->pc = 0x457154u;
    SET_GPR_U32(ctx, 31, 0x45715Cu);
    ctx->pc = 0x457280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457280u, 0x457154u, 0x45715Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45715Cu;
label_45715c:
    // 0x45715c: 0x8f82bf38  lw          $v0, -0x40C8($gp)
    ctx->pc = 0x45715cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
    // 0x457160: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x457160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x457164: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x457164u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x457168: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x457168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x45716c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x45716Cu;
    {
        const bool branch_taken_0x45716c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45716c) {
            ctx->pc = 0x45718Cu;
            goto label_45718c;
        }
    }
    ctx->pc = 0x457174u;
    // 0x457174: 0x2784b0b4  addiu       $a0, $gp, -0x4F4C
    ctx->pc = 0x457174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946996));
    // 0x457178: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x457178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45717c: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x45717Cu;
    SET_GPR_U32(ctx, 31, 0x457184u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x45717Cu, 0x457184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x457184u;
label_457184:
    // 0x457184: 0xd  break       0
    ctx->pc = 0x457184u;
    runtime->handleBreak(rdram, ctx);
    // 0x457188: 0x0  nop
    ctx->pc = 0x457188u;
    // NOP
label_45718c:
    // 0x45718c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x45718cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x457190: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x457190u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x457194: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x457194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x457198: 0xaf82bf38  sw          $v0, -0x40C8($gp)
    ctx->pc = 0x457198u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950712), GPR_U32(ctx, 2));
    // 0x45719c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x45719cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4571a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4571a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4571a4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4571a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4571a8: 0x3e00008  jr          $ra
    ctx->pc = 0x4571A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4571A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4571B0u;
}

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

// Function: sub_0017B920
// Address: 0x17b920 - 0x17b9a0
void sub_0017B920_0x17b920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B920_0x17b920");
#endif

    switch (ctx->pc) {
        case 0x17b954u: goto label_17b954;
        case 0x17b964u: goto label_17b964;
        case 0x17b984u: goto label_17b984;
        default: break;
    }

    ctx->pc = 0x17b920u;

    // 0x17b920: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17b920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17b924: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17b924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17b928: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x17b928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x17b92c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x17b92cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x17b930: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17b930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b934: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x17B934u;
    {
        const bool branch_taken_0x17b934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b934) {
            ctx->pc = 0x17B984u;
            goto label_17b984;
        }
    }
    ctx->pc = 0x17B93Cu;
    // 0x17b93c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x17b93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b940: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17b940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b944: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x17b944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17b948: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x17b948u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x17b94c: 0xc05ee94  jal         func_17BA50
    ctx->pc = 0x17B94Cu;
    SET_GPR_U32(ctx, 31, 0x17B954u);
    ctx->pc = 0x17BA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BA50u, 0x17B94Cu, 0x17B954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B954u;
label_17b954:
    // 0x17b954: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x17b954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b958: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17b958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b95c: 0xc05ee68  jal         func_17B9A0
    ctx->pc = 0x17B95Cu;
    SET_GPR_U32(ctx, 31, 0x17B964u);
    ctx->pc = 0x17B9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B9A0u, 0x17B95Cu, 0x17B964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B964u;
label_17b964:
    // 0x17b964: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x17b964u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17b968: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x17b968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x17b96c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x17b96cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x17b970: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17B970u;
    {
        const bool branch_taken_0x17b970 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x17b970) {
            ctx->pc = 0x17B984u;
            goto label_17b984;
        }
    }
    ctx->pc = 0x17B978u;
    // 0x17b978: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x17b978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b97c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x17B97Cu;
    SET_GPR_U32(ctx, 31, 0x17B984u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x17B97Cu, 0x17B984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B984u;
label_17b984:
    // 0x17b984: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17b984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b988: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17b988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b98c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x17b98cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17b990: 0x3e00008  jr          $ra
    ctx->pc = 0x17B990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B998u;
    // 0x17b998: 0x0  nop
    ctx->pc = 0x17b998u;
    // NOP
    // 0x17b99c: 0x0  nop
    ctx->pc = 0x17b99cu;
    // NOP
    ctx->pc = 0x17b9a0u;
}

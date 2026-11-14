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

// Function: sub_0017B6A0
// Address: 0x17b6a0 - 0x17b720
void sub_0017B6A0_0x17b6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B6A0_0x17b6a0");
#endif

    switch (ctx->pc) {
        case 0x17b6d4u: goto label_17b6d4;
        case 0x17b6e4u: goto label_17b6e4;
        case 0x17b704u: goto label_17b704;
        default: break;
    }

    ctx->pc = 0x17b6a0u;

    // 0x17b6a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17b6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17b6a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17b6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17b6a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x17b6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x17b6ac: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x17b6acu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x17b6b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17b6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b6b4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x17B6B4u;
    {
        const bool branch_taken_0x17b6b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b6b4) {
            ctx->pc = 0x17B704u;
            goto label_17b704;
        }
    }
    ctx->pc = 0x17B6BCu;
    // 0x17b6bc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x17b6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b6c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17b6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b6c4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x17b6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17b6c8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x17b6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x17b6cc: 0xc05edf4  jal         func_17B7D0
    ctx->pc = 0x17B6CCu;
    SET_GPR_U32(ctx, 31, 0x17B6D4u);
    ctx->pc = 0x17B7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B7D0u, 0x17B6CCu, 0x17B6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B6D4u;
label_17b6d4:
    // 0x17b6d4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x17b6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b6d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17b6d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b6dc: 0xc05edc8  jal         func_17B720
    ctx->pc = 0x17B6DCu;
    SET_GPR_U32(ctx, 31, 0x17B6E4u);
    ctx->pc = 0x17B720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B720u, 0x17B6DCu, 0x17B6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B6E4u;
label_17b6e4:
    // 0x17b6e4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x17b6e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17b6e8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x17b6e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x17b6ec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x17b6ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x17b6f0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17B6F0u;
    {
        const bool branch_taken_0x17b6f0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x17b6f0) {
            ctx->pc = 0x17B704u;
            goto label_17b704;
        }
    }
    ctx->pc = 0x17B6F8u;
    // 0x17b6f8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x17b6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b6fc: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x17B6FCu;
    SET_GPR_U32(ctx, 31, 0x17B704u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x17B6FCu, 0x17B704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B704u;
label_17b704:
    // 0x17b704: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17b704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b708: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17b708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b70c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x17b70cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17b710: 0x3e00008  jr          $ra
    ctx->pc = 0x17B710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B718u;
    // 0x17b718: 0x0  nop
    ctx->pc = 0x17b718u;
    // NOP
    // 0x17b71c: 0x0  nop
    ctx->pc = 0x17b71cu;
    // NOP
    ctx->pc = 0x17b720u;
}

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

// Function: sub_002B6920
// Address: 0x2b6920 - 0x2b69a0
void sub_002B6920_0x2b6920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6920_0x2b6920");
#endif

    switch (ctx->pc) {
        case 0x2b6954u: goto label_2b6954;
        case 0x2b6964u: goto label_2b6964;
        case 0x2b6984u: goto label_2b6984;
        default: break;
    }

    ctx->pc = 0x2b6920u;

    // 0x2b6920: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b6920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b6924: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b6924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b6928: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2b6928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2b692c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2b692cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2b6930: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b6930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6934: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2B6934u;
    {
        const bool branch_taken_0x2b6934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6934) {
            ctx->pc = 0x2B6984u;
            goto label_2b6984;
        }
    }
    ctx->pc = 0x2B693Cu;
    // 0x2b693c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2b693cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6940: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b6940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6944: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2b6944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b6948: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2b6948u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2b694c: 0xc0ada94  jal         func_2B6A50
    ctx->pc = 0x2B694Cu;
    SET_GPR_U32(ctx, 31, 0x2B6954u);
    ctx->pc = 0x2B6A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6A50u, 0x2B694Cu, 0x2B6954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6954u;
label_2b6954:
    // 0x2b6954: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2b6954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6958: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b6958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b695c: 0xc0ada68  jal         func_2B69A0
    ctx->pc = 0x2B695Cu;
    SET_GPR_U32(ctx, 31, 0x2B6964u);
    ctx->pc = 0x2B69A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B69A0u, 0x2B695Cu, 0x2B6964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6964u;
label_2b6964:
    // 0x2b6964: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2b6964u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b6968: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2b6968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2b696c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2b696cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2b6970: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B6970u;
    {
        const bool branch_taken_0x2b6970 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2b6970) {
            ctx->pc = 0x2B6984u;
            goto label_2b6984;
        }
    }
    ctx->pc = 0x2B6978u;
    // 0x2b6978: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2b6978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b697c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2B697Cu;
    SET_GPR_U32(ctx, 31, 0x2B6984u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2B697Cu, 0x2B6984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6984u;
label_2b6984:
    // 0x2b6984: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b6984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6988: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b6988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b698c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2b698cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b6990: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6998u;
    // 0x2b6998: 0x0  nop
    ctx->pc = 0x2b6998u;
    // NOP
    // 0x2b699c: 0x0  nop
    ctx->pc = 0x2b699cu;
    // NOP
    ctx->pc = 0x2b69a0u;
}

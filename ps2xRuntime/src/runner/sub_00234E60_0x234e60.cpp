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

// Function: sub_00234E60
// Address: 0x234e60 - 0x234ee0
void sub_00234E60_0x234e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234E60_0x234e60");
#endif

    switch (ctx->pc) {
        case 0x234e94u: goto label_234e94;
        case 0x234ea4u: goto label_234ea4;
        case 0x234ec4u: goto label_234ec4;
        default: break;
    }

    ctx->pc = 0x234e60u;

    // 0x234e60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x234e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x234e64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x234e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x234e68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x234e68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x234e6c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x234e6cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x234e70: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x234e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234e74: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x234E74u;
    {
        const bool branch_taken_0x234e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x234e74) {
            ctx->pc = 0x234EC4u;
            goto label_234ec4;
        }
    }
    ctx->pc = 0x234E7Cu;
    // 0x234e7c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x234e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234e80: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x234e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234e84: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x234e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x234e88: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x234e88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x234e8c: 0xc0515f0  jal         func_1457C0
    ctx->pc = 0x234E8Cu;
    SET_GPR_U32(ctx, 31, 0x234E94u);
    ctx->pc = 0x1457C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1457C0u, 0x234E8Cu, 0x234E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234E94u;
label_234e94:
    // 0x234e94: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x234e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234e98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x234e98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234e9c: 0xc08d3b8  jal         func_234EE0
    ctx->pc = 0x234E9Cu;
    SET_GPR_U32(ctx, 31, 0x234EA4u);
    ctx->pc = 0x234EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234EE0u, 0x234E9Cu, 0x234EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234EA4u;
label_234ea4:
    // 0x234ea4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x234ea4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x234ea8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x234ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x234eac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x234eacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x234eb0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x234EB0u;
    {
        const bool branch_taken_0x234eb0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x234eb0) {
            ctx->pc = 0x234EC4u;
            goto label_234ec4;
        }
    }
    ctx->pc = 0x234EB8u;
    // 0x234eb8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x234eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234ebc: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x234EBCu;
    SET_GPR_U32(ctx, 31, 0x234EC4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x234EBCu, 0x234EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234EC4u;
label_234ec4:
    // 0x234ec4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x234ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234ec8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x234ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234ecc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x234eccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x234ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x234ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234ED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234ED8u;
    // 0x234ed8: 0x0  nop
    ctx->pc = 0x234ed8u;
    // NOP
    // 0x234edc: 0x0  nop
    ctx->pc = 0x234edcu;
    // NOP
    ctx->pc = 0x234ee0u;
}

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

// Function: sub_002687B0
// Address: 0x2687b0 - 0x268830
void sub_002687B0_0x2687b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002687B0_0x2687b0");
#endif

    switch (ctx->pc) {
        case 0x2687e4u: goto label_2687e4;
        case 0x2687f4u: goto label_2687f4;
        case 0x268814u: goto label_268814;
        default: break;
    }

    ctx->pc = 0x2687b0u;

    // 0x2687b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2687b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2687b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2687b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2687b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2687b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2687bc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2687bcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2687c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2687c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2687c4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2687C4u;
    {
        const bool branch_taken_0x2687c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2687c4) {
            ctx->pc = 0x268814u;
            goto label_268814;
        }
    }
    ctx->pc = 0x2687CCu;
    // 0x2687cc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2687ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2687d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2687d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2687d4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2687d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2687d8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2687d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2687dc: 0xc09a238  jal         func_2688E0
    ctx->pc = 0x2687DCu;
    SET_GPR_U32(ctx, 31, 0x2687E4u);
    ctx->pc = 0x2688E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2688E0u, 0x2687DCu, 0x2687E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2687E4u;
label_2687e4:
    // 0x2687e4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2687e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2687e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2687e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2687ec: 0xc09a20c  jal         func_268830
    ctx->pc = 0x2687ECu;
    SET_GPR_U32(ctx, 31, 0x2687F4u);
    ctx->pc = 0x268830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268830u, 0x2687ECu, 0x2687F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2687F4u;
label_2687f4:
    // 0x2687f4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2687f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2687f8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2687f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2687fc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2687fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x268800: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x268800u;
    {
        const bool branch_taken_0x268800 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x268800) {
            ctx->pc = 0x268814u;
            goto label_268814;
        }
    }
    ctx->pc = 0x268808u;
    // 0x268808: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x268808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26880c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x26880Cu;
    SET_GPR_U32(ctx, 31, 0x268814u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x26880Cu, 0x268814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268814u;
label_268814:
    // 0x268814: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x268814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x268818: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x268818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26881c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x26881cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x268820: 0x3e00008  jr          $ra
    ctx->pc = 0x268820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x268828u;
    // 0x268828: 0x0  nop
    ctx->pc = 0x268828u;
    // NOP
    // 0x26882c: 0x0  nop
    ctx->pc = 0x26882cu;
    // NOP
    ctx->pc = 0x268830u;
}

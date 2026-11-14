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

// Function: sub_002278D0
// Address: 0x2278d0 - 0x227940
void sub_002278D0_0x2278d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002278D0_0x2278d0");
#endif

    switch (ctx->pc) {
        case 0x2278f8u: goto label_2278f8;
        case 0x227908u: goto label_227908;
        case 0x227928u: goto label_227928;
        default: break;
    }

    ctx->pc = 0x2278d0u;

    // 0x2278d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2278d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2278d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2278d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2278d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2278d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2278dc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2278dcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2278e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2278e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2278e4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2278E4u;
    {
        const bool branch_taken_0x2278e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2278e4) {
            ctx->pc = 0x227928u;
            goto label_227928;
        }
    }
    ctx->pc = 0x2278ECu;
    // 0x2278ec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2278ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2278f0: 0xc089e6c  jal         func_2279B0
    ctx->pc = 0x2278F0u;
    SET_GPR_U32(ctx, 31, 0x2278F8u);
    ctx->pc = 0x2279B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2279B0u, 0x2278F0u, 0x2278F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2278F8u;
label_2278f8:
    // 0x2278f8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2278f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2278fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2278fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227900: 0xc089e50  jal         func_227940
    ctx->pc = 0x227900u;
    SET_GPR_U32(ctx, 31, 0x227908u);
    ctx->pc = 0x227940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227940u, 0x227900u, 0x227908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227908u;
label_227908:
    // 0x227908: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x227908u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22790c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x22790cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x227910: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x227910u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x227914: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x227914u;
    {
        const bool branch_taken_0x227914 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x227914) {
            ctx->pc = 0x227928u;
            goto label_227928;
        }
    }
    ctx->pc = 0x22791Cu;
    // 0x22791c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22791cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227920: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x227920u;
    SET_GPR_U32(ctx, 31, 0x227928u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x227920u, 0x227928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227928u;
label_227928:
    // 0x227928: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x227928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22792c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22792cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227930: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x227930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x227934: 0x3e00008  jr          $ra
    ctx->pc = 0x227934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22793Cu;
    // 0x22793c: 0x0  nop
    ctx->pc = 0x22793cu;
    // NOP
    ctx->pc = 0x227940u;
}
